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

    /**
     * @brief Add new node as next.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    link_next (static_double_list_links* node);

    /**
     * @brief Add new node as previous.
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    link_previous (static_double_list_links* node);

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

  // ==========================================================================

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

  // ==========================================================================

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

    // ------------------------------------------------------------------------
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

  // ==========================================================================

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
     * @brief Check if the list is uninitialised.
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

    // ------------------------------------------------------------------------

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

  // ==========================================================================

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

    // ------------------------------------------------------------------------
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

  // ==========================================================================

  /**
   * @brief A list of intrusive nodes,
   * which store the links inside the linked object.
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   * @ingroup micro-os-plus-utils
   * @tparam T Type of object that includes the intrusive node.
   * @tparam N Type of intrusive with the next & previous links.
   * @tparam MP Name of the intrusive node member in object T.
   * @tparam H Type of the node storing the head links.
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
   * For statically allocated lists, set H=static_double_list_links.
   */

  template <class T, class N, N T::*MP, class H = double_list_links,
            class U = T>
  class intrusive_list : public double_list<H, N>
  {
  public:
    using value_type = U;
    using pointer = U*;
    using reference = U&;
    using difference_type = ptrdiff_t;

    using iterator = intrusive_list_iterator<T, N, MP, U>;

    using is_statically_allocated = typename H::is_statically_allocated;

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
    begin ();

    /**
     * @brief Iterator begin.
     * @return An iterator positioned after the last element.
     *
     * It cannot be const for static cases, since it must call clear().
     */
    iterator
    end ();

    // ------------------------------------------------------------------------

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
