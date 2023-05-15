# Change log

@tableofcontents

## Breaking changes

According to [semver](https://semver.org) rules:

> Major version X (X.y.z | X > 0) MUST be incremented if any
> backwards incompatible changes are introduced to the public API.

The breaking changes introduced by each major release,
in reverse chronological order, are:

### v4.x

Major rework; add `double_list_links_base`,
remove `next()` & `previous()` setters,
add `initialize_once()`, reorder `double_list`
template parameter, rename `links_pointer()`.

### v3.x

Rework, with templates instead of separate static classes and
a cleaner API.

### v2.x

The C++ namespace was renamed from `os` to `micro_os_plus`.

### v1.x

The code was extracted from the mono-repo µOS++ project.
