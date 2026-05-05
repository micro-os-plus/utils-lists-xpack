/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------

#if !defined(MICRO_OS_PLUS_UTILS_DOUBLE_LIST_LINKS_H_)
#error \
    "Do not include this file directly; use <micro-os-plus/utils/double-list-links.h>."
#endif // MICRO_OS_PLUS_UTILS_DOUBLE_LIST_LINKS_H_

/**
 * @file
 * @brief C++ header file with the inline implementations for the
 * `double_list_links_base`, `double_list_links`, and
 * `static_double_list_links` classes.
 *
 * @details
 * Class definitions are located in @ref double-list-links.h.
 * Inline methods are separated into this file to improve project
 * structure and maintainability.
 */

#ifndef MICRO_OS_PLUS_UTILS_DOUBLE_LIST_LINKS_INLINES_H_
#define MICRO_OS_PLUS_UTILS_DOUBLE_LIST_LINKS_INLINES_H_

// ----------------------------------------------------------------------------

#ifdef __cplusplus

// ----------------------------------------------------------------------------

#if defined(__GNUC__)
#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif
#endif

// ----------------------------------------------------------------------------

namespace micro_os_plus::utils
{
  // ==========================================================================

  /**
   * @details
   * This must be an empty constructor that does not modify the member
   * pointers, leaving them unchanged. For statically initialised lists, this
   * means both pointers remain as `nullptr`, representing an uninitialised
   * state. For regular (dynamically initialised) lists, the derived class
   * constructor will handle the initialisation of the pointers.
   *
   * @note
   * This design allows statically allocated objects to be safely
   * zero-initialised at startup (via BSS initialisation), ensuring that the
   * list links are in a known state before any constructors run. It also
   * avoids unnecessary writes for statically allocated objects.
   *
   * @warning
   * Code analysis tools may report:
   * - Member `previous_` was not initialized in constructor
   * - Member `next_` was not initialized in constructor
   * These warnings are expected and can be safely ignored in this context.
   *
   * @par The rule of five
   * The copy constructor, move constructor, copy assignment operator, and move
   * assignment operator are explicitly deleted to prevent accidental copying
   * or moving of `double_list_links_base` objects. This ensures the integrity
   * of the list structure, as duplicating or moving nodes could result in
   * invalid or inconsistent links within the list.
   */
  constexpr double_list_links_base::double_list_links_base () noexcept
  {
    // Must be empty! No members must be changed by this constructor!
  }

  /**
   * @details
   * This must be an empty destructor that does not modify or reset the member
   * pointers, leaving them unchanged. For both statically and dynamically
   * allocated lists, the destructor does not perform any cleanup or pointer
   * manipulation, as the list management is handled elsewhere.
   *
   * @note
   * This design avoids unnecessary writes or side effects during object
   * destruction, which is especially important for statically allocated
   * objects or when list nodes may be reused or re-initialised after
   * destruction.
   */
  constexpr double_list_links_base::~double_list_links_base ()
  {
    // Must be empty! No members must be changed by this destructor!
  }

  /**
   * @details
   * Sets both the `previous_` and `next_` pointers to point to this node
   * itself, marking the node as unlinked. This state is used to indicate that
   * the node is not currently part of any list.
   *
   * This method is called during initialisation and after a node is unlinked
   * from a list, ensuring the node is in a safe, standalone state and cannot
   * be traversed as part of a list.
   *
   * @note
   * After unlinking a node from a list, it must be returned to this state to
   * prevent accidental access through stale links.
   */
  constexpr void
  double_list_links_base::initialise (void) noexcept
  {
    previous_ = this;
    next_ = this;
  }

#pragma GCC diagnostic push

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

  /**
   * @details
   * Returns a pointer to the next node in the list.
   * If this node is the last in the list, the returned pointer may refer back
   * to the list's sentinel node (for example, the links node in the list
   * container) or to itself if the list is empty.
   *
   * @note
   * The returned pointer is of type `double_list_links_base*` and may need to
   * be cast to the appropriate derived type by the caller.
   */
  constexpr double_list_links_base*
  double_list_links_base::next (void) const noexcept
  {
    return next_;
  }

  /**
   * @details
   * Returns a pointer to the previous node in the list.
   * If this node is the first in the list, the returned pointer may refer back
   * to the list's sentinel node (such as the links node in the list container)
   * or to itself if the list is empty.
   *
   * @note
   * The returned pointer is of type `double_list_links_base*` and may need to
   * be cast to the appropriate derived type by the caller.
   */
  constexpr double_list_links_base*
  double_list_links_base::previous (void) const noexcept
  {
    return previous_;
  }

