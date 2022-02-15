/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
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
#include <micro-os-plus/startup/hooks.h>

// ----------------------------------------------------------------------------

#pragma GCC diagnostic push
// #pragma GCC diagnostic ignored "-Wsign-conversion"

// Called before running the static constructors.
void
micro_os_plus_startup_initialize_hardware (void)
{
  // Call the CSMSIS system clock routine to store the clock frequency
  // in the SystemCoreClock global RAM location.
  SystemCoreClockUpdate ();
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------

#endif /* defined(__ARM_EABI__) */

// ----------------------------------------------------------------------------
