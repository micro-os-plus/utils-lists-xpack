# platform-native

Support files for building application to run as native processes.

A few files, with minimal content, are added:

- `include/micro-os-plus/config.h`
- `include/micro-os-plus/platform.h`

## Shared libraries

Binaries compiled by toolchains installed in custom locations
require the shared libraries specific to the toolchain, and it is
important to avoid using the system similar libraries, since sometimes
they might not be compatible.

### Windows

Windows is a special case, since the DLLs referred by the generated binaries
are generally not available in the standard distribution and the toolchain
provided libraries are mandatory.

Separate libraries are available for 64/32-bit binaries, in the
`x86_64-w64-mingw32/lib`, respectively `i686-w64-mingw32/lib`,
when available.

The actual location of the C++ libraries can be obtained by asking
the C++ compiler, for example with `-print-file-name=<library>.dll`.

This path can be later used to adjust the environment PATH to include
the libraries.

Windows CMake builds adjust the path to the folder where the
C++ library is located.

To simplify thing, the Windows meson builds use `-static`.

### macOS & GNU/Linux

macOS & GNU/Linux GCC builds also use `-static-libgcc -static-libstdc++`.
