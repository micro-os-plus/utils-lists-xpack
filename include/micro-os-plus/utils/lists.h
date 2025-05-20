/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2016 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

/**
 * @file
 * @brief Main C++ header file with the declarations for the µOS++ lists classes.
 *
 * @details
 * The `lists.h` header file contains the C++ declarations of
 * the **µOS++ Intrusive Lists** classes, delivering
 * an efficient and lightweight linked list management system tailored
 * for embedded applications.
 *
 * The classes implementations are in the @ref lists.cpp and @ref lists-inlines.h
 * files.
 */

/**
 * @mainpage
 * This library implements several **doubly linked lists**, utilised by various
 * **µOS++** components to manage internal objects. Its design is sufficiently
 * **generic** to be valuable in other applications, warranting its packaging
 * as a standalone library.
 *
 * A key differentiator from `std::list` is that this implementation **does not
 * require dynamic memory allocation** for list links, thereby eliminating the
 * need for an allocator. Instead, it employs **intrusive lists**, where links
 * are stored directly within the list elements.
 *
 * Another notable feature is the support for **statically initialised lists**,
 * which can be created in the **global scope** without modifying their members
 * in constructors. These lists are fully **initialised** by setting their
 * entire content to zero during startup (via **BSS initialisation**).
 *
 * This approach enables **static objects** to **auto-register** with static
 * registrar instances. As the execution order of static constructors is
 * undefined, the only reliable way to ensure the registrar is ready before
 * clients attempt to register is to initialise it during **startup** (via BSS
 * initialisation) prior to the execution of static constructors.
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

/**
 * @brief The µOS++ utilities definitions.
 *
 * @details
 * The `micro_os_plus::utils` namespace serves as a dedicated space for
 * **utility list classes**, essential to the **µOS++** project. By
 * encapsulating commonly used list implementations, it enhances code
 * organisation, minimises redundancy, and improves overall maintainability
 * within the framework.
 *
 * This structured approach fosters modular development
 * and ensures seamless integration within **µOS++**, contributing to a
 * more efficient and scalable system.
 */
