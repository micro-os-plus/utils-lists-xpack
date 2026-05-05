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

**File**: `src/double-list-links.cpp`.

The two `assert` statements were copied verbatim from `link_next()`. Fixed
to assert `previous_ != nullptr` and `previous_->next_ != nullptr`.

---

### ~~1.2 Dead code with erroneous template parameter reference~~ — **Fixed**

---

### ~~1.3 `double_list_iterator(reference element)` declared but not implemented~~ — **Fixed**

Implemented in `double-list-inlines.h` as `node_{ &element }`. A test case
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

**File**: `include/micro-os-plus/utils/inlines/double-list-inlines.h`.

`constexpr` removed from `head()` and `tail()` in both declaration and
definition.

---

### ~~2.3 `intrusive_list::empty()` spuriously declared `constexpr`~~ — **Fixed**

`double_list_links_base::linked()` was moved from `src/double-list-links.cpp`
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
`double-list-links.cpp`, `double-list-links-inlines.h`,
`double-list-inlines.h`, and `intrusive-list-inlines.h`.

---

### ~~5.5 `intrusive_list_iterator` increment/decrement/comparison operators lack `constexpr`~~ — **Fixed**

`operator++`, `operator--`, `operator==`, and `operator!=` changed from
`inline` to `constexpr` in both declarations and definitions.

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
| ~~Low~~    | ~~Fix "forward" in `double_list_iterator` class brief (§5.1)~~ — **Fixed**       |
| ~~Minor~~  | ~~Fix `@brief` for `intrusive_list::end()` (§5.2)~~ — **Fixed**                  |
| ~~Minor~~  | ~~Fix wrong class names in `@par The rule of five` comments (§5.3)~~ — **Fixed** |
| ~~Minor~~  | ~~Fix stale `@ref` targets in `lists.h` (§5.4)~~ — **Fixed**                     |
| ~~Minor~~  | ~~Add `constexpr` to `intrusive_list_iterator` operators (§5.5)~~ — **Fixed**     |
