# -----------------------------------------------------------------------------
# DO NOT EDIT! Automatically generated from sources/sample/xcdl-test.jsonc.
#
# This file is part of the µOS++ project (https://micro-os-plus.github.io/).
# Copyright (c) 2021-2026 Liviu Ionescu. All rights reserved.
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
# `add_subdirectory("sources/sample")`
#
# The result is an interface library that can be added to the linker with:
#
# `target_link_libraries(your-target PUBLIC tests-sample)`

# -----------------------------------------------------------------------------

# A simple test to exercise an object linked into multiple lists.
message (VERBOSE "Processing 'sources/sample'...")

# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.20/command/add_library.html?highlight=interface#interface-libraries
# Visibility keywords: INTERFACE passes properties up to targets that link
# against it.
add_library (tests-sample-interface INTERFACE EXCLUDE_FROM_ALL)

target_sources (tests-sample-interface INTERFACE "src/main.cpp")

target_link_libraries (
  tests-sample-interface INTERFACE "micro-os-plus::utils-lists-objects-library"
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (tests-sample-interface)
endif ()

# -----------------------------------------------------------------------------
# Aliases.

# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library (tests::sample ALIAS tests-sample-interface)
message (VERBOSE "> tests::sample -> tests-sample-interface")

# -----------------------------------------------------------------------------
