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

# Create the platform specific test executables.

# -----------------------------------------------------------------------------

message('Processing tests/platform-qemu-riscv-rv32imac...')

# -----------------------------------------------------------------------------

# Enable them only when needed.
xpack_create_listing = false
xpack_create_hex = false

# -----------------------------------------------------------------------------

# Get the command names from the toolchain file.
size = find_program('size')
objdump = find_program('objdump')
objcopy = find_program('objcopy')

# -----------------------------------------------------------------------------

test_names = [ 'sample-test', 'unit-test'  ]

foreach name : test_names

  _local_compile_args = [] # Common C/C++ args.
  _local_compile_c_args = []
  _local_compile_cpp_args = []
  _local_include_directories = []
  _local_sources = []
  _local_compile_definitions = []
  _local_dependencies = []
  _local_link_args = []
  _local_link_with = []

  # ---------------------------------------------------------------------------

  _local_include_directories += [
    '../include',
  ]

  _local_sources += [
    '../src/' + name + '.cpp',
  ]

  _local_compile_c_args += platform_qemu_riscv_rv32imac_dependency_compile_c_args
  _local_compile_cpp_args += platform_qemu_riscv_rv32imac_dependency_compile_cpp_args

  _local_compile_c_args += micro_os_plus_utils_lists_dependency_compile_c_args
  _local_compile_cpp_args += micro_os_plus_utils_lists_dependency_compile_cpp_args

  _local_link_args += [
    '-Wl,-Map,'+ name + '-map.txt',
    # '-v',
  ]

  _local_dependencies += [
    # Tested library.
    micro_os_plus_utils_lists_dependency,

    # Portable dependencies.
    micro_os_plus_diag_trace_dependency,
  ]

  if name == 'unit-test'
    _local_compile_c_args += micro_os_plus_micro_test_plus_dependency_compile_c_args
    _local_compile_cpp_args += micro_os_plus_micro_test_plus_dependency_compile_cpp_args

    _local_dependencies += [
      micro_os_plus_micro_test_plus_dependency,
    ]
  endif

  _local_dependencies += [
    # Platform specific dependencies.
    platform_qemu_riscv_rv32imac_dependency, # bring device & architecture too

    micro_os_plus_semihosting_dependency,
    micro_os_plus_startup_dependency,
  ]

  # https://mesonbuild.com/Reference-manual.html#executable
  exe = executable(
    name,
    include_directories: include_directories(_local_include_directories),
    sources: files(_local_sources),
    c_args: _local_compile_args + _local_compile_c_args + _local_compile_definitions,
    cpp_args: _local_compile_args + _local_compile_cpp_args + _local_compile_definitions,
    dependencies: _local_dependencies,
    link_args: _local_link_args,
    link_with: _local_link_with,
    name_suffix: 'elf',
  )

  foreach xn : _local_include_directories
    message('A+ -I ' + xn)
  endforeach
  # Note: depenedencies compile_args not shown.
  foreach xn : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args + _local_link_args
    message('A+ ' + xn)
  endforeach
  message('A> ' + name)

  # Leave the result in a variable with the test name.
  set_variable(name.underscorify(), exe)

  # https://mesonbuild.com/Reference-manual_functions.html#custom_target
  custom_target(
    name + '-size',

    input: exe,
    output: name + '.size',
    command: [
      size,
      '--format=berkeley',
      '@INPUT@'
    ],
    build_always_stale: true,
    build_by_default: true,
  )

  # --source --all-headers --demangle --line-numbers --wide "xxx.elf"
  custom_target(
    name + '-list',

    input: exe,
    output: name + '-list.txt',
    command: [
      objdump,
      '--source',
      '--all-headers',
      '--demangle',
      '--line-numbers',
      '--wide',
      '@INPUT@'
    ],
    build_always_stale: true,
    build_by_default: xpack_create_listing,
    capture: true,
  )

  # -O ihex "xxx.elf"
  custom_target(
    name + '-hex',

    input: exe,
    output: name + '.hex',
    command: [
      objcopy,
      '-O',
      'ihex',
      '@INPUT@',
      '@OUTPUT@',
    ],
    build_always_stale: true,
    build_by_default: xpack_create_hex,
  )

endforeach

# -----------------------------------------------------------------------------

qemu = find_program('qemu-system-riscv32')

# https://mesonbuild.com/Unit-tests.html#malloc_perturb_
xpack_environment = environment()
xpack_environment.set('MALLOC_PERTURB_', '0')

# -----------------------------------------------------------------------------

if enable_sample_test

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'sample-test',
    qemu,
    args: [
      '--machine', 'virt',
      '--cpu', 'rv32',
      '--kernel', sample_test,
      '--nographic',
      '-smp', '1',
      '-bios', 'none',
      '-d', 'unimp,guest_errors',
      '--semihosting-config', 'enable=on,target=native,arg=sample-test,arg=one,arg=two',
    ],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------

if enable_unit_test

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'unit-test',
    qemu,
    args: [
      '--machine', 'virt',
      '--cpu', 'rv32',
      '--kernel', unit_test,
      '--nographic',
      '-smp', '1',
      '-bios', 'none',
      '-d', 'unimp,guest_errors',
      '--semihosting-config', 'enable=on,target=native,arg=unit-test',
    ],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------
