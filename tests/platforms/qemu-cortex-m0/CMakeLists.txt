# -----------------------------------------------------------------------------
# DO NOT EDIT! Automatically generated from template file:
# build-helper/templates/common/_micro-os-plus/tests/platforms/qemu-cortex-m0/CMakeLists-liquid.txt
#
# This file is part of the µOS++ project (https://micro-os-plus.github.io/).
# Copyright (c) 2022-2026 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can be
# obtained from https://opensource.org/licenses/mit.
#
# -----------------------------------------------------------------------------

# Create the platform specific test executables.

# -----------------------------------------------------------------------------

message (VERBOSE "Processing 'tests/platforms/qemu-cortex-m0'...")

# -----------------------------------------------------------------------------

# Currently QEMU does not support any M0 board. The mps2-an385 board has a
# Cortex-M3 CPU, but it is the closest to M0, and it is used for testing the M0
# code.
set (XPACK_QEMU_BINARY "qemu-system-arm")
set (XPACK_QEMU_MACHINE_ARGS --machine mps2-an385 --cpu cortex-m3)
set (XPACK_QEMU_EXTRA_ARGS --nographic -d unimp,guest_errors)

# The libraries are compiled before the platform library, so they need to get
# the same compile options.
add_compile_common_private_options (micro-os-plus-utils-lists-objects-library)

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_SAMPLE_TEST)
  add_cross_test_executable (sample-test)
  target_link_cross_test_libraries (sample-test tests::sample)

  xpack_display_target_lists (sample-test)
  message (VERBOSE "A> sample-test")

  add_qemu_test (NAME "sample-test" COMMAND sample-test one two)
endif ()

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_UNIT_TEST)
  add_cross_test_executable (unit-test)
  target_link_cross_test_libraries (unit-test tests::unit)

  xpack_display_target_lists (unit-test)
  message (VERBOSE "A> unit-test")

  add_qemu_test (NAME "unit-test" COMMAND unit-test one two)
endif ()

# -----------------------------------------------------------------------------
