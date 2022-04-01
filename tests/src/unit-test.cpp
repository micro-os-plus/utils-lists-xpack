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
#include <string_view>
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

int
main (int argc, char* argv[])
{
  using namespace micro_os_plus::micro_test_plus;

  initialize (argc, argv, "utils-lists");

  // No test cases here, all are in separate test suites.

  return exit_code ();
}

// ----------------------------------------------------------------------------

template <class T>
void
check_double_list_links (void)
{
  using namespace micro_os_plus::micro_test_plus;

  static T links;
  static T left_links;
  static T right_links;

  test_case ("Initial", [&] {
    // Check if the node is cleared.
    expect (eq (links.previous (), nullptr)) << "prev is null";
    expect (eq (links.next (), nullptr)) << "next is null";
    expect (links.unlinked ()) << "unlinked";

    expect (left_links.unlinked ()) << "left unlinked";
    expect (right_links.unlinked ()) << "right unlinked";
  });

  test_case ("Link", [&] {
    // Link left as previous.
    links.previous (&left_links);
    left_links.next (&links);

    // Link right as next.
    links.next (&right_links);
    right_links.previous (&links);

    // The node must appear as linked now.
    expect (!links.unlinked ()) << "linked";

    expect (!left_links.unlinked ()) << "left linked";
    expect (!right_links.unlinked ()) << "right linked";
  });

  test_case ("Unlink", [&] {
    // Unlink the central node.
    links.unlink ();
    expect (links.unlinked ()) << "unlinked";

    // The left and right should be still linked,
    // since they point to eachother.
    expect (!left_links.unlinked ()) << "left still linked";
    expect (!right_links.unlinked ()) << "right still linked";

    // Left and right must indeed point to each other.
    expect (eq (left_links.next (), &right_links)) << "left -> right";
    expect (eq (right_links.previous (), &left_links)) << "right <- right";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      test_case ("Allocated on stack", [] {
        T stack_links;
        expect (eq (stack_links.previous (), nullptr)) << "prev is null";
        expect (eq (stack_links.next (), nullptr)) << "next is null";
        expect (stack_links.unlinked ()) << "unlinked";
      });
    }
}

static micro_os_plus::micro_test_plus::test_suite ts_static_double_list_links
    = {
        "Static double list links",
        check_double_list_links<micro_os_plus::utils::static_double_list_links>
      };

static micro_os_plus::micro_test_plus::test_suite ts_double_list_links
    = { "Double list links",
        check_double_list_links<micro_os_plus::utils::double_list_links> };

// ----------------------------------------------------------------------------

template <class T>
class child
{
public:
  using value_type = T;

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
  T registry_links_;
};

// ----------------------------------------------------------------------------

template <class T>
void
check_double_list (void)
{
  using namespace micro_os_plus::micro_test_plus;

  using element = typename T::value_type;

  // The static_double_list objects are expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T list;
  static element one;
  static element two;

  test_case ("Empty", [&] {
    if constexpr (T::is_statically_allocated::value)
      {
        expect (list.uninitialized ()) << "unitialized";
      }
    else
      {
        expect (!list.uninitialized ()) << "initialized";
      }
    expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    expect (it == list.end ()) << "iterator at end";
  });

  test_case ("Link One", [&] {
    expect (one.unlinked ()) << "one unlinked";
    list.link (one);
    expect (!list.empty ()) << "list not empty";

    expect (eq (list.head (), &one)) << "head is one";
    expect (eq (list.tail (), &one)) << "tail is one";

    auto it = list.begin ();
    expect (it != list.end ()) << "first iteration";
    ++it;
    expect (it == list.end ()) << "iterator at end";
  });

  test_case ("Link Two", [&] {
    expect (two.unlinked ()) << "two unlinked";
    list.link (two);
    expect (!list.empty ()) << "list not empty";

    expect (eq (list.head (), &one)) << "head is one";
    expect (eq (list.tail (), &two)) << "tail is two";

    auto it = list.begin ();
    expect (it != list.end ()) << "first iteration";
    ++it;
    expect (it != list.end ()) << "second iteration";
    ++it;
    expect (it == list.end ()) << "iterator at end";
  });

  test_case ("Unlink One", [&] {
    one.unlink ();
    expect (one.unlinked ()) << "one unlinked";
    expect (!list.empty ()) << "list not empty";

    expect (eq (list.head (), &two)) << "head is two";
    expect (eq (list.tail (), &two)) << "tail is two";

    auto it = list.begin ();
    expect (it != list.end ()) << "first iteration";
    ++it;
    expect (it == list.end ()) << "iterator at end";
  });

  test_case ("Unlink Two", [&] {
    two.unlink ();
    expect (two.unlinked ()) << "two unlinked";
    expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    expect (it == list.end ()) << "iterator at end";
  });

  test_case ("Link One again", [&] {
    expect (one.unlinked ()) << "one unlinked";
    list.link (one);
    expect (!list.empty ()) << "list not empty";
  });

  test_case ("Clear", [&] {
    list.clear ();
    expect (list.empty ()) << "list is empty";

    auto it = list.begin ();
    expect (it == list.end ()) << "iterator at end";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      test_case ("Allocated on stack", [] {
        T stack_list;
        expect (!stack_list.uninitialized ()) << "initialized";
        expect (stack_list.empty ()) << "list is empty";
      });
    }
}

static micro_os_plus::micro_test_plus::test_suite ts_static_double_list
    = { "Static double list",
        check_double_list<micro_os_plus::utils::static_double_list> };

static micro_os_plus::micro_test_plus::test_suite ts_double_list
    = { "Double list", check_double_list<micro_os_plus::utils::double_list> };

// ----------------------------------------------------------------------------

// T=utils::static_intrusive_list (utils::static_double_list_links)
// T=utils::intrusive_list (utils::double_list_links)
template <class T>
void
check_intrusive_list ()
{
  using namespace micro_os_plus::micro_test_plus;
  using namespace std::literals; // For the "sv" literal.

  using kid = typename T::value_type;

  // The static_double_list objects are expected to be uninitialised.
  // The double_list objects are cleared by the constructor.
  static T kids;

  // The static_double_list_links objects are expected to be uninitialised.
  // The double_list_links objects are cleared by the constructor.
  static kid marry{ "Marry" };
  static kid bob{ "Bob" };
  static kid sally{ "Sally" };

  test_case ("Empty", [&] {
    if constexpr (T::is_statically_allocated::value)
      {
        expect (kids.uninitialized ()) << "uninitialized";
      }
    else
      {
        expect (!kids.uninitialized ()) << "initialized";
      }
    expect (kids.empty ()) << "list is empty";

    auto it = kids.begin ();
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Link Marry", [&] {
    kids.link (marry);
    expect (!kids.empty ()) << "list not empty";

    // auto x = kids.tail();
    // expect(eq(std::string_view{kids.tail()->name()}, "Marry"sv)) <<
    // "tail is Marry";

    auto it = kids.begin ();
    expect (it != kids.end ()) << "first iteration";
    expect (eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Link Bob", [&] {
    kids.link (bob);
    auto it = kids.begin ();
    expect (!kids.empty ()) << "list not empty";
    expect (it != kids.end ()) << "first iteration";
    expect (eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    expect (it != kids.end ()) << "second iteration";
    expect (eq (std::string_view{ it->name () }, "Bob"sv))
        << "second iteration is Bob";
    ++it;
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Link Sally", [&] {
    kids.link (sally);
    expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    expect (it != kids.end ()) << "first iteration";
    expect (eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    expect (it != kids.end ()) << "second iteration";
    expect (eq (std::string_view{ it->name () }, "Bob"sv))
        << "second iteration is Bob";
    ++it;
    expect (it != kids.end ()) << "third iteration";
    expect (eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Unlink Bob", [&] {
    bob.unlink ();
    expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    expect (it != kids.end ()) << "first iteration";
    expect (eq (std::string_view{ it->name () }, "Marry"sv))
        << "first iteration is Marry";
    ++it;
    expect (it != kids.end ()) << "second iteration";
    expect (eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Unlink Marry", [&] {
    marry.unlink ();
    expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    expect (it != kids.end ()) << "first iteration";
    expect (eq (std::string_view{ it->name () }, "Sally"sv))
        << "second iteration is Sally";
    ++it;
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Unlink Sally", [&] {
    sally.unlink ();
    expect (kids.empty ()) << "list is empty";
    auto it = kids.begin ();
    expect (it == kids.end ()) << "iterator at end";
  });

  test_case ("Link Marry again", [&] {
    kids.link (marry);
    expect (!kids.empty ()) << "list not empty";

    auto it = kids.begin ();
    expect (it != kids.end ()) << "iterator not at end";
  });

  test_case ("Clear", [&] {
    kids.clear ();
    expect (kids.empty ()) << "list is empty";

    auto it = kids.begin ();
    expect (it == kids.end ()) << "iterator at end";
  });

  if constexpr (!T::is_statically_allocated::value)
    {
      test_case ("Allocated on stack", [] {
        T stack_list;
        expect (!stack_list.uninitialized ()) << "initialized";
        expect (stack_list.empty ()) << "list is empty";
      });
    }
}

using static_kid = child<utils::static_double_list_links>;
using kid = child<utils::double_list_links>;

using static_kids_list
    = utils::static_intrusive_list<static_kid, static_kid::value_type,
                                   &static_kid::registry_links_>;

static micro_os_plus::micro_test_plus::test_suite ts_static_intrusive_list
    = { "Static intrusive list", check_intrusive_list<static_kids_list> };

// Test the non-static intrusive list.
using kids_list
    = utils::intrusive_list<kid, kid::value_type, &kid::registry_links_>;

static micro_os_plus::micro_test_plus::test_suite ts_intrusive_list
    = { "Intrusive list", check_intrusive_list<kids_list> };

// ----------------------------------------------------------------------------
