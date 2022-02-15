#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus)
# Copyright (c) 2021 Liviu Ionescu
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

# For native tests, a `micro-os-plus::platform` would be empty and it
# is not created.

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
    $<$<PLATFORM_ID:Darwin>:-Wl,-dead_strip>
    $<$<PLATFORM_ID:Linux,Windows>:-Wl,--gc-sections>
    $<$<PLATFORM_ID:Linux,Windows>:-Wl,-Map,platform-bin/${name}-map.txt>
    # -v
  )

  target_link_libraries(${name} PRIVATE
    # Tested library.
    micro-os-plus::utils-lists

    micro-os-plus::diag-trace
  )

  message(VERBOSE "A> ${name}")

endfunction()

# -----------------------------------------------------------------------------

add_test_executable(sample-test)

add_test(
  NAME "sample-test"
  COMMAND sample-test
)

# -----------------------------------------------------------------------------

add_test_executable(unit-test)

target_link_libraries(unit-test PRIVATE
  micro-os-plus::micro-test-plus
)

add_test(
  NAME "unit-test"
  COMMAND unit-test
)

# -----------------------------------------------------------------------------
