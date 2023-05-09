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

  // Code analysis may trigger:
  // "Member 'previous' was not initialized in constructor"
  // "Member 'next' was not initialized in constructor"

  constexpr double_list_links_base::double_list_links_base ()
  {
    // Must be empty! No members must be changed by this constructor!
  }

  constexpr double_list_links_base::~double_list_links_base ()
  {
    // Must be empty! No members must be changed by this constructor!
  }

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

  // Code analysis may trigger:
  // "Member 'previous' was not initialized in constructor"
  // "Member 'next' was not initialized in constructor"

  constexpr static_double_list_links::static_double_list_links ()
  {
    // Must be empty! No members must be changed by this constructor!

    // As the name implies, it is assumed that the instance of the
    // object is allocated statically and the entire content was set
    // to zero during startup (via BSS init).

    // This is equivalent to setting the pointers to `nullptr`.
  }

  // GCC optimizes out the content (dead store elimination).
  // __attribute__((optimize("no-lifetime-dse,no-dse,no-inline"))) did not
  // help. The workaround is to use `nullify()` explicitly.
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
   * The initial list status is empty.
   */
  template <class T, class H>
  double_list<T, H>::double_list ()
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT)
    trace::printf ("%s() @%p \n", __func__, this);
#endif

    if constexpr (is_statically_allocated::value)
      {
        // By all means, do not add any code to clear the pointers, since
        // the head was statically initialised.
      }
    else
      {
        clear ();
      }
  }

  /**
   * @details
   * Normally there must be no nodes in the list.
   * However, for statically auto-registered lists, this
   * complicates things artificially.
   */
  template <class T, class H>
  constexpr double_list<T, H>::~double_list ()
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT)
    trace::printf ("%s() @%p \n", __func__, this);
