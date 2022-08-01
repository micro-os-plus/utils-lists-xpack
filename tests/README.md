# Tests

## Overview

The µOS++ testing strategy is to compile the sources with as many
toolchains as possible, and run them on as many platforms as possible.

There is a GitHub Actions CI workflow that runs a selection of the
tests on every push; for details see
[CI.yml](../.github/workflows/CI.yml).

A second workflow is triggered manually, and runs all available tests
on all supported platforms; for details see
[test-all.yml](../.github/workflows/test-all.yml)

## Platforms

The supported platforms are:

- `platform-native` - run the test applications as native processes
  on the development machine
- `platform-qemu-cortex-m7f` - run the tests as fully semihosted Cortex-M7
  applications on a QEMU `mps2-an500` emulated board
  (an Arm Cortex-M7 development board)
- `platform-qemu-cortex-m0` - run the tests as fully semihosted Cortex-M0
  applications on a QEMU `mps2-an385` emulated board
  (an Arm Cortex-M3 development board)
- `platform-qemu-cortex-a72` - run the tests as fully semihosted Cortex-A72
  (64-bit) applications on a QEMU `virt` emulated board
- `platform-qemu-cortex-a15` - run the tests as fully semihosted Cortex-A15
  applications on a QEMU `virt` emulated board
- `platform-qemu-riscv-rv32imac` - run the tests as fully semihosted RISC-V
  RV32IMAC applications on a QEMU `virt` emulated board
- `platform-qemu-riscv-rv64imafdc` - run the tests as fully semihosted RISC-V
  RV32IMAFDC applications on a QEMU `virt` emulated board

The tests are performed on GNU/Linux, macOS and Windows.

Exactly the same source files are used on all platforms, without
changes.

## Toolchains

For a better portability, the builds are repeated with multiple toolchains,
even with multiple versions of the same toolchain.

The following toolchains are used:

- gcc 11 (native)
- clang 12, 13 (native)
- arm-none-eabi-gcc 11 (Cortex-M, AArch32)
- aarch64-none-elf-gcc 11 (AArch64)
- risc-none-elf-gcc 11 (RISC-V 32/64)

## Tests details

### sample-test

Show a simple application exercising the
few primitives available in the library.

### unit-test

Test if all functions in the library
work as expected. Use the µTest++ framework.
