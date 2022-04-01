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
      static_double_list_links ();

      /**
       * @cond ignore
       */

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
      ~static_double_list_links ();

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
      void
      clear (void);

      /**
       * @brief Remove the node from the list.
       * @par Returns
       *  Nothing.
       */
      void
      unlink (void);

      /**
       * @brief Check if the node is unlinked.
       * @retval true The node is not linked.
       * @retval false The node is linked to a list.
       */
      bool
      unlinked (void);

      static_double_list_links*
      next (void) const;

      static_double_list_links*
      previous (void) const;

      void
      next (static_double_list_links* n);

      void
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
       * @brief Pointer to previous node.
       */
      static_double_list_links* previous_;

      /**
       * @brief Pointer to next node.
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
       * @brief Construct a list node (explicitly set to nullptr).
       */
      double_list_links ();

      /**
       * @cond ignore
       */

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
      ~double_list_links ();

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
    template <typename T, typename N = T, typename U = T>
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

      pointer
      operator-> () const;

      reference
      operator* () const;

      double_list_iterator&
      operator++ ();

      double_list_iterator
      operator++ (int);

      double_list_iterator&
      operator-- ();

      double_list_iterator
      operator-- (int);

      bool
      operator== (const double_list_iterator& other) const;

      bool
      operator!= (const double_list_iterator& other) const;

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
     * @brief Statically allocated circular double linked list of nodes.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     *
     * @details An unitialised head of a double linked list.
     *
     * Statically allocated variables are stored in BSS
     * and are cleared during startup.
     */
    class static_double_list
    {
    public:
      using value_type = static_double_list_links;
      using reference = value_type&;
      using pointer = value_type*;

      using iterator = double_list_iterator<value_type>;
      using iterator_pointer = value_type*;

      using is_statically_allocated = std::true_type;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct a list.
       */
      static_double_list ();

      /**
       * @cond ignore
       */

      static_double_list (const static_double_list&) = delete;
      static_double_list (static_double_list&&) = delete;
      static_double_list&
      operator= (const static_double_list&)
          = delete;
      static_double_list&
      operator= (static_double_list&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the list.
       */
      ~static_double_list ();

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
       * @brief Clear the list.
       * @par Parameters
       *  None.
       * @par Returns
       *  Nothing.
       */
      void
      clear (void);

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

      /**
       * @brief Get the list head.
       * @par Parameters
       *  None.
       * @return Pointer to head node.
       */
      volatile static_double_list_links*
      head (void) const;

      /**
       * @brief Get the list tail.
       * @par Parameters
       *  None.
       * @return Pointer to tail node.
       */
      volatile static_double_list_links*
      tail (void) const;

      /**
       * @brief Add a node to the tail of the list.
       */
      void
      link (reference node);

      /**
       * @}
       */

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
      insert_after (static_double_list_links& node,
                    static_double_list_links* after);

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
      static_double_list_links head_;

      /**
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief Circular double linked list of nodes.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     *
     * @details The head of a double listed list.
     */
    class double_list : public static_double_list
    {
    public:
      using is_statically_allocated = std::false_type;

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
      ~double_list ();

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
       * @brief Add a node to the tail of the list.
       */
      void
      link (reference node);

      // TODO: add iterator.

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
    template <typename T, typename N, N T::*MP, typename U = T>
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
     * @brief Statically allocated list of intrusive nodes,
     * which store the links inside the linked object.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     * @tparam T Type of object that includes the intrusive node.
     * @tparam N Type of intrusive node. Must have the public members
     * **previous** & **next**.
     * @tparam MP Name of the intrusive node member in object T.
     * @tparam U Type stored in the list, derived from T.
     *
     * @par Examples
     *
     * @code{.cpp}
     * using threads_list = utils::static_intrusive_list<
     * thread, utils::double_list_links, &thread::child_links_>;
     * @endcode
     *
     * @details A pair of next/prev uninitialised pointers,
     * maintaining a list of intrusive nodes.
     *
     * Intrusive nodes do not need separate allocations
     * for the links, but store them in the linked
     * objects, in the MP member. The main thing this class
     * does is to compute the address of the object by subtracting
     * the offset from the address of the member storing the pointers.
     */
    template <typename T, typename N, N T::*MP, typename U = T>
    class static_intrusive_list : public static_double_list
    {
    public:
      using value_type = U;
      using pointer = U*;
      using reference = U&;
      using difference_type = ptrdiff_t;

      using iterator = intrusive_list_iterator<T, N, MP, U>;

      /**
       * @brief Type of reference to the iterator internal pointer.
       */
      using iterator_pointer = N*;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct an intrusive list.
       */
      static_intrusive_list ();

      /**
       * @brief Construct an intrusive list with controlled inits.
       * @param clr If true, the list is cleared.
       */
      static_intrusive_list (bool clr);

      /**
       * @cond ignore
       */

      static_intrusive_list (const static_intrusive_list&) = delete;
      static_intrusive_list (static_intrusive_list&&) = delete;
      static_intrusive_list&
      operator= (const static_intrusive_list&)
          = delete;
      static_intrusive_list&
      operator= (static_intrusive_list&&)
          = delete;

      /**
       * @endcond
       */

      /**
       * @brief Destruct the list.
       */
      ~static_intrusive_list ();

      /**
       * @}
       */

    protected:
      pointer
      get_pointer (iterator_pointer node) const;

    public:
      /**
       * @name Public Member Functions
       * @{
       */

      /**
       * @brief Add a node to the tail of the list.
       * @param [in] node Reference to a list node.
       * @par Returns
       *  Nothing.
       */
      void
      link (reference node);

      /**
       * @brief Iterator begin.
       * @return An iterator positioned at the first element.
       */
      iterator
      begin ();

      /**
       * @brief Iterator begin.
       * @return An iterator positioned after the last element.
       */
      iterator
      end () const;

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
       * @}
       */
    };

    // ========================================================================

    /**
     * @brief List of intrusive nodes,
     * which store the links inside the linked object.
     * @headerfile lists.h <micro-os-plus/utils/lists.h>
     * @ingroup micro-os-plus-utils
     * @tparam T Type of object that includes the intrusive node.
     * @tparam N Type of intrusive node. Must have the public members
     * **previous** & **next**.
     * @tparam MP Name of the intrusive node member in object T.
     * @tparam U Type stored in the list, derived from T.
     *
     * @par Examples
     *
     * @code{.cpp}
     * using threads_list = utils::static_intrusive_list<
     * thread, utils::double_list_links, &thread::child_links_>;
     * @endcode
     *
     * @details A pair of next/prev null pointers,
     * maintaining a list of intrusive nodes.
     */
    template <typename T, typename N, N T::*MP, typename U = T>
    class intrusive_list : public static_intrusive_list<T, N, MP, U>
    {
    public:
      using is_statically_allocated = std::false_type;

      /**
       * @name Constructors & Destructor
       * @{
       */

      /**
       * @brief Construct an intrusive list.
       */
      intrusive_list ();

      /**
       * @cond ignore
       */

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
      ~intrusive_list ();
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

    inline static_double_list_links::static_double_list_links ()
    {
      // Pointers are not explicitly initialised on purpose,
      // since it is assumed that BSS was cleared at startup.
    }

    inline static_double_list_links::~static_double_list_links ()
    {
    }

    inline void
    static_double_list_links::clear (void)
    {
      previous_ = nullptr;
      next_ = nullptr;
    }

    inline bool
    static_double_list_links::unlinked (void)
    {
      return (next_ == nullptr);
    }

    inline static_double_list_links*
    static_double_list_links::next (void) const
    {
      return next_;
    }

    inline static_double_list_links*
    static_double_list_links::previous (void) const
    {
      return previous_;
    }

    inline void
    static_double_list_links::next (static_double_list_links* n)
    {
      next_ = n;
    }

    inline void
    static_double_list_links::previous (static_double_list_links* n)
    {
      previous_ = n;
    }

    // ========================================================================

    inline double_list_links::double_list_links ()
    {
      // This time the members are explicitly initialised.
      clear();
    }

    inline double_list_links::~double_list_links ()
    {
    }

    // ========================================================================
    template <typename T, typename N, typename U>
    constexpr double_list_iterator<T, N, U>::double_list_iterator () : node_{}
    {
    }

    template <typename T, typename N, typename U>
    constexpr double_list_iterator<T, N, U>::double_list_iterator (
        iterator_pointer const node)
        : node_{ node }
    {
    }

#if 0
    template <typename T, typename N, typename U>
    constexpr double_list_iterator<T, N, U>::double_list_iterator (
        reference element)
        : node_{ &(element.*MP) }
    {
      static_assert (std::is_convertible<U, T>::value == true,
                     "U must be implicitly convertible to T!");
    }
#endif

    template <typename T, typename N, typename U>
    inline typename double_list_iterator<T, N, U>::pointer
    double_list_iterator<T, N, U>::operator-> () const
    {
      return get_pointer ();
    }

    template <typename T, typename N, typename U>
    inline typename double_list_iterator<T, N, U>::reference
    double_list_iterator<T, N, U>::operator* () const
    {
      return *get_pointer ();
    }

    template <typename T, typename N, typename U>
    inline double_list_iterator<T, N, U>&
    double_list_iterator<T, N, U>::operator++ ()
    {
      node_ = static_cast<N*> (node_->next ());
      return *this;
    }

    template <typename T, typename N, typename U>
    inline double_list_iterator<T, N, U>
    double_list_iterator<T, N, U>::operator++ (int)
    {
      const auto tmp = *this;
      node_ = static_cast<iterator_pointer> (node_->next);
      return tmp;
    }

    template <typename T, typename N, typename U>
    inline double_list_iterator<T, N, U>&
    double_list_iterator<T, N, U>::operator-- ()
    {
      node_ = static_cast<iterator_pointer> (node_->previous);
      return *this;
    }

    template <typename T, typename N, typename U>
    double_list_iterator<T, N, U>
    double_list_iterator<T, N, U>::operator-- (int)
    {
      const auto tmp = *this;
      node_ = static_cast<iterator_pointer> (node_->previous);
      return tmp;
    }

    template <typename T, typename N, typename U>
    inline bool
    double_list_iterator<T, N, U>::operator== (
        const double_list_iterator& other) const
    {
      return node_ == other.node_;
    }

    template <typename T, typename N, typename U>
    inline bool
    double_list_iterator<T, N, U>::operator!= (
        const double_list_iterator& other) const
    {
      return node_ != other.node_;
    }

#if 0
    template <typename T, typename N, typename U>
    inline typename double_list_iterator<T, N, U>::pointer
    double_list_iterator<T, N, U>::get_pointer (void) const
    {
      return (node_->*MP);
    }
#endif

    template <typename T, typename N, typename U>
    inline typename double_list_iterator<T, N, U>::iterator_pointer
    double_list_iterator<T, N, U>::get_iterator_pointer () const
    {
      return node_;
    }

    // ========================================================================

    /**
     * @details
     * The initial list status is empty by having the pointers null.
     */
    inline static_double_list::static_double_list ()
    {
      // By all means, do not add any code here.
      // The constructor was not `default` to benefit from inline.
    }

    /**
     * @details
     * There must be no nodes in the list.
     */
    inline static_double_list::~static_double_list ()
    {
    }

    inline bool
    static_double_list::uninitialized (void) const
    {
      // If it points to nowhere, it is not yet initialised.
      return (head_.previous () == nullptr);
    }

    inline bool
    static_double_list::empty (void) const
    {
      // If it points to itself, it is empty.
      return (head_.next () == &head_) || (head_.next () == nullptr);
    }

    inline volatile static_double_list_links*
    static_double_list::head (void) const
    {
      return static_cast<volatile static_double_list_links*> (head_.next ());
    }

    // ========================================================================

    inline bool
    double_list::empty (void) const
    {
      // If it points to itself, it is empty.
      return (head_.next () == &head_);
    }

    // ========================================================================

    template <typename T, typename N, N T::*MP, typename U>
    constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator ()
        : node_{}
    {
    }

    template <typename T, typename N, N T::*MP, typename U>
    constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
        N* const node)
        : node_{ node }
    {
    }

    template <typename T, typename N, N T::*MP, typename U>
    constexpr intrusive_list_iterator<T, N, MP, U>::intrusive_list_iterator (
        reference element)
        : node_{ &(element.*MP) }
    {
      static_assert (std::is_convertible<U, T>::value == true,
                     "U must be implicitly convertible to T!");
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline typename intrusive_list_iterator<T, N, MP, U>::pointer
    intrusive_list_iterator<T, N, MP, U>::operator-> () const
    {
      return get_pointer ();
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline typename intrusive_list_iterator<T, N, MP, U>::reference
    intrusive_list_iterator<T, N, MP, U>::operator* () const
    {
      return *get_pointer ();
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline intrusive_list_iterator<T, N, MP, U>&
    intrusive_list_iterator<T, N, MP, U>::operator++ ()
    {
      node_ = static_cast<iterator_pointer> (node_->next ());
      return *this;
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline intrusive_list_iterator<T, N, MP, U>
    intrusive_list_iterator<T, N, MP, U>::operator++ (int)
    {
      const auto tmp = *this;
      node_ = static_cast<iterator_pointer> (node_->next ());
      return tmp;
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline intrusive_list_iterator<T, N, MP, U>&
    intrusive_list_iterator<T, N, MP, U>::operator-- ()
    {
      node_ = static_cast<iterator_pointer> (node_->previous ());
      return *this;
    }

    template <typename T, typename N, N T::*MP, typename U>
    intrusive_list_iterator<T, N, MP, U>
    intrusive_list_iterator<T, N, MP, U>::operator-- (int)
    {
      const auto tmp = *this;
      node_ = static_cast<iterator_pointer> (node_->previous ());
      return tmp;
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline bool
    intrusive_list_iterator<T, N, MP, U>::operator== (
        const intrusive_list_iterator& other) const
    {
      return node_ == other.node_;
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline bool
    intrusive_list_iterator<T, N, MP, U>::operator!= (
        const intrusive_list_iterator& other) const
    {
      return node_ != other.node_;
    }

    template <typename T, typename N, N T::*MP, typename U>
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

    template <typename T, typename N, N T::*MP, typename U>
    inline typename intrusive_list_iterator<T, N, MP, U>::iterator_pointer
    intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const
    {
      return node_;
    }

    // ========================================================================

    template <typename T, typename N, N T::*MP, typename U>
    inline static_intrusive_list<T, N, MP, U>::static_intrusive_list ()
    {
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline static_intrusive_list<T, N, MP, U>::static_intrusive_list (bool clr)
    {
      if (clr)
        {
          clear ();
        }
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline static_intrusive_list<T, N, MP, U>::~static_intrusive_list ()
    {
    }

    template <typename T, typename N, N T::*MP, typename U>
    void
    static_intrusive_list<T, N, MP, U>::link (U& node)
    {
      if (uninitialized ())
        {
          // If this is the first time, initialise the list to empty.
          clear ();
        }

      // Compute the distance between the member intrusive link
      // node and the class begin.
      const auto offset = reinterpret_cast<difference_type> (
          &(static_cast<T*> (nullptr)->*MP));

      // Add thread intrusive node at the end of the list.
      insert_after (*reinterpret_cast<static_double_list_links*> (
                        reinterpret_cast<difference_type> (&node) + offset),
                    const_cast<static_double_list_links*> (tail ()));
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"

    /**
     * @note It is not `const` because it may initialise on first use.
     */
    template <typename T, typename N, N T::*MP, typename U>
    inline typename static_intrusive_list<T, N, MP, U>::iterator
    static_intrusive_list<T, N, MP, U>::begin ()
    {
      if (uninitialized ())
        {
          // If this is the first time, initialise the list to empty.
          clear ();
        }
      return iterator{ static_cast<iterator_pointer> (head_.next ()) };
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline typename static_intrusive_list<T, N, MP, U>::iterator
    static_intrusive_list<T, N, MP, U>::end () const
    {
      return iterator{ static_cast<iterator_pointer> (
          const_cast<static_double_list_links*> (&head_)) };
    }

#pragma GCC diagnostic pop

    template <typename T, typename N, N T::*MP, typename U>
    inline typename static_intrusive_list<T, N, MP, U>::pointer
    static_intrusive_list<T, N, MP, U>::get_pointer (
        iterator_pointer node) const
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

    template <typename T, typename N, N T::*MP, typename U>
    typename static_intrusive_list<T, N, MP, U>::pointer
    static_intrusive_list<T, N, MP, U>::unlink_head (void)
    {
      assert (!empty ());

      // The first element in the list.
      iterator_pointer link = static_cast<iterator_pointer> (head_.next ());
      link->unlink ();

      return get_pointer (link);
    }

    template <typename T, typename N, N T::*MP, typename U>
    typename static_intrusive_list<T, N, MP, U>::pointer
    static_intrusive_list<T, N, MP, U>::unlink_tail (void)
    {
      assert (!empty ());

      // The last element in the list.
      iterator_pointer link
          = static_cast<iterator_pointer> (head_.previous ());
      link->unlink ();

      return get_pointer (link);
    }

    // ========================================================================

    template <typename T, typename N, N T::*MP, typename U>
    inline intrusive_list<T, N, MP, U>::intrusive_list ()
        : static_intrusive_list<T, N, MP, U>{ true }
    {
      // The parent contructor is instructed to clear the pointers.
    }

    template <typename T, typename N, N T::*MP, typename U>
    inline intrusive_list<T, N, MP, U>::~intrusive_list ()
    {
    }

  } // namespace utils
} // namespace micro_os_plus

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
