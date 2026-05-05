/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2021-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------

#include "unit-test.h"

// ----------------------------------------------------------------------------

namespace os = micro_os_plus;
namespace mt = micro_os_plus::micro_test_plus;

// ----------------------------------------------------------------------------

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#pragma clang diagnostic ignored "-Wexit-time-destructors"
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

// ----------------------------------------------------------------------------

static os::utils::static_double_list_links static_links;

static void
check_static_double_list_links (mt::static_suite& ts)
{
  ts.test ("Static", [] (auto& t)
    {
      os::utils::static_double_list_links* p
          = new (&static_links) os::utils::static_double_list_links;
      t.expect (!p->initialised ()) << "uninitialised";

      static_links.initialise ();
      t.expect (p->initialised ()) << "initialised";
      t.expect (!p->linked ()) << "unlinked";

      // GCC optimizes out the destructor code (dead store
      // elimination); The workaround is to do it manually.
      p->reset ();
      // std::cout << p->next();
      // std::cout << p->previous();

      p->~static_double_list_links ();
      t.expect (!p->initialised ()) << "uninitialised";
    });
}

static mt::static_suite ts_check_static_double_list_links
    = { "Static double list links destructor", sr,
        check_static_double_list_links };

// ----------------------------------------------------------------------------

template <class T>
void
check_double_list_links (mt::static_suite& ts)
{
  static T left_links;
  static T links;
  static T right_links;

  ts.test ("Initial", [&] (auto& t)
    {
      if constexpr (T::is_statically_allocated::value)
        {
          // Check if the node is cleared.
          t.expect (mt::eq (links.previous (), nullptr)) << "prev is null";
          t.expect (mt::eq (links.next (), nullptr)) << "next is null";
          t.expect (!links.initialised ()) << "uninitialised";

          left_links.initialise ();
          links.initialise ();
          right_links.initialise ();
        }

      t.expect (!left_links.linked ()) << "left unlinked";
      t.expect (!links.linked ()) << "unlinked";
      t.expect (!right_links.linked ()) << "right unlinked";
    });

  ts.test ("Link", [&] (auto& t)
    {
      // Link left as previous.
      links.link_previous (&left_links);

      // Link right as next.
      links.link_next (&right_links);

      // The node must appear as linked now.
      t.expect (links.linked ()) << "linked";

      t.expect (mt::eq (left_links.next (), &links)) << "left linked";
      t.expect (mt::eq (right_links.previous (), &links)) << "right linked";
    });

  ts.test ("Unlink", [&] (auto& t)
    {
      // Unlink the central node.
      links.unlink ();
      t.expect (!links.linked ()) << "unlinked";

      // Left and right must indeed point to each other.
      t.expect (mt::eq (left_links.next (), &right_links)) << "left -> right";
      t.expect (mt::eq (right_links.previous (), &left_links))
          << "right <- right";
    });

  if constexpr (!T::is_statically_allocated::value)
    {
      ts.test ("Allocated on stack", [] (auto& t)
        {
          T stack_links;
          t.expect (!stack_links.linked ()) << "unlinked";
        });
    }
}

static mt::static_suite ts_static_double_list_links
    = { "Static double list links", sr,
        check_double_list_links<os::utils::static_double_list_links> };

static mt::static_suite ts_double_list_links
    = { "Double list links", sr,
        check_double_list_links<os::utils::double_list_links> };

// ----------------------------------------------------------------------------
