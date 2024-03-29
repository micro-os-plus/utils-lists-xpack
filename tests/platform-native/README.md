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

However, in order to simplify thing, the Windows builds use `-static`.

### GNU/Linux

For GNU/Linux builds, the compiler is asked the locations of the libraries,
and this list of paths is temporarily set as `LD_LIBRARY_PATH` for each
test.

Although CMake can directly define sequences of piped commands, meson
can not, and requires an external script, available as
`scripts/get-libraries-path.sh`.

It requires the name of the compiler (clang++ or g++).

### macOS

macOS GCC builds use `-static-libgcc -static-libstdc++`.
