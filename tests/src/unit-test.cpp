/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2021 Liviu Ionescu. All rights reserved.
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
#include <string_view>
#include <stdio.h>

// #include <iostream>

// ----------------------------------------------------------------------------

namespace os = micro_os_plus;
namespace mt = micro_os_plus::micro_test_plus;

// ----------------------------------------------------------------------------

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#pragma clang diagnostic ignored "-Wexit-time-destructors"
#pragma clang diagnostic ignored "-Wglobal-constructors"
#pragma clang diagnostic ignored "-Wctad-maybe-unsupported"
#endif

// ----------------------------------------------------------------------------

int
main (int argc, char* argv[])
{
  mt::initialize (argc, argv, "utils-lists");

  // No test cases here, all are in separate test suites.

  return mt::exit_code ();
}

// ----------------------------------------------------------------------------

static os::utils::static_double_list_links static_links;

void
check_static_double_list_links (void);

void
check_static_double_list_links (void)
{
  mt::test_case ("Static", [] {
    os::utils::static_double_list_links* p
        = new (&static_links) os::utils::static_double_list_links;
    mt::expect (p->uninitialized ()) << "uninitialized";

    static_links.initialize ();
    mt::expect (!p->uninitialized ()) << "initialized";
    mt::expect (!p->linked ()) << "unlinked";

    // GCC optimizes out the destructor code (dead store elimination);
    // The workaround is to do it manually.
    p->nullify ();
    // std::cout << p->next();
    // std::cout << p->previous();

    p->~static_double_list_links ();
    mt::expect (p->uninitialized ()) << "uninitialized";
  });
}

static mt::test_suite ts_check_static_double_list_links
    = { "Static double list links destructor",
        check_static_double_list_links };

// ----------------------------------------------------------------------------