#endif

    // Perhaps enable it for non statically allocated lists.
    // assert (empty ());
  }

  template <class T, class H>
  bool
  double_list<T, H>::uninitialized (void) const
  {
    if constexpr (is_statically_allocated::value)
      {
        return head_.uninitialized ();
      }
    else
      {
        return false;
      }
  }

  template <class T, class H>
  void
  double_list<T, H>::initialize_once (void)
  {
    if constexpr (is_statically_allocated::value)
      {
        head_.initialize_once ();
      }
  }

  template <class T, class H>
  bool
  double_list<T, H>::empty (void) const
  {
    // If the head is not linked, the list is empty.
    return !head_.linked ();
  }

  /**
   * @details
   * Initialise the mandatory node with links to itself.
   */
  template <class T, class H>
  void
  double_list<T, H>::clear (void)
  {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
    trace::printf ("%s() @%p\n", __func__, this);
#endif
    head_.initialize ();
  }

  template <class T, class H>
  constexpr typename double_list<T, H>::pointer
  double_list<T, H>::head (void) const
  {
    return reinterpret_cast<pointer> (head_.next ());
  }

  template <class T, class H>
  constexpr typename double_list<T, H>::pointer
  double_list<T, H>::tail (void) const
  {
    return reinterpret_cast<pointer> (head_.previous ());
  }

  template <class T, class H>
  void
  double_list<T, H>::link_tail (reference node)
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!head_.uninitialized ());
      }

    // Add new node at the end of the list.
    tail ()->link_next (&node);
  }

  template <class T, class H>
  void
  double_list<T, H>::link_head (reference node)
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!head_.uninitialized ());
      }

    // Add new node at the head of the list.
    head ()->link_previous (&node);
  }

  template <class T, class H>
  typename double_list<T, H>::iterator
  double_list<T, H>::begin ()
  {
    if constexpr (is_statically_allocated::value)
      {
        assert (!head_.uninitialized ());
      }

    return iterator{ static_cast<iterator_pointer> (head_.next ()) };
  }

  template <class T, class H>
  typename double_list<T, H>::iterator
  double_list<T, H>::end () const
  {
    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<H*> (&head_)) };
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

  template <class T, class N, N T::*MP, class H, class U>
  constexpr intrusive_list<T, N, MP, H, U>::intrusive_list ()
  {
  }

  template <class T, class N, N T::*MP, class H, class U>
  constexpr intrusive_list<T, N, MP, H, U>::~intrusive_list ()
  {
  }

  template <class T, class N, N T::*MP, class H, class U>
  void
  intrusive_list<T, N, MP, H, U>::initialize_once (void)
  {
    return double_list<N, H>::initialize_once ();
  }

  template <class T, class N, N T::*MP, class H, class U>
  constexpr bool
  intrusive_list<T, N, MP, H, U>::empty (void) const
  {
    return double_list<N, H>::empty ();
  }

  /**
   * @note The list head is initialised on first use.
   */
  template <class T, class N, N T::*MP, class H, class U>
  void
  intrusive_list<T, N, MP, H, U>::link_tail (U& node)
  {
    // The assert(head_.initialised()) is checked by the H class.

    // Compute the distance between the member intrusive link
    // node and the class begin.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Add thread intrusive node at the end of the list.
    (const_cast<N*> (double_list<N, H>::tail ()))
        ->link_next (reinterpret_cast<N*> (
            reinterpret_cast<difference_type> (&node) + offset));
  }

  /**
   * @note The list head is initialised on first use.
   */
  template <class T, class N, N T::*MP, class H, class U>
  void
  intrusive_list<T, N, MP, H, U>::link_head (U& node)
  {
    // The assert(head_.initialised()) is checked by the H class.

    // Compute the distance between the member intrusive link
    // node and the class begin.
    const auto offset = reinterpret_cast<difference_type> (
        &(static_cast<T*> (nullptr)->*MP));

    // Add thread intrusive node at the end of the list.
    (const_cast<N*> (double_list<N, H>::head ()))
        ->link_previous (reinterpret_cast<N*> (
            reinterpret_cast<difference_type> (&node) + offset));
  }

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
#endif

  /**
   * @note It is not `const` because it may initialise on first use.
   */
  template <class T, class N, N T::*MP, class H, class U>
  inline typename intrusive_list<T, N, MP, H, U>::iterator
  intrusive_list<T, N, MP, H, U>::begin ()
  {
    // The assert(head_.initialised()) is checked by the H class.

    return iterator{ static_cast<iterator_pointer> (
        double_list<N, H>::head_.next ()) };
  }

  /**
   * @note It is not `const` because it may initialise on first use.
   */
  template <class T, class N, N T::*MP, class H, class U>
  inline typename intrusive_list<T, N, MP, H, U>::iterator
  intrusive_list<T, N, MP, H, U>::end ()
  {
    // The assert would probably be redundant, since it was
    // already tested in `begin()`.

    using head_type_ = typename double_list<N, H>::head_type;
    return iterator{ reinterpret_cast<iterator_pointer> (
        const_cast<head_type_*> (double_list<N, H>::head_pointer ())) };
  }

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

  template <class T, class N, N T::*MP, class H, class U>
  inline typename intrusive_list<T, N, MP, H, U>::pointer
  intrusive_list<T, N, MP, H, U>::get_pointer (iterator_pointer node) const
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

  template <class T, class N, N T::*MP, class H, class U>
  typename intrusive_list<T, N, MP, H, U>::pointer
  intrusive_list<T, N, MP, H, U>::unlink_head (void)
  {
    // No assert here, treat empty link unlinks as nop.

    // The first element in the list.
    iterator_pointer it
        = static_cast<iterator_pointer> (double_list<N, H>::head_.next ());
    it->unlink ();

    return get_pointer (it);
  }

  template <class T, class N, N T::*MP, class H, class U>
  typename intrusive_list<T, N, MP, H, U>::pointer
  intrusive_list<T, N, MP, H, U>::unlink_tail (void)
  {
    // No assert here, treat empty link unlinks as nop.

    // The last element in the list.
    iterator_pointer it
        = static_cast<iterator_pointer> (double_list<N, H>::head_.previous ());
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
