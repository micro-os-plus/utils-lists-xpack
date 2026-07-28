---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

title: µOS++ Intrusive Lists API Reference
slug: /api/
description: The main page of the API documentation
custom_edit_url: null
keywords:
  - doxygen
  - reference

---

<div class="doxyPage">

µOS++ Intrusive Lists topics with brief descriptions are:

<table class="doxyTreeTable">
<colgroup><col style="width:40%"><col></colgroup>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 12px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus">µOS++ Topics</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Topics related to the µOS++ framework
</td>
</tr>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 24px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists">µOS++ Intrusive Lists</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Topics related to the µOS++ Intrusive Lists
</td>
</tr>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 36px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-cpp-api">C++ API</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Topics related to the µOS++ Intrusive Lists C++ API
</td>
</tr>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 48px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-intrusive-lists">Intrusive Doubly Linked Lists</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Intrusive doubly linked lists classes
</td>
</tr>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 48px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-doubly-lists">Doubly Linked Lists</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Doubly linked lists classes
</td>
</tr>

<tr class="doxyTreeItem">
<td class="doxyTreeItemLeft" align="left" valign="top">
<span style="width: 36px; display: inline-block;"></span>
<a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-c-api">C API</a>
</td>
<td class="doxyTreeItemRight" align="left" valign="top">
Topics related to the µOS++ Intrusive Lists C API
</td>
</tr>

</table>

## Description



<p>This library implements several <b>doubly linked lists</b>, utilised by various <b>µOS++</b> components to manage internal objects. Its design is sufficiently <b>generic</b> to be valuable in other applications, warranting its packaging as a standalone library.</p>


<p>A key differentiator from <span class="doxyComputerOutput">std::list</span> is that this implementation <b>does not require dynamic memory allocation</b> for list links, thereby eliminating the need for an allocator. Instead, it employs <b>intrusive lists</b>, where links are stored directly within the list elements.</p>


<p>Another notable feature is the support for <b>statically initialised lists</b>, which can be created in the <b>global scope</b> without modifying their members in constructors. These lists are fully <b>initialised</b> by setting their entire content to zero during startup (via <b>BSS initialisation</b>).</p>


<p>This approach enables <b>static objects</b> to <b>auto-register</b> with static registrar instances. As the execution order of static constructors is undefined, the only reliable way to ensure the registrar is ready before clients attempt to register is to initialise it during <b>startup</b> (via BSS initialisation) prior to the execution of static constructors.</p>


<p>[Note: For comparison, the original Doxygen html pages, continue to be available via the <a href="https://micro-os-plus.github.io/utils-lists-xpack/doxygen/index.html">doxygen/*</a> URLs.]</p>


:::note
For comparison, the original Doxygen html pages continue to be available via the <a href="pathname:///doxygen/topics.html">.../doxygen/*.html</b></a> URLs.
:::

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
