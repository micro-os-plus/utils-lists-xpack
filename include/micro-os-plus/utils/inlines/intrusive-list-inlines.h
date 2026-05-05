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

#if !defined(MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_)
#error \
    "Do not include this file directly; use <micro-os-plus/utils/intrusive-list.h>."
#endif // MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_

/**
 * @file
 * @brief C++ header file with the inline implementations for the
 * `intrusive_list_iterator` and `intrusive_list` class templates.
 *
 * @details
 * Class definitions are located in @ref intrusive-list.h.
 * Inline methods are separated into this file to improve project
 * structure and maintainability.
 */

#ifndef MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_INLINES_H_
#define MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_INLINES_H_

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
   * The default constructor for `intrusive_list_iterator` initialises the
   * iterator to a null state, meaning it does not point to any node in the
   * list. This is typically used to create an "end" iterator or to initialise
   * an iterator variable before assigning it to a valid node.
   *
   * @note
   * The internal node pointer is value-initialised (set to `nullptr`),
   * ensuring that the iterator is safe to use in comparisons and will not
   * dereference an invalid address.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP,
                                    U>::intrusive_list_iterator () noexcept
      : node_{}
  {
  }

  /**
   * @details
   * This constructor creates an `intrusive_list_iterator` that points to the
   * specified node. The internal node pointer is set to the provided node
   * address, allowing the iterator to traverse the list starting from that
   * node. This is typically used to initialise an iterator to a specific
   * position within the list, such as the beginning or end.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
      N* const node) noexcept
      : node_{ node }
  {
  }

  /**
   * @details
   * This constructor creates an `intrusive_list_iterator` that points to the
   * specified element. The internal node pointer is set to the address of the
   * intrusive node member within the given element, allowing the iterator to
   * traverse the list starting from that element. This is typically used to
   * initialise an iterator to a specific object in the list.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
      reference element) noexcept
      : node_{ &(element.*MP) }
  {
    static_assert (std::is_convertible<U, T>::value == true,
                   "U must be implicitly convertible to T!");
  }

  /**
   * @details
   * The pointer access operator (`operator->`) allows the intrusive list
   * iterator to provide direct access to the value pointed to by the iterator,
   * mimicking the behavior of a raw pointer. Internally, it calls
   * `get_pointer()`, which computes and returns a pointer to the underlying
   * value or object associated with the current node in the list.
   */
  template <class T, class N, N T::* MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::pointer
  intrusive_list_iterator<T, N, MP, U>::operator->() const noexcept
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
  template <class T, class N, N T::* MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::reference
  intrusive_list_iterator<T, N, MP, U>::operator* () const noexcept
  {
    return *get_pointer ();
  }

  /**
   * @details
   * The pre-increment operator (`operator++`) advances the intrusive list
   * iterator to the next node in the list. It updates the internal node
   * pointer to point to the node returned by the current node's `next()`
   * method. This enables forward traversal of the list, following the linked
   * structure.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator++ () noexcept
  {
    node_ = static_cast<iterator_pointer> (node_->next ());
    return *this;
  }

  /**
   * @details
   * The post-increment operator (`operator++(int)`) advances the intrusive
   * list iterator to the next node in the list, but returns a copy of the
   * iterator as it was before the increment. This allows iteration logic that
   * requires access to the current element before moving to the next one,
   * following the standard C++ iterator semantics for post-increment.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator++ (int) noexcept
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->next ());
    return tmp;
  }

  /**
   * @details
   * The pre-decrement operator (`operator--`) moves the intrusive list
   * iterator to the previous node in the list. It updates the internal node
   * pointer to point to the node returned by the current node's `previous()`
   * method. This enables backward traversal of the list, following the linked
   * structure in reverse.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator-- () noexcept
  {
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return *this;
  }

  /**
   * @details
   * The post-decrement operator (`operator--(int)`) moves the intrusive list
   * iterator to the previous node in the list, but returns a copy of the
   * iterator as it was before the decrement. This enables iteration logic that
   * requires access to the current element before moving backward, following
   * the standard C++ iterator semantics for post-decrement.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator-- (int) noexcept
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return tmp;
  }

  /**
   * @details
   * The equality comparison operator (`operator==`) checks whether two
   * intrusive list iterators point to the same node in the list by comparing
   * their internal node pointers. This enables standard iterator comparisons,
   * such as detecting the end of a range or verifying if two iterators refer
   * to the same position within the list.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr bool
  intrusive_list_iterator<T, N, MP, U>::operator== (
      const intrusive_list_iterator& other) const noexcept
  {
    return node_ == other.node_;
  }

  /**
   * @details
   * The inequality comparison operator (`operator!=`) checks whether two
   * intrusive list iterators point to different nodes in the list by comparing
   * their internal node pointers. This is useful for standard iterator
   * operations, such as determining whether an iterator has reached the end of
   * a range or for loop termination conditions.
   */
  template <class T, class N, N T::* MP, class U>
  constexpr bool
  intrusive_list_iterator<T, N, MP, U>::operator!= (
      const intrusive_list_iterator& other) const noexcept
  {
    return node_ != other.node_;
  }

  /**
   * @details
   * Computes and returns a pointer to the parent object that contains the
   * intrusive node currently referenced by the iterator. This is achieved by
   * calculating the offset of the intrusive node member within the parent
   * object type and subtracting it from the node's address. This technique
   * allows the iterator to provide access to the full object from just the
   * node pointer, enabling intrusive list traversal and manipulation.
   */
  template <class T, class N, N T::* MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::pointer
  intrusive_list_iterator<T, N, MP, U>::get_pointer (void) const noexcept
  {
    // static_assert(std::is_convertible<U, T>::value == true, "U must be
    // implicitly convertible to T!");

    // Compute the byte offset of the intrusive node member within T.
    // Note: dereferencing a null pointer is formally undefined behaviour
    // under the C++ standard. In practice, no known compiler miscompiles
    // this idiom on any supported target; `offsetof` cannot be used here
    // because `MP` is a template parameter (a pointer-to-member), not a
    // literal member name.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Compute the address of the object which includes the
    // intrusive node, by adjusting down the node address.
    return reinterpret_cast<pointer> (reinterpret_cast<difference_type> (node_)
                                      - offset);
  }

  /**
   * @details
   * Returns a pointer to the internal iterator node associated with the
   * current object. This is typically used for advanced list operations or
   * when direct access to the underlying node is required.
   */
  template <class T, class N, N T::* MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::iterator_pointer
  intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const noexcept
  {
    return node_;
  }

  // ==========================================================================

  /**
   * @details
   * The default constructor for `intrusive_list` creates an empty intrusive
   * list. No initialisation of internal pointers is performed here; for
   * statically allocated lists, the pointers are expected to be
   * zero-initialised by the runtime, while for dynamically allocated lists,
   * initialisation is handled by the base class or explicit methods.
   *
   * @par The rule of five
   * The copy constructor, move constructor, copy assignment operator, and move
   * assignment operator are explicitly deleted to prevent accidental copying
   * or moving of intrusive_list objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  template <class T, class N, N T::* MP, class L, class U>
  constexpr intrusive_list<T, N, MP, L, U>::intrusive_list () noexcept
  {
  }

  /**
   * @details
   * The destructor for `intrusive_list` does not perform any cleanup or
   * pointer manipulation. List management and node unlinking are handled
   * elsewhere, so the destructor is intentionally left empty to avoid
   * unnecessary writes or side effects during object destruction.
   */
  template <class T, class N, N T::* MP, class L, class U>
  constexpr intrusive_list<T, N, MP, L, U>::~intrusive_list ()
  {
  }

  /**
   * @details
   * If the statically allocated list is still in the initial uninitialised
   * state (with both pointers null), this method initialises the list to the
   * empty state, with both pointers pointing to itself. For non-statically
   * initialised lists, this method has no effect.
   *
   * @note
   * Must be manually called for statically allocated lists before inserting
   * elements or performing any other operations.
   */
  template <class T, class N, N T::* MP, class L, class U>
  void
  intrusive_list<T, N, MP, L, U>::initialise_once (void) noexcept
  {
    double_list<N, L>::initialise_once ();
  }

  /**
   * @details
   * Checks whether the intrusive list contains any nodes.
   * This method delegates to the underlying double list implementation to
   * determine if the list is empty. The list is considered empty if there are
   * no elements linked.
   */
  template <class T, class N, N T::* MP, class L, class U>
  [[nodiscard]] constexpr bool
  intrusive_list<T, N, MP, L, U>::empty (void) const noexcept
  {
    return double_list<N, L>::empty ();
  }

  /**
   * @details
   * Adds a new node to the end (tail) of the intrusive list.
   * The offset of the intrusive node member within the containing object is
   * computed, and the node is linked after the current tail node. This
   * operation does not check for duplicate nodes or whether the node is
   * already linked elsewhere. For statically allocated lists, the
   * initialisation check is handled by the links class.
   */
  template <class T, class N, N T::* MP, class L, class U>
  void
  intrusive_list<T, N, MP, L, U>::link_tail (U& node) noexcept
  {
    // The assert(links_.initialised()) is checked by the L class.

    // Compute the byte offset of the intrusive node member within T.
    // Note: see the comment in get_pointer() regarding the use of
    // a null pointer dereference to obtain the member offset.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Add thread intrusive node at the end of the list.
    (const_cast<N*> (double_list<N, L>::tail ()))
        ->link_next (reinterpret_cast<N*> (
            reinterpret_cast<difference_type> (&node) + offset));
  }

  /**
   * @details
   * Adds a new node to the beginning (head) of the intrusive list.
   * The offset of the intrusive node member within the containing object is
   * computed, and the node is linked before the current head node. This
   * operation does not check for duplicate nodes or whether the node is
   * already linked elsewhere. For statically allocated lists, the
   * initialisation check is handled by the links class.
   */
  template <class T, class N, N T::* MP, class L, class U>
  void
  intrusive_list<T, N, MP, L, U>::link_head (U& node) noexcept
  {
    // The assert(links_.initialised()) is checked by the L class.

    // Compute the byte offset of the intrusive node member within T.
    // Note: see the comment in get_pointer() regarding the use of
    // a null pointer dereference to obtain the member offset.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Add thread intrusive node at the beginning of the list.
    (const_cast<N*> (double_list<N, L>::head ()))
        ->link_previous (reinterpret_cast<N*> (
            reinterpret_cast<difference_type> (&node) + offset));
  }

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
#endif

  /**
   * @details
   * Returns an iterator to the first element in the intrusive list.
   * The iterator points to the node after the internal links node (the head).
   * For statically allocated lists, the initialisation check is handled by the
   * links class. If the list is empty, the iterator will compare equal to
   * `end()`.
   */
  template <class T, class N, N T::* MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::iterator
  intrusive_list<T, N, MP, L, U>::begin () const noexcept
  {
    // The assert(links_.initialised()) is checked by the L class.

    return iterator{ static_cast<iterator_pointer> (
        double_list<N, L>::links_.next ()) };
  }

  /**
   * @details
   * Returns an iterator to the position after the last element in the
   * intrusive list (the end iterator). This iterator points to the internal
   * links node, which acts as a sentinel. It is used as the past-the-end
   * marker in iteration and comparison operations. The end iterator does not
   * reference any valid list element.
   */
  template <class T, class N, N T::* MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::iterator
  intrusive_list<T, N, MP, L, U>::end () const noexcept
  {
    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    using links_type_ = typename double_list<N, L>::links_type;
    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<links_type_*> (double_list<N, L>::links_pointer ())) };
  }

  /**
   * @details
   * Returns a reverse iterator to the last element in the intrusive list.
   * Equivalent to `reverse_iterator{ end() }`. Traversal proceeds
   * from the tail towards the head.
   */
  template <class T, class N, N T::* MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::reverse_iterator
  intrusive_list<T, N, MP, L, U>::rbegin () const noexcept
  {
    return reverse_iterator{ end () };
  }

  /**
   * @details
   * Returns a reverse iterator to the position before the first element
   * in the intrusive list. Equivalent to `reverse_iterator{ begin() }`.
   * Used as the past-the-end marker for reverse-direction iteration.
   */
  template <class T, class N, N T::* MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::reverse_iterator
  intrusive_list<T, N, MP, L, U>::rend () const noexcept
  {
    return reverse_iterator{ begin () };
  }

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

  /**
   * @details
   * Computes and returns a pointer to the parent object that contains the
   * intrusive node referenced by the given node pointer. This is achieved by
   * calculating the offset of the intrusive node member within the parent
   * object type and subtracting it from the node's address. This allows
   * retrieval of the full object from just the node pointer, enabling
   * intrusive list traversal and manipulation.
   */
  template <class T, class N, N T::* MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::pointer
  intrusive_list<T, N, MP, L, U>::get_pointer (
      iterator_pointer node) const noexcept
  {
    // static_assert(std::is_convertible<U, T>::value == true, "U must be
    // implicitly convertible to T!");

    // Compute the byte offset of the intrusive node member within T.
    // Note: see the comment in get_pointer() regarding the use of
    // a null pointer dereference to obtain the member offset.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Compute the address of the object which includes the
    // intrusive node, by adjusting down the node address.
    return reinterpret_cast<pointer> (reinterpret_cast<difference_type> (node)
                                      - offset);
  }

  /**
   * @details
   * Removes and unlinks the first element from the intrusive list.
   * If the list is empty, returns `nullptr` immediately without modifying
   * the list. The method unlinks the node at the head of the list and
   * returns a pointer to the parent object containing the unlinked node.
   */
  template <class T, class N, N T::* MP, class L, class U>
  [[nodiscard]] typename intrusive_list<T, N, MP, L, U>::pointer
  intrusive_list<T, N, MP, L, U>::unlink_head (void) noexcept
  {
    if (empty ())
      {
        return nullptr;
      }

    // The first element in the list.
    iterator_pointer it
        = static_cast<iterator_pointer> (double_list<N, L>::links_.next ());
    it->unlink ();

    return get_pointer (it);
  }

  /**
   * @details
   * Removes and unlinks the last element from the intrusive list.
   * If the list is empty, returns `nullptr` immediately without modifying
   * the list. The method unlinks the node at the tail of the list and
   * returns a pointer to the parent object containing the unlinked node.
   */
  template <class T, class N, N T::* MP, class L, class U>
  [[nodiscard]] typename intrusive_list<T, N, MP, L, U>::pointer
  intrusive_list<T, N, MP, L, U>::unlink_tail (void) noexcept
  {
    if (empty ())
      {
        return nullptr;
      }

    // The last element in the list.
    iterator_pointer it = static_cast<iterator_pointer> (
        double_list<N, L>::links_.previous ());
    it->unlink ();

    return get_pointer (it);
  }

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_INLINES_H_

// ----------------------------------------------------------------------------
