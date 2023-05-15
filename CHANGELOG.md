# Change & release log

Releases in reverse chronological order.

Please check
[GitHub](https://github.com/micro-os-plus/utils-lists-xpack/issues)
and close existing issues and pull requests.

* v4.0.0

## 2023-05-10

* 7dbeb57 publish-github-pages.yml: remove workflow_dispatch
* 0e0f73a publish-github-pages.yml: workflow_dispatch
* c7ce863 publish-github-pages.yml: npm i -g xpm
* 16f2a9f publish-github-pages.yml: xpm install
* e5ad165 package.json: add action 'install'
* 31b9117 .vscode/settings.json: ignoreWords
* dbc1eb3 website: use helper common & theme
* 47e012a tests: ```cpp
* 3e5eea0 package.json: bump helper & awesome
* 9724572 package.json: del package-lock.json
* 922e31e README: use ```cpp
* 0fd1cfc Revert "README.md: try [TOC]"
* ecaefd7 README.md: try [TOC]
* 51c706a .npmignore website inspiration

## 2023-05-09

* 4597603 README update
* 6b5cf95 rename template parameter L
* 91dc020 rename links_type
* 45482cd rename links_ & links_pointer()
* 1a20c60 add the inspiration folder with clang excerpts
* 0511114 common-config.doxyfile: WARN_AS_ERROR = YES
* 8feff71 doxygen updates
* 4d7b31d lists.h: comment out doxygen type grouping
* 965c006 lists.h: use more explicit head_type
* d16c0c3 lists.h: add static_assert to intrusive_list
* bbfeb7e const begin() end()
* c7cfad0 #8: add initialize_once()
* 0022391 inlines.h: remove destructor zeroing members

## 2023-05-08

* 330f899 package-lock.json update
* db3b9a8 package.json: add xpm link doxygen-awesome-css
* 7dc2985 package.json: bump architecture-*
* 05ce65b package.json: bump arm toolchain 12.2.1-1.2.1
* 7f44beb package.json: add open-cli as devDep
* 0fb3d85 .vscode/settings.json: ignoreWords
* 171b2eb cmake & meson: -Wl,--no-warn-rwx-segment
* 9215618 doxygen comments updates
* 21900e0 lists.h: explicit long names for template types
* 41780eb .npmignore update

## 2023-05-07

* bc7596e publish-github-pages.yml: add links in comments
* 7c48a35 package-lock.json
* 2e67f44 package.json: add doxygen-awesome-css devDep
* 141acf3 package.json: add doxygen & safari
* 64cad03 package.json: install-all does npm install
* 45bd2fc package.json: add del-cli devDep
* 3802646 website: split common config
* 7ef81b3 CI.yml: ignore website/**
* 7309f81 publish-github-pages.yml update
* 68ff3a6 CI.yml: ignore website
* e81542e add publish-github-pages.yml
* 3e5c583 website update
* 5e416ee README update
* 9cf1036 add doxygen config; content not yet updated

## 2023-05-06

* d85ed0f CI.yml: bump macos-12, node 18
* ca6fb03 README update
* 61b2828 CI.yml: temporarily disable windows
* 4302a3d list.h: cosmetics
* a28f442 CI.yml: fix xpm run
* c55ba1c CI.yml: native gcc & clang latest
* 197fadd CI.yml: bump ubuntu 22, xpm 0.15
* 4ce6bc5 list.cpp: use noipa only for GCC
* 68ab415 package.json: add gcc & clang latest
* c2bc247 package.json: add gcc12, clang14, clang15
* 4d17e43 package.json: bump devDeps, use inheritance
* 1d1b1da package: add inherited cmake/meson actions
* 0610e79 lists.cpp: add attribute noipa to nullify
* 9aa6822 unit-test.cpp: include commented out iostream
* 4b9e614 #7: rework double_list template parameters
* 5b4907f package.json: cosmetics
* 5f3b09f unit-test.cpp: add a test of static nullify
* af1dd2c #6: rework with a double_list_links_base class
* 35b8843 .vscode/settings.json: ignoreWords
* 70a080c .vscode/launch.json: update
* 43f7827 platform-native: add xpack_create_listing to cmake

## 2022-08-16

* 382d517 package.json min 0.14.0 & defaults

## 2022-08-15

* a1cd3df package.json: bump xpm to 0.14.0
* 2a92ee5 CI: bump xpm 0.14

## 2022-08-05

* d316598 CI.yml cleanups
* 061146c CI try to enable bare-metal on windows
* 04b280f CI.yml: ignore all READMEs

## 2022-08-04

* 4373a58 tests/cross.ini: add link to cpu-families

## 2022-08-03

* 98afca1 meson: update riscv32/riscv64 cpu families
* v3.0.1

## 2022-08-01

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
