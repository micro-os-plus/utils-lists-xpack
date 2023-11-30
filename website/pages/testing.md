@page testing Testing

@tableofcontents

[![CI on Push](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/ci.yml)

## Overview

The µOS++ testing strategy is to compile the sources with as many
toolchains as possible, and run them on as many platforms as possible.

## Platforms

The supported test platforms are:

- `platform-native` - run the test applications as **native processes**
  on the development machine
- `platform-qemu-cortex-m0` - run the tests as fully semihosted
  **Cortex-M0** applications on a QEMU **mps2-an385** emulated board
  (an Arm Cortex-M3 development board)
- `platform-qemu-cortex-m3` - run the tests as fully semihosted
  **Cortex-M3** applications on a QEMU **mps2-an385** emulated board
  (an Arm Cortex-M3 development board)
- `platform-qemu-cortex-m4f` - run the tests as fully semihosted
  **Cortex-M4** applications on a QEMU **mps2-an386** emulated board
  (an Arm Cortex-M4 development board)
- `platform-qemu-cortex-m7f` - run the tests as fully semihosted
  **Cortex-M7** applications on a QEMU **mps2-an500** emulated board
  (an Arm Cortex-M7 development board)
- `platform-qemu-cortex-a15` - run the tests as fully semihosted
  **Cortex-A15** applications on a QEMU **virt** emulated board
- `platform-qemu-cortex-a72` - run the tests as fully semihosted
  **Cortex-A72** (64-bit) applications on a QEMU **virt** emulated board
- `platform-qemu-riscv-rv32imac` - run the tests as fully semihosted
  **RISC-V RV32IMAC** applications on a QEMU **virt** emulated board
- `platform-qemu-riscv-rv64imafdc` - run the tests as fully semihosted
  **RISC-V RV32IMAFDC** applications on a QEMU **virt** emulated board

The tests are built and executed on:

- GNU/Linux (Intel and Arm)
- macOS (Intel and Apple Silicon)
- Windows

The build configurations use exactly the same source files on all platforms,
without changes. On embedded platforms, the applications interact with the
host via the
[Arm semihosting mechanism](https://github.com/ARM-software/abi-aa/blob/main/semihosting/semihosting.rst).

## Toolchains

To improve source code portability, the builds are repeated with multiple
toolchains, even with multiple versions of the same toolchain.

The following toolchains are used:

- gcc 11, 12, 13 (native)
- clang 13, 14, 15, 16 (native)
- arm-none-eabi-gcc 11, 12, 13 (Cortex-M, AArch32)
- aarch64-none-elf-gcc 11, 12, 13 (AArch64)
- risc-none-elf-gcc 11, 12, 13 (RISC-V 32/64)

## Tests details

### sample-test

The [sample-test.cpp](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/tests/src/sample-test.cpp)
file is a simple application to demonstrate how to call the
few primitives available in the library.

A typical run looks like:

```console
test 1
    Start 1: sample-test

1: Test command: /Users/ilg/MyProjects/micro-os-plus.github/xPacks/utils-lists-xpack.git/build/native-cmake-sys-debug/platform-bin/sample-test "one" "two"
1: Test timeout computed to be: 10000000
1: micro_os_plus::trace::initialize()
1: Marry
1: Bob
1: Sally
1:
1: Marry
1: Sally
1/2 Test #1: sample-test ......................   Passed    0.65 sec
```

### unit-test

The [unit-test.cpp](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/tests/src/unit-test.cpp)
file is an exhaustive test trying to validate that all the library
functions work as expected. It uses the
[µTest++](https://github.com/micro-os-plus/micro-test-plus-xpack)
framework.

A typical run looks like:

```console
test 2
    Start 2: unit-test

2: Test command: /Users/ilg/MyProjects/micro-os-plus.github/xPacks/utils-lists-xpack.git/build/native-cmake-sys-debug/platform-bin/unit-test
2: Test timeout computed to be: 10000000
2: micro_os_plus::trace::initialize()
2: argv['/Users/ilg/MyProjects/micro-os-plus.github/xPacks/utils-lists-xpack.git/build/native-cmake-sys-debug/platform-bin/unit-test']
2: Built with clang Apple LLVM 14.0.0 (clang-1400.0.29.202), with exceptions, with MICRO_OS_PLUS_DEBUG.
2:
2: • Static double list links destructor - test suite started
2:
2:   ✓ Static - test case passed (4 checks)
2:
2: ✓ Static double list links destructor - test suite passed (4 checks in 1 test case)
2:
2: • Static double list links - test suite started
2:
2:   ✓ Initial - test case passed (6 checks)
2:   ✓ Link - test case passed (3 checks)
2:   ✓ Unlink - test case passed (3 checks)
2:
2: ✓ Static double list links - test suite passed (12 checks in 3 test cases)
2:
2: • Double list links - test suite started
2:
2:   ✓ Initial - test case passed (3 checks)
2:   ✓ Link - test case passed (3 checks)
2:   ✓ Unlink - test case passed (3 checks)
2:   ✓ Allocated on stack - test case passed (1 check)
2:
2: ✓ Double list links - test suite passed (10 checks in 4 test cases)
2:
2: • Static double list - test suite started
2:
2:   ✓ Uninitialized - test case passed (3 checks)
2:   ✓ Empty - test case passed (2 checks)
2:   ✓ Link One - test case passed (7 checks)
2:   ✓ Link Two - test case passed (8 checks)
2:   ✓ Unlink One - test case passed (6 checks)
2:   ✓ Unlink Two - test case passed (3 checks)
2:   ✓ Link One again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:
2: ✓ Static double list - test suite passed (33 checks in 8 test cases)
2:
2: • Static double list with static elements - test suite started
2:
2:   ✓ Uninitialized - test case passed (3 checks)
2:   ✓ Empty - test case passed (2 checks)
2:   ✓ Link One - test case passed (7 checks)
2:   ✓ Link Two - test case passed (8 checks)
2:   ✓ Unlink One - test case passed (6 checks)
2:   ✓ Unlink Two - test case passed (3 checks)
2:   ✓ Link One again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:
2: ✓ Static double list with static elements - test suite passed (33 checks in 8 test cases)
2:
2: • Double list - test suite started
2:
2:   ✓ Uninitialized - test case passed (3 checks)
2:   ✓ Empty - test case passed (2 checks)
2:   ✓ Link One - test case passed (7 checks)
2:   ✓ Link Two - test case passed (8 checks)
2:   ✓ Unlink One - test case passed (6 checks)
2:   ✓ Unlink Two - test case passed (3 checks)
2:   ✓ Link One again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:   ✓ Allocated on stack - test case passed (2 checks)
2:
2: ✓ Double list - test suite passed (35 checks in 9 test cases)
2:
2: • Double list with static elements - test suite started
2:
2:   ✓ Uninitialized - test case passed (3 checks)
2:   ✓ Empty - test case passed (2 checks)
2:   ✓ Link One - test case passed (7 checks)
2:   ✓ Link Two - test case passed (8 checks)
2:   ✓ Unlink One - test case passed (6 checks)
2:   ✓ Unlink Two - test case passed (3 checks)
2:   ✓ Link One again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:   ✓ Allocated on stack - test case passed (2 checks)
2:
2: ✓ Double list with static elements - test suite passed (35 checks in 9 test cases)
2:
2: • Static intrusive list2 - test suite started
2:
2:   ✓ Empty - test case passed (3 checks)
2:   ✓ Link Marry - test case passed (4 checks)
2:   ✓ Link Bob - test case passed (6 checks)
2:   ✓ Link Sally - test case passed (8 checks)
2:   ✓ Unlink Bob - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Link Marry at head - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Unlink Sally - test case passed (2 checks)
2:   ✓ Link Marry again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:
2: ✓ Static intrusive list2 - test suite passed (47 checks in 11 test cases)
2:
2: • Static intrusive list static nodes - test suite started
2:
2:   ✓ Empty - test case passed (3 checks)
2:   ✓ Link Marry - test case passed (4 checks)
2:   ✓ Link Bob - test case passed (6 checks)
2:   ✓ Link Sally - test case passed (8 checks)
2:   ✓ Unlink Bob - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Link Marry at head - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Unlink Sally - test case passed (2 checks)
2:   ✓ Link Marry again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:
2: ✓ Static intrusive list static nodes - test suite passed (47 checks in 11 test cases)
2:
2: • Intrusive list2 - test suite started
2:
2:   ✓ Empty - test case passed (3 checks)
2:   ✓ Link Marry - test case passed (4 checks)
2:   ✓ Link Bob - test case passed (6 checks)
2:   ✓ Link Sally - test case passed (8 checks)
2:   ✓ Unlink Bob - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Link Marry at head - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Unlink Sally - test case passed (2 checks)
2:   ✓ Link Marry again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:   ✓ Allocated on stack - test case passed (2 checks)
2:
2: ✓ Intrusive list2 - test suite passed (49 checks in 12 test cases)
2:
2: • Intrusive list static nodes - test suite started
2:
2:   ✓ Empty - test case passed (3 checks)
2:   ✓ Link Marry - test case passed (4 checks)
2:   ✓ Link Bob - test case passed (6 checks)
2:   ✓ Link Sally - test case passed (8 checks)
2:   ✓ Unlink Bob - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Link Marry at head - test case passed (6 checks)
2:   ✓ Unlink Marry - test case passed (4 checks)
2:   ✓ Unlink Sally - test case passed (2 checks)
2:   ✓ Link Marry again - test case passed (2 checks)
2:   ✓ Clear - test case passed (2 checks)
2:   ✓ Allocated on stack - test case passed (2 checks)
2:
2: ✓ Intrusive list static nodes - test suite passed (49 checks in 12 test cases)
2/2 Test #2: unit-test ........................   Passed    0.16 sec
```

## Continuous Integration

There is a GitHub Actions CI
[workflow](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/ci.yml)
that runs a selection of the
tests on every push; for details see
[ci.yml](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/.github/workflows/ci.yml).

## Extensive testing

A second
[workflow](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/test-all.yml)
can be triggered manually before releases, and runs all available tests
on all supported platforms; for details see
[test-all.yml](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/.github/workflows/test-all.yml)

@note
Running these tests on Apple Silicon macOS and Arm GNU/Linux
require the self-hosted runners for the `micro-os-plus` GitHub
organisation to be up and running.

## Manual runs

The tests can be executed manually on any of the supported
platforms:

- GNU/Linux (Intel and Arm, **GLIBC>=2.27**); to run the native
tests, a C++ development environment is required
(on Ubuntu install `build-essential`)
- macOS (Intel >= **10.13** and Apple Silicon > **11.1**);
as C++ development environment use **Command Line Tools**
- Windows 7 with the Universal C Runtime (UCRT), Windows 8, Windows 10,
Windows 11

### Prerequisites

A recent **Node.js** (>=16) run environment. For instructions on how to
install it, see the [prerequisites](https://xpack.github.io/install/) page.

With **npm** available, install **xpm**:

```sh
npm install --global xpm@latest
```

### Clone the project

To clone the development branch (`xpack-develop`), run the following commands in a
terminal (on Windows use the _Git Bash_ console):

```sh
rm -rf ~/Work/micro-os-plus/utils-lists-xpack.git && \
mkdir -p ~/Work/micro-os-plus && \
git clone \
  --branch xpack-develop \
  https://github.com/micro-os-plus/utils-lists-xpack.git \
  ~/Work/micro-os-plus/utils-lists-xpack.git
```

### Run the tests

There are multiple predefined actions, to run various selections of tests,
from a single run with the system compiler, to all possible tests.

@note
On the first run, the install step might take quite some time,
since it has to download the toolchain archives, which are relatively
large, up to hundreds of MB.

To run the tests with the system compiler:

```sh
xpm run install -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
xpm run test -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
```

To run a selection of tests with the latest versions of the toolchains:

```sh
xpm run install-selected -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
xpm run test-selected -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
```

To run all tests with the latest versions of the toolchains:

```sh
xpm run install-latest -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
xpm run test-latest -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
```

To run all tests with all toolchain versions:

```sh
xpm run install-all -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
xpm run test-all -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
```

### Cleanups

To do a deep cleanup in order to free space or to restart the tests
from scratch:

```sh
npm install -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
xpm run deep-clean -C ~/Work/micro-os-plus/utils-lists-xpack.git/tests
```

@note
All dependencies installed by xpm are located in the home folder and
can be uninstalled by simply removing the folders:
- `~/.local/xPacks` and `~/.cache/xpacks` on GNU/Linux,
- `~/Library/xPacks` and `~/Library/Caches/xPacks` on macOS,
- `%%APPDATA%\xPacks` and `%%LOCALAPPDATA%\Caches\xPacks` on Windows.
