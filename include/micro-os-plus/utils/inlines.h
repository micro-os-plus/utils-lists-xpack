/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2016 Liviu Ionescu.
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

namespace micro_os_plus
{
  namespace utils
  {
    // ========================================================================

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

    constexpr static_double_list_links::~static_double_list_links ()
    {
    }

    constexpr void
    static_double_list_links::clear (void)
    {
      previous_ = nullptr;
      next_ = nullptr;
    }

    constexpr static_double_list_links*
    static_double_list_links::next (void) const
    {
      return next_;
    }

    constexpr static_double_list_links*
    static_double_list_links::previous (void) const
    {
      return previous_;
    }

    constexpr void
    static_double_list_links::next (static_double_list_links* n)
    {
      next_ = n;
    }

    constexpr void
    static_double_list_links::previous (static_double_list_links* n)
    {
      previous_ = n;
    }

    // ========================================================================

    constexpr double_list_links::double_list_links ()
    {
      // This time the members are explicitly initialised.
      clear ();
    }

    constexpr double_list_links::~double_list_links ()
    {
    }

    // ========================================================================

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
    double_list_iterator<T, N, U>::operator-> () const
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

    // ========================================================================

    /**
     * @details
     * The initial list status is empty.
     */
    template <class HeadT, class ElementT>
    double_list<HeadT, ElementT>::double_list ()
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
    template <class HeadT, class ElementT>
    constexpr double_list<HeadT, ElementT>::~double_list ()
    {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT)
      trace::printf ("%s() @%p \n", __func__, this);
#endif

      // Perhaps enable it for non statically allocated lists.
      // assert (empty ());
    }

    template <class HeadT, class ElementT>
    bool
    double_list<HeadT, ElementT>::uninitialized (void) const
    {
      // If it points to nowhere, it is not yet initialised.
      return (head_.previous () == nullptr || head_.next () == nullptr);
    }

    template <class HeadT, class ElementT>
    bool
    double_list<HeadT, ElementT>::empty (void) const
    {
      // If it points to itself, it is empty.
      if constexpr (is_statically_allocated::value)
        {
          return (head_.next () == &head_) || uninitialized ();
        }
      else
        {
          return (head_.next () == &head_);
        }
    }

    /**
     * @details
     * Initialise the mandatory node with links to itself.
     */
    template <class HeadT, class ElementT>
    void
    double_list<HeadT, ElementT>::clear (void)
    {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
      trace::printf ("%s() @%p\n", __func__, this);
#endif
      head_.next (&head_);
      head_.previous (&head_);
    }

    template <class HeadT, class ElementT>
    constexpr typename double_list<HeadT, ElementT>::pointer
    double_list<HeadT, ElementT>::head (void) const
    {
      return reinterpret_cast<pointer> (head_.next ());
    }

    template <class HeadT, class ElementT>
    constexpr typename double_list<HeadT, ElementT>::pointer
    double_list<HeadT, ElementT>::tail (void) const
    {
      return reinterpret_cast<pointer> (head_.previous ());
    }

    template <class HeadT, class ElementT>
    void
    double_list<HeadT, ElementT>::link (reference node)
    {
      if constexpr (is_statically_allocated::value)
        {
          if (uninitialized ())
            {
              // If this is the first time, initialise the list to empty.
              clear ();
            }
        }

      // Add node at the end of the list.
      insert_after (node, tail ());
    }

    template <class HeadT, class ElementT>
    void
    double_list<HeadT, ElementT>::insert_after (reference node, pointer after)
    {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
      trace::printf ("%s() n=%p after %p\n", __func__, &node, after);
#endif

      // Unlinked nodes must have both pointers null.
      // If not, most probably the node was already linked.
      // Or the memory is corrupted.
      assert (node.previous () == nullptr);
      assert (node.next () == nullptr);

      // The `after` node must be linked. Only the `next` pointer is
      // tested, since only it is used.
      assert (after->next () != nullptr);

      // Make the new node point to its neighbours.
      node.previous (after);
      node.next (after->next ());

      // Make the neighbours point to the node. The order is important.
      after->next ()->previous (&node);
      after->next (&node);
    }

    template <class HeadT, class ElementT>
    typename double_list<HeadT, ElementT>::iterator
    double_list<HeadT, ElementT>::begin ()
    {
      if constexpr (is_statically_allocated::value)
        {
          if (uninitialized ())
            {
              // If this is the first time, initialise the list to empty.
              clear ();
            }
        }

      return iterator{ static_cast<iterator_pointer> (head_.next ()) };
    }

    template <class HeadT, class ElementT>
    typename double_list<HeadT, ElementT>::iterator
    double_list<HeadT, ElementT>::end () const
    {
      return iterator{ static_cast<iterator_pointer> (
          const_cast<HeadT*> (&head_)) };
    }

