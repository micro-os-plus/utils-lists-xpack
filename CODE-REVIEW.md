# Code Review — µOS++ Intrusive Lists

Scope: `include/`, `src/`, and `tests/` (excluding `tests/build/`), as no
specific path was given. Files read in full:

- `include/micro-os-plus/utils/lists.h`
- `include/micro-os-plus/utils/lists/doubly-list-links.h` (+ inline header)
- `include/micro-os-plus/utils/lists/doubly-list.h` (+ inline header)
- `include/micro-os-plus/utils/lists/intrusive-list.h` (+ inline header)
- `src/doubly-list-links.cpp`
- `tests/sources/unit/**`, `tests/sources/sample/**`,
  `tests/platforms/*/include/micro-os-plus/utils/lists-defines.h`

## Summary

The library is well documented and the public API is consistent (rule of
five, `noexcept`, `[[nodiscard]]`, concepts). However, there is one
systematic, project-wide defect in the conditional-compilation trace guards,
one broken preprocessor string literal, several lines exceeding the 80
character limit, and a compiler-portability gap in `static_doubly_list_links`
that undermines the documented purpose of `reset()`. Details below, grouped
by checklist section.

## Findings

### Conditional compilation (major, systematic)

The project rule requires every `#endif` to be followed by a comment
repeating the **exact** expression of its paired `#if`. This is violated
throughout the trace-logging guards, in two different ways, in every file
that emits trace output:

