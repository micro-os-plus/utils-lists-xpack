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

project (
  micro-os-plus-utils-lists
  DESCRIPTION "µOS++ utils-lists"
  LANGUAGES CXX
)

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

target_compile_definitions (micro-os-plus-utils-lists-interface INTERFACE)

target_compile_options (micro-os-plus-utils-lists-interface INTERFACE)

target_link_libraries (
  micro-os-plus-utils-lists-interface
  INTERFACE $<$<CONFIG:Debug>:micro-os-plus::diag-trace>
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
add_library (micro-os-plus-utils-lists-objects OBJECT EXCLUDE_FROM_ALL)

get_property (
  micro-os-plus-utils-lists-includes
  TARGET micro-os-plus-utils-lists-interface
  PROPERTY INTERFACE_INCLUDE_DIRECTORIES
)
target_include_directories (
  micro-os-plus-utils-lists-objects
  # Re-export the interface include directories so that consumers can find the
  # headers.
  PUBLIC ${micro-os-plus-utils-lists-includes}
)

get_property (
  micro-os-plus-utils-lists-sources
  TARGET micro-os-plus-utils-lists-interface
  PROPERTY INTERFACE_SOURCES
)
target_sources (
  micro-os-plus-utils-lists-objects
  PRIVATE ${micro-os-plus-utils-lists-sources}
)

# The compile options and definitions are propagated from the interface library
# via get_property, to avoid the OBJECT library inheriting diag-trace's
# INTERFACE_SOURCES (which would cause duplicate symbol errors at link time when
# consumers also compile diag-trace).
get_property (
  micro-os-plus-utils-lists-compile-definitions
  TARGET micro-os-plus-utils-lists-interface
  PROPERTY INTERFACE_COMPILE_DEFINITIONS
)
target_compile_definitions (
  micro-os-plus-utils-lists-objects
  PRIVATE ${micro-os-plus-utils-lists-compile-definitions}
)

get_property (
  micro-os-plus-utils-lists-compile-options
  TARGET micro-os-plus-utils-lists-interface
  PROPERTY INTERFACE_COMPILE_OPTIONS
)
target_compile_options (
  micro-os-plus-utils-lists-objects
  PRIVATE ${micro-os-plus-utils-lists-compile-options}
)

# Add the diag-trace include path in Debug without linking the diag-trace
# target: linking it would add trace.cpp as an INTERFACE_SOURCE and compile it
# into the OBJECT library, causing duplicate symbols at link time.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  get_property (
    micro-os-plus-diag-trace-includes
    TARGET micro-os-plus::diag-trace
    PROPERTY INTERFACE_INCLUDE_DIRECTORIES
  )
  target_include_directories (
    micro-os-plus-utils-lists-objects
    PRIVATE ${micro-os-plus-diag-trace-includes}
  )
endif ()

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
  micro-os-plus::utils-lists-objects ALIAS micro-os-plus-utils-lists-objects
)
message (
  VERBOSE
  "> micro-os-plus::utils-lists-objects -> micro-os-plus-utils-lists-objects"
)

# -----------------------------------------------------------------------------
