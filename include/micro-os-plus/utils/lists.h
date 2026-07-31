/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
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

#ifndef MICRO_OS_PLUS_UTILS_LISTS_H_
#define MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
#if !(__cplusplus >= 202002L || (defined(_MSVC_LANG) && _MSVC_LANG >= 202002L))
#error "C++20 or higher is required"
#endif // C++20 or higher
#endif // defined(__cplusplus)

#if __has_include("micro-os-plus/project-config.h")
#include "micro-os-plus/project-config.h"
#endif // __has_include("micro-os-plus/project-config.h")

#if __has_include("micro-os-plus/utils/lists-defines.h")
#include "micro-os-plus/utils/lists-defines.h"
#endif // __has_include("micro-os-plus/utils/lists-defines.h")

// ----------------------------------------------------------------------------

#if defined(__DOXYGEN__)
// Present here solely for Doxygen, to document the macros.#define MICRO_OS_PLUS_UTILS_LISTS_ENABLED
#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED
#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED 
#endif // defined(__DOXYGEN__)

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_UTILS_LISTS_ENABLED)

// ----------------------------------------------------------------------------

#include "lists/doubly-list-links.h"
#include "lists/doubly-list.h"
#include "lists/intrusive-list.h"

// ----------------------------------------------------------------------------

#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_ENABLED)

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_UTILS_LISTS_H_

// ----------------------------------------------------------------------------
