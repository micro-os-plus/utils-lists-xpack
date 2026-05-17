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
/**
 * @file
 * @brief C++ header file with the declarations for the µOS++ doubly linked
 * list iterator and list class templates.
 *
 * @details
 * The `doubly-list.h` header file contains the C++ declarations of the
 * `doubly_list_iterator` and `doubly_list` class templates.
 *
 * The class implementations are in @ref doubly-list-inlines.h.
 */

#ifndef MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_
#define MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_

// ----------------------------------------------------------------------------

#include "doubly-list-links.h"

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

namespace micro_os_plus::utils
{
  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-doubly-lists
   * @brief A class template for a doubly linked list iterator.
   *
   * @tparam T Type of object returned by the iterator.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This iterator provides an interface similar to `std::list::iterator` for
   * traversing a doubly linked list. It supports bidirectional iteration and
   * access to the underlying node and value. In a typical doubly linked list,
   * all types are `doubly_list_links`.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  template <class T, class N = T, class U = T>
  class doubly_list_iterator
  {
  public:
    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
     */
    using reference = value_type&;

    /**
     * @brief Type of reference to the iterator internal pointer.
     */
    using iterator_pointer = N*;

    /**
     * @brief Type of pointer difference.
     */
    using difference_type = ptrdiff_t;

    /**
     * @brief Category of iterator.
     */
    using iterator_category = std::bidirectional_iterator_tag;

    // ------------------------------------------------------------------------

    /**
     * @brief Default constructor. Constructs an iterator pointing to
     * `nullptr`.
     */
    constexpr doubly_list_iterator () noexcept;

    /**
     * @brief Construct an iterator from a node pointer.
     *
     * @param node Pointer to the node to which the iterator should point.
     */
    constexpr explicit doubly_list_iterator (
        iterator_pointer const node) noexcept;

    /**
     * @brief Construct an iterator from a reference to an element.
     *
     * @param element Reference to the element to which the iterator should
     * point.
     */
    constexpr explicit doubly_list_iterator (reference element) noexcept;

    // DO NOT delete the copy constructors, since the default ones are
    // used.

    /**
     * @brief Pointer access operator.
     *
     * @return Pointer to the value pointed to by the iterator.
     */
    [[nodiscard]] constexpr pointer
    operator->() const noexcept;

    /**
     * @brief Dereference operator.
     *
     * @return Reference to the value pointed to by the iterator.
     */
    [[nodiscard]] constexpr reference
    operator* () const noexcept;

    /**
     * @brief Pre-increment operator.
     *
     * @return Reference to the incremented iterator.
     */
    constexpr doubly_list_iterator&
    operator++ () noexcept;

    /**
     * @brief Post-increment operator.
     *
     * @return Iterator before increment.
     */
    constexpr doubly_list_iterator
    operator++ (int) noexcept;

    /**
     * @brief Pre-decrement operator.
     *
     * @return Reference to the decremented iterator.
     */
    constexpr doubly_list_iterator&
    operator-- () noexcept;

    /**
     * @brief Post-decrement operator.
     *
     * @return Iterator before decrement.
     */
    constexpr doubly_list_iterator
    operator-- (int) noexcept;

    /**
     * @brief Equality comparison operator.
     *
     * @param other Iterator to compare with.
     * @return `true` if both iterators point to the same node, `false`
     * otherwise.
     *
     * @note
     * The inequality operator (`!=`) is synthesised automatically by
     * the compiler from this operator (C++20).
     */
    [[nodiscard]] constexpr bool
    operator== (const doubly_list_iterator& other) const noexcept;

    /**
     * @brief Get a pointer to the value pointed to by the iterator.
     *
     * @par Parameters
     *	 None.
     * @return Pointer to the value.
     */
    [[nodiscard]] constexpr pointer
    get_pointer (void) const noexcept;

    /**
     * @brief Get the internal iterator pointer (node pointer).
     *
     * @par Parameters
     *	 None.
     * @return Pointer to the node.
     */
    [[nodiscard]] constexpr iterator_pointer
    get_iterator_pointer (void) const noexcept;

  protected:
    /**
     * @brief Pointer to the node.
     */
    iterator_pointer node_;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-doubly-lists
   * @brief A class template for a doubly linked list of nodes.
   *
   * @tparam T Type of the elements linked into the list, derived from class
   * `doubly_list_links_base`.
   * @tparam L Type of the links node (either `doubly_list_links` or
   * `static_doubly_list_links`).
   *
   * @details
   * This class implements a generic doubly linked list, maintaining a pair of
   * head and tail pointers to allow efficient iteration and manipulation of
   * nodes. The list elements (of type T) must be derived from
   * `doubly_list_links_base` (typically from `doubly_list_links`) and extended
   * with the required payload, which may be the actual content or a pointer to
   * it.
   *
   * The class uses composition for the links node, rather than inheritance, to
   * avoid inheriting unwanted methods. Iterators return pointers to the list
   * elements, enabling traversal of the list in a manner similar to standard
   * containers.
   *
   * @note
   * `std::reverse_iterator` adaptors (`rbegin()`/`rend()`) are provided
   * as thin wrappers around the bidirectional `iterator`.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  template <doubly_list_links_node T,
            doubly_list_links_node L = doubly_list_links>
  class doubly_list
  {
  public:
    /**
     * @brief Type of the links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = T;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
     */
    using reference = value_type&;

