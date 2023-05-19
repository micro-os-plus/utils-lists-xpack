# A source code library with the µOS++ C++ intrusive lists  {#mainpage}

[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/utils-lists.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/utils-lists/)
[![license](https://img.shields.io/github/license/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/LICENSE)
[![CI on Push](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml/badge.svg)](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml)
[![Website](https://img.shields.io/website?url=https%3A%2F%2Fmicro-os-plus.github.io%2Futils-lists-xpack%2F)](https://micro-os-plus.github.io/utils-lists-xpack/)

## Overview

The **utils-lists** project provides the **source code** for a library
that implements the **µOS++ C++ intrusive double linked lists**.
These are special lists that avoid dynamic memory allocations by
storing the links inside the list elements. This is particularly
useful in embedded systems.

The **open source** project is hosted on GitHub as
[micro-os-plus/utils-lists-xpack](https://github.com/micro-os-plus/utils-lists-xpack).

@htmlonly

<div class="command">
  <div class="fragment">
    <div class="line">xpm install @micro-os-plus/utils-lists@latest --verbose</div>
  </div>
</div>

<div class="cards">

  <div class="card">
    <a href="md_website_pages_install.html">
    <div class="card_container">
      <h2>Getting Started</h2>
      <p>Instructions to install and integrate the <b>utils-lists</b> library into a project.</p>
    </div>
    </a>
  </div>

  <div class="card">
    <a href="md_website_pages_developer.html">
    <div class="card_container">
      <h2>How to Use</h2>
      <p>Learn what the intrusive lists are and how to use them.</p>
    </div>
    </a>
  </div>

</div>

@endhtmlonly

### Credits

Many thanks to:

- [distortos](https://distortos.org) - for the inspiration on how these lists
  can be used in an RTOS
- [doxygen-awesome-css](https://jothepro.github.io/doxygen-awesome-css/) -
for the nice Doxygen theme

### License

The original content is released under the
[MIT License](https://opensource.org/licenses/MIT/),
with all rights reserved to
[Liviu Ionescu](https://github.com/ilg-ul/).
