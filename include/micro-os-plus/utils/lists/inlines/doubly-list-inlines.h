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

// ----------------------------------------------------------------------------

#if !defined(MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_)
#error \
    "Do not include this file directly; use <micro-os-plus/utils/doubly-list.h>."
#endif // MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_

/**
 * @file
 * @brief C++ header file with the inline implementations for the
 * `doubly_list_iterator` and `doubly_list` class templates.
 *
 * @details
 * Class definitions are located in @ref doubly-list.h.
 * Inline methods are separated into this file to improve project
 * structure and maintainability.
 */

#ifndef MICRO_OS_PLUS_UTILS_INLINES_DOUBLY_LIST_INLINES_H_
#define MICRO_OS_PLUS_UTILS_INLINES_DOUBLY_LIST_INLINES_H_

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

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
   * The default constructor for `doubly_list_iterator` initialises the
   * iterator to a null state, meaning it does not point to any node in the
   * list. This is typically used to create an "end" iterator or to initialise
   * an iterator variable before assigning it to a valid node.
   *
   * @note
   * The internal node pointer is value-initialised (set to `nullptr`),
   * ensuring that the iterator is safe to use in comparisons and will not
   * dereference an invalid address.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>::doubly_list_iterator () noexcept
      : node_{}
  {
  }

  /**
   * @details
   * This constructor creates a `doubly_list_iterator` that points to the
   * specified node. The internal node pointer is set to the provided node
   * address, allowing the iterator to traverse the list starting from that
   * node. This constructor is typically used to initialise an iterator to a
   * specific position within the list, such as the beginning or end.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>::doubly_list_iterator (
      iterator_pointer const node) noexcept
      : node_{ node }
  {
  }

  /**
   * @details
   * This constructor creates a `doubly_list_iterator` that points to the
   * specified element. Since `doubly_list` elements are the nodes themselves
   * (T derives from `doubly_list_links_base`), the internal node pointer is
   * set to the address of the element directly. This is typically used to
   * initialise an iterator to a specific object in the list.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>::doubly_list_iterator (
      reference element) noexcept
      : node_{ &element }
  {
  }

  /**
   * @details
   * The pointer access operator (`operator->`) allows the iterator to provide
   * direct access to the value pointed to by the iterator, mimicking the
   * behavior of a raw pointer. Internally, it calls `get_pointer()`, which
   * computes and returns a pointer to the underlying value or object
   * associated with the current node in the list.
   */
  template <class T, class N, class U>
  constexpr typename doubly_list_iterator<T, N, U>::pointer
  doubly_list_iterator<T, N, U>::operator->() const noexcept
  {
    return get_pointer ();
  }

  /**
   * @details
   * The dereference operator (`operator*`) provides access to the value or
   * object pointed to by the iterator. Internally, it calls `get_pointer()` to
   * obtain a pointer to the underlying value or object associated with the
   * current node in the list, and then dereferences it to return a reference.
   *
   * This allows the iterator to be used in a manner similar to standard C++
   * iterators, enabling direct access to the list element for reading or
   * modification.
   */
  template <class T, class N, class U>
  constexpr typename doubly_list_iterator<T, N, U>::reference
  doubly_list_iterator<T, N, U>::operator* () const noexcept
  {
    return *get_pointer ();
  }

  /**
   * @details
   * The pre-increment operator (`operator++`) advances the iterator to the
   * next node in the list. It updates the internal node pointer to point to
   * the node returned by the current node's `next()` method. This allows the
   * iterator to traverse the list in the forward direction, following the
   * linked structure.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>&
  doubly_list_iterator<T, N, U>::operator++ () noexcept
  {
    node_ = static_cast<N*> (node_->next ());
    return *this;
  }

  /**
   * @details
   * The post-increment operator (`operator++(int)`) advances the iterator to
   * the next node in the list, but returns a copy of the iterator as it was
   * before the increment. This allows iteration logic that requires access to
   * the current element before moving to the next one, following the standard
   * C++ iterator semantics for post-increment.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>
  doubly_list_iterator<T, N, U>::operator++ (int) noexcept
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->next ());
    return tmp;
  }

  /**
   * @details
   * The pre-decrement operator (`operator--`) moves the iterator to the
   * previous node in the list. It updates the internal node pointer to point
   * to the node returned by the current node's `previous` pointer. This
   * enables backward traversal of the list, following the linked structure in
   * reverse.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>&
  doubly_list_iterator<T, N, U>::operator-- () noexcept
  {
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return *this;
  }

  /**
   * @details
   * The post-decrement operator (`operator--(int)`) moves the iterator to the
   * previous node in the list, but returns a copy of the iterator as it was
   * before the decrement. This enables iteration logic that requires access to
   * the current element before moving backward, following the standard C++
   * iterator semantics for post-decrement.
   */
  template <class T, class N, class U>
  constexpr doubly_list_iterator<T, N, U>
  doubly_list_iterator<T, N, U>::operator-- (int) noexcept
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return tmp;
  }

  /**
   * @details
   * The equality comparison operator (`operator==`) checks whether two
   * iterators point to the same node in the list by comparing their internal
   * node pointers. This allows for standard iterator comparisons, such as
   * detecting the end of a range or verifying if two iterators refer to the
   * same position.
   */
  template <class T, class N, class U>
  constexpr bool
  doubly_list_iterator<T, N, U>::operator== (
      const doubly_list_iterator& other) const noexcept
  {
    return node_ == other.node_;
  }

  /**
   * @details
   * Returns the internal node pointer that the iterator currently references.
   * This is useful for advanced list operations or when direct access to the
   * underlying node structure is required, such as for interoperability with
   * other list utilities or for debugging purposes.
   */
  template <class T, class N, class U>
  constexpr typename doubly_list_iterator<T, N, U>::iterator_pointer
  doubly_list_iterator<T, N, U>::get_iterator_pointer () const noexcept
  {
    return node_;
  }

  /**
   * @details
   * Returns the node pointer cast to the value pointer type. In the
   * typical usage where all three template parameters are the same type
   * (`T`, `N`, `U` all equal), this is a trivial static cast.
   */
  template <class T, class N, class U>
  constexpr typename doubly_list_iterator<T, N, U>::pointer
  doubly_list_iterator<T, N, U>::get_pointer (void) const noexcept
  {
    return static_cast<pointer> (node_);
  }

  // ==========================================================================

  /**
   * @details
   * For non-statically allocated lists, the initial list status is _empty_
   * after construction, meaning the list is ready for use and contains no
   * nodes.
   *
   * For statically allocated lists, the list remains _uninitialised_ after
   * construction, with its internal pointers set to `nullptr`. Such lists
   * require explicit initialisation (typically via `initialise_once()`) before
   * use.
   *
   * This constructor does not clear or modify the internal pointers for
   * statically allocated lists, relying on zero-initialisation by the runtime.
   * For dynamically allocated lists, it calls `clear()` to ensure the list is
   * in a valid empty state.
   *
   * @par The rule of five
   * The copy constructor, move constructor, copy assignment operator, and move
   * assignment operator are explicitly deleted to prevent accidental copying
   * or moving of `doubly_list` objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  doubly_list<T, L>::doubly_list () noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)
    trace::printf ("%s() @%p \n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)

    if constexpr (is_statically_allocated::value)
      {
        // By all means, do not add any code to clear the pointers, since
        // the links node was statically initialised.
      }
    else
      {
        clear ();
      }
  }

  /**
   * @details
   * Normally at this point there must be no nodes in the list.
   * However, for statically allocated lists, this
   * might not be always true due to their lifetime and initialization
   * patterns.
   *
   * @note
   * In debug mode, the destructor emits a warning if the list is not empty
   * when destroyed, helping to catch potential resource leaks or logic errors
   * in list management.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  constexpr doubly_list<T, L>::~doubly_list ()
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)
    trace::printf ("%s() @%p \n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)

    // Perhaps enable it for non statically allocated lists.
    // assert (empty ());
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    if (!empty ())
      {
        trace::printf ("%s() @%p list not empty\n", __func__,
                       static_cast<const void*> (this));
      }
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
  }

  /**
   * @details
   * An uninitialised node is a node with any of the pointers set to `nullptr`.
   * Only statically allocated nodes in the initial state are considered
   * _uninitialised_. For dynamically allocated lists, this method always
   * returns `true` since their nodes are explicitly initialised during
   * construction.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  bool
  doubly_list<T, L>::initialised (void) const noexcept
  {
    if constexpr (is_statically_allocated::value)
      {
        return links_.initialised ();
      }
    else
      {
        return true;
      }
  }

  /**
   * @details
   * If the statically allocated list is still in the initial
   * _uninitialised_ state (with both pointers null), this method
   * initialises the list to the empty state, with both pointers
   * pointing to itself. For non-statically initialised lists,
   * this method has no effect.
   *
   * @note
   * Must be manually called for statically allocated lists before
   * inserting elements or performing any other operations.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  bool
  doubly_list<T, L>::initialise_once (void) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p\n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    if constexpr (is_statically_allocated::value)
      {
        return links_.initialise_once ();
      }
    else
      {
        return false;
      }
  }

  /**
   * @details
   * Checks whether the list contains any nodes.
   * The list is considered empty if the internal links node is not linked to
   * any other nodes. This method provides a fast way to determine if the list
   * has elements or is currently empty.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  [[nodiscard]] constexpr bool
  doubly_list<T, L>::empty (void) const noexcept
  {
    // If the links node is not linked, the list is empty.
    return !links_.linked ();
  }

  /**
   * @details
   * The `clear()` method initialises the mandatory internal links node so that
   * both its `previous_` and `next_` pointers refer to itself. This marks the
   * list as empty and ensures it is in a safe, known state, ready for new
   * insertions. This operation is typically used to reset the list, removing
   * all elements and breaking any existing links.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  void
  doubly_list<T, L>::clear (void) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p\n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    links_.initialise ();
  }

  /**
   * @details
   * Returns a pointer to the first node in the list.
   * If the list is empty, this will point to the internal links node itself,
   * which can be used to detect the end of the list during iteration.
   * The returned pointer should be checked against `end()` or the sentinel
   * node to determine if the list contains any elements.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  constexpr typename doubly_list<T, L>::pointer
  doubly_list<T, L>::head (void) const noexcept
  {
    return static_cast<pointer> (links_.next ());
  }

  /**
   * @details
   * Returns a pointer to the last node in the list.
   * If the list is empty, this will point to the internal links node itself,
   * which can be used to detect the end of the list during reverse iteration.
   * The returned pointer should be checked against the sentinel node to
   * determine if the list contains any elements.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  constexpr typename doubly_list<T, L>::pointer
  doubly_list<T, L>::tail (void) const noexcept
  {
    return static_cast<pointer> (links_.previous ());
  }

  /**
   * @details
   * Adds a new node to the end (tail) of the list.
   * For statically allocated lists, asserts that the list is already
   * initialised. The new node is linked after the current tail node, updating
   * the list structure accordingly. This operation does not check for
   * duplicate nodes or whether the node is already linked elsewhere.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  void
  doubly_list<T, L>::link_tail (reference node) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p %p\n", __func__, static_cast<const void*> (this),
                   static_cast<const void*> (&node));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    if constexpr (is_statically_allocated::value)
      {
        assert (links_.initialised ());
      }

    // Add new node at the end of the list.
    tail ()->link_next (&node);
  }

  /**
   * @details
   * Adds a new node to the beginning (head) of the list.
   * For statically allocated lists, asserts that the list is already
   * initialised. The new node is linked before the current head node, updating
   * the list structure accordingly. This operation does not check for
   * duplicate nodes or whether the node is already linked elsewhere.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  void
  doubly_list<T, L>::link_head (reference node) noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p %p\n", __func__, static_cast<const void*> (this),
                   static_cast<const void*> (&node));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    if constexpr (is_statically_allocated::value)
      {
        assert (links_.initialised ());
      }

    // Add the new node at the head of the list.
    head ()->link_previous (&node);
  }

  /**
   * @details
   * Returns an iterator to the first element in the list.
   * For statically allocated lists, asserts that the list is already
   * initialised. The iterator will point to the node after the internal links
   * node (the head). If the list is empty, the iterator will compare equal to
   * `end()`.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  typename doubly_list<T, L>::iterator
  doubly_list<T, L>::begin () const noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p\n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    if constexpr (is_statically_allocated::value)
      {
        assert (links_.initialised ());
      }

    return iterator{ static_cast<iterator_pointer> (links_.next ()) };
  }

  /**
   * @details
   * Returns an iterator to the position after the last element in the list
   * (the end iterator). This iterator points to the internal links node, which
   * acts as a sentinel. It is used as the past-the-end marker in iteration and
   * comparison operations. The end iterator does not reference any valid list
   * element.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  typename doubly_list<T, L>::iterator
  doubly_list<T, L>::end () const noexcept
  {
#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)
    trace::printf ("%s() @%p\n", __func__, static_cast<const void*> (this));
#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)

    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<links_type*> (&links_)) };
  }

  /**
   * @details
   * Returns a reverse iterator to the last element in the list.
   * Equivalent to `reverse_iterator{ end() }`. Traversal proceeds
   * from the tail towards the head.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  typename doubly_list<T, L>::reverse_iterator
  doubly_list<T, L>::rbegin () const noexcept
  {
    return reverse_iterator{ end () };
  }

  /**
   * @details
   * Returns a reverse iterator to the position before the first element
   * in the list. Equivalent to `reverse_iterator{ begin() }`. Used as
   * the past-the-end marker for reverse-direction iteration.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  typename doubly_list<T, L>::reverse_iterator
  doubly_list<T, L>::rend () const noexcept
  {
    return reverse_iterator{ begin () };
  }

  /**
   * @details
   * Returns the address of the `links_` member directly. This method is
   * required by derived classes (such as `intrusive_list`) when
   * constructing their `end()` iterator, where a direct reference to
   * the protected member is not accessible from the derived scope.
   */
  template <doubly_list_links_node T, doubly_list_links_node L>
  constexpr const typename doubly_list<T, L>::links_type*
  doubly_list<T, L>::links_pointer (void) const noexcept
  {
    return &links_;
  }

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_INLINES_DOUBLY_LIST_INLINES_H_

// ----------------------------------------------------------------------------