namespace micro_os_plus::utils
{
  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-double-lists
   * @brief A base class for a doubly linked list node.
   *
   * @details
   * This class provides a pair of uninitialised pointers to the **next** and
   * **previous** elements in a doubly linked list, along with a set of simple
   * (some inlined) methods to access and manipulate these pointers.
   *
   * @note
   * Both regular and statically allocated list elements are derived from this
   * class.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  class double_list_links_base
  {
  public:
    /**
     * @brief Construct an uninitialised list node.
     */
    constexpr double_list_links_base ();

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of list node objects is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    double_list_links_base (const double_list_links_base&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of list node objects is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    double_list_links_base (double_list_links_base&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    double_list_links_base&
    operator= (const double_list_links_base&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    double_list_links_base&
    operator= (double_list_links_base&&)
        = delete;

    /**
     * @brief Destruct the node.
     */
    constexpr ~double_list_links_base ();

    /**
     * @brief Check if the node is uninitialised.
     *
     * @par Parameters
     *  None.
     * @retval true The links are **not** initialised.
     * @retval false The links are initialised.
     */
    bool
    uninitialized (void) const;

    /**
     * @brief Initialise the node links.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    constexpr void
    initialize (void);

    /**
     * @brief Initialise the node links only if not already initialised.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Link the new node as **next**.
     *
     * @param [in] node Pointer to the node to be linked as next.
     * @par Returns
     *  Nothing.
     */
    void
    link_next (double_list_links_base* node);

    /**
     * @brief Link the new node as **previous**.
     *
     * @param [in] node Pointer to the node to be linked as previous.
     * @par Returns
     *  Nothing.
     */
    void
    link_previous (double_list_links_base* node);

    /**
     * @brief Remove this node from the list.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    unlink (void);

    /**
     * @brief Check if the node is linked to a doubly linked list.
     *
     * @par Parameters
     *  None.
     * @retval true The node is linked with both pointers.
     * @retval false The node is not linked.
     */
    bool
    linked (void) const;

    /**
     * @brief Get the link to the **next** node.
     *
     * @par Parameters
     *  None.
     * @retval Pointer to the next node.
     */
    constexpr double_list_links_base*
    next (void) const;

    /**
     * @brief Get the link to the **previous** node.
     *
     * @par Parameters
     *  None.
     * @retval Pointer to the previous node.
     */
    constexpr double_list_links_base*
    previous (void) const;

  protected:
    /**
     * @brief Pointer to the **previous** node.
     */
    double_list_links_base* previous_;

    /**
     * @brief Pointer to the **next** node.
     */
    double_list_links_base* next_;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-double-lists
   * @brief A class for the core of a doubly linked list (pointers to
   * neighbours).
   *
   * @details
   * The `double_list_links` class provides the fundamental structure for a
   * doubly linked list node, inheriting the pair of pointers to the **next**
   * and **previous** elements and the associated access methods from
   * `double_list_links_base`. The constructor initialises the pointers to form
   * an empty list, where both pointers refer to the node itself.
   *
   * This class is intended for use as the core linking mechanism within doubly
   * linked lists, supporting efficient insertion and removal operations.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  class double_list_links : public double_list_links_base
  {
  public:
    /**
     * @brief Type indicating that the links node is **not**
     * statically allocated.
     */
    using is_statically_allocated = std::false_type;

    /**
     * @brief Construct a list node (initialise the pointers).
     */
    constexpr double_list_links ();

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of list node objects is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    double_list_links (const double_list_links&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of list node objects is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    double_list_links (double_list_links&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    double_list_links&
    operator= (const double_list_links&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    double_list_links&
    operator= (double_list_links&&)
        = delete;

    /**
     * @brief Destruct the node.
     *
     * @details
     * Destroys the node. No special cleanup is required as the class does not
     * manage resources.
     */
    constexpr ~double_list_links ();
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-double-lists
   * @brief A class for the core of a statically allocated doubly linked list
   * (pointers to neighbours).
   *
   * @details
   * The `static_double_list_links` class inherits a pair of uninitialised
   * pointers to the **next** and **previous** list elements, as well as
   * methods to access and manipulate these pointers, from its base class.
   *
   * Instances of this class are intended to be statically allocated in the
   * **BSS** section and automatically cleared (set to zero) during startup.
   * This design enables reliable initialisation before any static constructors
   * are executed, which is essential because the order of static
   * initialisation is not defined by the C++ standard.
   *
   * Statically allocated lists are commonly used by registrar objects to
   * automate the self-registration of other statically allocated objects, such
   * as drivers, threads, and similar components. By leveraging **BSS**
   * initialisation, the registrar is guaranteed to be ready before any static
   * objects attempt to register themselves.
   *
   * As a consequence, list initialisation cannot be performed in the
   * constructor, but must be done manually before invoking any method that
   * adds elements to the list. This approach ensures robust and predictable
   * behaviour in embedded and system-level applications where static object
   * registration is required.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  class static_double_list_links : public double_list_links_base
  {
  public:
    /**
     * @brief Type indicating that the links node is statically allocated.
     */
    using is_statically_allocated = std::true_type;

    /**
     * @brief Construct a statically allocated list node
     * (**BSS** initialised).
     */
    constexpr static_double_list_links ();

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of statically allocated list node objects is explicitly
     * disallowed to prevent accidental duplication, which could compromise the
     * integrity of the list structure.
     */
    static_double_list_links (const static_double_list_links&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of statically allocated list node objects is explicitly
     * disallowed to avoid invalid or inconsistent links within the list that
     * could result from moving nodes.
     */
    static_double_list_links (static_double_list_links&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    static_double_list_links&
    operator= (const static_double_list_links&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    static_double_list_links&
    operator= (static_double_list_links&&)
        = delete;

    /**
     * @brief Destruct the node.
     */
    constexpr ~static_double_list_links ();

    /**
     * @brief Reset the two pointers to `nullptr`.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    nullify (void);
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-double-lists
   * @brief A class template for a doubly linked list forward iterator.
   *
   * @tparam T Type of object returned by the iterator.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This iterator provides an interface similar to `std::list::iterator` for
   * traversing a doubly linked list. It supports bidirectional iteration and
   * access to the underlying node and value. In a typical doubly linked list,
   * all types are `double_list_links`.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  template <class T, class N = T, class U = T>
  class double_list_iterator
  {
  public:
    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
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

    // ------------------------------------------------------------------------

    /**
     * @brief Default constructor. Constructs an iterator pointing to
     * `nullptr`.
     */
    constexpr double_list_iterator ();

    /**
     * @brief Construct an iterator from a node pointer.
     *
     * @param node Pointer to the node to which the iterator should point.
     */
    constexpr explicit double_list_iterator (iterator_pointer const node);

    /**
     * @brief Construct an iterator from a reference to an element.
     *
     * @param element Reference to the element to which the iterator should
     * point.
     */
    constexpr explicit double_list_iterator (reference element);

    // DO NOT delete the copy constructors, since the default ones are
    // used.

    /**
     * @brief Pointer access operator.
     *
     * @return Pointer to the value pointed to by the iterator.
     */
    constexpr pointer
    operator->() const;

    /**
     * @brief Dereference operator.
     *
     * @return Reference to the value pointed to by the iterator.
     */
    constexpr reference
    operator* () const;

    /**
     * @brief Pre-increment operator.
     *
     * @return Reference to the incremented iterator.
     */
    constexpr double_list_iterator&
    operator++ ();

    /**
     * @brief Post-increment operator.
     *
     * @return Iterator before increment.
     */
    constexpr double_list_iterator
    operator++ (int);

    /**
     * @brief Pre-decrement operator.
     *
     * @return Reference to the decremented iterator.
     */
    constexpr double_list_iterator&
    operator-- ();

    /**
     * @brief Post-decrement operator.
     *
     * @return Iterator before decrement.
     */
    constexpr double_list_iterator
    operator-- (int);

    /**
     * @brief Equality comparison operator.
     *
     * @param other Iterator to compare with.
     * @return `true` if both iterators point to the same node, `false`
     * otherwise.
     */
    constexpr bool
    operator== (const double_list_iterator& other) const;

    /**
     * @brief Inequality comparison operator.
     *
     * @param other Iterator to compare with.
     * @return `true` if the iterators point to different nodes, `false`
     * otherwise.
     */
    constexpr bool
    operator!= (const double_list_iterator& other) const;

    /**
     * @brief Get a pointer to the value pointed to by the iterator.
     *
     * @par Parameters
     *	 None.
     * @return Pointer to the value.
     */
    constexpr pointer
    get_pointer (void) const;

    /**
     * @brief Get the internal iterator pointer (node pointer).
     *
     * @par Parameters
     *	 None.
     * @return Pointer to the node.
     */
    constexpr iterator_pointer
    get_iterator_pointer (void) const;

  protected:
    /**
     * @brief Pointer to the node.
     */
    iterator_pointer node_;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-double-lists
   * @brief A class template for a doubly linked list of nodes.
   *
   * @tparam T Type of the elements linked into the list, derived from class
   * `double_list_links_base`.
   * @tparam L Type of the links node (either `double_list_links` or
   * `static_double_list_links`).
   *
   * @details
   * This class implements a generic doubly linked list, maintaining a pair of
   * head and tail pointers to allow efficient iteration and manipulation of
   * nodes. The list elements (of type T) must be derived from
   * `double_list_links_base` (typically from `double_list_links`) and extended
   * with the required payload, which may be the actual content or a pointer to
   * it.
   *
   * The class uses composition for the links node, rather than inheritance, to
   * avoid inheriting unwanted methods. Iterators return pointers to the list
   * elements, enabling traversal of the list in a manner similar to standard
   * containers.
   *
   * @note
   * Only forward iterators are provided by default, but reverse iterators can
   * be added if required.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  template <class T, class L = double_list_links>
  class double_list
  {
  public:
    static_assert (std::is_base_of<double_list_links_base, L>::value == true,
                   "L must be derived from double_list_links_base!");
    static_assert (std::is_base_of<double_list_links_base, T>::value == true,
                   "T must be derived from double_list_links_base!");

    /**
     * @brief Type of the links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = T;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
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
     * @brief Type indicating if the links node is statically allocated.
     */
    using is_statically_allocated =
        typename links_type::is_statically_allocated;

    /**
     * @brief Construct a doubly linked list.
     */
    double_list ();

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of `double_list` instances is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    double_list (const double_list&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of `double_list` instances is explicitly disallowed to avoid
     * invalid or inconsistent links within the list that could result from
     * moving lists.
     */
    double_list (double_list&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list objects, which could lead to corruption of the list
     * structure.
     */
    double_list&
    operator= (const double_list&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving lists.
     */
    double_list&
    operator= (double_list&&)
        = delete;

    /**
     * @brief Destruct the list.
     */
    constexpr ~double_list ();

  public:
    /**
     * @brief Check if the list is uninitialised
     * (only statically allocated lists can be uninitialised).
     *
     * @par Parameters
     *  None.
     * @retval true The list was **not** initialised.
     * @retval false The list was initialised.
     */
    bool
    uninitialized (void) const;

    /**
     * @brief Initialize the list only at first run.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Check if the list is empty.
     *
     * @par Parameters
     *  None.
     * @retval true The list has **no** nodes.
     * @retval false The list has **at least one** node.
     */
    bool
    empty (void) const;

    /**
     * @brief Clear the list.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    clear (void);

    /**
     * @brief Get the list **head**.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the head node.
     */
    constexpr pointer
    head (void) const;

    /**
     * @brief Get the list **tail**.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the tail node.
     */
    constexpr pointer
    tail (void) const;

    /**
     * @brief Add a node to the tail of the list.
     *
     * @param [in] node Reference to the node to add.
     * @par Returns
     *   Nothing.
     */
    void
    link_tail (reference node);

    /**
     * @brief Add a node to the head of the list.
     *
     * @param [in] node Reference to the node to add.
     * @par Returns
     *   Nothing.
     */
    void
    link_head (reference node);

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     *
     * @return An iterator to the first element.
     */
    iterator
    begin () const;

    /**
     * @brief Iterator end.
     *
     * @return An iterator positioned after the last element.
     */
    iterator
    end () const;

    // Required in derived class iterator end(), where direct
    // access to member fails.
    /**
     * @brief Get the address of the node storing the list links.
     *
     * @par Parameters
     *  None.
     * @return A pointer to the list head object.
     */
    constexpr const links_type*
    links_pointer (void) const
    {
      return &links_;
    }

    // ------------------------------------------------------------------------

  protected:
    /**
     * @brief The list top node used to point to **head** and **tail** nodes.
     *
     * @details
     * This member stores the internal links node for the list. The **next**
     * pointer of this node points to the head of the list, and the
     * **previous** pointer points to the tail. For an empty list, both
     * pointers refer to the node itself, simplifying list management and
     * boundary checks.
     */
    links_type links_;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-intrusive-lists
   * @brief A class template for the intrusive list iterator.
   *
   * @tparam T Type of object that includes the intrusive node.
   * @tparam N Type of intrusive node. Must have the public members
   * **previous** & **next**.
   * @tparam MP Name of the intrusive node member in object T.
   * @tparam U Type stored in the list, derived from T.
   *
   * @details
   * This class provides an interface similar to `std::list::iterator`, except
   * that it keeps track of the offset where the intrusive list element is
   * located in the parent object. It supports bidirectional iteration and
   * access to the underlying object and node.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  template <class T, class N, N T::* MP, class U = T>
  class intrusive_list_iterator
  {
  public:
    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
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

    // ------------------------------------------------------------------------

    /**
     * @brief Default constructor. Constructs an iterator pointing to
     * `nullptr`.
     */
    constexpr intrusive_list_iterator ();

    /**
     * @brief Construct an iterator from a node pointer.
     *
     * @param node Pointer to the node to which the iterator should point.
     */
    constexpr explicit intrusive_list_iterator (iterator_pointer const node);

    /**
     * @brief Construct an iterator from a reference to an element.
     *
     * @param element Reference to the element to which the iterator should
     * point.
     */
    constexpr explicit intrusive_list_iterator (reference element);

    // DO NOT delete the copy constructors, since this implies that
    // the default ones will be used.

    /**
     * @brief Pointer access operator.
     *
     * @return Pointer to the value pointed to by the iterator.
     */
    pointer
    operator->() const;

    /**
     * @brief Dereference operator.
     *
     * @return Reference to the value pointed to by the iterator.
     */
    reference
    operator* () const;

    /**
     * @brief Pre-increment operator.
     *
     * @return Reference to the incremented iterator.
     */
    intrusive_list_iterator&
    operator++ ();

    /**
     * @brief Post-increment operator.
     *
     * @return Iterator before increment.
     */
    intrusive_list_iterator
    operator++ (int);

    /**
     * @brief Pre-decrement operator.
     *
     * @return Reference to the decremented iterator.
     */
    intrusive_list_iterator&
    operator-- ();

    /**
     * @brief Post-decrement operator.
     *
     * @return Iterator before decrement.
     */
    intrusive_list_iterator
    operator-- (int);

    /**
     * @brief Equality comparison operator.
     *
     * @param other Iterator to compare with.
     * @return `true` if both iterators point to the same node, `false`
     * otherwise.
     */
    bool
    operator== (const intrusive_list_iterator& other) const;

    /**
     * @brief Inequality comparison operator.
     * @param other Iterator to compare with.
     * @return `true` if the iterators point to different nodes, `false`
     * otherwise.
     */
    bool
    operator!= (const intrusive_list_iterator& other) const;

    /**
     * @brief Get the object node from the intrusive node.
     *
     * @par Parameters
     *  None.
     * @return Pointer to object node.
     */
    pointer
    get_pointer (void) const;

    /**
     * @brief Retrieve the iterator pointer for the current node.
     *
     * @par Parameters
     *  None.
     * @return The iterator pointer corresponding to the current node.
     */
    iterator_pointer
    get_iterator_pointer (void) const;

  protected:
    /**
     * @brief Pointer to intrusive node.
     *
     * @details
     * Stores the address of the current intrusive node in the list.
     */
    iterator_pointer node_;
  };

  // ==========================================================================

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"
#endif
/**
 * @ingroup micro-os-plus-utils-lists-intrusive-lists
 * @brief A class template for a list of nodes which store the links inside
 * themselves as intrusive nodes.
 *
 * @tparam T Type of object that includes the intrusive node.
 * @tparam N Type of intrusive node with the next & previous links.
 * @tparam MP Name of the intrusive node member in object T.
 * @tparam L Type of the links node (one of `double_list_links` or
 * `static_double_list_links`).
 * @tparam U Type stored in the list, derived from T.
 *
 * @details
 * This class implements an intrusive doubly linked list, where each object
 * stores its own link node as a member. The list maintains a pair of head and
 * tail pointers, allowing efficient insertion, removal, and iteration. The
 * intrusive approach eliminates the need for separate node allocations, as the
 * links are embedded within the objects themselves.
 *
 * The template parameter `MP` specifies the member pointer to the intrusive
 * node within the object, enabling the list to compute the address of the
 * parent object from the node pointer. This design supports both regular and
 * statically allocated lists, depending on the type used for `L`.
 *
 * Iterators provide access to the objects in the list, supporting
 * bidirectional traversal.
 *
 * @par Example
 *
 * @code{.cpp}
 * namespace os = micro_os_plus;
 * using threads_list = os::utils::intrusive_list<
 *   thread, os::utils::double_list_links, &thread::child_links_>;
 * @endcode
 *
 * For statically allocated lists, set L=static_double_list_links.
 *
 * @headerfile lists.h <micro-os-plus/utils/lists.h>
 */
#if defined(__clang__)
#pragma clang diagnostic pop
#endif

  template <class T, class N, N T::* MP, class L = double_list_links,
            class U = T>
  class intrusive_list : public double_list<N, L>
  {
  public:
    static_assert (std::is_base_of<double_list_links_base, L>::value == true,
                   "L must be derived from double_list_links_base!");
    static_assert (std::is_base_of<double_list_links_base, N>::value == true,
                   "N must be derived from double_list_links_base!");

    /**
     * @brief Type of the list links node object where the pointers to the
     * list head and tail are stored.
     */
    using links_type = L;

    /**
     * @brief Type of value _pointed to_ by the iterator.
     */
    using value_type = U;

    /**
     * @brief Type of pointer to object _pointed to_ by the iterator.
     */
    using pointer = value_type*;

    /**
     * @brief Type of reference to object _pointed to_ by the iterator.
     */
    using reference = value_type&;

    /**
     * @brief Type of iterator over the values.
     */
    using iterator = intrusive_list_iterator<T, N, MP, U>;

    /**
     * @brief Type indicating if the links node is statically allocated
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

    /**
     * @brief Construct an intrusive doubly linked list.
     */
    constexpr intrusive_list ();

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of `intrusive_list` instances is explicitly disallowed to
     * prevent accidental duplication, which could compromise the integrity of
     * the list structure.
     */
    intrusive_list (const intrusive_list&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of `intrusive_list` instances is explicitly disallowed to avoid
     * invalid or inconsistent links within the list that could result from
     * moving lists.
     */
    intrusive_list (intrusive_list&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list objects, which could lead to corruption of the list
     * structure.
     */
    intrusive_list&
    operator= (const intrusive_list&)
        = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving lists.
     */
    intrusive_list&
    operator= (intrusive_list&&)
        = delete;

    /**
     * @brief Destruct the list.
     */
    constexpr ~intrusive_list ();

  public:
    /**
     * @brief Initialize the list only at first run.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialize_once (void);

    /**
     * @brief Check if the list is empty.
     *
     * @par Parameters
     *  None.
     * @retval true The list has **no** nodes.
     * @retval false The list has **at least one** node.
     */
    constexpr bool
    empty (void) const;

    /**
     * @brief Add a node to the tail of the list.
     *
     * @param [in] node Reference to a list node.
     * @par Returns
     *  Nothing.
     */
    void
    link_tail (reference node);

    /**
     * @brief Add a node to the head of the list.
     *
     * @param [in] node Reference to a list node.
     * @par Returns
     *  Nothing.
     */
    void
    link_head (reference node);

    /**
     * @brief Unlink the last element from the list.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the last element in the list.
     */
    pointer
    unlink_tail (void);

    /**
     * @brief Unlink the first element from the list.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the first element in the list.
     */
    pointer
    unlink_head (void);

    // ------------------------------------------------------------------------

    /**
     * @brief Iterator begin.
     *
     * @return An iterator positioned at the first element.
     */
    iterator
    begin () const;

    /**
     * @brief Iterator begin.
     *
     * @return An iterator positioned after the last element.
     */
    iterator
    end () const;

    // ------------------------------------------------------------------------
  protected:
    /**
     * @brief Get the address of the object from the intrusive node pointer.
     *
     * @param node Pointer to the intrusive node.
     * @return A pointer to the parent object containing the node.
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
#include "lists-inlines.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
