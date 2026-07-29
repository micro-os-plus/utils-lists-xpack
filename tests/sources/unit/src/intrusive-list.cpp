/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
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

// T=utils::static_intrusive_list (utils::static_doubly_list_links)
// T=utils::intrusive_list (utils::doubly_list_links)
template <class T>
void
check_intrusive_list (mt::static_suite& ts)
{
  using namespace std::literals; // For the "sv" literal.

  using kid = typename T::value_type;

  // The static_doubly_list objects are t.expected to be uninitialised.
  // The doubly_list objects are cleared by the constructor.
  static T kids;

  // The static_doubly_list_links objects are t.expected to be uninitialised.
  // The doubly_list_links objects are cleared by the constructor.
  static kid mary{ "Mary" };
  static kid bob{ "Bob" };
  static kid sally{ "Sally" };

  ts.test ("Empty", [&] (auto& t)
    {
      if constexpr (T::is_statically_allocated::value)
        {
          t.expect (!kids.initialised ()) << "uninitialised";
          t.expect (kids.initialise_once ()) << "initialise_once";
          t.expect (!kids.initialise_once ()) << "initialise_once again";
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

  ts.test ("Default iterator constructor", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::intrusive_list_iterator():
      // the default-constructed iterator must have a null internal
      // pointer.
      typename T::iterator it{};
      t.expect (mt::eq (it.get_iterator_pointer (),
                        static_cast<typename T::iterator_pointer> (nullptr)))
          << "default iterator has null pointer";
    });

  ts.test ("Iterator from element", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::intrusive_list_iterator(
      // reference element): the iterator must point to the given
      // element.
      typename T::iterator it{ mary };
      t.expect (mt::eq (&(*it), &mary)) << "iterator points to mary";
    });

  ts.test ("Iterator get_iterator_pointer", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::get_iterator_pointer() on
      // a non-null iterator: the returned node pointer must be
      // non-null and must correspond to the element at begin().
      auto it = kids.begin ();
      t.expect (it.get_iterator_pointer () != nullptr)
          << "get_iterator_pointer: non-null for begin";
    });

  ts.test ("Iterator dereference operator", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::operator*(): the dereference
      // operator must return a reference to the value, accessed here
      // via (*it).name() to unambiguously call operator*() rather than
      // operator->().
      auto it = kids.begin ();
      t.expect (mt::eq (std::string_view{ (*it).name () }, "Mary"sv))
          << "dereference: begin is Mary";
    });

  ts.test ("Post-increment operator", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::operator++(int): the
      // returned iterator must still point to the original element,
      // while the original iterator advances to the next one.
      auto it = kids.begin ();
      auto prev = it++;
      t.expect (mt::eq (std::string_view{ prev->name () }, "Mary"sv))
          << "post-increment: old value is Mary";
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "post-increment: new value is Bob";
    });

  ts.test ("Post-decrement operator", [&] (auto& t)
    {
      // Exercises intrusive_list_iterator::operator--(int): the
      // returned iterator must still point to the original element,
      // while the original iterator moves back to the previous one.
      auto it = kids.end ();
      --it; // point at Sally
      auto prev = it--;
      t.expect (mt::eq (std::string_view{ prev->name () }, "Sally"sv))
          << "post-decrement: old value is Sally";
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "post-decrement: new value is Bob";
    });

  ts.test ("Reverse iteration", [&] (auto& t)
    {
      // Decrement from end() to traverse backwards.
      auto it = kids.end ();
      --it;
      t.expect (it != kids.end ()) << "reverse first iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "reverse first is Sally";
      --it;
      t.expect (it != kids.end ()) << "reverse second iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "reverse second is Bob";
      --it;
      t.expect (it != kids.end ()) << "reverse third iteration";
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "reverse third is Mary";
      t.expect (it == kids.begin ()) << "reverse iterator at begin";
    });

  ts.test ("Reverse iterator rbegin/rend", [&] (auto& t)
    {
      // list still contains: Mary, Bob, Sally
      auto it = kids.rbegin ();
      t.expect (it != kids.rend ()) << "rbegin not at rend";
      t.expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
          << "rbegin is Sally";
      ++it;
      t.expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
          << "second reverse is Bob";
      ++it;
      t.expect (mt::eq (std::string_view{ it->name () }, "Mary"sv))
          << "third reverse is Mary";
      ++it;
      t.expect (it == kids.rend ()) << "reverse iterator at rend";
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

  ts.test ("Unlink head/tail on empty list", [&] (auto& t)
    {
      t.expect (kids.empty ()) << "list is empty";
      t.expect (mt::eq (kids.unlink_head (), nullptr))
          << "unlink_head returns nullptr";
      t.expect (mt::eq (kids.unlink_tail (), nullptr))
          << "unlink_tail returns nullptr";
    });

  ts.test ("Unlink head/tail on non-empty list", [&] (auto& t)
    {
      // Exercises intrusive_list::get_pointer() via unlink_head() and
      // unlink_tail() on a non-empty list.
      kids.link_tail (mary);
      kids.link_tail (bob);
      // list = [mary, bob]

      t.expect (mt::eq (kids.unlink_head (), &mary))
          << "unlink_head returns mary";
      t.expect (mt::eq (kids.unlink_tail (), &bob))
          << "unlink_tail returns bob";
      t.expect (kids.empty ()) << "list is empty after both unlinks";
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

using static_kid = child<os::utils::static_doubly_list_links>;
using kid = child<os::utils::doubly_list_links>;

// ---

using static_kids_list
    = os::utils::intrusive_list<kid, decltype (kid::registry_links_),
                                &kid::registry_links_,
                                os::utils::static_doubly_list_links>;

static mt::static_suite ts_static_intrusive_list
    = { "Static intrusive list2", sr, check_intrusive_list<static_kids_list> };

using static_kids_list2 = os::utils::intrusive_list<
    static_kid, decltype (static_kid::registry_links_),
    &static_kid::registry_links_, os::utils::static_doubly_list_links>;

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
