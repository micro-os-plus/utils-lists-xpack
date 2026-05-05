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

// T=utils::static_intrusive_list (utils::static_double_list_links)
// T=utils::intrusive_list (utils::double_list_links)
template <class T>
void
check_intrusive_list (mt::static_suite& ts)
{
  using namespace std::literals; // For the "sv" literal.

  using kid = typename T::value_type;

  // The static_double_list objects are t.expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T kids;

  // The static_double_list_links objects are t.expected to be uninitialised.
  // The double_list_links objects are cleared by the constructor.
  static kid mary{ "Mary" };
  static kid bob{ "Bob" };
  static kid sally{ "Sally" };

  ts.test ("Empty", [&] (auto& t)
    {
      if constexpr (T::is_statically_allocated::value)
        {
          t.expect (!kids.initialised ()) << "uninitialised";
          kids.initialise_once ();
        }
      else
        {
          t.expect (kids.initialised ()) << "initialised";
        }
      t.expect (kids.empty ()) << "list is empty";

      auto it = kids.begin ();
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Link Mary", [&] (auto& t)
    {
      kids.link_tail (mary);
      t.expect (!kids.empty ()) << "list not empty";

      // auto x = kids.tail();
      // t.expect(mt::eq(std::string_view{kids.tail()->name()},
      // "Mary"sv))
      // << "tail is Mary";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "first iteration is Mary";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Link Bob", [&] (auto& t)
    {
      kids.link_tail (bob);
      auto it = kids.begin ();
      t.expect (!kids.empty ()) << "list not empty";
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "first iteration is Mary";
      ++it;
      t.expect (it != kids.end ()) << "second iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "second iteration is Bob";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Link Sally", [&] (auto& t)
    {
      kids.link_tail (sally);
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "first iteration is Mary";
      ++it;
      t.expect (it != kids.end ()) << "second iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "second iteration is Bob";
      ++it;
      t.expect (it != kids.end ()) << "third iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "second iteration is Sally";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Unlink Bob", [&] (auto& t)
    {
      bob.unlink ();
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "first iteration is Mary";
      ++it;
      t.expect (it != kids.end ()) << "second iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "second iteration is Sally";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Unlink Mary", [&] (auto& t)
    {
      mary.unlink ();
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "second iteration is Sally";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Link Mary at head", [&] (auto& t)
    {
      kids.link_head (mary);
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "first iteration is Mary";
      ++it;
      t.expect (it != kids.end ()) << "second iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "second iteration is Sally";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Unlink Mary", [&] (auto& t)
    {
      mary.unlink ();
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "second iteration is Sally";
      ++it;
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Unlink Sally", [&] (auto& t)
    {
      sally.unlink ();
      t.expect (kids.empty ()) << "list is empty";
      auto it = kids.begin ();
      t.expect (it == kids.end ()) << "iterator at end";
    });

  ts.test ("Link Mary again", [&] (auto& t)
    {
      kids.link_tail (mary);
      t.expect (!kids.empty ()) << "list not empty";

      auto it = kids.begin ();
      t.expect (it != kids.end ()) << "iterator not at end";
    });

  ts.test ("Clear", [&] (auto& t)
    {
      kids.clear ();
      t.expect (kids.empty ()) << "list is empty";

      auto it = kids.begin ();
      t.expect (it == kids.end ()) << "iterator at end";
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

using static_kid = child<os::utils::static_double_list_links>;
using kid = child<os::utils::double_list_links>;

// ---

using static_kids_list
    = os::utils::intrusive_list<kid, decltype (kid::registry_links_),
                                &kid::registry_links_,
                                os::utils::static_double_list_links>;

static mt::static_suite ts_static_intrusive_list
    = { "Static intrusive list2", sr, check_intrusive_list<static_kids_list> };

using static_kids_list2 = os::utils::intrusive_list<
    static_kid, decltype (static_kid::registry_links_),
    &static_kid::registry_links_, os::utils::static_double_list_links>;

static mt::static_suite ts_static_intrusive_list2
    = { "Static intrusive list static nodes", sr,
        check_intrusive_list<static_kids_list2> };

using kids_list
    = os::utils::intrusive_list<kid, decltype (kid::registry_links_),
                                &kid::registry_links_>;

static mt::static_suite ts_intrusive_list
    = { "Intrusive list2", sr, check_intrusive_list<kids_list> };

using kids_list2
    = os::utils::intrusive_list<static_kid,
                                decltype (static_kid::registry_links_),
                                &static_kid::registry_links_>;

static mt::static_suite ts_intrusive_list2
    = { "Intrusive list static nodes", sr, check_intrusive_list<kids_list2> };

// ----------------------------------------------------------------------------
