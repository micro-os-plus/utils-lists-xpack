# A source code library with the µOS++ C++ intrusive lists  {#mainpage}

[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/utils-lists.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/utils-lists/)
[![license](https://img.shields.io/github/license/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/LICENSE)
[![CI on Push](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml/badge.svg)](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml)
[![Website](https://img.shields.io/website?url=https%3A%2F%2Fmicro-os-plus.github.io%2Futils-lists-xpack%2F)](https://micro-os-plus.github.io/utils-lists-xpack/)

## Overview

This project provides the **source code** for a library
that implements the **µOS++ C++ intrusive double linked lists**,
a special class of lists that store the links inside the list elements,
in order to avoid dynamic memory allocations, a feature appreciated
in embedded systems.

The **open source** project is hosted on GitHub as
[micro-os-plus/utils-lists-xpack](https://github.com/micro-os-plus/utils-lists-xpack)
and has its own
[documentation](https://micro-os-plus.github.io/utils-lists-xpack/)
site.

## Install

As a source code library, this project can be added to a project
in the traditional way,
by copying the relevant files into the target project, or by linking
the entire project as a Git submodule.

However, more automation is available and the most convenient way is
to use it as a dependency to a project via **xpm**.

### xpm/npm

In addition to the source files, this project also includes a
`package.json` file with the metadata that allows it to be identified as an
**xpm/npm** package such that it be directly installed from GitHub or
from the [npmjs.com](https://www.npmjs.com) registry as
[`@micro-os-plus/utils-lists`](https://www.npmjs.com/package/@micro-os-plus/utils-lists).

#### Prerequisites

A recent [xpm](https://xpack.github.io/xpm/),
which is a portable [Node.js](https://nodejs.org/) command line application
that complements **npm** with several extra features required by
**C/C++ projects**.

It is recommended to update to the latest version with:

```sh
npm install --global xpm@latest
```

For details please follow the instructions in the
[xPack install](https://xpack.github.io/install/) page.

#### xpm

The package can be installed from the `npmjs.com` registry with:

```sh
cd my-project
xpm init # Unless a package.json is already present

xpm install @micro-os-plus/utils-lists@latest

ls -l xpacks/micro-os-plus-utils-lists
```

#### npm

The package can also be installed with **npm** or related, but
the extra features specific to C/C++ projects will not be available;
thus, at least for consistency reasons, it is recommended to use **xpm**.

### Git submodule

In addition to manually copying the relevant files to the target
project, which require extra maintenance efforts to keep the
project up to date, a more convenient
solution is to link the entire project as a Git submodule,
for example below an `xpacks` folder:

```sh
cd my-project
git init # Unless already a Git project
mkdir -p xpacks

git submodule add https://github.com/micro-os-plus/utils-lists-xpack.git \
  xpacks/micro-os-plus-utils-lists
```

## Project repository

The project uses Git and is hosted on GitHub as
<https://github.com/micro-os-plus/utils-lists-xpack.git>.

### Branches

Apart from the unused `master` branch, there are two active branches:

- `xpack`, with the latest stable version (default)
- `xpack-develop`, with the current development version

All development is done in the `xpack-develop` branch, and contributions via
Pull Requests should be directed to this branch.

When new releases are published, the `xpack-develop` branch is merged
into the `xpack` branch.

## Status

@note
The **utils-lists** library is fully functional, and
the lists classes are used to manage several
lists in the µOS++ RTOS scheduler (like threads, mutexes, devices, etc).
@n
@n
The project is CI tested on 32 and 64-bit bare-metal platforms (Arm Cortex-M0,
Cortex-M7F, Cortex-A15, Cortex-A72, RISC-V RV32IMAC, RV64IMAFDC),
and natively, with GCC and clang.

## Credits

Many thanks to:

- [distortos](https://distortos.org) - for the inspiration on how these lists
  can be used in an RTOS
- [doxygen-awesome-css](https://jothepro.github.io/doxygen-awesome-css/) -
for the Doxygen theme

## License

The original content is released under the
[MIT License](https://opensource.org/licenses/MIT/),
with all rights reserved to
[Liviu Ionescu](https://github.com/ilg-ul/).
