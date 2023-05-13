# platform-native

Support files for building application to run as native processes.

A few files, with minimal content, are added:

- `include/micro-os-plus/config.h`
- `include/micro-os-plus/platform.h`

Windows CMake builds adjust the path to the folder where the
C++ library is located.

Windows meson builds use `-static-libgcc -static-libstdc++`.

macOS & Linux GCC builds also use `-static-libgcc -static-libstdc++`.
