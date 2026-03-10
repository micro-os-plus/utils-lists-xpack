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

/**
 * @file
 * @brief C++ header file with the inline implementations for the µOS++ lists methods.
 *
 * @details
 * The `inlines.h` header provides the C++ inline implementations for the
 * **µOS++ Intrusive Lists** classes.
 *
 * Class definitions are located in @ref lists.h. Inline methods are separated
 * into this file to improve project structure and maintainability.
 */

#ifndef MICRO_OS_PLUS_UTILS_LISTS_INLINES_H_
#define MICRO_OS_PLUS_UTILS_LISTS_INLINES_H_

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
   * or moving of intrusive_list objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  constexpr double_list_links_base::double_list_links_base ()
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
    // Must be empty! No members must be changed by this constructor!
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
  double_list_links_base::initialize (void)
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
  double_list_links_base::next (void) const
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
  double_list_links_base::previous (void) const
  {
    return previous_;
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
   * or moving of intrusive_list objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  constexpr static_double_list_links::static_double_list_links ()
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
 * pointer reset is required, use the `nullify()` method explicitly, or clear
 * the memory before invoking the placement `new` constructor again.
 *
 * @warning
 * The code to clear the pointers is now commented out, since recent GCC
 * optimizes it out (dead store elimination). Depending on the version, there
 * might be some attributes to allow this, but they are not safe, for example
 * `__attribute__((optimize("no-lifetime-dse,no-dse,no-inline")))` did not
 * help. The workaround is to use `nullify()` explicitly, or, even better, to
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
   * `initialize()`, which sets both the `previous_` and `next_` pointers to
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
   * or moving of intrusive_list objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  constexpr double_list_links::double_list_links ()
  {
    // For regular (non static) classes the members
    // must be explicitly initialised.
    initialize ();
  }

  /**
   * @details
   * Destroys the node. No special cleanup is required as the class does not
   * manage resources.
   */
  constexpr double_list_links::~double_list_links ()
  {
  }

  // ==========================================================================

  /**
   * @details
   * The default constructor for `double_list_iterator` initialises the
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
  constexpr double_list_iterator<T, N, U>::double_list_iterator () : node_{}
  {
  }

  /**
   * @details
   * This constructor creates a `double_list_iterator` that points to the
   * specified node. The internal node pointer is set to the provided node
   * address, allowing the iterator to traverse the list starting from that
   * node. This constructor is typically used to initialise an iterator to a
   * specific position within the list, such as the beginning or end.
   */
  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>::double_list_iterator (
      iterator_pointer const node)
      : node_{ node }
  {
  }

#if 0
    template <class T, class N, class U>
    constexpr double_list_iterator<T, N, U>::double_list_iterator (
        reference element)
        : node_{ &(element.*MP) }
    {
      static_assert (std::is_convertible<U, T>::value == true,
                     "U must be implicitly convertible to T!");
    }
#endif

  /**
   * @details
   * The pointer access operator (`operator->`) allows the iterator to provide
   * direct access to the value pointed to by the iterator, mimicking the
   * behavior of a raw pointer. Internally, it calls `get_pointer()`, which
   * computes and returns a pointer to the underlying value or object
   * associated with the current node in the list.
   */
  template <class T, class N, class U>
  constexpr typename double_list_iterator<T, N, U>::pointer
  double_list_iterator<T, N, U>::operator->() const
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
  constexpr typename double_list_iterator<T, N, U>::reference
  double_list_iterator<T, N, U>::operator* () const
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
  constexpr double_list_iterator<T, N, U>&
  double_list_iterator<T, N, U>::operator++ ()
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
  constexpr double_list_iterator<T, N, U>
  double_list_iterator<T, N, U>::operator++ (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->next);
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
  constexpr double_list_iterator<T, N, U>&
  double_list_iterator<T, N, U>::operator-- ()
  {
    node_ = static_cast<iterator_pointer> (node_->previous);
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
  constexpr double_list_iterator<T, N, U>
  double_list_iterator<T, N, U>::operator-- (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->previous);
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
  double_list_iterator<T, N, U>::operator== (
      const double_list_iterator& other) const
  {
    return node_ == other.node_;
  }

  /**
   * @details
   * The inequality comparison operator (`operator!=`) checks whether two
   * iterators point to different nodes in the list by comparing their internal
   * node pointers. This is useful for standard iterator operations, such as
   * determining whether an iterator has reached the end of a range or for loop
   * termination conditions.
   */
  template <class T, class N, class U>
  constexpr bool
  double_list_iterator<T, N, U>::operator!= (
      const double_list_iterator& other) const
  {
    return node_ != other.node_;
  }

  /**
   * @details
   * Returns the internal node pointer that the iterator currently references.
   * This is useful for advanced list operations or when direct access to the
   * underlying node structure is required, such as for interoperability with
   * other list utilities or for debugging purposes.
   */
  template <class T, class N, class U>
  constexpr typename double_list_iterator<T, N, U>::iterator_pointer
  double_list_iterator<T, N, U>::get_iterator_pointer () const
  {
    return node_;
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
   * require explicit initialisation (typically via `initialize_once()`) before
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
   * or moving of intrusive_list objects. This ensures the integrity of the
   * list structure, as duplicating or moving lists could result in invalid or
   * inconsistent links within the list.
   */
  template <class T, class L>
  double_list<T, L>::double_list ()
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT)
    trace::printf ("%s() @%p \n", __func__, this);
#endif

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
  template <class T, class L>
  constexpr double_list<T, L>::~double_list ()
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT)
    trace::printf ("%s() @%p \n", __func__, this);
#endif

    // Perhaps enable it for non statically allocated lists.
    // assert (empty ());
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    if (!empty ())
      {
        trace::printf ("%s() @%p list not empty\n", __func__, this);
      }
#endif
  }

  /**
   * @details
   * An uninitialized node is a node with any of the pointers set to `nullptr`.
   * Only statically allocated nodes in the initial state are considered
   * _uninitialized_. For dynamically allocated lists, this method always
   * returns `false` since their nodes are explicitly initialized during
   * construction.
   */
  template <class T, class L>
  bool
  double_list<T, L>::uninitialized (void) const
  {
    if constexpr (is_statically_allocated::value)
      {
        return links_.uninitialized ();
      }
    else
      {
        return false;
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
  template <class T, class L>
  void
  double_list<T, L>::initialize_once (void)
  {
    if constexpr (is_statically_allocated::value)
      {
        links_.initialize_once ();
      }
  }

  /**
   * @details
   * Checks whether the list contains any nodes.
   * The list is considered empty if the internal links node is not linked to
   * any other nodes. This method provides a fast way to determine if the list
   * has elements or is currently empty.
   */
  template <class T, class L>
  bool
  double_list<T, L>::empty (void) const
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
  template <class T, class L>
  void
  double_list<T, L>::clear (void)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() @%p\n", __func__, this);
#endif
    links_.initialize ();
  }

  /**
   * @details
   * Returns a pointer to the first node in the list.
   * If the list is empty, this will point to the internal links node itself,
   * which can be used to detect the end of the list during iteration.
   * The returned pointer should be checked against `end()` or the sentinel
   * node to determine if the list contains any elements.
   */
  template <class T, class L>
  constexpr typename double_list<T, L>::pointer
  double_list<T, L>::head (void) const
  {
    return reinterpret_cast<pointer> (links_.next ());
  }

  /**
   * @details
   * Returns a pointer to the last node in the list.
   * If the list is empty, this will point to the internal links node itself,
   * which can be used to detect the end of the list during reverse iteration.
   * The returned pointer should be checked against the sentinel node to
   * determine if the list contains any elements.
   */
  template <class T, class L>
  constexpr typename double_list<T, L>::pointer
  double_list<T, L>::tail (void) const
  {
    return reinterpret_cast<pointer> (links_.previous ());
  }

  /**
   * @details
   * Adds a new node to the end (tail) of the list.
   * For statically allocated lists, asserts that the list is already
   * initialised. The new node is linked after the current tail node, updating
   * the list structure accordingly. This operation does not check for
   * duplicate nodes or whether the node is already linked elsewhere.
   */
  template <class T, class L>
  void
  double_list<T, L>::link_tail (reference node)
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!links_.uninitialized ());
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
  template <class T, class L>
  void
  double_list<T, L>::link_head (reference node)
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!links_.uninitialized ());
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
  template <class T, class L>
  typename double_list<T, L>::iterator
  double_list<T, L>::begin () const
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!links_.uninitialized ());
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
  template <class T, class L>
  typename double_list<T, L>::iterator
  double_list<T, L>::end () const
  {
    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<links_type*> (&links_)) };
  }

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
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator ()
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
      N* const node)
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
      reference element)
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
  intrusive_list_iterator<T, N, MP, U>::operator->() const
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
  intrusive_list_iterator<T, N, MP, U>::operator* () const
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
  inline intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator++ ()
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
  inline intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator++ (int)
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
  inline intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator-- ()
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
  intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator-- (int)
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
  inline bool
  intrusive_list_iterator<T, N, MP, U>::operator== (
      const intrusive_list_iterator& other) const
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
  inline bool
  intrusive_list_iterator<T, N, MP, U>::operator!= (
      const intrusive_list_iterator& other) const
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
  intrusive_list_iterator<T, N, MP, U>::get_pointer (void) const
  {
    // static_assert(std::is_convertible<U, T>::value == true, "U must be
    // implicitly convertible to T!");

    // Compute the distance between the member intrusive link
    // node and the class begin.
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
  intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const
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
  constexpr intrusive_list<T, N, MP, L, U>::intrusive_list ()
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
  intrusive_list<T, N, MP, L, U>::initialize_once (void)
  {
    return double_list<N, L>::initialize_once ();
  }

  /**
   * @details
   * Checks whether the intrusive list contains any nodes.
   * This method delegates to the underlying double list implementation to
   * determine if the list is empty. The list is considered empty if there are
   * no elements linked.
   */
  template <class T, class N, N T::* MP, class L, class U>
  constexpr bool
  intrusive_list<T, N, MP, L, U>::empty (void) const
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
  intrusive_list<T, N, MP, L, U>::link_tail (U& node)
  {
    // The assert(links_.initialised()) is checked by the L class.

    // Compute the distance between the member intrusive link
    // node and the class begin.
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
  intrusive_list<T, N, MP, L, U>::link_head (U& node)
  {
    // The assert(links_.initialised()) is checked by the L class.

    // Compute the distance between the member intrusive link
    // node and the class begin.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Add thread intrusive node at the end of the list.
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
  intrusive_list<T, N, MP, L, U>::begin () const
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
  intrusive_list<T, N, MP, L, U>::end () const
  {
    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    using head_type_ = typename double_list<N, L>::links_type;
    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<head_type_*> (double_list<N, L>::links_pointer ())) };
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
  intrusive_list<T, N, MP, L, U>::get_pointer (iterator_pointer node) const
  {
    // static_assert(std::is_convertible<U, T>::value == true, "U must be
    // implicitly convertible to T!");

    // Compute the distance between the member intrusive link
    // node and the class begin.
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
   * If the list is empty, this operation is a no-op and returns a pointer to
   * the internal links node. The method unlinks the node at the head of the
   * list and returns a pointer to the parent object containing the unlinked
   * node.
   */
  template <class T, class N, N T::* MP, class L, class U>
  typename intrusive_list<T, N, MP, L, U>::pointer
  intrusive_list<T, N, MP, L, U>::unlink_head (void)
  {
    // No assert here, treat empty link unlinks as nop.

    // The first element in the list.
    iterator_pointer it
        = static_cast<iterator_pointer> (double_list<N, L>::links_.next ());
    it->unlink ();

    return get_pointer (it);
  }

  /**
   * @details
   * Removes and unlinks the last element from the intrusive list.
   * If the list is empty, this operation is a no-op and returns a pointer to
   * the internal links node. The method unlinks the node at the tail of the
   * list and returns a pointer to the parent object containing the unlinked
   * node.
   */
  template <class T, class N, N T::* MP, class L, class U>
  typename intrusive_list<T, N, MP, L, U>::pointer
  intrusive_list<T, N, MP, L, U>::unlink_tail (void)
  {
    // No assert here, treat empty link unlinks as nop.

    // The last element in the list.
    iterator_pointer it = static_cast<iterator_pointer> (
        double_list<N, L>::links_.previous ());
    it->unlink ();

    return get_pointer (it);
  }

  // ==========================================================================
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_INLINES_H_

// ----------------------------------------------------------------------------
