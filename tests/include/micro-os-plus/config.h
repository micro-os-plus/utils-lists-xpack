/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2022 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

#ifndef MICRO_OS_PLUS_CONFIG_H_
#define MICRO_OS_PLUS_CONFIG_H_

// ----------------------------------------------------------------------------
// Portable configuration definitions.
// Assembly files should define `#define __ASSEMBLY__ 1` before including
// this file. If so, this file should define only preprocessor macros.

#if defined(MICRO_OS_PLUS_TRACE)

// Defined in platform-native.
// #define MICRO_OS_PLUS_INTEGER_TRACE_PRINTF_BUFFER_ARRAY_SIZE 500

// #define MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT
// #define MICRO_OS_PLUS_TRACE_UTILS_LISTS

// Propagate TRACE to the library.
#define MICRO_TEST_PLUS_TRACE

#endif // MICRO_OS_PLUS_TRACE

#include <micro-os-plus/platform/config.h>

// ----------------------------------------------------------------------------

#endif /* MICRO_OS_PLUS_CONFIG_H_ */

// ----------------------------------------------------------------------------
