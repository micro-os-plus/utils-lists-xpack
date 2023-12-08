# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ distribution.
# (https://github.com/micro-os-plus/)
# Copyright (c) 2022 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# This file defines an interface library with the common compile & link
# options that apply to all platforms.
# The library must be linked to the platform.

# -----------------------------------------------------------------------------

message(VERBOSE "Including tests/cmake/common-options.cmake...")

# -----------------------------------------------------------------------------

# A little interface library without source files or headers.
add_library(micro-os-plus-common-options-interface INTERFACE EXCLUDE_FROM_ALL)

# https://cmake.org/cmake/help/v3.20/command/add_compile_definitions.html
target_compile_definitions(micro-os-plus-common-options-interface INTERFACE

  # NDEBUG is provided by the toolchain definitions on release.

  # TODO: remove DEBUG
  $<$<CONFIG:Debug>:DEBUG>
  $<$<CONFIG:Debug>:MICRO_OS_PLUS_DEBUG>
  $<$<CONFIG:Debug>:MICRO_OS_PLUS_TRACE>
  MICRO_OS_PLUS_INCLUDE_CONFIG_H
)

set(global_common_options

  -fmessage-length=0
  -fsigned-char

  # These are used in conjunction with linker `--gc-sections`.
  -ffunction-sections
  -fdata-sections

  -fdiagnostics-color=always

  # No need, the toolchain does it.
  # $<$<CONFIG:Debug>:${DEBUG_OPTION}>
)

# A list of all imaginable warnings.
# Targets may add options to disable some of them.
xpack_set_all_compiler_warnings(all_warnings)

target_compile_options(micro-os-plus-common-options-interface INTERFACE
  ${global_common_options}
  ${all_warnings}
)

target_include_directories(micro-os-plus-common-options-interface INTERFACE

  # None.
)

# When `-flto` is used, the compile options must be passed to the linker too.
target_link_options(micro-os-plus-common-options-interface INTERFACE
  ${global_common_options}
)

if(COMMAND xpack_display_target_lists)
  xpack_display_target_lists(micro-os-plus-common-options-interface)
endif()

# -----------------------------------------------------------------------------

# Aliases.
# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library(micro-os-plus::common-options ALIAS micro-os-plus-common-options-interface)
message(VERBOSE "> micro-os-plus::common-options -> micro-os-plus-common-options-interface")

# -----------------------------------------------------------------------------
