# -----------------------------------------------------------------------------
# DO NOT EDIT! Automatically generated from xcdl-package.jsonc.
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

# This file is intended to be consumed by applications with:
#
# `add_subdirectory("xpacks/@micro-os-plus/utils-lists")`
#
# The result is an interface library that can be added to the linker with:
#
# `target_link_libraries(your-target PUBLIC micro-os-plus::utils-lists)`

# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.20/
cmake_minimum_required (VERSION 3.20)

# µOS++ C++ Intrusive Lists.
project (
  micro-os-plus-utils-lists
  DESCRIPTION "Intrusive Lists"
  LANGUAGES CXX
)

# To access the optional functions, include the
# `cmake/micro-os-plus-build-helper.cmake` file from the
# `@micro-os-plus/build-helper` package.

if (COMMAND xpack_get_package_name_and_version)
  xpack_get_package_name_and_version (
    "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
  )
  message (VERBOSE
           "Processing xPack ${PACKAGE_JSON_NAME}@${PACKAGE_JSON_VERSION}..."
  )
endif ()

# -----------------------------------------------------------------------------

# The interface library is the main target of this package, which consumers
# (like embedded applications) link against. It defines the public API and
# properties of the library; sources are propagated to and compiled by each
# consumer.

# https://cmake.org/cmake/help/v3.20/command/add_library.html?highlight=interface#interface-libraries
# Visibility keywords: PRIVATE applies to the target itself; INTERFACE passes
# properties up to targets that link against it; PUBLIC does both.
add_library (micro-os-plus-utils-lists-interface INTERFACE EXCLUDE_FROM_ALL)

target_include_directories (
  micro-os-plus-utils-lists-interface INTERFACE "include"
)

target_sources (
  micro-os-plus-utils-lists-interface INTERFACE "src/doubly-list-links.cpp"
)

target_link_libraries (
  micro-os-plus-utils-lists-interface INTERFACE "micro-os-plus::diag-trace"
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (micro-os-plus-utils-lists-interface)
endif ()

# Alias.
# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library (
  micro-os-plus::utils-lists ALIAS micro-os-plus-utils-lists-interface
)
message (VERBOSE
         "> micro-os-plus::utils-lists -> micro-os-plus-utils-lists-interface"
)

# -----------------------------------------------------------------------------

get_property (
  micro-os-plus-diag-trace-includes
  TARGET micro-os-plus::diag-trace
  PROPERTY INTERFACE_INCLUDE_DIRECTORIES
)

# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.20/command/add_library.html?highlight=interface#object-libraries
# Optional OBJECT library: compiles the library sources once and shares the
# resulting object files across all test executables, rather than recompiling
# them per consumer.
#
# Include directories are managed explicitly instead of using PRIVATE linkage to
# the interface library. PRIVATE linkage would cause dependency sources to be
# compiled into this OBJECT library via transitive propagation, which conflicts
# with the separate dependency compilation in each executable. Consumers of this
# OBJECT library are expected to link separately to all dependencies and to the
# platform-specific library.
add_library (micro-os-plus-utils-lists-objects-library OBJECT)

# Use PUBLIC so that the include directories are available both for the OBJECT
# library's own sources and for consumers of the library.
target_include_directories (
  micro-os-plus-utils-lists-objects-library PUBLIC "include"
)

# Use PRIVATE to avoid propagating the sources to consumers of the OBJECT
# library, which would cause duplicate symbol errors at link time.
target_sources (
  micro-os-plus-utils-lists-objects-library PRIVATE "src/doubly-list-links.cpp"
)

# Propagate the compiled object files to consumers via INTERFACE_SOURCES so that
# CMake includes them in the final link even when this OBJECT library is
# referenced only transitively through an INTERFACE library chain. Without this,
# CMake does not automatically inject $<TARGET_OBJECTS:...> for indirect OBJECT
# library dependencies reached via INTERFACE libraries.
target_sources (
  micro-os-plus-utils-lists-objects-library
  INTERFACE "$<TARGET_OBJECTS:micro-os-plus-utils-lists-objects-library>"
)

# Add the dependency include paths without linking the code; linking it would
# add dependency sources as INTERFACE_SOURCES and compile them into the OBJECT
# library, causing duplicate symbols at link time.
target_include_directories (
  micro-os-plus-utils-lists-objects-library
  PRIVATE ${micro-os-plus-diag-trace-includes}
)

# Use INTERFACE (not PUBLIC) to propagate the dependency to consumers without
# pulling its INTERFACE_SOURCES into the OBJECT library compilation; the include
# paths above already provide the headers needed to compile this library's own
# sources.
target_link_libraries (
  micro-os-plus-utils-lists-objects-library
  INTERFACE "micro-os-plus::diag-trace"
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (micro-os-plus-utils-lists-objects-library)
endif ()

# Alias.
# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library (
  micro-os-plus::utils-lists-objects-library ALIAS
  micro-os-plus-utils-lists-objects-library
)
message (
  VERBOSE
  "> micro-os-plus::utils-lists-objects-library -> micro-os-plus-utils-lists-objects-library"
)

# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.20/command/add_library.html?highlight=interface#normal-libraries
# Optional STATIC library: compiles the library sources into an archive that is
# linked into each consumer executable, rather than sharing object files.
#
# Include directories are managed explicitly instead of using PRIVATE linkage to
# the interface library. PRIVATE linkage would cause dependency sources to be
# compiled into this STATIC library via transitive propagation, which conflicts
# with the separate dependency compilation in each executable. Consumers of this
# STATIC library are expected to link separately to all dependencies and to the
# platform-specific library.
add_library (micro-os-plus-utils-lists-static-library STATIC)

set_target_properties (
  micro-os-plus-utils-lists-static-library PROPERTIES OUTPUT_NAME utils-lists
)

# Use PUBLIC so that the include directories are available both for the STATIC
# library's own sources and for consumers of the library.
target_include_directories (
  micro-os-plus-utils-lists-static-library PUBLIC "include"
)

# Use PRIVATE to avoid propagating the sources to consumers of the STATIC
# library, which would cause duplicate symbol errors at link time.
target_sources (
  micro-os-plus-utils-lists-static-library PRIVATE "src/doubly-list-links.cpp"
)

# Add the dependency include paths without linking the dependency target:
# linking it would add dependency sources as INTERFACE_SOURCES and compile them
# into the STATIC library, causing duplicate symbols at link time.
target_include_directories (
  micro-os-plus-utils-lists-static-library
  PRIVATE ${micro-os-plus-diag-trace-includes}
)

# Use INTERFACE (not PUBLIC) to propagate the dependency to consumers without
# pulling its INTERFACE_SOURCES into the STATIC library compilation; the include
# paths above already provide the headers needed to compile this library's own
# sources.
target_link_libraries (
  micro-os-plus-utils-lists-static-library
  INTERFACE "micro-os-plus::diag-trace"
)

if (COMMAND xpack_display_target_lists)
  xpack_display_target_lists (micro-os-plus-utils-lists-static-library)
endif ()

# Alias.
# https://cmake.org/cmake/help/v3.20/command/add_library.html#alias-libraries
add_library (
  micro-os-plus::utils-lists-static-library ALIAS
  micro-os-plus-utils-lists-static-library
)
message (
  VERBOSE
  "> micro-os-plus::utils-lists-static-library -> micro-os-plus-utils-lists-static-library"
)

# -----------------------------------------------------------------------------