template <class T>
void
check_double_list_links (void)
{
  static T left_links;
  static T links;
  static T right_links;

  mt::test_case ("Initial", [&] {
    if constexpr (T::is_statically_allocated::value)
      {
        // Check if the node is cleared.
        mt::expect (mt::eq (links.previous (), nullptr)) << "prev is null";
        mt::expect (mt::eq (links.next (), nullptr)) << "next is null";
        mt::expect (links.uninitialized ()) << "uninitialized";

        left_links.initialize ();
        links.initialize ();
        right_links.initialize ();
      }

    mt::expect (!left_links.linked ()) << "left unlinked";
    mt::expect (!links.linked ()) << "unlinked";
    mt::expect (!right_links.linked ()) << "right unlinked";
  });

  mt::test_case ("Link", [&] {
    // Link left as previous.
    links.link_previous (&left_links);

    // Link right as next.
    links.link_next (&right_links);

    // The node must appear as linked now.
    mt::expect (links.linked ()) << "linked";

    mt::expect (mt::eq (left_links.next (), &links)) << "left linked";
    mt::expect (mt::eq (right_links.previous (), &links)) << "right linked";
  });

  mt::test_case ("Unlink", [&] {
    // Unlink the central node.
    links.unlink ();
    mt::expect (!links.linked ()) << "unlinked";

    // Left and right must indeed point to each other.
    mt::expect (mt::eq (left_links.next (), &right_links)) << "left -> right";
    mt::expect (mt::eq (right_links.previous (), &left_links))
        << "right <- right";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      mt::test_case ("Allocated on stack", [] {
        T stack_links;
        mt::expect (!stack_links.linked ()) << "unlinked";
      });
    }
}

static mt::test_suite ts_static_double_list_links
    = { "Static double list links",
        check_double_list_links<os::utils::static_double_list_links> };

static mt::test_suite ts_double_list_links
    = { "Double list links",
        check_double_list_links<os::utils::double_list_links> };

// ----------------------------------------------------------------------------

// T must be one of static_double_list_links or double_list_links.
template <class T = os::utils::double_list_links>
class child
{
public:
  // using value_type = T;
  using links_type = T;

  child (const char* name)
  {
    name_ = name;
  }

  const char*
  name ()
  {
    return name_;
  }

  void
  unlink (void)
  {
    registry_links_.unlink ();
  }

public:
  const char* name_;

  // Intrusive node used to link this child to the registry list.
  // Must be public.
  links_type registry_links_;
};

// ----------------------------------------------------------------------------

template <class T>
void
check_double_list (void)
{
  using element = typename T::value_type;

  // The static_double_list objects are mt::expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T list;
  static element one;
  static element two;

  mt::test_case ("Uninitialized", [&] {
    if constexpr (T::is_statically_allocated::value)
      {
        mt::expect (list.uninitialized ()) << "uninitialized";
        list.initialize_once ();
      }
    else
      {
        mt::expect (!list.uninitialized ()) << "initialized";
      }

    if constexpr (element::is_statically_allocated::value)
      {
        mt::expect (one.uninitialized ()) << "one uninitialized";
        one.initialize_once ();
      }
    else
      {
        mt::expect (!one.uninitialized ()) << "one initialized";
      }

    if constexpr (element::is_statically_allocated::value)
      {
        mt::expect (two.uninitialized ()) << "two uninitialized";
        two.initialize_once ();
      }
    else
      {
        mt::expect (!two.uninitialized ()) << "two initialized";
      }
  });

  mt::test_case ("Empty", [&] {
    mt::expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    mt::expect (it == list.end ()) << "iterator at end";
  });

  mt::test_case ("Link One", [&] {
    mt::expect (!one.linked ()) << "one unlinked";

    list.link_tail (one);
    mt::expect (one.linked ()) << "one linked";
    mt::expect (!list.empty ()) << "list not empty";

    mt::expect (mt::eq (list.head (), &one)) << "head is one";
    mt::expect (mt::eq (list.tail (), &one)) << "tail is one";

    auto it = list.begin ();
    mt::expect (it != list.end ()) << "first iteration";
    ++it;
    mt::expect (it == list.end ()) << "iterator at end";
  });

  mt::test_case ("Link Two", [&] {
    mt::expect (!two.linked ()) << "two unlinked";

    list.link_tail (two);
    mt::expect (two.linked ()) << "two linked";
    mt::expect (!list.empty ()) << "list not empty";

    mt::expect (mt::eq (list.head (), &one)) << "head is one";
    mt::expect (mt::eq (list.tail (), &two)) << "tail is two";

    auto it = list.begin ();
    mt::expect (it != list.end ()) << "first iteration";
    ++it;
    mt::expect (it != list.end ()) << "second iteration";
    ++it;
    mt::expect (it == list.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink One", [&] {
    one.unlink ();
    mt::expect (!one.linked ()) << "one unlinked";
    mt::expect (!list.empty ()) << "list not empty";

    mt::expect (mt::eq (list.head (), &two)) << "head is two";
    mt::expect (mt::eq (list.tail (), &two)) << "tail is two";

    auto it = list.begin ();
    mt::expect (it != list.end ()) << "first iteration";
    ++it;
    mt::expect (it == list.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink Two", [&] {
    two.unlink ();
    mt::expect (!two.linked ()) << "two unlinked";
    mt::expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    mt::expect (it == list.end ()) << "iterator at end";
  });

  mt::test_case ("Link One again", [&] {
    mt::expect (!one.linked ()) << "one unlinked";
    list.link_tail (one);
    mt::expect (!list.empty ()) << "list not empty";
  });

  mt::test_case ("Clear", [&] {
    list.clear ();
    mt::expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    mt::expect (it == list.end ()) << "iterator at end";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      mt::test_case ("Allocated on stack", [] {
        T stack_list;
        mt::expect (!stack_list.uninitialized ()) << "initialized";
        mt::expect (stack_list.empty ()) << "list is empty";
      });
    }
}

static mt::test_suite ts_static_double_list = {
  "Static double list",
  check_double_list<os::utils::double_list<
      os::utils::double_list_links, os::utils::static_double_list_links>>
};

static mt::test_suite ts_static_double_list2
    = { "Static double list with static elements",
        check_double_list<
            os::utils::double_list<os::utils::static_double_list_links,
                                   os::utils::static_double_list_links>> };

static mt::test_suite ts_double_list = {
  "Double list",
  check_double_list<os::utils::double_list<os::utils::double_list_links,
                                           os::utils::double_list_links>>
};

static mt::test_suite ts_double_list2 = {
  "Double list with static elements",
  check_double_list<os::utils::double_list<os::utils::static_double_list_links,
                                           os::utils::double_list_links>>
};

// ----------------------------------------------------------------------------

// T=utils::static_intrusive_list (utils::static_double_list_links)
// T=utils::intrusive_list (utils::double_list_links)
template <class T>
void
check_intrusive_list ()
{
  using namespace std::literals; // For the "sv" literal.

  using kid = typename T::value_type;

  // The static_double_list objects are mt::expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T kids;

  // The static_double_list_links objects are mt::expected to be uninitialised.
  // The double_list_links objects are cleared by the constructor.
  static kid marry{ "Marry" };
  static kid bob{ "Bob" };
  static kid sally{ "Sally" };

  mt::test_case ("Empty", [&] {
    if constexpr (T::is_statically_allocated::value)
      {
        mt::expect (kids.uninitialized ()) << "uninitialized";
        kids.initialize_once ();
      }
    else
      {
        mt::expect (!kids.uninitialized ()) << "initialized";
      }
    mt::expect (kids.empty ()) << "list is empty";

    auto it = kids.begin ();
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Link Marry", [&] {
    kids.link_tail (marry);
    mt::expect (!kids.empty ()) << "list not empty";

    // auto x = kids.tail();
    // mt::expect(mt::eq(std::string_view{kids.tail()->name()}, "Marry"sv)) <<
    // "tail is Marry";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Link Bob", [&] {
    kids.link_tail (bob);
    auto it = kids.begin ();
    mt::expect (!kids.empty ()) << "list not empty";
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    mt::expect (it != kids.end ()) << "second iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
        << "second iteration is Bob";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Link Sally", [&] {
    kids.link_tail (sally);
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    mt::expect (it != kids.end ()) << "second iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Bob"sv))
        << "second iteration is Bob";
    ++it;
    mt::expect (it != kids.end ()) << "third iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink Bob", [&] {
    bob.unlink ();
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    mt::expect (it != kids.end ()) << "second iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink Marry", [&] {
    marry.unlink ();
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Link Marry at head", [&] {
    kids.link_head (marry);
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    mt::expect (it != kids.end ()) << "second iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink Marry", [&] {
    marry.unlink ();
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "first iteration";
    mt::expect (mt::eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Unlink Sally", [&] {
    sally.unlink ();
    mt::expect (kids.empty ()) << "list is empty";
    auto it = kids.begin ();
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  mt::test_case ("Link Marry again", [&] {
    kids.link_tail (marry);
    mt::expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    mt::expect (it != kids.end ()) << "iterator not at end";
  });

  mt::test_case ("Clear", [&] {
    kids.clear ();
    mt::expect (kids.empty ()) << "list is empty";

    auto it = kids.begin ();
    mt::expect (it == kids.end ()) << "iterator at end";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      mt::test_case ("Allocated on stack", [] {
        T stack_list;
        mt::expect (!stack_list.uninitialized ()) << "initialized";
        mt::expect (stack_list.empty ()) << "list is empty";
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

static mt::test_suite ts_static_intrusive_list
    = { "Static intrusive list2", check_intrusive_list<static_kids_list> };

using static_kids_list2 = os::utils::intrusive_list<
    static_kid, decltype (static_kid::registry_links_),
    &static_kid::registry_links_, os::utils::static_double_list_links>;

static mt::test_suite ts_static_intrusive_list2
    = { "Static intrusive list static nodes",
        check_intrusive_list<static_kids_list2> };

using kids_list
    = os::utils::intrusive_list<kid, decltype (kid::registry_links_),
                                &kid::registry_links_>;

static mt::test_suite ts_intrusive_list
    = { "Intrusive list2", check_intrusive_list<kids_list> };

using kids_list2
    = os::utils::intrusive_list<static_kid,
                                decltype (static_kid::registry_links_),
                                &static_kid::registry_links_>;

static mt::test_suite ts_intrusive_list2
    = { "Intrusive list static nodes", check_intrusive_list<kids_list2> };

// ----------------------------------------------------------------------------
