/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------
/**
 * @file
 * @brief C++ header file with the declarations for the µOS++ intrusive
 * list iterator and list class templates.
 *
 * @details
 * The `intrusive-list.h` header file contains the C++ declarations of the
 * `intrusive_list_iterator` and `intrusive_list` class templates.
 *
 * The class implementations are in @ref intrusive-list-inlines.h.
 */

#ifndef MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_
#define MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_

// ----------------------------------------------------------------------------

#include "doubly-list.h"

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

// ----------------------------------------------------------------------------

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif // defined(__clang__)
#endif // defined(__GNUC__)

namespace micro_os_plus::utils
{
  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-intrusive-lists
   * @brief A class template for the intrusive list iterator.
   *
   * @tparam T Type of object that includes the intrusive node.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam MP Name of the intrusive node member in object T.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This class provides an interface similar to `std::list::iterator`, except
   * that it keeps track of the offset where the intrusive list element is
   * located in the parent object. It supports bidirectional iteration and
   * access to the underlying object and node.
   *
   * @headerfile lists.h "micro-os-plus/utils/lists.h"
   */
  template <class T, class N, N T::* MP, class U = T>
  class intrusive_list_iterator
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
    constexpr intrusive_list_iterator () noexcept;

    /**
     * @brief Construct an iterator from a node pointer.
     *
     * @param node Pointer to the node to which the iterator should point.
     */
    constexpr explicit intrusive_list_iterator (
        iterator_pointer const node) noexcept;

    /**
     * @brief Construct an iterator from a reference to an element.
     *
     * @param element Reference to the element to which the iterator should
     * point.
     *
     * @note
     * This constructor is only available when `U` is derived from (or is
     * the same type as) `T`, as required by `std::derived_from<U, T>`.
     */
    constexpr explicit intrusive_list_iterator (reference element) noexcept
      requires std::derived_from<U, T>;

    // DO NOT delete the copy constructors, since this implies that
    // the default ones will be used.

    /**
     * @brief Pointer access operator.
     *
     * @return Pointer to the value pointed to by the iterator.
     */
    [[nodiscard]] pointer
    operator->() const noexcept;

    /**
     * @brief Dereference operator.
     *
     * @return Reference to the value pointed to by the iterator.
     */
    [[nodiscard]] reference
    operator* () const noexcept;

    /**
     * @brief Pre-increment operator.
     *
     * @return Reference to the incremented iterator.
     */
    constexpr intrusive_list_iterator&
    operator++ () noexcept;

    /**
     * @brief Post-increment operator.
     *
     * @return Iterator before increment.
     */
    constexpr intrusive_list_iterator
    operator++ (int) noexcept;

    /**
     * @brief Pre-decrement operator.
     *
     * @return Reference to the decremented iterator.
     */
    constexpr intrusive_list_iterator&
    operator-- () noexcept;

    /**
     * @brief Post-decrement operator.
     *
     * @return Iterator before decrement.
     */
    constexpr intrusive_list_iterator
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
    operator== (const intrusive_list_iterator& other) const noexcept;

    /**
     * @brief Get the object pointer from the intrusive node.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the parent object.
     */
    [[nodiscard]] pointer
    get_pointer (void) const noexcept;

    /**
     * @brief Retrieve the iterator pointer for the current node.
     *
     * @par Parameters
     *  None.
     * @return The iterator pointer corresponding to the current node.
     */
    [[nodiscard]] constexpr iterator_pointer
    get_iterator_pointer (void) const noexcept;

