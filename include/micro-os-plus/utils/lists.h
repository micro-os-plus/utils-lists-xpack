/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------

/**
 * @file
 * @brief Aggregate C++ header file for the µOS++ lists classes.
 *
 * @details
 * The `lists.h` header file is the single entry-point for the
 * **µOS++ Intrusive Lists** library. It includes, in order:
 *
 * - `doubly-list-links.h` — `doubly_list_links_base`,
 *   `doubly_list_links`, and `static_doubly_list_links`.
 * - `doubly-list.h` — `doubly_list_iterator` and `doubly_list`.
 * - `intrusive-list.h` — `intrusive_list_iterator` and `intrusive_list`.
 *
 * The class implementations are in @ref doubly-list-links.cpp,
 * @ref doubly-list-links-inlines.h, @ref doubly-list-inlines.h,
 * and @ref intrusive-list-inlines.h.
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
 *
 * [Note: For comparison, the original Doxygen html pages, continue to be
 * available via the <a
 * href="https://micro-os-plus.github.io/utils-lists-xpack/doxygen/index.html">doxygen/\*</a>
 * URLs.]
 */

#ifndef MICRO_OS_PLUS_UTILS_LISTS_H_
#define MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
#if !(__cplusplus >= 202002L || (defined(_MSVC_LANG) && _MSVC_LANG >= 202002L))
#error "C++20 or higher is required"
#endif
#endif // defined(__cplusplus)

#if __has_include(<micro-os-plus/project-config.h>)
#include <micro-os-plus/project-config.h>
#elif __has_include(<micro-os-plus/config.h>)
#pragma message \
    "micro-os-plus/config.h is deprecated, rename to micro-os-plus/project-config.h and include it instead of micro-os-plus/config.h"
#include <micro-os-plus/config.h>
#endif // __has_include(<micro-os-plus/project-config.h>)

#if __has_include(<micro-os-plus/utils/lists-defines.h>)
#include <micro-os-plus/utils/lists-defines.h>
#endif // __has_include(<micro-os-plus/utils/lists-defines.h>)

// ----------------------------------------------------------------------------

#include "doubly-list-links.h"
#include "doubly-list.h"
#include "intrusive-list.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
