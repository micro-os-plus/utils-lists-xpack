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
   * This must be an empty constructor, that does not touch
   * the pointers, but leaves them unchanged.
   *
   * For statically initialised lists, this means a pair of `nullptr`
   * pointers.
   *
   * For regular lists, the constructor of the derived class will handle
   * the initialisations.
   *
   * @warning
   * Code analysis may trigger:
   * - Member 'previous_' was not initialized in constructor
   * - Member 'next_' was not initialized in constructor
   */
  constexpr double_list_links_base::double_list_links_base ()
  {
    // Must be empty! No members must be changed by this constructor!
  }

  /**
   * @details
   * This must be an empty destructor, that does not touch
   * the pointers, but leaves them unchanged.
   */
  constexpr double_list_links_base::~double_list_links_base ()
  {
    // Must be empty! No members must be changed by this constructor!
  }

  /**
   * @details
   * Set both pointers to point to this node.
   *
   * This is the definition of an **unlinked** node.
   *
   * @note
   * After unlinking the node from a list, it must be returned to
   * this state.
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

  constexpr double_list_links_base*
  double_list_links_base::next (void) const
  {
    return next_;
  }

  constexpr double_list_links_base*
  double_list_links_base::previous (void) const
  {
    return previous_;
  }

#pragma GCC diagnostic pop

  // ==========================================================================

  /**
   * @details
   * As the name implies, it is assumed that the instance of the
   * object is allocated statically and the entire content was set
   * to zero during startup (via BSS init).
   *
   * This is equivalent to setting the pointers to `nullptr`.
   *
   * @warning
   * Code analysis may trigger:
   * - Member 'previous_' was not initialized in constructor
   * - Member 'next_' was not initialized in constructor
   */
  constexpr static_double_list_links::static_double_list_links ()
  {
    // Must be empty! No members must be changed by this constructor!
  }

  /**
   * @warning
   * GCC optimizes out the content (dead store elimination).
   * @n
   * `__attribute__((optimize("no-lifetime-dse,no-dse,no-inline")))` did not
   * help. The workaround is to use `nullify()` explicitly,
   * or, even better, to clear the memory before invoking the placement
   * `new` constructor again.
   */
  constexpr static_double_list_links::~static_double_list_links ()
  {
    // The goal is to revert the content to a state similar to the
    // statically initialised state (BSS zero).
    // Unfortunately GCC does not honour this.
    // next_ = nullptr;
    // previous_ = nullptr;
  }

  // ==========================================================================

  constexpr double_list_links::double_list_links ()
  {
    // For regular (non static) classes the members
    // must be explicitly initialised.
    initialize ();
  }

  constexpr double_list_links::~double_list_links ()
  {
  }

  // ==========================================================================

  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>::double_list_iterator () : node_{}
  {
  }

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

  template <class T, class N, class U>
  constexpr typename double_list_iterator<T, N, U>::pointer
  double_list_iterator<T, N, U>::operator->() const
  {
    return get_pointer ();
  }

  template <class T, class N, class U>
  constexpr typename double_list_iterator<T, N, U>::reference
  double_list_iterator<T, N, U>::operator* () const
  {
    return *get_pointer ();
  }

  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>&
  double_list_iterator<T, N, U>::operator++ ()
  {
    node_ = static_cast<N*> (node_->next ());
    return *this;
  }

  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>
  double_list_iterator<T, N, U>::operator++ (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->next);
    return tmp;
  }

  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>&
  double_list_iterator<T, N, U>::operator-- ()
  {
    node_ = static_cast<iterator_pointer> (node_->previous);
    return *this;
  }

  template <class T, class N, class U>
  constexpr double_list_iterator<T, N, U>
  double_list_iterator<T, N, U>::operator-- (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->previous);
    return tmp;
  }

  template <class T, class N, class U>
  constexpr bool
  double_list_iterator<T, N, U>::operator== (
      const double_list_iterator& other) const
  {
    return node_ == other.node_;
  }

  template <class T, class N, class U>
  constexpr bool
  double_list_iterator<T, N, U>::operator!= (
      const double_list_iterator& other) const
  {
    return node_ != other.node_;
  }

  template <class T, class N, class U>
  constexpr typename double_list_iterator<T, N, U>::iterator_pointer
  double_list_iterator<T, N, U>::get_iterator_pointer () const
  {
    return node_;
  }

  // ==========================================================================

  /**
   * @details
   * For non-statically allocated lists, the initial list status is
   * _empty_.
   *
   * Statically allocated remain _uninitialised_.
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
   * might not be always true.
   *
   * @note
   * In debug mode, the code warns if the list is not empty
   * when destroyed.
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
   * An uninitialized node is a node with any of the pointers
   * set to `nullptr`.
   *
   * Only statically allocated nodes in the initial state are
   * _uninitialized_.
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
   * _uninitialised_ state (with both
   * pointers null), initialise the list to the empty state,
   * with both pointers pointing to itself.
   *
   * For non-statically initialised lists, this method is ineffective.
   *
   * @note
   * Must be manually called for statically allocated list before
   * inserting elements, or any other operations.
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

  template <class T, class L>
  bool
  double_list<T, L>::empty (void) const
  {
    // If the links node is not linked, the list is empty.
    return !links_.linked ();
  }

  /**
   * @details
   * Initialise the mandatory node with links to itself.
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

  template <class T, class L>
  constexpr typename double_list<T, L>::pointer
  double_list<T, L>::head (void) const
  {
    return reinterpret_cast<pointer> (links_.next ());
  }

  template <class T, class L>
  constexpr typename double_list<T, L>::pointer
  double_list<T, L>::tail (void) const
  {
    return reinterpret_cast<pointer> (links_.previous ());
  }

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

  template <class T, class N, N T::*MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator ()
      : node_{}
  {
  }

  template <class T, class N, N T::*MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
      N* const node)
      : node_{ node }
  {
  }

  template <class T, class N, N T::*MP, class U>
  constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
      reference element)
      : node_{ &(element.*MP) }
  {
    static_assert (std::is_convertible<U, T>::value == true,
                   "U must be implicitly convertible to T!");
  }

  template <class T, class N, N T::*MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::pointer
  intrusive_list_iterator<T, N, MP, U>::operator->() const
  {
    return get_pointer ();
  }

  template <class T, class N, N T::*MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::reference
  intrusive_list_iterator<T, N, MP, U>::operator* () const
  {
    return *get_pointer ();
  }

  template <class T, class N, N T::*MP, class U>
  inline intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator++ ()
  {
    node_ = static_cast<iterator_pointer> (node_->next ());
    return *this;
  }

  template <class T, class N, N T::*MP, class U>
  inline intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator++ (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->next ());
    return tmp;
  }

  template <class T, class N, N T::*MP, class U>
  inline intrusive_list_iterator<T, N, MP, U>&
  intrusive_list_iterator<T, N, MP, U>::operator-- ()
  {
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return *this;
  }

  template <class T, class N, N T::*MP, class U>
  intrusive_list_iterator<T, N, MP, U>
  intrusive_list_iterator<T, N, MP, U>::operator-- (int)
  {
    const auto tmp = *this;
    node_ = static_cast<iterator_pointer> (node_->previous ());
    return tmp;
  }

  template <class T, class N, N T::*MP, class U>
  inline bool
  intrusive_list_iterator<T, N, MP, U>::operator== (
      const intrusive_list_iterator& other) const
  {
    return node_ == other.node_;
  }

  template <class T, class N, N T::*MP, class U>
  inline bool
  intrusive_list_iterator<T, N, MP, U>::operator!= (
      const intrusive_list_iterator& other) const
  {
    return node_ != other.node_;
  }

  template <class T, class N, N T::*MP, class U>
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

  template <class T, class N, N T::*MP, class U>
  inline typename intrusive_list_iterator<T, N, MP, U>::iterator_pointer
  intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const
  {
    return node_;
  }

  // ==========================================================================

  template <class T, class N, N T::*MP, class L, class U>
  constexpr intrusive_list<T, N, MP, L, U>::intrusive_list ()
  {
  }

  template <class T, class N, N T::*MP, class L, class U>
  constexpr intrusive_list<T, N, MP, L, U>::~intrusive_list ()
  {
  }

  /**
   * @details
   * If the statically allocated list is still in the initial
   * _uninitialised_ state (with both
   * pointers null), initialise the list to the empty state,
   * with both pointers pointing to itself.
   *
   * For non-statically initialised lists, this method is ineffective.
   *
   * @note
   * Must be manually called for statically allocated list before
   * inserting elements, or any other operations.
   */
  template <class T, class N, N T::*MP, class L, class U>
  void
  intrusive_list<T, N, MP, L, U>::initialize_once (void)
  {
    return double_list<N, L>::initialize_once ();
  }

  template <class T, class N, N T::*MP, class L, class U>
  constexpr bool
  intrusive_list<T, N, MP, L, U>::empty (void) const
  {
    return double_list<N, L>::empty ();
  }

  template <class T, class N, N T::*MP, class L, class U>
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

  template <class T, class N, N T::*MP, class L, class U>
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

  template <class T, class N, N T::*MP, class L, class U>
  inline typename intrusive_list<T, N, MP, L, U>::iterator
  intrusive_list<T, N, MP, L, U>::begin () const
  {
    // The assert(links_.initialised()) is checked by the L class.

    return iterator{ static_cast<iterator_pointer> (
        double_list<N, L>::links_.next ()) };
  }

  template <class T, class N, N T::*MP, class L, class U>
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

  template <class T, class N, N T::*MP, class L, class U>
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

  template <class T, class N, N T::*MP, class L, class U>
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

  template <class T, class N, N T::*MP, class L, class U>
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
