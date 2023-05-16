
# How to Use

@tableofcontents

## Overview

The C++ standard libraries provide extensive support for maintaining lists;
however, most of them require dynamic memory allocations for the links,
which, on embedded systems, may be problematic; thus, when possible,
they should be avoided, especially at the system level.

## Intrusive lists

One possible alternate solution to dynamically allocated list nodes is
to include the list links in the allocated objects; hence the current
implementation of the **intrusive** lists, which are double linked lists
which store pairs of pointers in the linked objects. Objects linked in
multiple lists use multiple pointers, one pair for each list.

## Statically initialised lists

In order to support **objects that auto-register themselves** to
**static registrar objects**, which are lists created in the global scope,
via the static constructors mechanism, it is necessary to guarantee
that the registrar is initialised before the clients need to
register. Since the order
of static constructors is not defined, the only solution that
guarantees this is to initialize the registrar during startup
before the static constructors.

@note
This initialization is performed during startup,
when the **bss** section is set to zero.

These statically allocated lists **must not change the
content of any of their members in the constructors**, since this
may happen after clients have already registered.

Before inserting into this list, the user must call `initialize_once()`,
the will check the list, and, if in initial zero state, will initialise
it to empty state (both pointers pointing to itself).

## C++ API

The C++ methods available for the intrusive list are:

```cpp
pointer head (void);
pointer tail (void);

void link_tail (reference node);
void link_head (reference node);

pointer unlink_tail (void);
pointer unlink_head (void);

bool empty (void);
```

Forward iterators are as usual:

```cpp
iterator begin ();
iterator end ();
```

Individual nodes (derived from `double_list_links`) provide
the following methods:

```cpp
void link_next (static_double_list_links* node);
void link_previous (static_double_list_links* node);

void unlink (void);
void clear (void);

bool linked (void);

// Accessors and mutators.
double_list_links* next (void);
double_list_links* previous (void);
void next (double_list_links* n);
void previous (double_list_links* n);
```

## C API

There are no C equivalents for the C++ methods.

## Build & integration info

The project is written in C++, and it is expected to be used in C++ projects.
The source code was compiled natively with **GCC** and **clang** and cross
compiled on embedded **Arm** and **RISC-V** targets,
and should be warning free.

To ease the integration of this package into user projects, there
are already made **CMake** and **meson** configuration files (see below).

For other build systems, consider the following details:

### Include folders

The following folders should be passed to the compiler during the build:

- `include`

The header files to be included in user projects are:

```cpp
#include <micro-os-plus/utils/lists.h>
```

### Source files

The source files to be added to user projects are:

- `src/lists.cpp`

### Preprocessor definitions

There are several preprocessor definitions used to configure the build.

- `MICRO_OS_PLUS_INCLUDE_CONFIG_H` - to include `<micro-os-plus/config.h>`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS` - to trace some calls, like `clear()`,
  `insert()`, `link()`, `unlink()`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT` - to trace constructors and
  destructors

### Compiler options

- `-std=c++20` or higher for C++ sources

### C++ Namespaces

- `micro_os_plus::utils`

### C++ Classes and Class Templates

```cpp
 /*
  * @tparam T Type of object that includes the intrusive node.
  * @tparam N Type of intrusive node with the next & previous links.
  * @tparam MP Name of the intrusive node member in object T.
  * @tparam L Type of the links node.
  * @tparam U Type stored in the list, derived from T.
  */
template <class T, class N, N T::*MP, class L = double_list_links,
          class U = T>
class intrusive_list;

 /*
  * @tparam T Type of the elements linked into the list,
  * derived from class `double_list_links_base`.
  * @tparam L Type of the links node (one of
  * `double_list_links` or `static_double_list_links`).
  */
template <class T, class L = double_list_links>
class double_list;
```

### Dependencies

- none

### CMake

To integrate the **utils-lists** library into a CMake application,
add this folder to the build:

```cmake
add_subdirectory("xpacks/micro-os-plus-utils-lists")
```

The result is **an interface library** that can be added as an application
dependency with:

```cmake
target_link_libraries(your-target PRIVATE

  micro-os-plus::utils-lists
)
```

### Meson Build

To integrate the **utils-lists** library into a
[meson](https://mesonbuild.com) application,
add this folder to the build:

```meson
subdir('xpacks/micro-os-plus-utils-lists')
```

The result is **a dependency object** that can be added
to an application with:

```meson
exe = executable(
  your-target,
  link_with: [
    # Nothing, not static.
  ],
  dependencies: [
    micro_os_plus_utils_lists_dependency,
  ]
)
```

## Examples

An example showing how to use the intrusive lists is available in
[tests/src/sample-test.cpp](tests/src/sample-test.cpp).

Here are some excerpts:

```cpp
#include <micro-os-plus/utils/lists.h>

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
  utils::double_list_links registry_links_;
};

using static_children_list = utils::intrusive_list<
        child, // type of nodes in the list
        decltype (child::registry_links_), // type of the `registry_links_` member
        &child::registry_links_, // name of member
        static_double_list_links>; // type of the head links node

// The list head is statically allocated.
static_children_list kids_registry;
```

## Known problems

- for statically allocated lists, the destructor cannot revert the
object to the initial zero state; in case the objects are reused, it is
mandatory to clear the memory (via a `memset()`, for example),
before invoking the constructor via placement `new`.
