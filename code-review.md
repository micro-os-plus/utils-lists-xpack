# Code Review — µOS++ utils-lists

**Date**: 5 May 2026  
**Reviewer**: GitHub Copilot  
**Scope**: All production source files under `include/`, `src/`, and the
unit-test sources under `tests/sources/unit-test/src/`.

---

## Summary

The library is well-structured, consistently documented, and follows the
project's coding conventions throughout. The use of `constexpr`, `[[nodiscard]]`,
deleted special members, and `if constexpr` branching for static vs. dynamic
allocation is exemplary. The concerns below range from a genuine defect in
assertion logic down to minor documentation inconsistencies.

---

## 1. Defects

### 1.1 Wrong assertions in `link_previous()` (High)

**File**: `src/double-list-links.cpp`, method
`double_list_links_base::link_previous()`.

The two `assert` statements were copied verbatim from `link_next()` and were
never updated:

```cpp
// As written (incorrect):
assert (next_ != nullptr);
assert (next_->previous_ != nullptr);
```

The method inserts `node` between `previous_` and `this`. The assertions
should guard `previous_`, not `next_`:

```cpp
// Correct:
assert (previous_ != nullptr);
assert (previous_->next_ != nullptr);
```

As written, the assertions provide no protection against a corrupt
`previous_` pointer and would pass even when the surrounding node structure
is invalid.

---

### 1.2 ~~Dead code with erroneous template parameter reference~~ — **Fixed**

---

## 2. Correctness and Standards Compliance

### 2.1 Technically undefined behaviour in offset calculation (Medium)

**Files**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`,
`intrusive_list_iterator::get_pointer()` and
`intrusive_list::link_tail()` / `link_head()` / `get_pointer()`.

```cpp
const auto offset = reinterpret_cast<difference_type> (
    &(static_cast<T*> (nullptr)->*MP));
```

Dereferencing a null pointer, even to obtain a member's address, is
formally undefined behaviour under the C++ standard. In practice this
works with all relevant compilers on all supported platforms; however,
the portable alternative is `__builtin_offsetof` (available on GCC and
Clang) or, for standard-layout types, `offsetof`:

```cpp
const auto offset = static_cast<difference_type> (
    __builtin_offsetof (T, *MP));  // GCC/Clang only
```

If `T` is guaranteed to be a standard-layout type, the standard `offsetof`
macro can be used instead. A comment explaining the rationale and the
known limitation would be valuable here.

---

### 2.2 `constexpr` on `head()` and `tail()` is not achievable (Low)

**File**: `include/micro-os-plus/utils/inlines/double-list-inlines.h`.

Both `double_list<T,L>::head()` and `double_list<T,L>::tail()` are declared
`constexpr` but use `reinterpret_cast`, which is not a constant expression
under the C++ standard. The compiler will accept the declaration but will
reject any attempt to evaluate these functions at compile time. The
`constexpr` qualifier should be removed to avoid a misleading API contract.

---

## 3. Documentation Issues

### 3.1 Stale `@ref` targets in file-level `@details` (Medium)

The `@details` sections of multiple file headers reference names that do
not correspond to any actual file in the project:

| File                    | Stale reference                          |
| ----------------------- | ---------------------------------------- |
| `double-list-links.h`   | `@ref lists.cpp`, `@ref lists-inlines.h` |
| `double-list.h`         | `@ref lists.cpp`, `@ref lists-inlines.h` |
| `intrusive-list.h`      | `@ref lists.cpp`, `@ref lists-inlines.h` |
| `double-list-links.cpp` | `@ref lists.h`                           |

The correct references are `double-list-links.cpp`,
`double-list-links-inlines.h`, `double-list.h`, `double-list-inlines.h`,
and `intrusive-list-inlines.h` as appropriate.

---

### 3.2 Stale class-level note in `double_list` (Low)

**File**: `include/micro-os-plus/utils/double-list.h`,
`double_list` class `@note`:

> Only forward iterators are provided by default, but reverse iterators can
> be added if required.

The iterator category has been updated to
`std::bidirectional_iterator_tag` and `operator--` is implemented. The note
should be updated to state that `std::reverse_iterator` adaptors (i.e.,
`rbegin()`/`rend()`) are not currently provided.

---

### 3.3 `@retval` used for a general return description (Low)

**File**: `include/micro-os-plus/utils/double-list-links.h`,
`double_list_links_base::next()` and `previous()`.

```
@retval Pointer to the next node.
```

The `@retval` tag is intended for discrete enumerated return values (e.g.,
`@retval true`, `@retval nullptr`). A general description of the returned
value should use `@return`:

```
@return Pointer to the next node.
```

---

### 3.4 Destructor comment contains "constructor" (Low)

**File**:
`include/micro-os-plus/utils/inlines/double-list-links-inlines.h`,
`double_list_links_base::~double_list_links_base()` `@details` block.

```
// Must be empty! No members must be changed by this constructor!
```

"constructor" should read "destructor".

---

### 3.5 ~~Missing `[[nodiscard]]` on `double_list::initialised()`~~ — **Already present**

**File**: `include/micro-os-plus/utils/double-list.h`.

`double_list_links_base::initialised()` carries `[[nodiscard]]`, but the
overriding `double_list<T,L>::initialised()` does not. For consistency the
attribute should be applied uniformly.

---

## 4. Design Observations

### 4.1 No tests for reverse iteration (Medium)

The iterator category is now `std::bidirectional_iterator_tag` and
`operator--` (both pre- and post-) is implemented and documented. However,
none of the test suites in `tests/sources/unit-test/src/` exercise backward
traversal. Test cases that verify `--it` produces the expected sequence
should be added.

---

### 4.2 `unlink_head()` / `unlink_tail()` return a pointer into the sentinel when the list is empty (Low)

**File**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`.

