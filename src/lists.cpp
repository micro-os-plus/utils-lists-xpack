/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2016 Liviu Ionescu. All rights reserved.
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
#include <micro-os-plus/diag/trace.h>

// ----------------------------------------------------------------------------

#if defined(__GNUC__)
#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif
#endif

namespace micro_os_plus::utils
{
  // ==========================================================================

  void
  double_list_links_base::link_next (double_list_links_base* node)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() link %p after %p\n", __func__, node, this);
#endif
    assert (next_ != nullptr);
    assert (next_->previous_ != nullptr);

    // Make the new node point to its new neighbours.
    node->previous_ = this;
    node->next_ = next_;

    next_->previous_ = node;
    next_ = node;
  }

  void
  double_list_links_base::link_previous (double_list_links_base* node)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() link %p before %p\n", __func__, node, this);
#endif
    assert (next_ != nullptr);
    assert (next_->previous_ != nullptr);

    // Make the new node point to its new neighbours.
    node->next_ = this;
    node->previous_ = previous_;

    previous_->next_ = node;
    previous_ = node;
  }

  /**
   * @details
   * Update the neighbours to
   * point to each other, skipping the node.
   */
  void
  double_list_links_base::unlink (void)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() %p \n", __func__, this);
#endif

    // Make neighbours point to each other.
    // This works even if the node is already unlinked.
    previous_->next_ = next_;
    next_->previous_ = previous_;

    // Make both pointers point to this node.
    initialize ();
  }

  /**
   * @details
   * To be fully linked, both pointers must point to different nodes
   * than itself.
   */
  bool
  double_list_links_base::linked (void)
  {
    if (next_ != this)
      {
        assert (previous_ != this);
        return true;
      }
    else
      {
        assert (previous_ == this);
        return false;
      }
  }

  // ==========================================================================

  /**
   * @class static_double_list_links
   * @details
   * This is the simplest list node, used as base class for other
   * list nodes and as storage for static_double_list,
   * that must be available for any statically constructed
   * objects while still avoiding the 'static initialisation order fiasco'.
   *
   * The idea is to design the object in such a way as to benefit
   * from the standard BSS initialisation, in other words take `nullptr`
   * as starting values.
   */

  /**
   * @details
   * The pointers must be either both non null or both not null.
   */
  bool
  static_double_list_links::uninitialized (void) const
  {
#pragma GCC diagnostic push

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif
    if (next_ == nullptr)
      {
        assert (previous_ == nullptr);
        return true;
      }
    else
      {
        assert (previous_ != nullptr);
        return false;
      }
#pragma GCC diagnostic pop
  }

  /**
   * @details
   * To be fully linked, both pointers must be non null and point to
   * somewhere else.
   */
  bool
  static_double_list_links::linked (void)
  {
    if (uninitialized ())
      {
        return false;
      }
    else
      {
        return double_list_links_base::linked ();
      }
  }

  // Prevent LTO to optimize out the code.
  // https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html
#if defined(__GNUC__) && !defined(__clang__)
  __attribute__ ((noinline, noipa))
#endif
  void
  static_double_list_links::nullify ()
  {
    next_ = nullptr;
    previous_ = nullptr;
  }

  // ==========================================================================
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------
