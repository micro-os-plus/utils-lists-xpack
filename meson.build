# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus/)
# Copyright (c) 2021 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# This file is intended to be consumed by applications with:
#
# `subdir('xpacks/@micro-os-plus/utils-lists')`
#
# The result is a dependency that can be referred as:
#
# `dependencies: [micro_os_plus_utils_lists_dependency],`

# Note: the meson configuration is provided only as a proof of concept,
# for production it might need some refinements.

# -----------------------------------------------------------------------------

message('Processing xPack @micro-os-plus/utils-lists...')

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
  'include',
]

_local_sources += [
  'src/lists.cpp',
]

# https://mesonbuild.com/Reference-manual.html#declare_dependency
micro_os_plus_utils_lists_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)
# meson dependencies cannot differentiate c/cpp args; pass them separately.
micro_os_plus_utils_lists_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_utils_lists_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_utils_lists_dependency')

# -----------------------------------------------------------------------------
