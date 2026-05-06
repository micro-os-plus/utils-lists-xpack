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

# Create the platform specific test executables.

# -----------------------------------------------------------------------------

message (VERBOSE "Processing 'tests/platforms/native'...")

include ("cmake/platform-library.cmake")

if (CMAKE_BUILD_TYPE STREQUAL "Debug" AND CMAKE_HOST_SYSTEM_NAME STREQUAL
                                          "Darwin"
)
  set (XPACK_ENABLE_COVERAGE true)
endif ()

# The OBJECTS are compiled before the platform library, so they need to get the
# same compile options.
add_compile_common_private_options (micro-os-plus-utils-lists-objects)

if (XPACK_ENABLE_COVERAGE)
  add_compile_coverage_private_options (micro-os-plus-utils-lists-objects)
endif ()

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_SAMPLE_TEST)
  add_native_test_executable (sample-test)
  target_link_native_test_libraries (sample-test test::sample)

  message (VERBOSE "A> sample-test")

  add_test (NAME "sample-test" COMMAND sample-test one two)
endif ()

# -----------------------------------------------------------------------------

if (XPACK_ENABLE_UNIT_TEST)
  add_native_test_executable (unit-test)
  target_link_native_test_libraries (unit-test test::unit)

  if (XPACK_ENABLE_COVERAGE)
    # Otherwise only the library cpp and its inline are shown.
    add_compile_coverage_private_options (unit-test)
    add_link_coverage_private_options (unit-test)
  endif ()

  message (VERBOSE "A> unit-test")

  add_test (NAME "unit-test" COMMAND unit-test)

  if (XPACK_ENABLE_COVERAGE)
    set_tests_properties (
      "unit-test" PROPERTIES ENVIRONMENT "LLVM_PROFILE_FILE=unit-test.profraw"
    )

    add_test (
      NAME "unit-test-coverage"
      COMMAND bash "${CMAKE_CURRENT_SOURCE_DIR}/../../scripts/show-coverage.sh"
              unit-test unit-test 
              # "../../../../include/micro-os-plus/utils/inlines/intrusive-list-inlines.h"
    )
    set_tests_properties ("unit-test-coverage" PROPERTIES DEPENDS "unit-test")
  endif ()

endif ()

# -----------------------------------------------------------------------------
