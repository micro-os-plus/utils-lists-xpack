/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2021-2025 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <micro-os-plus/platform.h>
#include <micro-os-plus/utils/lists.h>
#include <unistd.h>
#include <stdio.h>

namespace os = micro_os_plus;

// ----------------------------------------------------------------------------

#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif

// A simple example with an object that can be linked into two lists.
class child
{
public:
  child (const char* name)
  {
    name_ = name;
  }

  const char*
  name ()
  {
    return name_;
  }

protected:
  const char* name_;

public:
  // Intrusive nodes used to link this object to the lists.
  // Must be public.
  os::utils::double_list_links all_kids_links;
  os::utils::double_list_links school_kids_links;
};

// Type of a list of all kids.
using all_kids_list
    = os::utils::intrusive_list<child, decltype (child::all_kids_links),
                                &child::all_kids_links>;

// Type of a list of school kids.
using school_kids_list
    = os::utils::intrusive_list<child, decltype (child::school_kids_links),
                                &child::school_kids_links>;

int
main ([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
  // Create the empty lists locally.
  all_kids_list all_kids_registry;
  school_kids_list school_kids_registry;

  // Add several members.
  child mary{ "Mary" };
  all_kids_registry.link_tail (mary);

  child bob{ "Bob" };
  all_kids_registry.link_tail (bob);

  child sally{ "Sally" };
  all_kids_registry.link_tail (sally);
  school_kids_registry.link_tail (sally);

  child doug{ "Doug" };
  all_kids_registry.link_tail (doug);
  school_kids_registry.link_tail (doug);

  printf ("\nAll kids:\n");

  // List all kids.
  for (auto&& p : all_kids_registry)
    {
#pragma GCC diagnostic push
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage-in-libc-call"
#endif
      printf ("- %s\n", p.name ());
#pragma GCC diagnostic pop
    }

  printf ("\nBob is gone...\n");

  // Remove one of them from the all_kids list.
  bob.all_kids_links.unlink ();

  // List the remaining ones in the list.
  for (auto&& p : all_kids_registry)
    {
#pragma GCC diagnostic push
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage-in-libc-call"
#endif
      printf ("- %s\n", p.name ());
#pragma GCC diagnostic pop
    }

  printf ("\nSchool kids:\n");
  for (auto&& p : school_kids_registry)
    {
#pragma GCC diagnostic push
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage-in-libc-call"
#endif
      printf ("- %s\n", p.name ());
#pragma GCC diagnostic pop
    }

  printf ("\nDone.\n");
  return 0;
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
