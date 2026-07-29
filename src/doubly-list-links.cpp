/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
 */

/**
 * @file
 * @brief C++ source file with the implementations for the µOS++ doubly
 * linked list link node classes.
 *
 * @details
 * The `doubly-list-links.cpp` source file contains the C++ implementations
 * of the non-inline methods for the `doubly_list_links_base` and
 * `static_doubly_list_links` classes, providing an efficient and lightweight
 * linked list management system tailored for embedded applications.
 *
 * The class definitions are in the @ref doubly-list-links.h file.
 */

// ----------------------------------------------------------------------------

#if __has_include("micro-os-plus/project-config.h")
#include "micro-os-plus/project-config.h"
#endif // __has_include("micro-os-plus/project-config.h")

#if __has_include("micro-os-plus/utils/lists-defines.h")
#include "micro-os-plus/utils/lists-defines.h"
#endif // __has_include("micro-os-plus/utils/lists-defines.h")

#include "micro-os-plus/utils/lists/doubly-list-links.h"

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
   * An _uninitialised_ node is a node with its pointers set to `nullptr`.
   * Only statically allocated nodes in their initial state are considered
   * uninitialised. Regular (dynamically or automatically allocated) nodes are
   * always initialised during construction, so this method will only return
   * `false` for statically allocated nodes that have not yet been initialised.
   */
  bool
  doubly_list_links_base::initialised (void) const noexcept
  {
    if (previous_ == nullptr || next_ == nullptr)
      {
        assert (previous_ == nullptr);
        assert (next_ == nullptr);
        return false;
      }
    return true;
  }

  /**
   * @details
   * If the statically allocated list is still in the initial _uninitialised_
   * state (with both pointers `nullptr`), this method initialises the list to
   * the empty state, with both pointers pointing to itself.
   *
   * For non-statically initialised lists, this method is ineffective, since
   * the node is always initialised at construct time.
   *
   * @note
   * This method must be manually called for a statically allocated list before
   * inserting elements or performing any other operations.
   */
  bool
  doubly_list_links_base::initialise_once (void) noexcept
  {
    if (!initialised ())
      {
        initialise ();
        return true;
      }
    return false;
  }

  /**
   * @details
   * Insert the new node between the **next** pointer and the node pointed by
   * it. This operation is used by lists to link new nodes to the list head.
   * The new node's `previous_` pointer is set to the current node, and its
   * `next_` pointer is set to the current node's `next_`. The neighbouring
   * nodes are updated to point to the new node, maintaining the integrity of
   * the doubly-linked list.
   */
  void
  doubly_list_links_base::link_next (doubly_list_links_base* node) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() link %p after %p\n", __func__,
                   static_cast<const void*> (node),
                   static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
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
   * Insert the new node between the **previous** pointer and the node pointed
   * by it. Used by lists to link new nodes to the list tail. The new node's
   * `next_` pointer is set to the current node, and its `previous_` pointer is
   * set to the current node's `previous_`. The neighbouring nodes are updated
   * to point to the new node, maintaining the integrity of the doubly-linked
   * list.
   */
  void
  doubly_list_links_base::link_previous (doubly_list_links_base* node) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() link %p before %p\n", __func__,
                   static_cast<const void*> (node),
                   static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    assert (previous_ != nullptr);
    assert (previous_->next_ != nullptr);

    // Make the new node point to its new neighbours.
    node->next_ = this;
    node->previous_ = previous_;

    previous_->next_ = node;
    previous_ = node;
  }

  /**
   * @details
   * Update both neighbours to point to each other, effectively removing the
   * node from the list. The node is then returned to the initial state
   * (empty), with both pointers pointing to itself. This operation is safe to
   * call even if the node is already unlinked.
   */
  void
  doubly_list_links_base::unlink (void) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() %p \n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
#endif // !defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    // Make neighbours point to each other.
    // This works even if the node is already unlinked,
    // so no need for an extra test.
    previous_->next_ = next_;
    next_->previous_ = previous_;

    // Reset the unlinked node to the initial state,
    // with both pointers pointing to itself.
    initialise ();
  }

  // ==========================================================================

  /**
   * @details
   * Sets both the `next_` and `previous_` pointers to `nullptr`, marking the
   * node as uninitialised. This is typically used for statically allocated
   * nodes to explicitly place them in an uninitialised state.
   *
   * @warning Not very safe, since the compiler may optimise out the code.
   */
#if defined(__GNUC__) && !defined(__clang__)
  // no Inter-Procedural Analysis
  // Prevent LTO to optimize out the code.
  __attribute__ ((noipa))
#endif
  void
  static_doubly_list_links::reset () noexcept
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
