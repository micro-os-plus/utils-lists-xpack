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
/**
 * @file
 * @brief C++ header file with the declarations for the µOS++ doubly linked
 * list link node classes.
 *
 * @details
 * The `doubly-list-links.h` header file contains the C++ declarations of
 * the `doubly_list_links_base`, `doubly_list_links`, and
 * `static_doubly_list_links` classes.
 *
 * The class implementations are in @ref doubly-list-links.cpp
 * and @ref doubly-list-links-inlines.h.
 */

#ifndef MICRO_OS_PLUS_UTILS_DOUBLY_LIST_LINKS_H_
#define MICRO_OS_PLUS_UTILS_DOUBLY_LIST_LINKS_H_

// ----------------------------------------------------------------------------

#ifdef __cplusplus

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <concepts>
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
   * @ingroup micro-os-plus-utils-lists-doubly-lists
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
  class doubly_list_links_base
  {
  public:
    /**
     * @brief Construct an uninitialised list node.
     */
    constexpr doubly_list_links_base () noexcept;

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of list node objects is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    doubly_list_links_base (const doubly_list_links_base&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of list node objects is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    doubly_list_links_base (doubly_list_links_base&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    doubly_list_links_base&
    operator= (const doubly_list_links_base&) = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    doubly_list_links_base&
    operator= (doubly_list_links_base&&) = delete;

    /**
     * @brief Destruct the node.
     */
    constexpr ~doubly_list_links_base ();

    /**
     * @brief Check if the node is initialised.
     *
     * @par Parameters
     *  None.
     * @retval true The links are initialised.
     * @retval false The links are **not** initialised.
     */
    [[nodiscard]] bool
    initialised (void) const noexcept;

    /**
     * @brief Initialise the node links.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    constexpr void
    initialise (void) noexcept;

    /**
     * @brief Initialise the node links only if not already initialised.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    initialise_once (void) noexcept;

    /**
     * @brief Link the new node as **next**.
     *
     * @param [in] node Pointer to the node to be linked as next.
     * @par Returns
     *  Nothing.
     */
    void
    link_next (doubly_list_links_base* node) noexcept;

    /**
     * @brief Link the new node as **previous**.
     *
     * @param [in] node Pointer to the node to be linked as previous.
     * @par Returns
     *  Nothing.
     */
    void
    link_previous (doubly_list_links_base* node) noexcept;

    /**
     * @brief Remove this node from the list.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    unlink (void) noexcept;

    /**
     * @brief Check if the node is linked to a doubly linked list.
     *
     * @par Parameters
     *  None.
     * @retval true The node is linked with both pointers.
     * @retval false The node is not linked.
     */
    [[nodiscard]] constexpr bool
    linked (void) const noexcept;

    /**
     * @brief Get the link to the **next** node.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the next node.
     */
    [[nodiscard]] constexpr doubly_list_links_base*
    next (void) const noexcept;

    /**
     * @brief Get the link to the **previous** node.
     *
     * @par Parameters
     *  None.
     * @return Pointer to the previous node.
     */
    [[nodiscard]] constexpr doubly_list_links_base*
    previous (void) const noexcept;

  protected:
    /**
     * @brief Pointer to the **previous** node.
     */
    doubly_list_links_base* previous_;

    /**
     * @brief Pointer to the **next** node.
     */
    doubly_list_links_base* next_;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-doubly-lists
   * @brief A class for the core of a doubly linked list (pointers to
   * neighbours).
   *
   * @details
   * The `doubly_list_links` class provides the fundamental structure for a
   * doubly linked list node, inheriting the pair of pointers to the **next**
   * and **previous** elements and the associated access methods from
   * `doubly_list_links_base`. The constructor initialises the pointers to form
   * an empty list, where both pointers refer to the node itself.
   *
   * This class is intended for use as the core linking mechanism within doubly
   * linked lists, supporting efficient insertion and removal operations.
   *
   * @headerfile lists.h <micro-os-plus/utils/lists.h>
   */
  class doubly_list_links : public doubly_list_links_base
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
    constexpr doubly_list_links () noexcept;

    // This class follows the rule of five.

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of list node objects is explicitly disallowed to prevent
     * accidental duplication, which could compromise the integrity of the list
     * structure.
     */
    doubly_list_links (const doubly_list_links&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of list node objects is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    doubly_list_links (doubly_list_links&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    doubly_list_links&
    operator= (const doubly_list_links&) = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    doubly_list_links&
    operator= (doubly_list_links&&) = delete;

    /**
     * @brief Destruct the node.
     *
     * @details
     * Destroys the node. No special cleanup is required as the class does not
     * manage resources.
     */
    constexpr ~doubly_list_links ();
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-doubly-lists
   * @brief A class for the core of a statically allocated doubly linked list
   * (pointers to neighbours).
   *
   * @details
   * The `static_doubly_list_links` class inherits a pair of uninitialised
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
  class static_doubly_list_links : public doubly_list_links_base
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
    constexpr static_doubly_list_links () noexcept;

    /**
     * @brief Deleted copy constructor.
     *
     * @details
     * Copying of statically allocated list node objects is explicitly
     * disallowed to prevent accidental duplication, which could compromise the
     * integrity of the list structure.
     */
    static_doubly_list_links (const static_doubly_list_links&) = delete;

    /**
     * @brief Deleted move constructor.
     *
     * @details
     * Moving of statically allocated list node objects is explicitly
     * disallowed to avoid invalid or inconsistent links within the list that
     * could result from moving nodes.
     */
    static_doubly_list_links (static_doubly_list_links&&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     *
     * @details
     * Copy assignment is explicitly disallowed to prevent accidental
     * overwriting of list node objects, which could lead to corruption of the
     * list structure.
     */
    static_doubly_list_links&
    operator= (const static_doubly_list_links&) = delete;

    /**
     * @brief Deleted move assignment operator.
     *
     * @details
     * Move assignment is explicitly disallowed to avoid invalid or
     * inconsistent links within the list that could result from moving nodes.
     */
    static_doubly_list_links&
    operator= (static_doubly_list_links&&) = delete;

    /**
     * @brief Destruct the node.
     */
    constexpr ~static_doubly_list_links ();

    /**
     * @brief Reset the two pointers to `nullptr`.
     *
     * @par Parameters
     *  None.
     * @par Returns
     *  Nothing.
     */
    void
    reset (void) noexcept;
  };

  // ==========================================================================

  /**
   * @ingroup micro-os-plus-utils-lists-doubly-lists
   * @brief Concept satisfied by any type publicly derived from
   * `doubly_list_links_base`.
   *
   * @details
   * Used to constrain the template parameters of `doubly_list` and
   * `intrusive_list` to types that are properly derived from the
   * list node base class, ensuring a valid doubly linked list structure.
   */
  template <class T>
  concept doubly_list_links_node
      = std::derived_from<T, doubly_list_links_base>;

  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------

#endif // __cplusplus

// ============================================================================
// Templates & constexpr implementations.

#include "inlines/doubly-list-links-inlines.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_DOUBLY_LIST_LINKS_H_

// ----------------------------------------------------------------------------
