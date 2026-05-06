# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ project (https://micro-os-plus.github.com/).
# Copyright (c) 2021-2026 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can be
# obtained from https://opensource.org/licenses/mit.
#
# -----------------------------------------------------------------------------

# This file is intended to be consumed by applications with:
#
# `add_subdirectory("xpacks/@micro-os-plus/utils-lists")`
#
# The result is an interface library that can be added to the linker with:
#
# `target_link_libraries(your-target PUBLIC micro-os-plus::utils-lists)`

# -----------------------------------------------------------------------------
# # Preamble ##

# https://cmake.org/cmake/help/v3.20/
cmake_minimum_required (VERSION 3.20)

project (micro-os-plus-utils-lists DESCRIPTION "µOS++ utils-lists")

if (COMMAND xpack_get_package_name_and_version)
  xpack_get_package_name_and_version (
    "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
  )
  message (VERBOSE
           "Processing xPack ${PACKAGE_JSON_NAME}@${PACKAGE_JSON_VERSION}..."
  )
endif ()

# -----------------------------------------------------------------------------
# # The project library definitions ##
add_library (micro-os-plus-utils-lists-interface INTERFACE EXCLUDE_FROM_ALL)

# -----------------------------------------------------------------------------
# Target settings.
target_include_directories (
  micro-os-plus-utils-lists-interface INTERFACE "include"
)

target_sources (
  micro-os-plus-utils-lists-interface INTERFACE "src/doubly-list-links.cpp"
)

target_compile_definitions (
  micro-os-plus-utils-lists-interface INTERFACE # None.
)

target_compile_options (micro-os-plus-utils-lists-interface INTERFACE # None.
)

target_link_libraries (micro-os-plus-utils-lists-interface INTERFACE # None.
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (micro-os-plus-utils-lists-interface)
endif ()

# -----------------------------------------------------------------------------

# Optional OBJECT library: sources are compiled once rather than per consumer.
# Inherits include directories, compile definitions, and compiler options from
# the interface library via PRIVATE linkage, which avoids propagating the
# interface library's INTERFACE sources to consumers of the object library. The
# include directories are re-exported explicitly so that consumers can find the
# headers.
add_library (micro-os-plus-utils-lists-objects OBJECT)

get_target_property (
  micro-os-plus-utils-lists-includes
  micro-os-plus-utils-lists-interface INTERFACE_INCLUDE_DIRECTORIES
)
target_include_directories (
  micro-os-plus-utils-lists-objects
  INTERFACE ${micro-os-plus-utils-lists-includes}
)

get_target_property (
  micro-os-plus-utils-lists-sources micro-os-plus-utils-lists-interface
  INTERFACE_SOURCES
)
target_sources (
  micro-os-plus-utils-lists-objects
  PRIVATE ${micro-os-plus-utils-lists-sources}
)

target_link_libraries (
  micro-os-plus-utils-lists-objects
  PRIVATE micro-os-plus-utils-lists-interface
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (micro-os-plus-utils-lists-objects)
endif ()

# -----------------------------------------------------------------------------
# Aliases.

# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library (
  micro-os-plus::utils-lists ALIAS micro-os-plus-utils-lists-interface
)
message (VERBOSE
         "> micro-os-plus::utils-lists -> micro-os-plus-utils-lists-interface"
)

add_library (
  micro-os-plus::utils-lists-objects ALIAS
  micro-os-plus-utils-lists-objects
)
message (
  VERBOSE
  "> micro-os-plus::utils-lists-objects -> micro-os-plus-utils-lists-objects"
)

# -----------------------------------------------------------------------------
