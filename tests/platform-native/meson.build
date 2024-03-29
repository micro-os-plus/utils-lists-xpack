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

message('Processing tests/platform-native...')

# -----------------------------------------------------------------------------

# Define the tests executables.
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

  _local_include_directories += [
    '../include',
  ]

  _local_sources += [
    '../src/' + name + '.cpp',
  ]

  _local_compile_c_args += platform_native_dependency_compile_c_args
  _local_compile_cpp_args += platform_native_dependency_compile_cpp_args

  _local_compile_c_args += micro_os_plus_micro_test_plus_dependency_compile_c_args
  _local_compile_cpp_args += micro_os_plus_micro_test_plus_dependency_compile_cpp_args

  _local_compile_c_args += micro_os_plus_utils_lists_dependency_compile_c_args
  _local_compile_cpp_args += micro_os_plus_utils_lists_dependency_compile_cpp_args

  _local_dependencies += [
    # Tested library.
    micro_os_plus_utils_lists_dependency,

    # Portable dependencies.
    micro_os_plus_diag_trace_dependency,
    micro_os_plus_micro_test_plus_dependency,

    # Platform specific dependencies.
    platform_native_dependency,
  ]

  # https://mesonbuild.com/Reference-manual.html#executable
  exe = executable(
    name,
    include_directories: include_directories(_local_include_directories),
    sources: files(_local_sources),
    c_args: _local_compile_definitions + _local_compile_args + _local_compile_c_args,
    cpp_args: _local_compile_definitions + _local_compile_args + _local_compile_cpp_args,
    dependencies: _local_dependencies,
    link_args: _local_link_args,
    link_with: _local_link_with,
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

  # Native tests do not need size, list, hex targets.

endforeach

# -----------------------------------------------------------------------------

# https://mesonbuild.com/Unit-tests.html#malloc_perturb_
xpack_environment = environment({'MALLOC_PERTURB_': '0'})

# -----------------------------------------------------------------------------

if enable_sample_test

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'sample-test',
    sample_test,
    args: [
      'one',
      'two'
    ],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------

if enable_unit_test

  # https://mesonbuild.com/Reference-manual_functions.html#test
  test(
    'unit-test',
    unit_test,
    args: [],
    env: xpack_environment
  )

endif

# -----------------------------------------------------------------------------
