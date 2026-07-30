/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2021-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
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
#endif // defined(__clang__)

// ----------------------------------------------------------------------------

template <class T>
void
check_doubly_list (mt::static_suite& ts)
{
  using element = typename T::value_type;

  // The static_doubly_list objects are t.expected to be uninitialised.
  // The doubly_list objects are cleared by the constructor.
  static T list;
  static element one;
  static element two;

  ts.test ("Initialised", [&] (auto& t)
    {
      if constexpr (T::is_statically_allocated::value)
        {
          t.expect (!list.initialised ()) << "uninitialised";
          t.expect (list.initialise_once ()) << "initialise_once";
          t.expect (!list.initialise_once ()) << "initialise_once again";
        }
      else
        {
          t.expect (list.initialised ()) << "initialised";
        }

      if constexpr (element::is_statically_allocated::value)
        {
          t.expect (!one.initialised ()) << "one uninitialised";
          t.expect (one.initialise_once ()) << "one initialise_once";
        }
      else
        {
          t.expect (one.initialised ()) << "one initialised";
        }

      if constexpr (element::is_statically_allocated::value)
        {
          t.expect (!two.initialised ()) << "two uninitialised";
          t.expect (two.initialise_once ()) << "two initialise_once";
        }
      else
        {
          t.expect (two.initialised ()) << "two initialised";
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

  ts.test ("Reverse iteration", [&] (auto& t)
    {
      // Decrement from end() to traverse backwards.
      auto it = list.end ();
      --it;
      t.expect (it != list.end ()) << "reverse first iteration";
      t.expect (mt::eq (&(*it), &two)) << "reverse first is two";
      --it;
      t.expect (it != list.end ()) << "reverse second iteration";
      t.expect (mt::eq (&(*it), &one)) << "reverse second is one";
      t.expect (it == list.begin ()) << "reverse iterator at begin";
    });

  ts.test ("Iterator from element", [&] (auto& t)
    {
      typename T::iterator it{ one };
      t.expect (mt::eq (&(*it), &one)) << "iterator points to one";
    });

  ts.test ("Default iterator constructor", [&] (auto& t)
    {
      // Exercises doubly_list_iterator::doubly_list_iterator(): the
      // default-constructed iterator must have a null internal pointer.
      typename T::iterator it{};
      t.expect (mt::eq (it.get_iterator_pointer (),
                        static_cast<typename T::iterator_pointer> (nullptr)))
          << "default iterator has null pointer";
    });

  ts.test ("Iterator arrow operator", [&] (auto& t)
    {
      // Exercises doubly_list_iterator::operator->(), which returns
      // get_pointer() (the pointer form of dereference).
      auto it = list.begin ();
      t.expect (it->linked ()) << "arrow: begin element is linked";
    });

  ts.test ("Post-increment operator", [&] (auto& t)
    {
      // Exercises doubly_list_iterator::operator++(int): the returned
      // iterator must still point to the original element, while the
      // original iterator advances to the next one.
      auto it = list.begin ();
      auto prev = it++;
      t.expect (mt::eq (&(*prev), &one)) << "post-increment: old value is one";
      t.expect (mt::eq (&(*it), &two)) << "post-increment: new value is two";
    });

  ts.test ("Post-decrement operator", [&] (auto& t)
    {
      // Exercises doubly_list_iterator::operator--(int): the returned
      // iterator must still point to the original element, while the
      // original iterator moves back to the previous one.
      auto it = list.end ();
      --it; // point at two
      auto prev = it--;
      t.expect (mt::eq (&(*prev), &two)) << "post-decrement: old value is two";
      t.expect (mt::eq (&(*it), &one)) << "post-decrement: new value is one";
    });

  ts.test ("Reverse iterator rbegin/rend", [&] (auto& t)
    {
      // list still contains: one, two
      auto it = list.rbegin ();
      t.expect (it != list.rend ()) << "rbegin not at rend";
      t.expect (mt::eq (&(*it), &two)) << "rbegin is two";
      ++it;
      t.expect (it != list.rend ()) << "second reverse element";
      t.expect (mt::eq (&(*it), &one)) << "second reverse is one";
      ++it;
      t.expect (it == list.rend ()) << "reverse iterator at rend";
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

  ts.test ("Link head", [&] (auto& t)
    {
      // Exercises doubly_list::link_head(): the new node must become
      // the head of the list, with the previous head becoming the tail.
      // State entering: list = [one]
      t.expect (!two.linked ()) << "two unlinked";
      list.link_head (two);
      t.expect (two.linked ()) << "two linked";
      t.expect (!list.empty ()) << "list not empty";

      t.expect (mt::eq (list.head (), &two)) << "head is two";
      t.expect (mt::eq (list.tail (), &one)) << "tail is one";

      two.unlink ();
      t.expect (!two.linked ()) << "two unlinked after cleanup";
      // State leaving: list = [one]
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
          t.expect (stack_list.initialised ()) << "initialised";
          t.expect (stack_list.empty ()) << "list is empty";
        });
    }
}

static mt::static_suite ts_static_doubly_list = {
  "Static double list", sr,
  check_doubly_list<os::utils::doubly_list<
      os::utils::doubly_list_links, os::utils::static_doubly_list_links>>
};

static mt::static_suite ts_static_doubly_list2
    = { "Static double list with static elements", sr,
        check_doubly_list<
            os::utils::doubly_list<os::utils::static_doubly_list_links,
                                   os::utils::static_doubly_list_links>> };

static mt::static_suite ts_doubly_list = {
  "Double list", sr,
  check_doubly_list<os::utils::doubly_list<os::utils::doubly_list_links,
                                           os::utils::doubly_list_links>>
};

static mt::static_suite ts_doubly_list2 = {
  "Double list with static elements", sr,
  check_doubly_list<os::utils::doubly_list<os::utils::static_doubly_list_links,
                                           os::utils::doubly_list_links>>
};

// ----------------------------------------------------------------------------
