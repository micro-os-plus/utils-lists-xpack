/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.com/).
 * Copyright (c) 2021 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

/**

@file
@brief The Doxygen project specific topics definitions.

@defgroup micro-os-plus-utils-lists µOS++ Intrusive Lists
@brief The µOS++ Intrusive Lists project topics.
@ingroup micro-os-plus
@details

The **µOS++ Intrusive Lists** project is a C++ source code library
designed to implement **µOS++ intrusive doubly linked lists**. These
specialised lists eliminate the need for dynamic memory allocations
by embedding linkage directly within the list elements, making them
particularly advantageous for embedded systems.

@defgroup micro-os-plus-utils-lists-cpp-api C++ API
@brief The µOS++ Intrusive Lists C++ API topics.
@ingroup micro-os-plus-utils-lists
@details

The µOS++ **utils-list** implementation uses C++ templates,
thus the main API is C++.

@defgroup micro-os-plus-utils-lists-c-api C API
@brief The µOS++ Intrusive Lists C API topics (hint: none).
@ingroup micro-os-plus-utils-lists
@details

The µOS++ **utils-list** project is specifically designed for C++ and does
not include equivalent definitions for the C programming language.

@defgroup micro-os-plus-utils-lists-intrusive-lists Intrusive Doubly Linked Lists
@brief The µOS++ intrusive doubly linked lists classes.
@ingroup micro-os-plus-utils-lists-cpp-api
@details

Intrusive lists are doubly linked lists that keep the two pointers inside
each linked object.

The intrusive lists can be defined by instantiating the
`micro_os_plus::utils::intrusive_list` class template.

@par Example

```cpp
#include <micro-os-plus/utils/lists.h>

namespace os = micro_os_plus;

class child
{
public:
  child (const char* name);
  // ...
protected:
  const char* name_;

public:
  // Intrusive node used to link this child to the registry list.
  // Must be public.
  os::utils::double_list_links registry_links_;
};

using static_children_list = os::utils::intrusive_list<
        child, // type of nodes in the list
        decltype (child::registry_links_), // type of the `registry_links_` member
        &child::registry_links_, // name of member
        static_double_list_links>; // type of the head links node

// The list head is statically allocated.
static_children_list kids_registry;
```

@defgroup micro-os-plus-utils-lists-double-lists Doubly Linked Lists
@brief The µOS++ doubly linked lists classes.
@ingroup micro-os-plus-utils-lists-cpp-api
@details

Traditional doubly linked or low intrusive doubly linked lists.

For simpler use cases, like traditional list or low intrusive lists,
there are several simpler classes and templates.

@dir include/micro-os-plus/utils
@brief The folder with the utilities header files.

@dir include
@brief The top folder with all header files.

@dir include/micro-os-plus
@brief The top folder with the µOS++ header files.

@dir src
@brief The top folder with the project source files.

*/