    // ========================================================================

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
    intrusive_list_iterator<T, N, MP, U>::operator-> () const
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
      return reinterpret_cast<pointer> (
          reinterpret_cast<difference_type> (node_) - offset);
    }

    template <class T, class N, N T::*MP, class U>
    inline typename intrusive_list_iterator<T, N, MP, U>::iterator_pointer
    intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const
    {
      return node_;
    }

    // ========================================================================

    template <class T, class N, N T::*MP, class B, class U>
    constexpr intrusive_list<T, N, MP, B, U>::intrusive_list ()
    {
    }

    template <class T, class N, N T::*MP, class B, class U>
    constexpr intrusive_list<T, N, MP, B, U>::~intrusive_list ()
    {
    }

    template <class T, class N, N T::*MP, class B, class U>
    constexpr bool
    intrusive_list<T, N, MP, B, U>::empty (void) const
    {
      return double_list<B, N>::empty ();
    }

    template <class T, class N, N T::*MP, class B, class U>
    void
    intrusive_list<T, N, MP, B, U>::link (U& node)
    {
      if constexpr (is_statically_allocated::value)
        {
          if (double_list<B, N>::uninitialized ())
            {
              // If this is the first time, initialise the list to empty.
              double_list<B, N>::clear ();
            }
        }

      // Compute the distance between the member intrusive link
      // node and the class begin.
      const auto offset = reinterpret_cast<difference_type> (
          &(static_cast<T*> (nullptr)->*MP));

      // Add thread intrusive node at the end of the list.
      double_list<B, N>::insert_after (
          *reinterpret_cast<N*> (reinterpret_cast<difference_type> (&node)
                                 + offset),
          const_cast<N*> (double_list<B, N>::tail ()));
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"

    /**
     * @note It is not `const` because it may initialise on first use.
     */
    template <class T, class N, N T::*MP, class B, class U>
    inline typename intrusive_list<T, N, MP, B, U>::iterator
    intrusive_list<T, N, MP, B, U>::begin ()
    {
      if constexpr (is_statically_allocated::value)
        {
          if (double_list<B, N>::uninitialized ())
            {
              // If this is the first time, initialise the list to empty.
              double_list<B, N>::clear ();
            }
        }

      return iterator{ static_cast<iterator_pointer> (
          double_list<B, N>::head_.next ()) };
    }

    /**
     * @note It is not `const` because it may initialise on first use.
     */
    template <class T, class N, N T::*MP, class B, class U>
    inline typename intrusive_list<T, N, MP, B, U>::iterator
    intrusive_list<T, N, MP, B, U>::end ()
    {
      if constexpr (is_statically_allocated::value)
        {
          if (double_list<B, N>::uninitialized ())
            {
              // If this is the first time, initialise the list to empty.
              double_list<B, N>::clear ();
            }
        }

      using head_type_ = typename double_list<B, N>::head_type;
      return iterator{ static_cast<iterator_pointer> (
          const_cast<head_type_*> (double_list<B, N>::head_pointer ())) };
    }

#pragma GCC diagnostic pop

    template <class T, class N, N T::*MP, class B, class U>
    inline typename intrusive_list<T, N, MP, B, U>::pointer
    intrusive_list<T, N, MP, B, U>::get_pointer (iterator_pointer node) const
    {
      // static_assert(std::is_convertible<U, T>::value == true, "U must be
      // implicitly convertible to T!");

      // Compute the distance between the member intrusive link
      // node and the class begin.
      const auto offset = reinterpret_cast<difference_type> (
          &(static_cast<T*> (nullptr)->*MP));

      // Compute the address of the object which includes the
      // intrusive node, by adjusting down the node address.
      return reinterpret_cast<pointer> (
          reinterpret_cast<difference_type> (node) - offset);
    }

    template <class T, class N, N T::*MP, class B, class U>
    typename intrusive_list<T, N, MP, B, U>::pointer
    intrusive_list<T, N, MP, B, U>::unlink_head (void)
    {
      assert (!empty ());

      // The first element in the list.
      iterator_pointer it
          = static_cast<iterator_pointer> (double_list<B, N>::head_.next ());
      it->unlink ();

      return get_pointer (it);
    }

    template <class T, class N, N T::*MP, class B, class U>
    typename intrusive_list<T, N, MP, B, U>::pointer
    intrusive_list<T, N, MP, B, U>::unlink_tail (void)
    {
      assert (!empty ());

      // The last element in the list.
      iterator_pointer it = static_cast<iterator_pointer> (
          double_list<B, N>::head_.previous ());
      it->unlink ();

      return get_pointer (it);
    }

    // ========================================================================
  } // namespace utils
} // namespace micro_os_plus

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_INLINES_H_

// ----------------------------------------------------------------------------
