# -----------------------------------------------------------------------------
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

message (VERBOSE "Processing 'tests/platforms/qemu-cortex-m3'...")

# The OBJECTS are compiled before the platform library, so they need to get the
# same compile options.
add_compile_common_private_options (micro-os-plus-utils-lists-objects)

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_SAMPLE_TEST)
  add_cross_test_executable (sample-test)
  target_link_cross_test_libraries (sample-test tests::sample)

  message (VERBOSE "A> sample-test")

  add_test (
    NAME "sample-test"
    COMMAND
      qemu-system-arm${extension} --machine mps2-an385 --cpu cortex-m3 --kernel
      sample-test.elf --nographic -d unimp,guest_errors --semihosting-config
      enable=on,target=native,arg=sample-test,arg=one,arg=two
  )
endif ()

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_UNIT_TEST)
  add_cross_test_executable (unit-test)
  target_link_cross_test_libraries (unit-test tests::unit)

  message (VERBOSE "A> unit-test")

  add_test (
    NAME "unit-test"
    COMMAND
      qemu-system-arm${extension} --machine mps2-an385 --cpu cortex-m3 --kernel
      unit-test.elf --nographic -d unimp,guest_errors --semihosting-config
      enable=on,target=native,arg=unit-test
    # --semihosting-config arg=--verbose
  )
endif ()

# -----------------------------------------------------------------------------
