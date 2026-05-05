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

template <class T>
void
check_double_list (mt::static_suite& ts)
{
  using element = typename T::value_type;

  // The static_double_list objects are t.expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T list;
  static element one;
  static element two;

  ts.test ("Uninitialized", [&] (auto& t)
    {
      if constexpr (T::is_statically_allocated::value)
        {
          t.expect (list.uninitialized ()) << "uninitialized";
          list.initialise_once ();
        }
      else
        {
          t.expect (!list.uninitialized ()) << "initialised";
        }

      if constexpr (element::is_statically_allocated::value)
        {
          t.expect (one.uninitialized ()) << "one uninitialized";
          one.initialise_once ();
        }
      else
        {
          t.expect (!one.uninitialized ()) << "one initialised";
        }

      if constexpr (element::is_statically_allocated::value)
        {
          t.expect (two.uninitialized ()) << "two uninitialized";
          two.initialise_once ();
        }
      else
        {
          t.expect (!two.uninitialized ()) << "two initialised";
        }
    });

  ts.test ("Empty", [&] (auto& t)
    {
      t.expect (list.empty ()) << "list is empty";

      auto it = list.begin ();
      t.expect (it == list.end ()) << "iterator at end";
    });

  ts.test ("Link One", [&] (auto& t)
    {
      t.expect (!one.linked ()) << "one unlinked";

      list.link_tail (one);
      t.expect (one.linked ()) << "one linked";
      t.expect (!list.empty ()) << "list not empty";

      t.expect (mt::eq (list.head (), &one)) << "head is one";
      t.expect (mt::eq (list.tail (), &one)) << "tail is one";

      auto it = list.begin ();
      t.expect (it != list.end ()) << "first iteration";
      ++it;
      t.expect (it == list.end ()) << "iterator at end";
    });

  ts.test ("Link Two", [&] (auto& t)
    {
      t.expect (!two.linked ()) << "two unlinked";

      list.link_tail (two);
      t.expect (two.linked ()) << "two linked";
      t.expect (!list.empty ()) << "list not empty";

      t.expect (mt::eq (list.head (), &one)) << "head is one";
      t.expect (mt::eq (list.tail (), &two)) << "tail is two";

      auto it = list.begin ();
      t.expect (it != list.end ()) << "first iteration";
      ++it;
      t.expect (it != list.end ()) << "second iteration";
      ++it;
      t.expect (it == list.end ()) << "iterator at end";
    });

  ts.test ("Unlink One", [&] (auto& t)
    {
      one.unlink ();
      t.expect (!one.linked ()) << "one unlinked";
      t.expect (!list.empty ()) << "list not empty";

      t.expect (mt::eq (list.head (), &two)) << "head is two";
      t.expect (mt::eq (list.tail (), &two)) << "tail is two";

      auto it = list.begin ();
      t.expect (it != list.end ()) << "first iteration";
      ++it;
      t.expect (it == list.end ()) << "iterator at end";
    });

  ts.test ("Unlink Two", [&] (auto& t)
    {
      two.unlink ();
      t.expect (!two.linked ()) << "two unlinked";
      t.expect (list.empty ()) << "list is empty";

      auto it = list.begin ();
      t.expect (it == list.end ()) << "iterator at end";
    });

  ts.test ("Link One again", [&] (auto& t)
    {
      t.expect (!one.linked ()) << "one unlinked";
      list.link_tail (one);
      t.expect (!list.empty ()) << "list not empty";
    });

  ts.test ("Clear", [&] (auto& t)
    {
      list.clear ();
      t.expect (list.empty ()) << "list is empty";

      auto it = list.begin ();
      t.expect (it == list.end ()) << "iterator at end";
    });

  if constexpr (!T::is_statically_allocated::value)
    {
      ts.test ("Allocated on stack", [] (auto& t)
        {
          T stack_list;
          t.expect (!stack_list.uninitialized ()) << "initialized";
          t.expect (stack_list.empty ()) << "list is empty";
        });
    }
}

static mt::static_suite ts_static_double_list = {
  "Static double list", sr,
  check_double_list<os::utils::double_list<
      os::utils::double_list_links, os::utils::static_double_list_links>>
};

static mt::static_suite ts_static_double_list2
    = { "Static double list with static elements", sr,
        check_double_list<
            os::utils::double_list<os::utils::static_double_list_links,
                                   os::utils::static_double_list_links>> };

static mt::static_suite ts_double_list = {
  "Double list", sr,
  check_double_list<os::utils::double_list<os::utils::double_list_links,
                                           os::utils::double_list_links>>
};

static mt::static_suite ts_double_list2 = {
  "Double list with static elements", sr,
  check_double_list<os::utils::double_list<os::utils::static_double_list_links,
                                           os::utils::double_list_links>>
};

// ----------------------------------------------------------------------------
