/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2021-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

/*
 * Note: the order is important, it also gives the order in the sidebar.
 */

/**

@include{doc} pages/mainpage.dox

@include{doc} files/topics-h.dox

@include{doc} folders/include-micro-os-plus-utils.dox
@include{doc} folders/include-micro-os-plus-utils-lists.dox
@include{doc} folders/include-micro-os-plus-utils-lists-inlines.dox

@include{doc} folders/src.dox

@addtogroup micro-os-plus
@{
  @include{doc} topics/utils-lists.dox
@}

@addtogroup micro-os-plus-utils-lists
@{
  @include{doc} topics/cpp-api.dox
  @include{doc} topics/c-api.dox
  @include{doc} topics/config.dox
@}

@addtogroup micro-os-plus-utils-lists-cpp-api
@{
  @include{doc} topics/cpp-api/intrusive-lists.dox
  @include{doc} topics/cpp-api/doubly-lists.dox
@}

@addtogroup micro-os-plus-utils-lists-config
@{
  @include{doc} macros/utils-lists-enabled.dox
  @include{doc} macros/utils-lists-trace-enabled.dox
  @include{doc} macros/utils-lists-trace-constructors-enabled.dox
@}

*/
