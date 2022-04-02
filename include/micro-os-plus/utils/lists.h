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

/*
 * This library implements several double linked lists, used by several
 * µOS++ components to keep track of internal objects; however it is
 * generic enough to be useful in other applications too, thus packing
 * it as a separate library.
 *
 * The main differentiator from `std::list` is that the implementation
 * does not require dynamic memory allocation for the list links,
 * hence it does not need an allocator.
 *
 * Instead, it uses intrusive lists, which store the links inside the
 * list elements.
 *
 * Another specific feature is statically initialised lists.
 *
 * These are lists created in the global scope which do not change the
 * content of any of their members in the constructors; instead,
 * they are fully initialized by setting the entire content to zero
 * during startup (via BSS init).
 *
 * This allows other static objects to auto-register themselves to
 * static registrar objects. This requires the registrar to be
 * initialised before the clients need to registrer; since the order
 * of static constructors is not defined, the only solution that
 * guarantees this is to initialize the registrar during startup
 * (via BSS init) before the static constructors.
 */

#ifndef MICRO_OS_PLUS_UTILS_LISTS_H_
#define MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------

#ifdef __cplusplus

// ----------------------------------------------------------------------------

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <iterator>

// ----------------------------------------------------------------------------

#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif

namespace micro_os_plus
{
  namespace utils
  {
    // ========================================================================

    /**
     * @brief Statically allocated core of a double linked list,
     * pointers to next, previous.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     *
     * @details A pair of next/prev uninitialised pointers.
     *
     * Statically allocated variables are stored in BSS
     * and are cleared during startup.
     */
    class static_double_list_links
    {
    public:
      using is_statically_allocated = std::true_type;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct a list node (BSS initialised).
       */
      constexpr static_double_list_links ();

      /**
       * @cond ignore
       */

