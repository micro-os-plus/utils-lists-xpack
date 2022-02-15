# Tests

## Overview

...


## Platforms

- native (as a process on the development machine)
- QEMU mps2-an386 emulated boars, an Arm Cortex-M4 development board

The tests are performed on GNU/Linux, macOS and GNU/Linux.

Exactly the same source files are used on both platforms, without
changes.

## Toolchains

For a better portability, the builds are repeated with multiple toolchains.

For native tests, the following toolchains are used:

- GCC 8 (not available on Apple Silicon)
- GCC 11
- clang 12

For Cortex-M tests, the toochain is arm-none-eabi-gcc 11.

## CI

The CI workflow runs the tests on every push; for details see
[CI.yml](../.github/workflows/CI.yml).

## Tests details

## sample-test

This is a simple example exercising the
few primitives available in the library.

## unit-test

Test if all functions in the library
work as expected. Use the µTest++ framework.
