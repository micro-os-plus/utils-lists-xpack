@page install Integration Guide

[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/utils-lists.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/utils-lists/)

@tableofcontents

As a source code library, this project can be integrated into another project
in the traditional way,
by either copying the relevant files into the target project, or by linking
the entire project as a Git submodule.

However, things can be further automated and the most convenient way is
to **add it as a dependency** to the project via **xpm**.

## Install with xpm/npm

Along with the source files, this project also includes a
`package.json` file with the metadata that allows it to be identified as an
**xpm/npm** package so that it can be directly installed from GitHub or
from the [npmjs.com](https://www.npmjs.com) registry as
[`@micro-os-plus/utils-lists`](https://www.npmjs.com/package/@micro-os-plus/utils-lists).

### Prerequisites

A recent [xpm](https://xpack.github.io/xpm/),
which is a portable [Node.js](https://nodejs.org/) command line application
that complements [npm](https://docs.npmjs.com)
with several extra features specific to
**C/C++ projects**.

It is recommended to install/update to the latest version with:

```sh
npm install --global xpm@latest
```

For details please follow the instructions in the
[xPack install](https://xpack.github.io/install/) page.

@warning
Be sure **xpm** is not installed with administrative rights.

### xpm

This project can be installed as a package from the
`npmjs.com` registry with:

```sh
cd my-project
xpm init # Unless a package.json is already present
```

```sh
xpm install @micro-os-plus/utils-lists@latest
```

After following the links, the result is a structure like this:

```console
 % tree -l
.
├── LICENSE
├── package.json
└── xpacks
    └── @micro-os-plus
        └── utils-lists -> /Users/ilg/Library/xPacks/@micro-os-plus/utils-lists/4.0.0-pre
            ├── CHANGELOG.md
            ├── CMakeLists.txt
            ├── LICENSE
            ├── README.md
            ├── include
            │   └── micro-os-plus
            │       └── utils
            │           ├── inlines.h
            │           └── lists.h
            ├── meson.build
            ├── package.json
            ├── src
            │   └── lists.cpp
            └── xpack.json

8 directories, 12 files
```

### npm

The package can also be installed with [npm](https://docs.npmjs.com)
or related, but
the features specific to C/C++ projects will not be available;
therefore, at least for consistency reasons, it is recommended
to use **xpm**.

## Add as a Git submodule

Besides manually copying the relevant files to the target
project, which will later require extra maintenance efforts to keep the
project up to date, a more convenient
solution is to link the entire project as a **Git submodule**,
for example below an `xpacks` folder:

```sh
cd my-project
git init # Unless already a Git project
mkdir -p xpacks

git submodule add https://github.com/micro-os-plus/utils-lists-xpack.git \
  xpacks/@micro-os-plus/utils-lists
```

## Project repository

The project uses Git and is hosted on GitHub as
<https://github.com/micro-os-plus/utils-lists-xpack.git>.

## Branches

Apart from the unused `master` branch, there are two active branches:

- `xpack`, with the latest stable version (default)
- `xpack-develop`, with the current development version

All development is done in the `xpack-develop` branch, and contributions via
Pull Requests should be directed to this branch.

When new releases are published, the `xpack-develop` branch is merged
into the `xpack` branch.

## Build & integration info

The project is written in C++, and it is expected to be used in C++ projects.

The source code was compiled natively with **GCC** and **LLVM/clang** and cross
compiled on embedded **Arm** and **RISC-V** targets,
and is expected to be warnings free.

To ease the integration of this library into user projects, there
are already made **CMake** and **meson** configuration files (see below).

For other build systems, consider the following details:

## Include folders

The following folders should be passed to the compiler during the build:

- `include`

The header files to be included in user projects are:

```cpp
#include <micro-os-plus/utils/lists.h>
```

## Source files

The source files to be added to user projects are:

- `src/lists.cpp`

## Preprocessor definitions

There are several preprocessor definitions used to configure the build:

- `MICRO_OS_PLUS_INCLUDE_CONFIG_H` - to include `<micro-os-plus/config.h>`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS` - to trace some calls, like `clear()`,
  `insert()`, `link()`, `unlink()`
- `MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCT` - to trace constructors and
  destructors

## Compiler options

The following options must be passed to the compiler and linker:

- `-std=c++20` or higher for C++ sources

## Dependencies

The library has the following dependencies:

- `@micro-os-plus/diag-trace` - the **µOS++** `trace::printf()` tracing
  infrastructure (optional, used only if `MICRO_OS_PLUS_TRACE_UTILS_LISTS*`
  are defined)

## CMake

To integrate the **utils-lists** library into a CMake application,
add the folder where this project is located to the build:

```cmake
add_subdirectory("xpacks/@micro-os-plus/utils-lists")
```

The result is **an interface library** that can be added as an application
dependency with:

```cmake
target_link_libraries(your-target PRIVATE

  micro-os-plus::utils-lists
)
```

## Meson Build

To integrate the **utils-lists** library into a
[meson](https://mesonbuild.com) application,
add the folder where this project is located to the build:

```meson
subdir('xpacks/@micro-os-plus/utils-lists')
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

## Status

@note
The **utils-lists** library is fully functional, and
the intrusive lists class templates are used to manage several
lists in the µOS++ RTOS scheduler (like threads, mutexes, devices, etc).
@n
@n
The project is CI tested on 32 and 64-bit bare-metal platforms (Arm Cortex-M0,
Cortex-M7F, Cortex-A15, Cortex-A72, RISC-V RV32IMAC, RV64IMAFDC),
and natively, with GCC and LLVM/clang.
