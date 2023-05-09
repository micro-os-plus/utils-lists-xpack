[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/utils-lists.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/utils-lists/)
[![license](https://img.shields.io/github/license/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/LICENSE)
[![CI on Push](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml/badge.svg)](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml)

# A source library xPack with C++ intrusive lists utilities

This project provides the **utils-lists** source libraries as an xPack
dependency and includes the files that implement C++ intrusive lists,
also used in the µOS++ RTOS.

The project is hosted on GitHub as
[micro-os-plus/utils-lists-xpack](https://github.com/micro-os-plus/utils-lists-xpack).

## Maintainer info

This page is addressed to developers who plan to include this source
library into their own projects.

For maintainer info, please see the
[README-MAINTAINER](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/README-MAINTAINER.md) file.

## Install

As a source library xPack, the easiest way to add it to a project is via
**xpm**, but it can also be used as any Git project, for example as a submodule.

### Prerequisites

A recent [xpm](https://xpack.github.io/xpm/),
which is a portable [Node.js](https://nodejs.org/) command line application.

It is recommended to update to the latest version with:

```sh
npm install --global xpm@latest
```

For details please follow the instructions in the
[xPack install](https://xpack.github.io/install/) page.

### xpm

This package is available as
[`@micro-os-plus/utils-lists`](https://www.npmjs.com/package/@micro-os-plus/utils-lists)
from the `npmjs.com` registry:

```sh
cd my-project
xpm init # Unless a package.json is already present

xpm install @micro-os-plus/utils-lists@latest

ls -l xpacks/micro-os-plus-utils-lists
```

### Git submodule

If, for any reason, **xpm** is not available, the next recommended
solution is to link it as a Git submodule below an `xpacks` folder.

```sh
cd my-project
git init # Unless already a Git project
mkdir -p xpacks

git submodule add https://github.com/micro-os-plus/utils-lists-xpack.git \
  xpacks/micro-os-plus-utils-lists
```

## Branches

Apart from the unused `master` branch, there are two active branches:

- `xpack`, with the latest stable version (default)
- `xpack-develop`, with the current development version

All development is done in the `xpack-develop` branch, and contributions via
Pull Requests should be directed to this branch.

When new releases are published, the `xpack-develop` branch is merged
into `xpack`.

## Developer info

### Overview

The C++ standard libraries provide extensive support for maintaining lists;
however, most of them require dynamic memory allocations for the links,
which, on embedded systems, may be problematic; thus, when possible,
it should be avoided.

### Intrusive lists

One possible alternate solution to dynamically allocated list nodes is
to include the list links in the allocated objects; hence the current
implementation of the _intrusive_ lists, which are double linked lists
which store pairs of pointers in the linked objects. Objects linked in
multiple lists use multiple pointers, one pair for each list.

### Statically initialised lists

In order to support objects that auto-register themselves to
static registrar objects, which are lists created in the global scope,
via the static constructors mechanism, it is necessary to guarantee
that the registrar is initialised before the clients need to
register. Since the order
of static constructors is not defined, the only solution that
guarantees this is to initialize the registrar during startup
(via BSS init) before the static constructors.

These statically allocated lists must not change the
content of any of their members in the constructors, since this
may happen after clients have already registered.

Additional logic must check that the lists are uninitialised and initialise
them before any action.

### Status

The **utils-lists** source library is fully functional, and is
CI tested on 32 and 64-bit bare-metal platforms (Arm Cortex-M0,
Cortex-M7F, Cortex-A15, Cortex-A72, RISC-V RV32IMAC, RV64IMAFDC),
and natively, with GCC & clang.

The lists classes are used to manage several
lists in the µOS++ RTOS scheduler (like threads, mutexes, devices, etc).

### C++ API

The C++ methods available for the intrusive list are:

```c++
pointer head (void);
pointer tail (void);

void link_tail (reference node);
void link_head (reference node);

pointer unlink_tail (void);
pointer unlink_head (void);

bool empty (void);
```

Forward iterators are as usual:

```c++
iterator begin ();
iterator end ();
```

Individual nodes (derived from `double_list_links`) provide
the following methods:

```c++
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

### C API

There are no C equivalents for the C++ methods.

### Build & integration info

The project is written in C++, and it is expected to be used in C++ projects.
The source code was compiled with GCC 11, clang 12, clang 13
and arm-none-eabi-gcc 11, riscv-none-elf-gcc 12 and should be warning free.

To ease the integration of this package into user projects, there
are already made CMake and meson configuration files (see below).

For other build systems, consider the following details:

#### Include folders

The following folders should be passed to the compiler during the build:

- `include`

The header files to be included in user projects are:

```c++
#include <micro-os-plus/utils/lists.h>
```

#### Source files

The source files to be added to user projects are:

- `src/lists.cpp`

#### Preprocessor definitions

There are several preprocessor definitions used to configure the build.

- `MICRO_OS_PLUS_INCLUDE_CONFIG_H` - to include `<micro-os-plus/config.h>`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS` - to trace some calls, like `clear()`,
  `insert()`, `link()`, `unlink()`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT` - to trace constructors and
  destructors

#### Compiler options

- `-std=c++20` or higher for C++ sources

#### C++ Namespaces

- `micro_os_plus::utils`

#### C++ Classes

```c++
/**
* @tparam T Type of object that includes the intrusive node.
* @tparam N Type of intrusive node with the next & previous links.
* @tparam MP Name of the intrusive node member in object T.
* @tparam L Type of the links node.
* @tparam U Type stored in the list, derived from T.
*/
template <class T, class N, N T::*MP, class L = double_list_links,
          class U = T>
class intrusive_list;

/**
  * @tparam T Type of the elements linked into the list,
  * derived from class `double_list_links_base`.
  * @tparam L Type of the links node (one of
  * `double_list_links` or `static_double_list_links`).
 */
template <class T, class L = double_list_links>
class double_list;
```

#### Dependencies

- none

#### CMake

To integrate the utils-lists source library into a CMake application,
add this folder to the build:

```cmake
add_subdirectory("xpacks/micro-os-plus-utils-lists")`
```

The result is an interface library that can be added as an application
dependency with:

```cmake
target_link_libraries(your-target PRIVATE

  micro-os-plus::utils-lists
)
```

#### meson

To integrate the utils-lists source library into a meson application,
add this folder to the build:

```meson
subdir('xpacks/micro-os-plus-utils-lists')
```

The result is a dependency object that can be added
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

### Examples

An example showing how to use the intrusive lists is
available in
[tests/src/sample-test.cpp](tests/src/sample-test.cpp).

Here are some excerpts:

```c++
#include <micro-os-plus/utils/lists.h>

class child
{
public:
  child (const char* name)
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
        utils::double_list_links, // type of registry_links_
        &child::registry_links_, // name of member
        static_double_list_links>; // type of the links node

// The list head is statically allocated.
static_children_list kids_registry;
```

### Known problems

- for statically allocated lists, the destructor cannot return the
object to the initial zero state; in case the objects are reused it is
mandatory to clear the memory (via a `memset()`, for example).

### Tests

The project is fully tested via GitHub
[Actions](https://github.com/micro-os-plus/utils-lists-xpack/actions/)
on each push.

The test platforms are GNU/Linux, macOS and Windows; native tests are
compiled with GCC and clang; tests for embedded platforms are compiled
with arm-none-eabi-gcc, aarch64-none-elf-gcc, riscv-none-elf-gcc and
run via QEMU.

There are two sets of tests, one that runs on every push, with a
limited number of tests, and a set that is triggered manually,
usually before releases, and runs all tests on all supported
platforms.

The full set can be run manually with the following commands:

```sh
xpm run install-all -C ~/Work/micro-os-plus/utils-lists-xpack.git
xpm run test-all -C ~/Work/micro-os-plus/utils-lists-xpack.git
```

## Change log - incompatible changes

According to [semver](https://semver.org) rules:

> Major version X (X.y.z | X > 0) MUST be incremented if any
backwards incompatible changes are introduced to the public API.

The incompatible changes, in reverse chronological order, are:

- v3.x: rework, with templates instead of separate static classes and
  a cleaner API;
- v2.x: the C++ namespace was renamed from `os` to `micro_os_plus`;
- v1.x: the code was extracted from the mono-repo µOS++ project.

## Credits

Many thanks to [distortos](https://distortos.org) where such lists
were used in a RTOS.

## License

The original content is released under the
[MIT License](https://opensource.org/licenses/MIT/),
with all rights reserved to
[Liviu Ionescu](https://github.com/ilg-ul/).
