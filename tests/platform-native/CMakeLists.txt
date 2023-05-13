# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus/)
# Copyright (c) 2022 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# This file creates the platform specific test executables.

message(VERBOSE "Processing 'tests/platform-native'...")

# -----------------------------------------------------------------------------

set(xpack_platform_compile_definition "PLATFORM_NATIVE")

# set(xpack_create_listing true)

# -----------------------------------------------------------------------------
# Define the platform library.

add_library(platform-native-interface INTERFACE EXCLUDE_FROM_ALL)

# -----------------------------------------------------------------------------

target_include_directories(platform-native-interface INTERFACE
  "include-platform"
)

target_sources(platform-native-interface INTERFACE
  # None.
)

target_compile_definitions(platform-native-interface INTERFACE
  "${xpack_platform_compile_definition}"
)

target_compile_options(platform-native-interface INTERFACE
  # None.
)

target_link_libraries(platform-native-interface INTERFACE
  micro-os-plus::architecture-synthetic-posix
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists(platform-native-interface)
endif()

# -----------------------------------------------------------------------------
# Aliases.

add_library(micro-os-plus::platform ALIAS platform-native-interface)
message(VERBOSE "> micro-os-plus::platform -> platform-native-interface")

# =============================================================================

function(add_test_executable name)

  add_executable(${name})

  # Include folders.
  # `platform-native/include` was added globally.
  target_include_directories(${name} PRIVATE
    "../include"
  )

  message(VERBOSE "A+ -I tests/include")

  set_target_properties(${name} PROPERTIES OUTPUT_NAME "${name}")

  # Application sources.
  target_sources(${name} PRIVATE
    "../src/${name}.cpp"
  )

  message(VERBOSE "A+ tests/src/${name}.cpp")

  target_compile_definitions(${name} PRIVATE
    # None.
  )

  # The compile options were defined globally.
  target_compile_options(${name} PRIVATE
    # None.
  )

  # https://cmake.org/cmake/help/v3.20/manual/cmake-generator-expressions.7.html
  target_link_options(${name} PRIVATE
    $<$<AND:$<C_COMPILER_ID:GNU>,$<NOT:$<PLATFORM_ID:Windows>>>:-static-libgcc>
    $<$<AND:$<C_COMPILER_ID:GNU>,$<NOT:$<PLATFORM_ID:Windows>>>:-static-libstdc++>
    $<$<PLATFORM_ID:Darwin>:-Wl,-dead_strip>
    $<$<PLATFORM_ID:Linux,Windows>:-Wl,--gc-sections>
    $<$<PLATFORM_ID:Linux,Windows>:-Wl,-Map,platform-bin/${name}-map.txt>
    # -v
  )

  target_link_libraries(${name} PRIVATE
    # Tested library.
    micro-os-plus::utils-lists

    # Portable dependencies.
    micro-os-plus::diag-trace

    # Platform specific dependencies.
    micro-os-plus::platform
  )

  if(xpack_create_listing)
    add_custom_command(TARGET ${name} POST_BUILD
      # --all-headers -> Invalid/Unsupported object file format
      COMMAND ${CMAKE_OBJDUMP} --source --demangle --line-numbers --wide "$<TARGET_FILE:${name}>" > ${name}-list.txt
      VERBATIM
    )
  endif()

  message(VERBOSE "A> ${name}")

endfunction()

# -----------------------------------------------------------------------------

if(WIN32)

  # Ask the compiler if the C++ DLL is present, and possibly adjust
  # the test path. Assumes the platform bit size (-m64).
  # A simpler alternate solution would be -static.
  if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(LIBCPP_NAME "libc++.dll")
  elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(LIBCPP_NAME "libstdc++-6.dll")
  endif()

  execute_process(
    COMMAND ${CMAKE_CXX_COMPILER} -print-file-name=${LIBCPP_NAME}
    OUTPUT_VARIABLE COMPILER_OUTPUT
    OUTPUT_STRIP_TRAILING_WHITESPACE
  )
  # message(VERBOSE ${COMPILER_OUTPUT})

  # If not available, the compiler returns the library name.
  if (NOT "${COMPILER_OUTPUT}" STREQUAL "${LIBCPP_NAME}")
    string(REPLACE "${LIBCPP_NAME}" "" COMPILER_LIBS_PATH ${COMPILER_OUTPUT})
    message(VERBOSE "${LIBCPP_NAME} path: ${COMPILER_LIBS_PATH}")
  endif()

endif()

if (ENABLE_SAMPLE_TEST)

  add_test_executable(sample-test)

  add_test(
    NAME "sample-test"
    COMMAND sample-test one two
  )

  if(COMPILER_LIBS_PATH)
    set_property(
      TEST "sample-test"
      PROPERTY ENVIRONMENT_MODIFICATION "PATH=path_list_append:${COMPILER_LIBS_PATH}"
    )
  endif()

endif()

# -----------------------------------------------------------------------------

if (ENABLE_UNIT_TEST)

  add_test_executable(unit-test)

  target_link_libraries(unit-test PRIVATE
    micro-os-plus::micro-test-plus
  )

  add_test(
    NAME "unit-test"
    COMMAND unit-test # --verbose
  )

  add_custom_command(
    TARGET "unit-test" POST_BUILD
    COMMAND ${CMAKE_OBJDUMP} -h "$<TARGET_FILE:unit-test>"
    VERBATIM
  )

  if(COMPILER_LIBS_PATH)
    set_property(
      TEST "unit-test"
      PROPERTY ENVIRONMENT_MODIFICATION "PATH=path_list_append:${COMPILER_LIBS_PATH}"
    )
  endif()

endif()

# -----------------------------------------------------------------------------
