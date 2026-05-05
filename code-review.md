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

### ~~1.1 Wrong assertions in `link_previous()`~~ — **Fixed**

**File**: `src/doubly-list-links.cpp`.

The two `assert` statements were copied verbatim from `link_next()`. Fixed
to assert `previous_ != nullptr` and `previous_->next_ != nullptr`.

---

### ~~1.2 Dead code with erroneous template parameter reference~~ — **Fixed**

---

### ~~1.3 `double_list_iterator(reference element)` declared but not implemented~~ — **Fixed**

Implemented in `doubly-list-inlines.h` as `node_{ &element }`. A test case
"Iterator from element" was added to verify the constructor.

---

## 2. Correctness and Standards Compliance

### ~~2.1 Technically undefined behaviour in offset calculation~~ — **Mitigated**

**Files**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`,
`intrusive_list_iterator::get_pointer()` and
`intrusive_list::link_tail()` / `link_head()` / `get_pointer()`.

Dereferencing a null pointer to obtain a member's address is formally
undefined behaviour under the C++ standard. A full explanatory comment has
been added to the primary site (`intrusive_list_iterator::get_pointer()`),
noting why `offsetof` cannot be used (because `MP` is a template
pointer-to-member, not a literal member name), and that the idiom is safe
on all known compilers and supported targets. Three secondary sites
cross-reference the primary comment.

---

### ~~2.2 `constexpr` on `head()` and `tail()` is not achievable~~ — **Fixed**

**File**: `include/micro-os-plus/utils/inlines/doubly-list-inlines.h`.

`constexpr` removed from `head()` and `tail()` in both declaration and
definition.

---

### ~~2.3 `intrusive_list::empty()` spuriously declared `constexpr`~~ — **Fixed**

`doubly_list_links_base::linked()` was moved from `src/doubly-list-links.cpp`
into the inline header and made `constexpr` and `[[nodiscard]]`.
`double_list<T,L>::empty()` is now also `constexpr` and `[[nodiscard]]`,
making the entire `empty()` call chain legitimately `constexpr`.

---

## 3. Documentation Issues

### ~~3.1 Stale `@ref` targets in file-level `@details`~~ — **Fixed**

---

### ~~3.2 Stale class-level note in `double_list`~~ — **Fixed**

---

### ~~3.3 `@retval` used for a general return description~~ — **Fixed**

---

### ~~3.4 Destructor comment contains "constructor"~~ — **Fixed**

---

### ~~3.5 Missing `[[nodiscard]]` on `double_list::initialised()`~~ — **Already present**

---

### ~~3.6 Copy-paste comment in `intrusive_list::link_head()`~~ — **Fixed**

Comment corrected to "at the beginning of the list".

---

## 4. Design Observations

### ~~4.1 No tests for reverse iteration~~ — **Fixed**

---

### ~~4.2 `unlink_head()`/`unlink_tail()` return a pointer into the sentinel when the list is empty~~ — **Fixed**

Both methods now return `nullptr` immediately when the list is empty, and
tests have been added to verify this behaviour.

---

### ~~4.3 `return` statement in a `void` function~~ — **Fixed**

---

### ~~4.4 Missing `inline` on `intrusive_list_iterator::operator--(int)`~~ — **Fixed**

---

### ~~4.5 Misleading local type alias `head_type_`~~ — **Fixed**

---

### ~~4.6 Double separator at end of `intrusive-list-inlines.h`~~ — **Fixed**

---

### ~~4.7 Missing `[[nodiscard]]` on `empty()`~~ — **Fixed**

`[[nodiscard]]` added to both `double_list::empty()` and
`intrusive_list::empty()` in their declarations and inline definitions.

---

### ~~4.8 Missing `[[nodiscard]]` on `unlink_head()` / `unlink_tail()`~~ — **Fixed**

`[[nodiscard]]` added to both declarations in `intrusive-list.h` and
their inline definitions in `intrusive-list-inlines.h`.

---

---

## Third-pass Findings (5 May 2026)

### ~~5.1 `double_list_iterator` class brief says "forward iterator"~~ — **Fixed**

Class `@brief` corrected to "A class template for a doubly linked list
iterator."

---

### ~~5.2 `intrusive_list::end()` has wrong `@brief`~~ — **Fixed**

`@brief` corrected to "Iterator end."

---

### ~~5.3 Wrong class name in `@par The rule of five` comments~~ — **Fixed**

All four `@par The rule of five` notes updated to name the correct class:
`double_list_links_base`, `static_double_list_links`, `double_list_links`,
and `double_list` respectively.

---

### ~~5.4 Stale `@ref` targets in `lists.h` file-level `@details`~~ — **Fixed**

Sentence updated to reference the actual implementation files:
`doubly-list-links.cpp`, `doubly-list-links-inlines.h`,
`doubly-list-inlines.h`, and `intrusive-list-inlines.h`.

---

### ~~5.5 `intrusive_list_iterator` increment/decrement/comparison operators lack `constexpr`~~ — **Fixed**

`operator++`, `operator--`, `operator==`, and `operator!=` changed from
`inline` to `constexpr` in both declarations and definitions.

---

---

## Fourth-pass Findings (5 May 2026)

### ~~6.1 Stale content in `src/doubly-list-links.cpp` `@file @details`~~ — **Fixed**

**File**: `src/doubly-list-links.cpp`, lines 14–21.

The `@details` block reads:

```
The `list.cpp` source file contains the C++ implementations of
the methods for the **µOS++ Intrusive Lists** classes, delivering
an efficient and lightweight linked list management system tailored
for embedded applications.
```

Two issues:

1. The file name `list.cpp` is stale; the file was renamed to
   `doubly-list-links.cpp`.
2. The subject "µOS++ Intrusive Lists classes" is incorrect; the file
   implements only the methods of `doubly_list_links_base` and
   `static_doubly_list_links`, not any intrusive list classes.

**Recommendation**: Replace `list.cpp` with `doubly-list-links.cpp`, and
replace "µOS++ Intrusive Lists classes" with "doubly linked list link node
classes" (or equivalent).

---

### ~~6.2 Misleading `@ref doubly-list-links.cpp` in `doubly-list.h` and `intrusive-list.h`~~ — **Fixed**

**Files**: `include/micro-os-plus/utils/doubly-list.h` (lines 22–23) and
`include/micro-os-plus/utils/intrusive-list.h` (lines 21–22).

Both file-level `@details` comments state:

> "The class implementations are in `@ref doubly-list-links.cpp`
> and `@ref <X>-inlines.h`."

`doubly-list-links.cpp` contains no implementations for any of the classes
declared in either of these headers. The classes `doubly_list_iterator` and
`doubly_list` are fully implemented in `doubly-list-inlines.h`; the classes
`intrusive_list_iterator` and `intrusive_list` are fully implemented in
`intrusive-list-inlines.h`. While `doubly-list-links.cpp` provides the
underlying base-class methods that these classes call, describing it as an
implementation file for those classes is inaccurate and may confuse readers
searching for the implementations.

**Recommendation**: Remove the reference to `@ref doubly-list-links.cpp`
from both file-level `@details` blocks, leaving only the reference to the
actual inlines file. Optionally, note that the base-class method
implementations reside in `doubly-list-links.cpp` as a transitively required
file.

---

### ~~6.3 `links_pointer()` defined in the class body without full documentation~~ — **Fixed**

**File**: `include/micro-os-plus/utils/doubly-list.h`, within the
`doubly_list` class body.

Every other public method of `doubly_list` is declared only in the class body
and defined separately in `doubly-list-inlines.h`. The `links_pointer()` method
is the sole exception: its definition appears directly in the class body. This
is inconsistent with the project's coding style and makes the class declaration
longer than necessary.

In addition, the Doxygen block for `links_pointer()` lacks the `@par
Parameters` and `@par Returns` sections that are present for all comparable
methods in the class. The absence of a `@details` paragraph is also
inconsistent with the project standard.

**Recommendation**: Move the `links_pointer()` definition to
`doubly-list-inlines.h`, following the same pattern as all other methods, and
add the missing `@par Parameters`, `@par Returns`, and `@details` sections to
the declaration.

---

### ~~6.4 `intrusive_list_iterator::get_iterator_pointer()` lacks `constexpr`~~ — **Fixed**

**File**:
`include/micro-os-plus/utils/inlines/intrusive-list-inlines.h`.

The inline definition of `get_iterator_pointer()` is:

```cpp
template <class T, class N, N T::* MP, class U>
inline typename intrusive_list_iterator<T, N, MP, U>::iterator_pointer
intrusive_list_iterator<T, N, MP, U>::get_iterator_pointer () const noexcept
{
  return node_;
}
```

The body is a trivial return of `node_` — no `reinterpret_cast` or other
runtime-only operation. The equivalent method in `doubly_list_iterator` is
already `constexpr`. Marking `get_iterator_pointer()` as `constexpr` (in
both declaration and definition) would complete the consistency established
when `operator++`, `operator--`, and `operator==` were made `constexpr`
(§5.5).

**Recommendation**: Change both the declaration in `intrusive-list.h` and
the definition in `intrusive-list-inlines.h` from `inline` to `constexpr`.

---

## Recommendations by Priority

| Priority   | Item                                                                              |
| ---------- | --------------------------------------------------------------------------------- |
| ~~Medium~~ | ~~Implement `double_list_iterator(reference element)` (§1.3)~~ — **Fixed**        |
| ~~Medium~~ | ~~Add comment for UB offset calculation (§2.1)~~ — **Mitigated**                  |
| ~~Low~~    | ~~Remove or justify `constexpr` on `intrusive_list::empty()` (§2.3)~~ — **Fixed** |
| ~~Minor~~  | ~~Fix copy-paste comment in `link_head()` (§3.6)~~ — **Fixed**                    |
| ~~Minor~~  | ~~Add `[[nodiscard]]` to `empty()` (§4.7)~~ — **Fixed**                           |
| ~~Minor~~  | ~~Add `[[nodiscard]]` to `unlink_head()`/`unlink_tail()` (§4.8)~~ — **Fixed**     |
| ~~Low~~    | ~~Fix "forward" in `double_list_iterator` class brief (§5.1)~~ — **Fixed**        |
| ~~Minor~~  | ~~Fix `@brief` for `intrusive_list::end()` (§5.2)~~ — **Fixed**                   |
| ~~Minor~~  | ~~Fix wrong class names in `@par The rule of five` comments (§5.3)~~ — **Fixed**  |
| ~~Minor~~  | ~~Fix stale `@ref` targets in `lists.h` (§5.4)~~ — **Fixed**                      |
| ~~Minor~~  | ~~Add `constexpr` to `intrusive_list_iterator` operators (§5.5)~~ — **Fixed**     |
| ~~Minor~~  | ~~Fix stale file name and subject in `doubly-list-links.cpp` `@details` (§6.1)~~ — **Fixed**      |
| ~~Minor~~  | ~~Remove misleading `@ref doubly-list-links.cpp` from two file `@details` (§6.2)~~ — **Fixed**    |
| ~~Minor~~  | ~~Move `links_pointer()` to inlines file; add full documentation (§6.3)~~ — **Fixed**             |
| ~~Minor~~  | ~~Add `constexpr` to `get_iterator_pointer()` in `intrusive_list_iterator` (§6.4)~~ — **Fixed**   |
