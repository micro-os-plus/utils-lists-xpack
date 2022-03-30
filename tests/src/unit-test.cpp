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

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#pragma clang diagnostic ignored "-Wexit-time-destructors"
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

// ----------------------------------------------------------------------------

static utils::static_double_list_links slinks;

int
main (int argc, char* argv[])
{
  using namespace micro_os_plus::micro_test_plus;

  initialize (argc, argv, "utils-lists");

  test_case ("Check static_double_list_links", [] {
    expect (eq (slinks.previous (), nullptr)) << "prev is null";
    // MTP_EXPECT_EQ(t, static_cast<void*>(slinks.previous()), nullptr, "prev
    // is null"); MTP_EXPECT_EQ(t, static_cast<void*>(slinks.next()), nullptr,
    // "next is null");
    expect (slinks.unlinked ()) << "unlinked";
  });

  return exit_code ();
}

// ----------------------------------------------------------------------------
