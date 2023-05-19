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

/*
 * This library implements several double linked lists, used by some
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
 * initialised before the clients need to register; since the order
 * of static constructors is not defined, the only solution that
 * guarantees this is to initialize the registrar during startup
 * (via BSS init) before the static constructors.
 */

#ifndef MICRO_OS_PLUS_UTILS_LISTS_H_
#define MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------

#ifdef __cplusplus

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <iterator>

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
   * @brief A base class for a double linked list.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   *
   * @details
   * A pair of uninitialised pointers to the **next** and **previous** list
   * elements, plus a set of simple (some inlined) methods to access the
   * pointers.
   *
   * @note
   * Both the regular and the statically allocated list elements
   * are derived from this class.
   */
  class double_list_links_base
  {
  public:
    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    /**
     * @brief Construct an uninitialised list node.
     */
    constexpr double_list_links_base ();

    /**
     * @cond ignore
     */

    // The rule of five.
    double_list_links_base (const double_list_links_base&) = delete;
    double_list_links_base (double_list_links_base&&) = delete;
    double_list_links_base&
    operator= (const double_list_links_base&)
        = delete;
    double_list_links_base&
    operator= (double_list_links_base&&)
        = delete;

    /**
     * @endcond
     */

    /**
     * @brief Destruct the node.
     */
    constexpr ~double_list_links_base ();

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    /**
     * @brief Check if the node is uninitialised.
     * @par Parameters
     *  None.
     * @retval true The links are **not** initialised.
     * @retval false The links are initialised.
     */
    bool
    uninitialized (void) const;

    /**
     * @brief Initialise the node links.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    constexpr void
    initialize (void);

    /**
     * @brief Initialize the list only at first run.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Link the new node as **next**.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    link_next (double_list_links_base* node);

    /**
     * @brief Link the new node as **previous**.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    link_previous (double_list_links_base* node);

    /**
     * @brief Remove this node from the list.
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
    linked (void) const;

    /**
     * @brief Get the link to the **next** node.
     * @retval Pointer to the next node.
     */
    constexpr double_list_links_base*
    next (void) const;

    /**
     * @brief Get the link to the **previous** node.
     * @retval Pointer to the previous node.
     */
    constexpr double_list_links_base*
    previous (void) const;

    // /**
    //  * @}
    //  */

  protected:
    // /**
    //  * @name Private Member Variables
    //  * @{
    //  */

    /**
     * @brief Pointer to the **previous** node.
     */
    double_list_links_base* previous_;

    /**
     * @brief Pointer to the **next** node.
     */
    double_list_links_base* next_;

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class for the core of a double linked list (pointers to neighbours).
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   *
   * @details
   * The pair of pointers to the **next** and **previous** list
   * elements and the methods to access the pointers are
   * inherited from the base class.
   *
   * The constructor initialises the pointers to an empty list
   * (both pointers point to the node).
   */
  class double_list_links : public double_list_links_base
  {
  public:
    /**
     * @brief Type indicating that the links node is **not**
     * statically allocated.
     */
    using is_statically_allocated = std::false_type;

    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    /**
     * @brief Construct a list node (initialise the pointers).
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

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class for the core of a statically allocated double linked list
   * (pointers to neighbours).
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   *
   * @details
   * The pair of uninitialised pointers to the **next** and **previous** list
   * elements and the methods to access the pointers are
   * inherited from the base class.
   *
   * It is expected that instances of this class to be statically
   * allocated in the **bss** section and cleared (set to zero) during startup.
   *
   * These peculiar types of lists are used by registrars, to automate the
   * self-registration of other statically allocated objects, like drivers,
   * threads, etc.
   *
   * Since the order of static constructors is not defined, it is
   * perfectly and legally possible that the constructor
   * of the registrar will be invoked **after** the constructors of the
   * objects that need to register into the list, thus the registrar
   * must be guaranteed to be initialised **before** running any static
   * constructors.
   *
   * The solution is to design the object in such a way as to benefit
   * from the standard **bss** initialisation, in other words take `nullptr`
   * as starting values.
   *
   * In practical terms, the list initialisation cannot be done in the
   * constructor, but must be manually done before any method that
   * adds elements to the list is called.
   */
  class static_double_list_links : public double_list_links_base
  {
  public:
    /**
     * @brief Type indicating that the links node is statically allocated.
     */
    using is_statically_allocated = std::true_type;

    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    /**
     * @brief Construct a statically allocated list node
     * (**bss** initialised).
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

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    /**
     * @brief Reset the two pointers to `nullptr`.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    nullify (void);

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class template for a double linked list forward iterator.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   * @tparam T Type of object returned by the iterator.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This class provides an interface similar to `std::list::iterator`.
   *
   * In a common double linked list, all types are `double_list_links`.
   */
  template <class T, class N = T, class U = T>
  class double_list_iterator
  {
  public:
    // /**
    //  * @name Public Types
    //  * @{
    //  */

    /**
     * @brief Type of value "pointed to" by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object "pointed to" by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object "pointed to" by the iterator.
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
    using iterator_category = std::forward_iterator_tag;

    // /**
    //  * @}
    //  */

    // ------------------------------------------------------------------------
    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    constexpr double_list_iterator ();

    constexpr explicit double_list_iterator (iterator_pointer const node);

    constexpr explicit double_list_iterator (reference element);

    // DO NOT delete the copy constructors, since the default one are
    // used.

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Operators
    //  * @{
    //  */

    constexpr pointer
    operator->() const;

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

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    constexpr pointer
    get_pointer () const;

    constexpr iterator_pointer
    get_iterator_pointer () const;

    // /**
    //  * @}
    //  */

  protected:
    // /**
    //  * @name Private Member Variables
    //  * @{
    //  */

    /**
     * @brief Pointer to the node.
     */
    iterator_pointer node_;

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class template for a double linked list of nodes.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   * @tparam T Type of the elements linked into the list,
   * derived from class `double_list_links_base`.
   * @tparam L Type of the links node (one of
   * `double_list_links` or `static_double_list_links`).
   *
   * @details
   * A double linked list is a pair of head/tail pointers,
   * allowing to iterate over the nodes.
   *
   * @note
   * Currently only forward
   * iterators are provided, but there is no problem to add reverse
   * iterators, if needed.
   *
   * The list elements (of type T) should be derived from the
   * `double_list_links_base` class, (usually from `double_list_links`)
   * extended with the payload, that may be either the actual content
   * or a pointer to the content.
   *
   * The iterators return pointers to the list elements, i.e. to the
   * beginning of the objects of type T.
   *
   * @note
   * The class does not use inheritance, but composition for
   * the links node, to avoid inheriting unwanted methods from it.
   */
  template <class T, class L = double_list_links>
  class double_list
  {
  public:
    static_assert (std::is_base_of<double_list_links_base, L>::value == true,
                   "L must be derived from double_list_links_base!");
    static_assert (std::is_base_of<double_list_links_base, T>::value == true,
                   "T must be derived from double_list_links_base!");

    // /**
    //  * @name Public Types
    //  * @{
    //  */

    /**
     * @brief Type of the links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

    /**
     * @brief Type of value "pointed to" by the iterator.
     */
    using value_type = T;

    /**
     * @brief Type of pointer to object "pointed to" by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object "pointed to" by the iterator.
     */
    using reference = value_type&;

    /**
     * @brief Type of iterator over the values.
     */
    using iterator = double_list_iterator<value_type>;

    /**
     * @brief Type of reference to the iterator internal pointer.
     */
    using iterator_pointer = value_type*;

    /**
     * @brief Type indicating that the links node is statically allocated.
     */
    using is_statically_allocated =
        typename links_type::is_statically_allocated;

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    /**
     * @brief Construct a double linked list.
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

    // /**
    //  * @}
    //  */

  public:
    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    /**
     * @brief Check if the list is uninitialised
     * (only statically allocated can be).
     * @par Parameters
     *  None.
     * @retval true The list was **not** initialised.
     * @retval false The list was initialised.
     */
    bool
    uninitialized (void) const;

    /**
     * @brief Initialize the list only at first run.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Check if the list is empty.
     * @par Parameters
     *  None.
     * @retval true The list has **no** nodes.
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
     * @brief Get the list **head**.
     * @par Parameters
     *  None.
     * @return Pointer to the head node.
     */
    constexpr pointer
    head (void) const;

    /**
     * @brief Get the list **tail**.
     * @par Parameters
     *  None.
     * @return Pointer to the tail node.
     */
    constexpr pointer
    tail (void) const;

    /**
     * @brief Add a node to the tail of the list.
     */
    void
    link_tail (reference node);

    /**
     * @brief Add a node to the head of the list.
     */
    void
    link_head (reference node);

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     * @return An iterator positioned at the first element.
     */
    iterator
    begin () const;

    /**
     * @brief Iterator end.
     * @return An iterator positioned after the last element.
     */
    iterator
    end () const;

    // Required in derived class iterator end(), where direct
    // access to member fails.
    /**
     * @brief Get the address of the node storing the list links.
     * @return A pointer to the list head object.
     */
    constexpr const links_type*
    links_pointer () const
    {
      return &links_;
    }

    // ------------------------------------------------------------------------

  protected:
    // /**
    //  * @name Private Member Variables
    //  * @{
    //  */

    /**
     * @brief The list top node used to point to **head**
     * and **tail** nodes.
     *
     * @details
     * The node **next** pointer points to the list head, and the
     * **previous** pointer points to the list tail.
     *
     * To simplify processing, the list always has these pointers set,
     * with an empty list node pointing to itself.
     */
    links_type links_;

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class template for an intrusive list iterator.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   * @tparam T Type of object that includes the intrusive node.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam MP Name of the intrusive node member in object T.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This class provides an interface similar to `std::list::iterator`,
   * except that it keeps track of the offset where the intrusive
   * list element is located in the parent object.
   */
  template <class T, class N, N T::*MP, class U = T>
  class intrusive_list_iterator
  {
  public:
    // /**
    //  * @name Public Types
    //  * @{
    //  */

    /**
     * @brief Type of value "pointed to" by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object "pointed to" by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object "pointed to" by the iterator.
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
    using iterator_category = std::forward_iterator_tag;

    // /**
    //  * @}
    //  */

    // ------------------------------------------------------------------------
    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    constexpr intrusive_list_iterator ();

    constexpr explicit intrusive_list_iterator (iterator_pointer const node);

    constexpr explicit intrusive_list_iterator (reference element);

    // DO NOT delete the copy constructors, since the default one are
    // used.

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Operators
    //  * @{
    //  */

    pointer
    operator->() const;

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

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    /**
     * @brief Get the object node from the intrusive node.
     * @return Pointer to object node.
     */
    pointer
    get_pointer (void) const;

    iterator_pointer
    get_iterator_pointer () const;

    // /**
    //  * @}
    //  */

  protected:
    // /**
    //  * @name Private Member Variables
    //  * @{
    //  */

    /**
     * @brief Pointer to intrusive node.
     */
    iterator_pointer node_;

    // /**
    //  * @}
    //  */
  };

  // ==========================================================================

  /**
   * @brief A class template for a list of nodes which store the links inside themselves
   * as intrusive nodes.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   * @tparam T Type of object that includes the intrusive node.
   * @tparam N Type of intrusive node with the next & previous links.
   * @tparam MP Name of the intrusive node member in object T.
   * @tparam L Type of the links node (one of
   * `double_list_links` or `static_double_list_links`).
   * @tparam U Type stored in the list, derived from T.
   *
   * @par Examples
   *
   * @code{.cpp}
   * using threads_list = utils::intrusive_list<
   * thread, utils::double_list_links, &thread::child_links_>;
   * @endcode
   *
   * @details
   * A pair of head/tail pointers,
   * maintaining a list of intrusive nodes.
   *
   * Intrusive nodes do not need separate allocations
   * for the links, but store them in the linked
   * objects, in the MP member. The main thing this class
   * does is to compute the address of the object by subtracting
   * the offset from the address of the member storing the pointers.
   *
   * For statically allocated lists, set L=static_double_list_links.
   */

  template <class T, class N, N T::*MP, class L = double_list_links,
            class U = T>
  class intrusive_list : public double_list<N, L>
  {
  public:
    static_assert (std::is_base_of<double_list_links_base, L>::value == true,
                   "L must be derived from double_list_links_base!");
    static_assert (std::is_base_of<double_list_links_base, N>::value == true,
                   "N must be derived from double_list_links_base!");

    // /**
    //  * @name Public Types
    //  * @{
    //  */

    /**
     * @brief Type of the list links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

    /**
     * @brief Type of value "pointed to" by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object "pointed to" by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object "pointed to" by the iterator.
     */
    using reference = value_type&;

    /**
     * @brief Type of iterator over the values.
     */
    using iterator = intrusive_list_iterator<T, N, MP, U>;

    /**
     * @brief Type of reference to the iterator internal pointer.
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

    // /**
    //  * @}
    //  */

    // /**
    //  * @name Constructors & Destructor
    //  * @{
    //  */

    /**
     * @brief Construct an intrusive double linked list.
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

    // /**
    //  * @}
    //  */

  public:
    // /**
    //  * @name Public Member Functions
    //  * @{
    //  */

    /**
     * @brief Initialize the list only at first run.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Check if the list is empty.
     * @par Parameters
     *  None.
     * @retval true The list has no nodes.
     * @retval false The list has at least one node.
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
    link_tail (reference node);

    /**
     * @brief Add a node to the head of the list.
     * @param [in] node Reference to a list node.
     * @par Returns
     *  Nothing.
     */
    void
    link_head (reference node);

    /**
     * @brief Unlink the last element from the list.
     * @return Pointer to the last element in the list.
     */
    pointer
    unlink_tail (void);

    /**
     * @brief Unlink the first element from the list.
     * @return Pointer to the first element in the list.
     */
    pointer
    unlink_head (void);

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     * @return An iterator positioned at the first element.
     */
    iterator
    begin () const;

    /**
     * @brief Iterator begin.
     * @return An iterator positioned after the last element.
     */
    iterator
    end () const;

    // ------------------------------------------------------------------------

    // /**
    //  * @}
    //  */
  protected:
    /**
     * @brief Get the address of the node.
     * @return A pointer with the address of the node.
     */
    pointer
    get_pointer (iterator_pointer node) const;
  };

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ===== Inline & template implementations ====================================

// All other inlines.
#include "inlines.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
