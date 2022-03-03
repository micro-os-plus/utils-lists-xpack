/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2021 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <micro-os-plus/platform.h>
#include <micro-os-plus/micro-test-plus.h>
#include <micro-os-plus/utils/lists.h>

#include <cassert>
#include <cstring>
#include <stdio.h>

// ----------------------------------------------------------------------------

using namespace micro_os_plus;

// ----------------------------------------------------------------------------

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif

// ----------------------------------------------------------------------------

void
test_case_double_list_links (micro_test_plus::session& t);

// ----------------------------------------------------------------------------

int
main (int argc, char* argv[])
{
  micro_test_plus::session t (argc, argv);

  t.start_suite ("utils_lists test");

  t.run_test_case (test_case_double_list_links, "Check static_double_list_links");

  return t.result ();
}

// ----------------------------------------------------------------------------

static utils::static_double_list_links slinks;

void
test_case_double_list_links (micro_test_plus::session& t)
{
  MTP_EXPECT_EQ(t, slinks.previous(), static_cast<utils::static_double_list_links*>(nullptr), "prev is null");

  // MTP_EXPECT_EQ(t, static_cast<void*>(slinks.previous()), nullptr, "prev is null");
  // MTP_EXPECT_EQ(t, static_cast<void*>(slinks.next()), nullptr, "next is null");

  MTP_EXPECT_TRUE(t, slinks.unlinked(), "unlinked");
}

// ----------------------------------------------------------------------------
