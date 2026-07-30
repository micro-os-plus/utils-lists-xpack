---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/groups/micro-os-plus-utils-lists-config
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - group

---

<div class="doxyPage">

# Configuration

<p>Configuration macros. <a href="#details">More...</a></p>

## Macro Definitions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#gabaf0f9ceb6be1008107882c4641e3d7b">MICRO_OS_PLUS_UTILS_LISTS_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the µOS++ C++ Intrusive Lists library. <a href="#gabaf0f9ceb6be1008107882c4641e3d7b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#gaceb30b6e2e4f6a91927986ff08257d0f">MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the trace calls for the µOS++ C++ Intrusive Lists constructors. <a href="#gaceb30b6e2e4f6a91927986ff08257d0f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ga2298ccb291997f5617a7d6d66a6d9f94">MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the trace calls for the µOS++ C++ Intrusive Lists methods. <a href="#ga2298ccb291997f5617a7d6d66a6d9f94">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>Configuration macros.</p>


<p>The µOS++ C++ Intrusive Lists library uses several preprocessor macros to enable it and to configure various options.</p>


<div class="doxySectionDef">

## Macro Definitions

### MICRO\_OS\_PLUS\_UTILS\_LISTS\_ENABLED {#gabaf0f9ceb6be1008107882c4641e3d7b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">#define MICRO_OS_PLUS_UTILS_LISTS_ENABLED</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Enable the µOS++ C++ Intrusive Lists library.</p>


<p>The macro is intended to be defined by the user, typically in the library's own <span class="doxyComputerOutput">micro-os-plus/utils/lists-defines.h</span> configuration file or the project <span class="doxyComputerOutput">micro-os-plus/project-config.h</span> configuration file.</p>


<p>When <span class="doxyComputerOutput"><a href="#gabaf0f9ceb6be1008107882c4641e3d7b">MICRO_OS_PLUS_UTILS_LISTS_ENABLED</a></span> is defined, the C++ classes are compiled to their full implementations, declared in <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>When it is not defined, no classes or functions are defined.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00054">54</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#gabaf0f9ceb6be1008107882c4641e3d7b">54</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_ENABLED</span></span></div>

</div>

</div>
</div>

### MICRO\_OS\_PLUS\_UTILS\_LISTS\_TRACE\_CONSTRUCTORS\_ENABLED {#gaceb30b6e2e4f6a91927986ff08257d0f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Enable the trace calls for the µOS++ C++ Intrusive Lists constructors.</p>


<p>The macro is intended to be defined by the user, typically in the library's own <span class="doxyComputerOutput">micro-os-plus/utils/lists-defines.h</span> configuration file or the project <span class="doxyComputerOutput">micro-os-plus/project-config.h</span> configuration file.</p>


<p>When <span class="doxyComputerOutput"><a href="#gaceb30b6e2e4f6a91927986ff08257d0f">MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED</a></span> is defined, class constructors and destructors include a <span class="doxyComputerOutput">trace::printf()</span> call with the address of the current object.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00056">56</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#gaceb30b6e2e4f6a91927986ff08257d0f">56</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED </span></span></div>

</div>

</div>
</div>

### MICRO\_OS\_PLUS\_UTILS\_LISTS\_TRACE\_ENABLED {#ga2298ccb291997f5617a7d6d66a6d9f94}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Enable the trace calls for the µOS++ C++ Intrusive Lists methods.</p>


<p>The macro is intended to be defined by the user, typically in the library's own <span class="doxyComputerOutput">micro-os-plus/utils/lists-defines.h</span> configuration file or the project <span class="doxyComputerOutput">micro-os-plus/project-config.h</span> configuration file.</p>


<p>When <span class="doxyComputerOutput"><a href="#ga2298ccb291997f5617a7d6d66a6d9f94">MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</a></span> is defined, most class methods include a <span class="doxyComputerOutput">trace::printf()</span> with various data.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00055">55</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ga2298ccb291997f5617a7d6d66a6d9f94">55</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</span></span></div>

</div>

</div>
</div>

</div>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