  protected:
    /**
     * @brief Pointer to intrusive node.
     *
     * @details
     * Stores the address of the current intrusive node in the list.
     */
    iterator_pointer node_;
  };

  // ==========================================================================

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"
#endif // defined(__clang__)
/**
 * @ingroup micro-os-plus-utils-lists-intrusive-lists
 * @brief A class template for a list of nodes which store the links inside
 * themselves as intrusive nodes.
 *
 * @tparam T Type of object that includes the intrusive node.
 * @tparam N Type of intrusive node with the next & previous links.
 * @tparam MP Name of the intrusive node member in object T.
 * @tparam L Type of the links node (one of `doubly_list_links` or
 * `static_doubly_list_links`).
 * @tparam U Type stored in the list, derived from T.
 *
 * @details
 * This class implements an intrusive doubly linked list, where each object
 * stores its own link node as a member. The list maintains a pair of head and
 * tail pointers, allowing efficient insertion, removal, and iteration. The
 * intrusive approach eliminates the need for separate node allocations, as the
 * links are embedded within the objects themselves.
 *
 * The template parameter `MP` specifies the member pointer to the intrusive
 * node within the object, enabling the list to compute the address of the
 * parent object from the node pointer. This design supports both regular and
 * statically allocated lists, depending on the type used for `L`.
 *
 * Iterators provide access to the objects in the list, supporting
 * bidirectional traversal.
 *
 * **Example**
 *
 * @code{.cpp}
 * namespace os = micro_os_plus;
 * using threads_list = os::utils::intrusive_list<
 *   thread, os::utils::doubly_list_links, &thread::child_links_>;
 * @endcode
 *
 * For statically allocated lists, set L=static_doubly_list_links.
 *
 * @headerfile lists.h "micro-os-plus/utils/lists.h"
 */
#if defined(__clang__)
#pragma clang diagnostic pop
#endif // defined(__clang__)

  template <class T, doubly_list_links_node N, N T::* MP,
            doubly_list_links_node L = doubly_list_links, class U = T>
  class intrusive_list : public doubly_list<N, L>
  {
  public:
    /**
     * @brief Type of the list links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

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
     * @brief Type of iterator over the values.
     */
    using iterator = intrusive_list_iterator<T, N, MP, U>;

    /**
     * @brief Type of reverse iterator over the values.
     */
    using reverse_iterator = std::reverse_iterator<iterator>;

    /**
     * @brief Type indicating if the links node is statically allocated
     */
    using is_statically_allocated =
        typename links_type::is_statically_allocated;

    /**
     * @brief Type of reference to the iterator internal pointer.
     */
    using iterator_pointer = N*;

    /**
     * @brief Type of pointer difference.
     */
    using difference_type = ptrdiff_t;

    /**
     * @brief Construct an intrusive doubly linked list.
     */
    constexpr intrusive_list () noexcept;

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of `intrusive_list` instances is explicitly disallowed to
     * prevent accidental duplication, which could compromise the integrity of
     * the list structure.
     */
    intrusive_list (const intrusive_list&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of `intrusive_list` instances is explicitly disallowed to avoid
     * invalid or inconsistent links within the list that could result from
     * moving lists.
     */
    intrusive_list (intrusive_list&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list objects, which could lead to corruption of the list
     * structure.
     */
    intrusive_list&
    operator= (const intrusive_list&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving lists.
     */
    intrusive_list&
    operator= (intrusive_list&&)
        = delete;

    /**
     * @brief Destruct the list.
     */
    constexpr ~intrusive_list ();

  public:
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
     * @brief Add a node to the tail of the list.
     *
     * @param [in] node Reference to a list node.
     * @par Returns
     *  Nothing.
     */
    void
    link_tail (reference node) noexcept;

    /**
     * @brief Add a node to the head of the list.
     *
     * @param [in] node Reference to a list node.
     * @par Returns
     *  Nothing.
     */
    void
    link_head (reference node) noexcept;

    /**
     * @brief Unlink the last element from the list.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the last element in the list, or `nullptr` if the
     * list is empty.
     */
    [[nodiscard]] pointer
    unlink_tail (void) noexcept;

    /**
     * @brief Unlink the first element from the list.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the first element in the list, or `nullptr` if the
     * list is empty.
     */
    [[nodiscard]] pointer
    unlink_head (void) noexcept;

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     *
     * @return An iterator positioned at the first element.
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

    // ------------------------------------------------------------------------
  protected:
    /**
     * @brief Get the address of the object from the intrusive node pointer.
     *
     * @param node Pointer to the intrusive node.
     * @return A pointer to the parent object containing the node.
     */
    [[nodiscard]] pointer
    get_pointer (iterator_pointer node) const noexcept;
  };

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif // defined(__GNUC__)

// ----------------------------------------------------------------------------

#endif // defined(__cplusplus)

// ============================================================================
// Templates & constexpr implementations.

#include "inlines/intrusive-list-inlines.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_

// ----------------------------------------------------------------------------