      // The rule of five.
      static_double_list_links (const static_double_list_links&) = delete;
      static_double_list_links (static_double_list_links&&) = delete;
      static_double_list_links&
      operator= (const static_double_list_links&)
          = delete;
      static_double_list_links&
      operator= (static_double_list_links&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the node.
       */
      constexpr ~static_double_list_links ();

      /**
       * @}
       */

      /**
       * @name Public Member Functions
       * @{
       */

      /**
       * @brief Clear the links.
       * @par Parameters
       *  None.
       * @par Returns
       *  Nothing.
       */
      constexpr void
      clear (void);

      void
      link (static_double_list_links* after);

      /**
       * @brief Remove the node from the list.
       * @par Returns
       *  Nothing.
       */
      void
      unlink (void);

      /**
       * @brief Check if the node is linked to a double list.
       * @retval true The node is linked with both pointers.
       * @retval false The node is not linked.
       */
      bool
      linked (void);

      /**
       * @brief Return the link to the next node.
       * @retval Pointer to the next node.
       */
      constexpr static_double_list_links*
      next (void) const;

      /**
       * @brief Return the link to the previous node.
       * @retval Pointer to the previous node.
       */
      constexpr static_double_list_links*
      previous (void) const;

      /**
       * @brief Link the next node.
       * @par Returns
       *  Nothing.
       */
      constexpr void
      next (static_double_list_links* n);

      /**
       * @brief Link the previous node.
       * @par Returns
       *  Nothing.
       */
      constexpr void
      previous (static_double_list_links* n);

      /**
       * @}
       */

    protected:
      /**
       * @name Private Member Variables
       * @{
       */

      /**
       * @brief Pointer to the previous node.
       */
      static_double_list_links* previous_;

      /**
       * @brief Pointer to the next node.
       */
      static_double_list_links* next_;

      /**
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief The core of a double linked list, pointers to next,
     * previous.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     *
     * @details A pair of next/prev null pointers.
     * Identical with `static_double_list_links` except the
     * constructor that clears the pointers.
     */
    class double_list_links : public static_double_list_links
    {
    public:
      using is_statically_allocated = std::false_type;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct a list node (explicitly set the pointers to nullptr).
       */
      constexpr double_list_links ();

      /**
       * @cond ignore
       */

      // The rule of five.
      double_list_links (const double_list_links&) = delete;
      double_list_links (double_list_links&&) = delete;
      double_list_links&
      operator= (const double_list_links&)
          = delete;
      double_list_links&
      operator= (double_list_links&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the node.
       */
      constexpr ~double_list_links ();

      /**
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief Template for a double linked list iterator.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     * @tparam T Type of object returned by the iterator.
     * @tparam N Type of intrusive node. Must have the public members
     * **previous** & **next**.
     * @tparam U Type stored in the list, derived from T.
     *
     * @details
     * This class provides an interface similar to std::list::iterator.
     */
    template <class T, class N = T, class U = T>
    class double_list_iterator
    {
    public:
      /**
       * @name Public Types
       * @{
       */

      /**
       * @brief Type of value "pointed to" by the iterator.
       */
      using value_type = U;

      /**
       * @brief Type of pointer to object "pointed to" by the iterator.
       */
      using pointer = U*;

      /**
       * @brief Type of reference to object "pointed to" by the iterator.
       */
      using reference = U&;

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
      using iterator_category = std::forward_iterator_tag;

      /**
       * @}
       */

      // ----------------------------------------------------------------------
      /**
       * @name Constructors & Destructor
       * @{
       */

      constexpr double_list_iterator ();

      constexpr explicit double_list_iterator (iterator_pointer const node);

      constexpr explicit double_list_iterator (reference element);

      /**
       * @}
       */

      /**
       * @name Operators
       * @{
       */

      constexpr pointer
      operator-> () const;

      constexpr reference
      operator* () const;

      constexpr double_list_iterator&
      operator++ ();

      constexpr double_list_iterator
      operator++ (int);

      constexpr double_list_iterator&
      operator-- ();

      constexpr double_list_iterator
      operator-- (int);

      constexpr bool
      operator== (const double_list_iterator& other) const;

      constexpr bool
      operator!= (const double_list_iterator& other) const;

      /**
       * @}
       */

      /**
       * @name Public Member Functions
       * @{
       */

      constexpr pointer
      get_pointer () const;

      constexpr iterator_pointer
      get_iterator_pointer () const;

      /**
       * @}
       */

    protected:
      /**
       * @name Private Member Variables
       * @{
       */

      /**
       * @brief Pointer to intrusive node.
       */
      iterator_pointer node_;

      /**
       * @}
       */
    };

    // ========================================================================

    // HeadT must be one of static_double_list_links or double_list_links.
    // ElementT must be derived from class static_double_list_links.

    /**
     * @brief Circular double linked list of nodes.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     *
     * @details The head of a double listed list.
     *
     * This is the simplest list, used as base class for scheduler
     * lists that must be available for any statically constructed
     * thread while still avoiding the 'static initialisation order fiasco'.
     *
     * The idea is to design the object in such a way as to benefit
     * from the standard BSS initialisation, in other words take `nullptr`
     * as starting values.
     *
     * This has the downside of requiring additional tests before
     * adding new nodes to the list, to create the initial self
     * links, and when checking if the list is empty.
     */
    template <class HeadT = double_list_links,
              class ElementT = double_list_links>
    class double_list
    {
    public:
      using head_type = HeadT;

      using value_type = ElementT;
      using reference = value_type&;
      using pointer = value_type*;

      using iterator = double_list_iterator<value_type>;
      using iterator_pointer = value_type*;

      using is_statically_allocated = typename HeadT::is_statically_allocated;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct a list.
       */
      double_list ();

      /**
       * @cond ignore
       */

      // The rule of five.
      double_list (const double_list&) = delete;
      double_list (double_list&&) = delete;
      double_list&
      operator= (const double_list&)
          = delete;
      double_list&
      operator= (double_list&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the list.
       */
      constexpr ~double_list ();

      /**
       * @}
       */

    public:
      /**
       * @name Public Member Functions
       * @{
       */

      /**
       * @brief Check if the list is unitialised.
       * @par Parameters
       *  None.
       * @retval true The list was not initialised.
       * @retval false The list was initialised.
       */
      bool
      uninitialized (void) const;

      /**
       * @brief Check if the list is empty.
       * @par Parameters
       *  None.
       * @retval true The list has no nodes.
       * @retval false The list has at least one node.
       */
      bool
      empty (void) const;

      /**
       * @brief Clear the list.
       * @par Parameters
       *  None.
       * @par Returns
       *  Nothing.
       */
      void
      clear (void);

      /**
       * @brief Get the list head.
       * @par Parameters
       *  None.
       * @return Pointer to head node.
       */
      constexpr pointer
      head (void) const;

      /**
       * @brief Get the list tail.
       * @par Parameters
       *  None.
       * @return Pointer to tail node.
       */
      constexpr pointer
      tail (void) const;

      /**
       * @brief Add a node to the tail of the list.
       */
      void
      link (reference node);

      // ----------------------------------------------------------------------

      /**
       * @brief Iterator begin.
       * @return An iterator positioned at the first element.
       */
      iterator
      begin ();

      /**
       * @brief Iterator end.
       * @return An iterator positioned after the last element.
       */
      iterator
      end () const;

      // Required in derived class iterator end(), where direct
      // access to member fails.
      constexpr const head_type*
      head_pointer () const
      {
        return &head_;
      }

      // ----------------------------------------------------------------------

    protected:
      /**
       * @name Private Member Functions
       * @{
       */

      /**
       * @brief Insert a new node after existing node.
       * @param node Reference to node to insert.
       * @param after Reference to existing node.
       * @par Returns
       *  Nothing.
       */
      void
      insert_after (reference node, pointer after);

      /**
       * @}
       */

    protected:
      /**
       * @name Private Member Variables
       * @{
       */

      /**
       * @brief A list node used to point to head and tail.
       * @details
       * To simplify processing, the list always has a node.
       */
      head_type head_;

      /**
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief Template for an intrusive list iterator.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     * @tparam T Type of object that includes the intrusive node.
     * @tparam N Type of intrusive node. Must have the public members
     * **previous** & **next**.
     * @tparam MP Name of the intrusive node member in object T.
     * @tparam U Type stored in the list, derived from T.
     *
     * @details
     * This class provides an interface similar to std::list::iterator.
     */
    template <class T, class N, N T::*MP, class U = T>
    class intrusive_list_iterator
    {
    public:
      /**
       * @name Public Types
       * @{
       */

      /**
       * @brief Type of value "pointed to" by the iterator.
       */
      using value_type = U;

      /**
       * @brief Type of pointer to object "pointed to" by the iterator.
       */
      using pointer = U*;

      /**
       * @brief Type of reference to object "pointed to" by the iterator.
       */
      using reference = U&;

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
      using iterator_category = std::forward_iterator_tag;

      /**
       * @}
       */

      // ----------------------------------------------------------------------
      /**
       * @name Constructors & Destructor
       * @{
       */

      constexpr intrusive_list_iterator ();

      constexpr explicit intrusive_list_iterator (iterator_pointer const node);

      constexpr explicit intrusive_list_iterator (reference element);

      /**
       * @}
       */

      /**
       * @name Operators
       * @{
       */

      pointer
      operator-> () const;

      reference
      operator* () const;

      intrusive_list_iterator&
      operator++ ();

      intrusive_list_iterator
      operator++ (int);

      intrusive_list_iterator&
      operator-- ();

      intrusive_list_iterator
      operator-- (int);

      bool
      operator== (const intrusive_list_iterator& other) const;

      bool
      operator!= (const intrusive_list_iterator& other) const;

      /**
       * @}
       */

      /**
       * @name Public Member Functions
       * @{
       */

      /**
       * @brief Get the object node from the intrusive node.
       * @return Pointer to object node.
       */
      pointer
      get_pointer (void) const;

      iterator_pointer
      get_iterator_pointer () const;

      /**
       * @}
       */

    protected:
      /**
       * @name Private Member Variables
       * @{
       */

      /**
       * @brief Pointer to intrusive node.
       */
      iterator_pointer node_;

      /**
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief A list of intrusive nodes,
     * which store the links inside the linked object.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     * @tparam T Type of object that includes the intrusive node.
     * @tparam N Type of intrusive node. Must have the public members
     * **previous** & **next**.
     * @tparam MP Name of the intrusive node member in object T.
     * @tparam B Type of the head links.
     * @tparam U Type stored in the list, derived from T.
     *
     * @par Examples
     *
     * @code{.cpp}
     * using threads_list = utils::intrusive_list<
     * thread, utils::double_list_links, &thread::child_links_>;
     * @endcode
     *
     * @details A pair of next/prev pointers,
     * maintaining a list of intrusive nodes.
     *
     * Intrusive nodes do not need separate allocations
     * for the links, but store them in the linked
     * objects, in the MP member. The main thing this class
     * does is to compute the address of the object by subtracting
     * the offset from the address of the member storing the pointers.
     *
     * For statically allocated lists, set B=static_double_list_links.
     */

    template <class T, class N, N T::*MP, class B = double_list_links,
              class U = T>
    class intrusive_list : public double_list<B, N>
    {
    public:
      using value_type = U;
      using pointer = U*;
      using reference = U&;
      using difference_type = ptrdiff_t;

      using iterator = intrusive_list_iterator<T, N, MP, U>;

      using is_statically_allocated = typename B::is_statically_allocated;

      /**
       * @brief Type of reference to the iterator internal pointer.
       */
      using iterator_pointer = N*;

      // From base class.
      // using is_statically_allocated = std::true_type;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct an intrusive list.
       */
      constexpr intrusive_list ();

      /**
       * @cond ignore
       */

      // The rule of five.
      intrusive_list (const intrusive_list&) = delete;
      intrusive_list (intrusive_list&&) = delete;
      intrusive_list&
      operator= (const intrusive_list&)
          = delete;
      intrusive_list&
      operator= (intrusive_list&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the list.
       */
      constexpr ~intrusive_list ();

      /**
       * @}
       */

    public:
      /**
       * @name Public Member Functions
       * @{
       */

      constexpr bool
      empty (void) const;

      /**
       * @brief Add a node to the tail of the list.
       * @param [in] node Reference to a list node.
       * @par Returns
       *  Nothing.
       */
      void
      link (reference node);

      /**
       * @brief Unlink the first element from the list.
       * @return Pointer to the first element in the list.
       */
      pointer
      unlink_head (void);

      /**
       * @brief Unlink the last element from the list.
       * @return Pointer to the last element in the list.
       */
      pointer
      unlink_tail (void);

      /**
       * @brief Iterator begin.
       * @return An iterator positioned at the first element.
       */
      iterator
      begin ();

      /**
       * @brief Iterator begin.
       * @return An iterator positioned after the last element.
       *
       * It cannot be const for static cases, since it must call clear().
       */
      iterator
      end ();

      /**
       * @}
       */
    protected:
      /**
       * @brief Get the address of the node.
       * @return A pointer with the address of the node.
       */
      pointer
      get_pointer (iterator_pointer node) const;
    };

    // ------------------------------------------------------------------------
  } // namespace utils
} // namespace micro_os_plus

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
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT) \
    || defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
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
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT) \
    || defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
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

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
