# -----------------------------------------------------------------------------
# DO NOT EDIT! Automatically generated from template file:
# build-helper/templates/common/_micro-os-plus/tests/platforms/qemu-riscv-rv64imafdc/meson-liquid.build
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

message('Processing tests/platforms/qemu-riscv-rv64imafdc...')

# -----------------------------------------------------------------------------

# NOTE: Exceptions are disabled.

# -----------------------------------------------------------------------------

qemu = find_program('qemu-system-riscv64')
qemu_machine_args = [ '--machine', 'virt', '--cpu', 'rv64' ]
qemu_extra_args = [ '-smp', '1', '-bios', 'none', '--nographic', '-d', 'unimp,guest_errors' ]

# -----------------------------------------------------------------------------

# https://mesonbuild.com/Unit-tests.html#malloc_perturb_
xpack_environment = environment()
xpack_environment.set('MALLOC_PERTURB_', '0')

# -----------------------------------------------------------------------------

# Define the tests commands.

if (xpack_enable_sample_test)

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'sample-test',
    qemu,
    args: qemu_machine_args + 
      [ '--kernel', sample_test ] + 
      qemu_extra_args + 
      [ '--semihosting-config', 
      'enable=on,target=native,arg=sample-test,arg=one,arg=two' ],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------

if (xpack_enable_unit_test)

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'unit-test',
    qemu,
    args: qemu_machine_args + 
      [ '--kernel', unit_test ] + 
      qemu_extra_args + 
      [ '--semihosting-config', 
      'enable=on,target=native,arg=unit-test,arg=one,arg=two' ],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------
