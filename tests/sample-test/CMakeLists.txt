# -----------------------------------------------------------------------------
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
# `add_subdirectory("tests/sample-test")`
#
# The result is an interface library that can be added to the linker with:
#
# `target_link_libraries(your-target PUBLIC test::sample)`

# -----------------------------------------------------------------------------

message(VERBOSE "Processing 'tests/sample-test'...")

# -----------------------------------------------------------------------------
# The test library definitions.
add_library(test-sample-interface INTERFACE EXCLUDE_FROM_ALL)

target_include_directories(test-sample-interface INTERFACE # None.
)

target_sources(test-sample-interface INTERFACE src/main.cpp)

target_compile_definitions(test-sample-interface INTERFACE # None.
)

target_compile_options(test-sample-interface INTERFACE # None.
)

target_link_options(test-sample-interface INTERFACE # None.
)

target_link_libraries(test-sample-interface INTERFACE # None.
)

if(COMMAND xpack_display_target_lists)
  xpack_display_target_lists(test-sample-interface)
endif()

# -----------------------------------------------------------------------------
# Aliases.

# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library(test::sample ALIAS test-sample-interface)
message(VERBOSE "> test::sample -> test-sample-interface")

# -----------------------------------------------------------------------------
