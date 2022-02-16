/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2020 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 */

#if defined(__ARM_EABI__)

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <micro-os-plus/platform.h>
#include <micro-os-plus/architecture-cortexm/exception-handlers.h>

// #if !defined(MICRO_OS_PLUS_BOOL_USE_TRACE)
// #define MICRO_OS_PLUS_BOOL_USE_TRACE (true)
// #endif

// #if MICRO_OS_PLUS_BOOL_USE_TRACE
// #include <micro-os-plus/diag/trace.h>
// #endif // MICRO_OS_PLUS_BOOL_USE_TRACE

// #include "sysclock.h"

// ----------------------------------------------------------------------------

// using namespace micro_os_plus;

// ----------------------------------------------------------------------------

void __attribute__ ((section (".after_vectors"))) SysTick_Handler (void)
{
  // Currently nothing to do.
}

// ----------------------------------------------------------------------------

#endif /* defined(__ARM_EABI__) */

// ----------------------------------------------------------------------------
