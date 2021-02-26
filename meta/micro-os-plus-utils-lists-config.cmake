#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus)
# Copyright (c) 2021 Liviu Ionescu
#
# This Source Code Form is subject to the terms of the MIT License.
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.18/
# https://cmake.org/cmake/help/v3.18/manual/cmake-packages.7.html#package-configuration-file

if(micro-os-plus-utils-lists-included)
  return()
endif()

set(micro-os-plus-utils-lists-included TRUE)

message(STATUS "Including micro-os-plus-utils-lists...")

# -----------------------------------------------------------------------------
# Dependencies.

find_package(micro-os-plus-diag-trace REQUIRED)

# -----------------------------------------------------------------------------
# The current folder.

get_filename_component(xpack_current_folder ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)

# -----------------------------------------------------------------------------

if(NOT TARGET micro-os-plus-utils-lists-static)

  add_library(micro-os-plus-utils-lists-static STATIC EXCLUDE_FROM_ALL)

  # ---------------------------------------------------------------------------

  target_sources(
    micro-os-plus-utils-lists-static

    PRIVATE
      ${xpack_current_folder}/src/lists.cpp
  )

  target_include_directories(
    micro-os-plus-utils-lists-static

    PUBLIC
      ${xpack_current_folder}/include
  )

  target_link_libraries(
    micro-os-plus-utils-lists-static
    
    PUBLIC
      micro-os-plus::diag-trace-static
  )

  # ---------------------------------------------------------------------------
  # Aliases.

  add_library(micro-os-plus::utils-lists-static ALIAS micro-os-plus-utils-lists-static)
  message(STATUS "micro-os-plus::utils-lists-static")

endif()

# -----------------------------------------------------------------------------