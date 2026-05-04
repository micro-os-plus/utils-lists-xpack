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
 * @brief Aggregate C++ header file for the µOS++ lists classes.
 *
 * @details
 * The `lists.h` header file is the single entry-point for the
 * **µOS++ Intrusive Lists** library. It includes, in order:
 *
 * - `double-list-links.h` — `double_list_links_base`,
 *   `double_list_links`, and `static_double_list_links`.
 * - `double-list.h` — `double_list_iterator` and `double_list`.
 * - `intrusive-list.h` — `intrusive_list_iterator` and `intrusive_list`.
 *
 * The class implementations are in @ref lists.cpp and @ref lists-inlines.h.
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

#include "double-list-links.h"
#include "double-list.h"
#include "intrusive-list.h"

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
