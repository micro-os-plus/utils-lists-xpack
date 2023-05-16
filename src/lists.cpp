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

  /**
   * @details
   * An _uninitialized_ node is a node with the pointers
   * set to `nullptr`.
   *
   * Only statically allocated nodes in the initial state are uninitialized.
   * Regular nodes are always initialised.
   */
  bool
  double_list_links_base::uninitialized (void) const
  {
    if (previous_ == nullptr || next_ == nullptr)
      {
        assert (previous_ == nullptr);
        assert (next_ == nullptr);
        return true;
      }
    return false;
  }

  /**
   * @details
   * If the statically allocated list is still in the initial
   * _uninitialised_ state (with both
   * pointers `nullptr`), initialise the list to the empty state,
   * with both pointers pointing to itself.
   *
   * For non-statically initialised lists, this method is ineffective,
   * since the node is always initialised at construct time.
   *
   * @note
   * This method must be manually called for statically
   * allocated list before
   * inserting elements, or performing any other operations.
   */
  void
  double_list_links_base::initialize_once (void)
  {
    if (uninitialized ())
      {
        initialize ();
      }
  }

  /**
   * @details
   * Insert the new node between the **next** pointer and the node
   * pointed by it.
   *
   * Used by lists to link new nodes to the list head.
   */
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

  /**
   * @details
   * Insert the new node between the **previous** pointer and the node
   * pointed by it.
   *
   * Used by lists to link new nodes to the list tail.
   */
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
   * Update both neighbours to
   * point to each other, practically removing the node from the list.
   *
   * The node is returned to the initial state (empty), with both
   * pointers pointing to itself.
   */
  void
  double_list_links_base::unlink (void)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() %p \n", __func__, this);
#endif

    // Make neighbours point to each other.
    // This works even if the node is already unlinked,
    // so no need for an extra test.
    previous_->next_ = next_;
    next_->previous_ = previous_;

    // Reset the unlinked node to the initial state,
    // with both pointers pointing to itself.
    initialize ();
  }

  /**
   * @details
   * To be _linked_, both pointers must point to different nodes
   * than itself (double list requirement).
   */
  bool
  double_list_links_base::linked (void) const
  {
    if (next_ == this || previous_ == this)
      {
        assert (next_ == this);
        assert (previous_ == this);
        return false;
      }
    return true;
  }

  // ==========================================================================

  /**
   * @warning
   * Not very safe, since the compiler may optimise out the code.
   */
#if defined(__GNUC__) && !defined(__clang__)
  // Prevent LTO to optimize out the code.
  // https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html
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
