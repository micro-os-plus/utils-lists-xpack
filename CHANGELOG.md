# Change & release log

Releases in reverse chronological order.

Please check
[GitHub](https://github.com/micro-os-plus/utils-lists-xpack/issues/)
and close existing issues and pull requests.

## 2022-08-01

* v3.0.1
* 8037baa #5: define PLATFORM_NATIVE
* e661703 #4: split config.h into portable and platform
* e96b927 CI.yml: add RISC-V tests
* be9b468 platform cortex-a72: fix cmake interface name
* 35f1840 platform cortex-m7f: update device macro to CORTEX_M7
* 0338198 #3: add RISC-V tests
* 9c95f18 copyright notice: add rights reserved

## 2022-07-30

* b2ef927 change qemu platforms to -nostartfiles

## 2022-07-28

* 0878313 CI.yml do not trigger on tags

## 2022-07-25

* 079ee21 add preliminary xpack.json

## 2022-07-22

* 68e5062 tests/*/config.h: MICRO_OS_PLUS_USE_SEMIHOSTING
* 4690598 globals: comment out -DDEBUG

## 2022-07-12

* c7bf145 try node 16
* 7ce248f revert to setup-node@v2
* fa05045 CI: try node 14
* ac1eee2 update for aarch32/aarch64

## 2022-07-11

* 1ed3721 rework platforms & dependencies

## 2022-06-10

* 9d7baab remove deps on devices-cortexm

## 2022-06-09

* 7a26ac7 package.json: bump devices-qemu-cortexm
* 94f38af package.json: remove unused deps; bump deps
* 0a22e45 platform build & run updates
* d611055 meson/globals: remove unused deps
* bc3f22e */config.h: undefine MICRO_OS_PLUS_USE_SEMIHOSTING_SYSCALLS

## 2022-06-05

* 782a305 CI.yml: skip cortex-m7f tests on windows
* 4185121 package.json: add cortexa deps
* f4613f0 package.json: bump helper 2.8.0
* b66131e tests: explicit -m 16M for qemu-arm*

## 2022-06-04

* 6b8fa9b package.json: bump deps
* 89f956a add support for aarch32
* 61b8897 update for sections-*.ld
* 1d745c6 update for arm-cmsis-core
* 2db0532 README: cleanup

## 2022-05-31

* 47d8f57 package.json: add aarch64 & restructure
* 1f078ca add platform-qemu-aarch64
* 89b14ed qemu single line --semihosting-config

## 2022-05-23

* 74e5f96 package.json: rework clean actions
* 2b0218c package.json: bump arm-none-eabi-gcc 11.2.1-1.1.1
* 6936d68 rename platform-qemu-cortex-m7f & cortex-m0

## 2022-05-21

* a4c0ca4 #2: add cortex-m0 tests
* 458ffb3 package.json: bump deps devices-qemu-cortexm 3.1.0
* 6b7426c package.json: move hidden property up

## 2022-04-18

* 1e23fd8 .vscode add cSpell.ignoreWords
* 99940d2 README spell check
* ad1b96b package.son use --ignore-errors
* 3dbcd6a CI.yml: try xpm 0.13.1

## 2022-04-17

* db2b2d2 CI.yml: show xpm version
* 2480951 package.json: return to 0.12.10
* 2934111 CI.yml: xpm-version with quotes
* 4bd043e CI.yml: xml-version as string
* c703c8e CI: try parameter  xpm-version
* a122be5 CI: revert to windows latest
* 5766d5c CI.yml: use latest os
* 21c7616 package.json: use inherit

## 2022-04-10

* 5630580 trap exit_trap EXIT
* 23a107f package.json: bump build-helper 2.7.1
* 8e0dfc8 add local common-tests-source.sh
* adde89e test-all.sh: run_verbose
* bf495c4 workflows: explicit test names
* 3ac4d6b test-all.yml: explicit xbbla

## 2022-04-07

* ce2b49d test-all.yml: remove Raspberry Pi OS test
* 05f3b9a test-all.sh: fix syntax

## 2022-04-04

* ed9def1 package.json: update description

## 2022-04-03

* v3.0.0
* 5f004e1 README add documentation
* 59fcbed rework link next/previous
* de78fee rename typename H for head
* a49167b join namespaces
* 5a052b3 lists.cpp: include conditional #pragma
* 82cced8 lists.h: include config.h
* bfbad34 split inlines.h
* 28a619e package.json: bump micro-test-plus 3.0.0

## 2022-04-02

* 607f088 unit-test.cpp: cover all new templates
* f543fe0 major rework with more templates

## 2022-04-01

* be9ddd1 unit-test.cpp: update for linked()
* a752ffc rename linked(); rework *double_list_links
* 8b4d15f unit-test.cpp: rework with templates
* afd5c3f add double_list::empty()
* ecf609e add static_double_list::link()
* 769bf8b add static_double_list iterator
* 072ff82 lists.h: update double_list_iterator
* 9b4121f lists.h: add types to static_double_list
* 9f4287e add is_statically_allocated

## 2021-03-09

* v2.0.1
* fix/silence warnings

## 2021-03-01

* v2.0.0

## 2021-02-28

* rename micro_os_plus

## 2021-02-04

* v1.1.0
* content moved here form single repo