  /**
   * @details
   * To be _linked_, both pointers must point to different nodes than itself
   * (double list requirement). If either `next_` or `previous_` points to
   * `this`, the node is considered unlinked (empty state). This method checks
   * the node's linkage status for safe list operations.
   */
  constexpr bool
  double_list_links_base::linked (void) const noexcept
  {
    if (next_ == this || previous_ == this)
      {
        assert (next_ == this);
        assert (previous_ == this);
        return false;
      }
    return true;
  }

#pragma GCC diagnostic pop

  // ==========================================================================

  /**
   * @details
   * This constructor is intended for statically allocated list link nodes.
   * It must be empty and must not modify the member pointers, leaving them
   * unchanged. For statically allocated objects, the entire memory region is
   * zero-initialised at startup (via BSS initialisation), so both `previous_`
   * and `next_` pointers are set to `nullptr`, representing an uninitialised
   * state.
   *
   * This approach ensures that statically allocated lists are in a known, safe
   * state before any constructors run, and avoids unnecessary writes or side
   * effects during construction.
   *
   * @warning
   * Code analysis tools may report:
   * - Member `previous_` was not initialized in constructor
   * - Member `next_` was not initialized in constructor
   * These warnings are expected and can be safely ignored in this context.
   *
   * @par The rule of five
   * The copy constructor, move constructor, copy assignment operator, and move
   * assignment operator are explicitly deleted to prevent accidental copying
   * or moving of `static_double_list_links` objects. This ensures the
   * integrity of the list structure, as duplicating or moving nodes could
   * result in invalid or inconsistent links within the list.
   */
  constexpr static_double_list_links::static_double_list_links () noexcept
  {
    // Must be empty! No members must be changed by this constructor!
  }

#pragma GCC diagnostic push

#if defined(__clang__)
#pragma GCC diagnostic ignored "-Wdocumentation-unknown-command"
#endif
/**
 * @details
 * The destructor for `static_double_list_links` is intentionally left empty to
 * avoid modifying the member pointers. The goal is to revert the content to a
 * state similar to the statically initialised state (BSS zero), but recent
 * versions of GCC may optimize out any code that attempts to clear the
 * pointers (dead store elimination).
 *
 * As a result, explicit pointer clearing in the destructor is not reliable. If
 * pointer reset is required, use the `reset()` method explicitly, or clear
 * the memory before invoking the placement `new` constructor again.
 *
 * @warning
 * The code to clear the pointers is now commented out, since recent GCC
 * optimizes it out (dead store elimination). Depending on the version, there
 * might be some attributes to allow this, but they are not safe, for example
 * `__attribute__((optimize("no-lifetime-dse,no-dse,no-inline")))` did not
 * help. The workaround is to use `reset()` explicitly, or, even better, to
 * clear the memory before invoking the placement `new` constructor again.
 */
#pragma GCC diagnostic pop
  constexpr static_double_list_links::~static_double_list_links ()
  {
    // The goal is to revert the content to a state similar to the
    // statically initialised state (BSS zero).
    // Unfortunately GCC does not honour this.
    // next_ = nullptr;
    // previous_ = nullptr;
  }

  // ==========================================================================

  /**
   * @details
   * The constructor for `double_list_links` is used for regular (non-static)
   * list link nodes. It explicitly initialises the node by calling
   * `initialise()`, which sets both the `previous_` and `next_` pointers to
   * point to this node itself, marking it as unlinked and ready for use in a
   * list. This ensures that dynamically allocated or automatic list nodes
   * always start in a known, safe state, regardless of their memory contents
   * prior to construction.
   *
   * @note
   * For statically allocated nodes, the constructor is intentionally left
   * empty to allow BSS zero-initialisation. For dynamically allocated nodes,
   * explicit initialisation is required to avoid undefined pointer values.
   *
   *
   * @par The rule of five
   * The copy constructor, move constructor, copy assignment operator, and move
   * assignment operator are explicitly deleted to prevent accidental copying
   * or moving of `double_list_links` objects. This ensures the integrity of
   * the list structure, as duplicating or moving nodes could result in
   * invalid or inconsistent links within the list.
   */
  constexpr double_list_links::double_list_links () noexcept
  {
    // For regular (non static) classes the members
    // must be explicitly initialised.
    initialise ();
  }

  /**
   * @details
   * Destroys the node. No special cleanup is required as the class does not
   * manage resources.
   */
  constexpr double_list_links::~double_list_links ()
  {
  }

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_DOUBLE_LIST_LINKS_INLINES_H_

// ----------------------------------------------------------------------------
