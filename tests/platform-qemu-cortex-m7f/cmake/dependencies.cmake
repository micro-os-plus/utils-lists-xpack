# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus/)
# Copyright (c) 2022 Liviu Ionescu
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# This file adds the platform dependencies.

set(xpack_dependencies_folders
  # Project dependencies.
  "${CMAKE_SOURCE_DIR}/../xpacks/xpack-3rd-party-arm-cmsis-core"
  "${CMAKE_SOURCE_DIR}/../xpacks/micro-os-plus-architecture-cortexm"
  "${CMAKE_SOURCE_DIR}/../xpacks/micro-os-plus-devices-qemu-cortexm"
  "${CMAKE_SOURCE_DIR}/../xpacks/micro-os-plus-diag-trace"
  "${CMAKE_SOURCE_DIR}/../xpacks/micro-os-plus-micro-test-plus"
  "${CMAKE_SOURCE_DIR}/../xpacks/micro-os-plus-semihosting"

  # Build configuration dependencies.
  # None.
)

xpack_add_dependencies_subdirectories("${xpack_dependencies_folders}" "xpacks-bin")

# -----------------------------------------------------------------------------