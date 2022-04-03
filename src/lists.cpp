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

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <micro-os-plus/utils/lists.h>
#include <micro-os-plus/diag/trace.h>

// ----------------------------------------------------------------------------

#if defined(__GNUC__)
#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Waggregate-return"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat"
#endif
#endif

namespace micro_os_plus
{
  namespace utils
  {
    // ======================================================================

    /**
     * @class static_double_list_links
     * @details
     * This is the simplest list node, used as base class for other
     * list nodes and as storage for static_double_list,
     * that must be available for any statically constructed
     * objects while still avoiding the 'static initialisation order fiasco'.
     *
     * The idea is to design the object in such a way as to benefit
     * from the standard BSS initialisation, in other words take `nullptr`
     * as starting values.
     */

    /**
     * @details
     * To be fully linked, both pointers must be non null.
     */
    bool
    static_double_list_links::linked (void)
    {
      if (next_ != nullptr && previous_ != nullptr)
        {
          return true;
        }
      assert (next_ == nullptr);
      assert (previous_ == nullptr);
      return false;
    }

    void
    static_double_list_links::link (static_double_list_links* after)
    {
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
      trace::printf ("%s() link %p after %p\n", __func__, this, after);
#endif
      assert (after->next_ != nullptr);

      previous_ = after;
      next_ = after->next_;

      // Make the neighbours point to the node. The order is important.
      after->next_->previous_ = this;
      after->next_ = this;
    }

    /**
     * @details
     * Update the neighbours to
     * point to each other, skipping the node.
     *
     * For more robustness, to prevent unexpected accesses,
     * the links in the removed node are nullified.
     */
    void
    static_double_list_links::unlink (void)
    {
      // Check if not already unlinked.
      if (!linked ())
        {
          assert (next_ == nullptr);
          assert (previous_ == nullptr);
#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
          trace::printf ("%s() %p nop\n", __func__, this);
#endif
          return;
        }

#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)
      trace::printf ("%s() %p \n", __func__, this);
#endif

      // Make neighbours point to each other.
      previous_->next_ = next_;
      next_->previous_ = previous_;

      // Nullify both pointers in the unlinked node.
      clear ();
    }

    // ========================================================================
  } // namespace utils
} // namespace micro_os_plus

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// ----------------------------------------------------------------------------
