# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ distribution.
# (https://github.com/micro-os-plus/)
# Copyright (c) 2022 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# # Preamble ##

# https://cmake.org/cmake/help/v3.20/
cmake_minimum_required(VERSION 3.20)

project(
  micro-os-plus-utils-lists-tests
  DESCRIPTION "utils-lists tests"
)

# Must be called from the top CMakeLists.txt.
enable_testing()

# -----------------------------------------------------------------------------

# Global definitions.
set(ENABLE_SAMPLE_TEST true)
set(ENABLE_UNIT_TEST true)

# -----------------------------------------------------------------------------

# Include the main CMake script, common to all projects.
include("cmake/tests-main.cmake")

# -----------------------------------------------------------------------------