1. `#if defined(X)` paired with `#endif // !defined(X)` (spurious `!`) — 16
   occurrences:
   - [src/doubly-list-links.cpp](src/doubly-list-links.cpp#L109-L113), also
     at lines 137/141 and 163/165.
   - [include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h#L308-L314),
     also at lines 355/357, 396/398, 445/448, 471/474, 497/499, 521/523.
   - [include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines.h](include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines.h#L353-L356),
     also at lines 386/389, 423/425, 446/448, 532/534, 561/563.

2. `#if defined(X)` paired with `#endif // X` (missing `defined(...)`) — 4
   occurrences:
   - [doubly-list-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h#L272-L274)
     and lines 302/304.
   - [intrusive-list-inlines.h](include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines.h#L284-L286)
     and lines 300/302.

This is not cosmetic: the whole point of the rule is that the `#endif`
comment can be trusted to identify the guard without scrolling back to the
`#if`. As it stands, every trace-related guard in the codebase (20
occurrences across 3 files) contradicts its own comment, which is worse than
having no comment at all, because it actively misleads. This should be
corrected everywhere, ideally with a scripted find/replace, followed by a
`clang-format`/review pass, since the pattern is identical each time:
`#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)` and
`#endif // defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)`.

### Correctness and maintainability

- [src/doubly-list-links.cpp](src/doubly-list-links.cpp#L107-L121)
  (`link_next`) and
  [src/doubly-list-links.cpp](src/doubly-list-links.cpp#L135-L149)
  (`link_previous`) both assert that `this` is already linked/initialised
  (`assert (next_ != nullptr)` / `assert (previous_ != nullptr)`) before
  manipulating pointers. `unlink()`
  ([src/doubly-list-links.cpp](src/doubly-list-links.cpp#L161-L175)) has no
  equivalent precondition check, even though it dereferences `previous_` and
  `next_` unconditionally. Calling `unlink()` on a node whose links are still
  `nullptr` (an uninitialised `static_doubly_list_links`) is undefined
  behaviour, but nothing in the function signals this in debug builds. Add
  `assert (previous_ != nullptr); assert (next_ != nullptr);` for consistency
  with its siblings.

- `static_doubly_list_links::reset()`
  ([src/doubly-list-links.cpp](src/doubly-list-links.cpp#L178-L188)) only
  applies `__attribute__((noipa))` when
  `defined(__GNUC__) && !defined(__clang__)`. The surrounding documentation
  in
  [doubly-list-links-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines.h#L206-L226)
  explicitly states that the destructor's pointer-clearing code is optimised
  away by GCC's dead-store elimination and that `reset()` is "the
  workaround". However, on Clang (and on any other supported compiler) there
  is no equivalent protection at all, so `reset()` is just as vulnerable to
  the same dead-store elimination the comment warns about for the
  destructor. Either find a Clang-compatible equivalent (e.g. a volatile
  write, or `std::atomic_signal_fence`/`asm volatile("" ::: "memory")`
  barrier) and apply it uniformly, or update the documentation to state that
  the workaround is GCC-only and describe the actual behaviour under Clang.

### Documentation (Doxygen)

- [include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines.h#L14-L17):
  the `#error` message is a malformed string literal:
  ```cpp
  #error \
      "Do not include this file directly; use "micro-os-plus/utils/doubly-list-links.h"."
  ```
  The embedded, unescaped `"` characters split this into three separate
  tokens instead of one string (`"Do not include this file directly; use "`,
  a bare `micro-os-plus/utils/doubly-list-links.h` identifier-like token,
  then `"."`). Contrast with the correctly formed messages using angle
  brackets in
  [doubly-list-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h#L14-L16)
  and
  [intrusive-list-inlines.h](include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines.h#L14-L16).
  Fix to match the established convention, e.g.
  `"Do not include this file directly; use <micro-os-plus/utils/doubly-list-links.h>."`.
  Note the generated Doxygen page under
  [website/docs/api/files/include-micro-os-plus-utils-inlines-doubly-list-links-inlines-h.md](website/docs/api/files/include-micro-os-plus-utils-inlines-doubly-list-links-inlines-h.md#L85)
  will need regeneration after the fix (excluded from this review's scope).

- Otherwise, documentation is thorough: every reviewed class, method, and
  member has `@brief`/`@details`, British spelling is used consistently
  (`initialised`, `behaviour`, `organise` were not found misspelled), and
  `@details` genuinely expands on `@brief` rather than repeating it.

### Naming and style

- Line length: the following lines exceed 80 characters and should be
  wrapped or otherwise shortened:
  - [include/micro-os-plus/utils/lists.h](include/micro-os-plus/utils/lists.h#L57)
    (mainpage URL in a Doxygen comment; not covered by the "generated-file"
    exception).
  - [include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-inlines.h#L16),
    [intrusive-list-inlines.h](include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines.h#L16),
    and
    [doubly-list-links-inlines.h](include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines.h#L16)
    — the `#error` message strings, despite already using a line
    continuation, still exceed 80 characters. Shorten the wording (e.g. drop
    "; use ...", relying on the accompanying header comment above each
    inline file).
- No other naming/formatting deviations were found; `snake_case` is used
  consistently for identifiers, file names are lower-case and
  dash-separated, and `#ifndef` is used exclusively for header guards in
  `include/` and `src/` (confirmed by a project-wide search; the test
  platform `lists-defines.h` files correctly use `#if !defined(...)` with
  matching `#endif` comments, unlike the library's trace guards above).

### Folder structure

No issues: declarations are in `include/`, the single non-inline definition
file is in `src/`, and inline template/`constexpr` definitions are in
`inlines/`. All three implementation files are correctly registered in both
`CMakeLists.txt` and `meson.build` (top-level and `tests/sources/unit`).

### Modern C++

- Concepts (`doubly_list_links_node`) are used correctly to constrain
  `doubly_list` and `intrusive_list` template parameters, in preference to
  SFINAE.
- `constexpr`/`noexcept` are applied consistently and correctly, including
  on the deliberately non-`constexpr` `intrusive_list_iterator::get_pointer()`
  (which cannot be evaluated at compile time because of the null-pointer
  member-offset trick, and is correctly left out of the `constexpr` set,
  unlike its `doubly_list_iterator` counterpart).
- The `__attribute__((noipa))` in `reset()` is a legitimate use of a
  compiler-specific attribute given there is no portable standard
  equivalent for suppressing dead-store elimination, but see the
  correctness note above regarding its Clang gap.

### Tests

- `tests/sources/unit/src/doubly-list-links.cpp` exercises both the
  regular and static link classes, including the documented dead-store
  workaround via `reset()`, and covers link/unlink/linked-state transitions.
- No test currently exercises `unlink()` being called on an uninitialised
  `static_doubly_list_links` node (the missing-assert case noted above), nor
  does any test target Clang-specific behaviour of `reset()`/the destructor.
  Given the recent test run already completed successfully
  (`xpm run test-latest`, exit code 0), no further action is required beyond
  considering the two additional test cases above if the corresponding
  correctness issues are addressed.

## Excluded from this review

- Generated files under `website/docs/api/**` were not reviewed, since they
  mirror the source `#error` bug above and will be regenerated once the
  source is fixed.
- `inspiration/clang/**` is third-party reference code, out of scope.
- Files under `tests/build/**` were excluded per the default review scope.

## Recommendations (priority order)

1. Fix the 20 mismatched `#endif` trace-guard comments (systematic, affects
   3 files).
2. Fix the malformed `#error` string literal in
   `doubly-list-links-inlines.h`.
3. Add the missing preconditions/asserts in `unlink()` for consistency with
   `link_next`/`link_previous`.
4. Resolve or document the Clang gap in `static_doubly_list_links::reset()`.
5. Wrap the four lines exceeding 80 characters.
