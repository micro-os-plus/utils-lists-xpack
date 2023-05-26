
[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/utils-lists.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/utils-lists/)
[![license](https://img.shields.io/github/license/micro-os-plus/utils-lists-xpack)](https://github.com/micro-os-plus/utils-lists-xpack/blob/xpack/LICENSE)
[![CI on Push](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml/badge.svg)](https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/CI.yml)
[![Website](https://img.shields.io/website?url=https%3A%2F%2Fmicro-os-plus.github.io%2Futils-lists-xpack%2F)](https://micro-os-plus.github.io/utils-lists-xpack/)

## A source code library with the µOS++ C++ intrusive lists

The **utils-lists** project provides the **source code** for a library
that implements the **µOS++ C++ intrusive double linked lists**.
These are special lists that avoid dynamic memory allocations by
storing the links inside the list elements. This is particularly
useful in embedded systems.

The **open source** project is hosted on GitHub as
[micro-os-plus/utils-lists-xpack](https://github.com/micro-os-plus/utils-lists-xpack),
and can be installed as an
[xpm](https://xpack.github.io/xpm/)/[npm](https://docs.npmjs.com) dependency.

@htmlonly

<div class="command">
  <div class="fragment"><div class="line">xpm install @micro-os-plus/utils-lists@latest --verbose</div></div>
</div>

<div class="cards">

  <div class="card">
    <a href="md_website_pages_install.html">
    <div class="card_container">
      <svg width="800px" height="800px" viewBox="0 0 24 24" fill="none"  class="card_svg" xmlns="http://www.w3.org/2000/svg">
        <path opacity="0.1" fill-rule="evenodd" clip-rule="evenodd" d="M12 21C16.9706 21 21 16.9706 21 12C21 7.02944 16.9706 3 12 3C7.02944 3 3 7.02944 3 12C3 16.9706 7.02944 21 12 21ZM15.224 13.0171C16.011 12.5674 16.011 11.4326 15.224 10.9829L10.7817 8.44446C10.0992 8.05446 9.25 8.54727 9.25 9.33333L9.25 14.6667C9.25 15.4527 10.0992 15.9455 10.7817 15.5555L15.224 13.0171Z" fill="#323232"/>
        <path d="M21 12C21 16.9706 16.9706 21 12 21C7.02944 21 3 16.9706 3 12C3 7.02944 7.02944 3 12 3C16.9706 3 21 7.02944 21 12Z" stroke="#323232" stroke-width="1"/>
        <path d="M10.9 8.8L10.6577 8.66152C10.1418 8.36676 9.5 8.73922 9.5 9.33333L9.5 14.6667C9.5 15.2608 10.1418 15.6332 10.6577 15.3385L10.9 15.2L15.1 12.8C15.719 12.4463 15.719 11.5537 15.1 11.2L10.9 8.8Z" stroke="#323232" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
      </svg>
      <h2>Getting Started</h2>
      <p>Instructions to install and integrate the <b>utils-lists</b> library into a project.</p>
    </div>
    </a>
  </div>

  <div class="card">
    <a href="md_website_pages_developer.html">
    <div class="card_container">
      <svg width="800px" height="800px" viewBox="0 0 24 24" fill="none" class="card_svg" xmlns="http://www.w3.org/2000/svg">
        <path d="M12 7C9.23858 7 7 9.23858 7 12C7 13.3613 7.54402 14.5955 8.42651 15.4972C8.77025 15.8484 9.05281 16.2663 9.14923 16.7482L9.67833 19.3924C9.86537 20.3272 10.6862 21 11.6395 21H12.3605C13.3138 21 14.1346 20.3272 14.3217 19.3924L14.8508 16.7482C14.9472 16.2663 15.2297 15.8484 15.5735 15.4972C16.456 14.5955 17 13.3613 17 12C17 9.23858 14.7614 7 12 7Z" stroke="#000000" stroke-width="1"/>
        <path d="M12 4V3" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path d="M18 6L19 5" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path d="M20 12H21" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path d="M4 12H3" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path d="M5 5L6 6" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path d="M10 17H14" stroke="#000000" stroke-width="1" stroke-linecap="round" stroke-linejoin="round"/>
        <path opacity="0.1" d="M7 12C7 9.23858 9.23858 7 12 7C14.7614 7 17 9.23858 17 12C17 13.3613 16.456 14.5955 15.5735 15.4972C15.2297 15.8484 14.9472 16.2663 14.8508 16.7482L14.8004 17H9.19961L9.14923 16.7482C9.05281 16.2663 8.77025 15.8484 8.42651 15.4972C7.54402 14.5955 7 13.3613 7 12Z" fill="#000000"/>
      </svg>
      <h2>How to Use</h2>
      <p>Learn what the intrusive lists are and how to use them.</p>
    </div>
    </a>
  </div>

</div>

<div class="footer">
  <p>Copyright © 2023 Liviu Ionescu. All rights reserved.</p>
</div>

@endhtmlonly
