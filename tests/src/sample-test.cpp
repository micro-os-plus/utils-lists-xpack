/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
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

#include <micro-os-plus/utils/lists.h>
#include <unistd.h>

#include <stdio.h>

using namespace micro_os_plus;

// ----------------------------------------------------------------------------

#pragma GCC diagnostic push

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif
#pragma GCC diagnostic ignored "-Waggregate-return"

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

public:
  const char* name_;

  // Intrusive node used to link this child to the registry list.
  // Must be public.
  utils::double_list_links registry_links_;
};

using children_list = utils::intrusive_list<child, utils::double_list_links,
                                            &child::registry_links_>;

int
main ([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
  // Create an empty registry.
  children_list children_registry;

  // Add several members.
  child* marry = new child ("Marry");
  children_registry.link (*marry);

  child* bob = new child ("Bob");
  children_registry.link (*bob);

  child* sally = new child ("Sally");
  children_registry.link (*sally);

  // List them.
  for (auto&& p : children_registry)
    {
      printf ("%s\n", p.name ());
    }

  printf ("\n");

  // Remove one of them.
  bob->registry_links_.unlink ();

  // List the remaining ones.
  for (auto&& p : children_registry)
    {
      printf ("%s\n", p.name ());
    }

  return 0;
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