The comments state "treat empty link unlinks as nop", but when called on an
empty list the method unlinks and returns a pointer derived from the sentinel
(links) node rather than `nullptr`. A caller who does not check `empty()`
first will receive a dangling or meaningless pointer. The documentation
should explicitly state this behaviour, and callers should always guard with
`empty()` before calling these methods.

---

### 4.3 `return` statement in a `void` function (Minor)

**File**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`,
`intrusive_list::initialise_once()`.

```cpp
return double_list<N, L>::initialise_once ();
```

`return expr;` in a `void`-returning function is valid C++ when `expr` is
also `void`, but the `return` keyword adds no value here. Removing it is
slightly cleaner:

```cpp
double_list<N, L>::initialise_once ();
```

---

### 4.4 Missing `inline` on `intrusive_list_iterator::operator--(int)` (Minor)

**File**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`.

All other operator definitions in the intrusive iterator inline file carry
the `inline` specifier, but the post-decrement operator (`operator--(int)`)
does not. For uniformity it should be marked `inline`.

---

### 4.5 Misleading local type alias `head_type_` (Minor)

**File**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`,
`intrusive_list::end()`.

```cpp
using head_type_ = typename double_list<N, L>::links_type;
```

The alias `head_type_` refers to the type of the sentinel/anchor node (which
holds both head and tail pointers), not just the head. The name
`links_type_` or `sentinel_type_` would be more accurate and align with the
existing public typedef `links_type`.

---

### 4.6 Double separator at end of `intrusive-list-inlines.h` (Minor)

```cpp
  // ==========================================================================
  // --------------------------------------------------------------------------
} // namespace micro_os_plus::utils
```

The `// ==========` line followed immediately by `// ----------` before the
closing brace is a formatting inconsistency. One separator is sufficient.

---

## Recommendations by Priority

| Priority   | Item                                                                                 |
| ---------- | ------------------------------------------------------------------------------------ |
| High       | Fix assertions in `link_previous()` (§1.1)                                           |
| ~~Medium~~ | ~~Remove dead `#if 0` block (§1.2)~~ — **Fixed**                                     |
| Medium     | Add comment or safe alternative for UB offset calculation (§2.1)                     |
| Medium     | Remove `constexpr` from `head()` / `tail()` (§2.2)                                   |
| Medium     | Correct stale `@ref` targets (§3.1)                                                  |
| Medium     | Add reverse-iteration test cases (§4.1)                                              |
| Low        | Update `double_list` note re bidirectional iterators (§3.2)                          |
| Low        | Replace `@retval` with `@return` in `next()`/`previous()` (§3.3)                     |
| Low        | Fix "constructor" → "destructor" in comment (§3.4)                                   |
| ~~Low~~    | ~~Add `[[nodiscard]]` to `double_list::initialised()` (§3.5)~~ — **Already present** |
| Low        | Document `unlink_head`/`unlink_tail` empty-list behaviour (§4.2)                     |
| Minor      | Remove redundant `return` in void `initialise_once()` (§4.3)                         |
| Minor      | Add `inline` to `operator--(int)` in intrusive iterator (§4.4)                       |
| Minor      | Rename `head_type_` to `links_type_` (§4.5)                                          |
| Minor      | Remove duplicate separator (§4.6)                                                    |