    /**
     * @brief Type of iterator over the values.
     */
    using iterator = doubly_list_iterator<value_type>;

    /**
     * @brief Type of reverse iterator over the values.
     */
    using reverse_iterator = std::reverse_iterator<iterator>;

    /**
     * @brief Type of reference to the iterator internal pointer.
     */
    using iterator_pointer = value_type*;

    /**
     * @brief Type indicating if the links node is statically allocated.
     */
    using is_statically_allocated =
        typename links_type::is_statically_allocated;

    /**
     * @brief Construct a doubly linked list.
     */
    doubly_list () noexcept;

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of `doubly_list` instances is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    doubly_list (const doubly_list&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of `doubly_list` instances is explicitly disallowed to avoid
     * invalid or inconsistent links within the list that could result from
     * moving lists.
     */
    doubly_list (doubly_list&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list objects, which could lead to corruption of the list
     * structure.
     */
    doubly_list&
    operator= (const doubly_list&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving lists.
     */
    doubly_list&
    operator= (doubly_list&&)
        = delete;

    /**
     * @brief Destruct the list.
     */
    constexpr ~doubly_list ();

  public:
    /**
     * @brief Check if the list is initialised
     * (only statically allocated lists can be uninitialised).
     *
     * @par Parameters
     *  None.
     * @retval true The list was initialised.
     * @retval false The list was **not** initialised.
     */
    [[nodiscard]] bool
    initialised (void) const noexcept;

    /**
     * @brief Initialise the list only at first run.
     *
     * @par Parameters
     *  None.
     * @returns
     *  true if the list was initialised, false otherwise.
     */
    bool
    initialise_once (void) noexcept;

    /**
     * @brief Check if the list is empty.
     *
     * @par Parameters
     *  None.
     * @retval true The list has **no** nodes.
     * @retval false The list has **at least one** node.
     */
    [[nodiscard]] constexpr bool
    empty (void) const noexcept;

    /**
     * @brief Clear the list.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    clear (void) noexcept;

    /**
     * @brief Get the list **head**.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the head node.
     */
    [[nodiscard]] constexpr pointer
    head (void) const noexcept;

    /**
     * @brief Get the list **tail**.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the tail node.
     */
    [[nodiscard]] constexpr pointer
    tail (void) const noexcept;

    /**
     * @brief Add a node to the tail of the list.
     *
     * @param [in] node Reference to the node to add.
     * @par Returns
     *   Nothing.
     */
    void
    link_tail (reference node) noexcept;

    /**
     * @brief Add a node to the head of the list.
     *
     * @param [in] node Reference to the node to add.
     * @par Returns
     *   Nothing.
     */
    void
    link_head (reference node) noexcept;

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     *
     * @return An iterator to the first element.
     */
    [[nodiscard]] iterator
    begin () const noexcept;

    /**
     * @brief Iterator end.
     *
     * @return An iterator positioned after the last element.
     */
    [[nodiscard]] iterator
    end () const noexcept;

    /**
     * @brief Reverse iterator begin.
     *
     * @return A reverse iterator positioned at the last element.
     */
    [[nodiscard]] reverse_iterator
    rbegin () const noexcept;

    /**
     * @brief Reverse iterator end.
     *
     * @return A reverse iterator positioned before the first element.
     */
    [[nodiscard]] reverse_iterator
    rend () const noexcept;

    // Required in derived class iterator end(), where direct
    // access to member fails.
    /**
     * @brief Get the address of the node storing the list links.
     *
     * @par Parameters
     *  None.
     * @return A pointer to the internal links node.
     *
     * @details
     * Returns the address of the `links_` member. This method is
     * required by derived classes (such as `intrusive_list`) when
     * constructing their `end()` iterator, where a direct reference
     * to the protected member is not accessible.
     */
    [[nodiscard]] constexpr const links_type*
    links_pointer (void) const noexcept;

    // ------------------------------------------------------------------------

  protected:
    /**
     * @brief The list top node used to point to **head** and **tail** nodes.
     *
     * @details
     * This member stores the internal links node for the list. The **next**
     * pointer of this node points to the head of the list, and the
     * **previous** pointer points to the tail. For an empty list, both
     * pointers refer to the node itself, simplifying list management and
     * boundary checks.
     */
    links_type links_;
  };

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ============================================================================
// Templates & constexpr implementations.

#include "inlines/doubly-list-inlines.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_

// ----------------------------------------------------------------------------
