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

# This file is intended to be consumed with:
#
# `subdir('tests/sample-test')`
#
# The result is a library and a dependency that can be referred as:
#
# `dependencies: [micro_os_plus_micro_test_plus_dependency],`

# Note: the meson configuration is provided only as a proof of concept,
# for production it might need some refinements.

# -----------------------------------------------------------------------------

message('Processing tests/sample-test...')

# -----------------------------------------------------------------------------

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
  # None.
]

_local_sources += [
  'src/main.cpp'
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
test_sample_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)
# meson dependencies cannot differentiate c/cpp args; pass them separately.
test_sample_dependency_compile_c_args = _local_compile_c_args
test_sample_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> test_sample_dependency')

# -----------------------------------------------------------------------------
