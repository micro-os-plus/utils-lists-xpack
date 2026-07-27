/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2022-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
 */

#ifndef MICRO_OS_PLUS_PROJECT_CONFIG_H_
#define MICRO_OS_PLUS_PROJECT_CONFIG_H_

// ----------------------------------------------------------------------------

// On bare-metal platforms, tests are semihosted applications.
#define MICRO_OS_PLUS_SEMIHOSTING_ENABLED

#define MICRO_OS_PLUS_SEMIHOSTING_SYSCALLS_ENABLED
#define MICRO_OS_PLUS_SEMIHOSTING_STARTUP_ENABLED

#define MICRO_OS_PLUS_STARTUP_ENABLED
#define MICRO_OS_PLUS_STARTUP_SBRK_ENABLED
#define MICRO_OS_PLUS_STARTUP_EXIT_ENABLED

#if defined(MICRO_OS_PLUS_TRACE)

// #define MICRO_OS_PLUS_DIAG_TRACE_SEMIHOSTING_DEBUG_ENABLED
#define MICRO_OS_PLUS_DIAG_TRACE_SEMIHOSTING_STDOUT_ENABLED

#endif // MICRO_OS_PLUS_TRACE

// ----------------------------------------------------------------------------

#endif /* MICRO_OS_PLUS_PROJECT_CONFIG_H_ */

// ----------------------------------------------------------------------------
