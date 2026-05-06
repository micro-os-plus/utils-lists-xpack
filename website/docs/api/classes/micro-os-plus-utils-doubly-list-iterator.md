---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/doubly-list-iterator
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `doubly_list_iterator` Class Template

<p>A class template for a doubly linked list iterator. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
template &lt;class T, class N = T, class U = T&gt;<br/>
class micro_os_plus::utils::doubly_list_iterator&lt;T, N, U&gt; { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Public Member Typedefs Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ada31e9233c36174ea54d5278ec63251b">difference_type</a> = ptrdiff_t</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer difference. <a href="#ada31e9233c36174ea54d5278ec63251b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a13e836efd2f10d029fa0f2697591a30d">iterator_category</a> = std::bidirectional_iterator_tag</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Category of iterator. <a href="#a13e836efd2f10d029fa0f2697591a30d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> = N *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to the iterator internal pointer. <a href="#a402e63a0f1ac7e49890a36795af68833">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a> = <a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer to object <em>pointed to</em> by the iterator. <a href="#a0eaa1bf17be01fcf623d00edea2a574f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#acc050f68a1e8a5f2dca40aa46837a171">reference</a> = <a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> &amp;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to object <em>pointed to</em> by the iterator. <a href="#acc050f68a1e8a5f2dca40aa46837a171">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> = U</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of value <em>pointed to</em> by the iterator. <a href="#a28d100bd546f4d20dd029a88eaa5be45">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Constructors Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Default constructor. Constructs an iterator pointing to <span class="doxyComputerOutput">nullptr</span>. <a href="#abdecdb8d164aadec97b60853bf209b7f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a68685b6723db57d6548fa463ac16b9ae">doubly_list_iterator</a> (iterator_pointer const node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a node pointer. <a href="#a68685b6723db57d6548fa463ac16b9ae">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a16e0a8a9e96cd4d150cdfc064edc5f06">doubly_list_iterator</a> (reference element) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a reference to an element. <a href="#a16e0a8a9e96cd4d150cdfc064edc5f06">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#acc050f68a1e8a5f2dca40aa46837a171">reference</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a18549f728349cbe704d2ef44245afa68">operator*</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Dereference operator. <a href="#a18549f728349cbe704d2ef44245afa68">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a38c8a345db4c1d1e86728836d73e2dc3">operator++</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-increment operator. <a href="#a38c8a345db4c1d1e86728836d73e2dc3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#abf034fddf2e4ed8b5cdb75c287380453">operator++</a> (int) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-increment operator. <a href="#abf034fddf2e4ed8b5cdb75c287380453">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a22d3b74c3ed3419fa33100b3915a4707">operator--</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-decrement operator. <a href="#a22d3b74c3ed3419fa33100b3915a4707">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#acf5491ed00b250a2d9f93cbccb66ac99">operator--</a> (int) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-decrement operator. <a href="#acf5491ed00b250a2d9f93cbccb66ac99">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a9c9223877eafda48859ccd7d01ff0cc7">operator-&gt;</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer access operator. <a href="#a9c9223877eafda48859ccd7d01ff0cc7">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0e955577b82393f56888de3d8493dbfd">operator==</a> (const doubly_list_iterator &amp;other) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Equality comparison operator. <a href="#a0e955577b82393f56888de3d8493dbfd">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Functions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a289d46e5287ce2f9751d7102ca48dc73">get_iterator_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the internal iterator pointer (node pointer). <a href="#a289d46e5287ce2f9751d7102ca48dc73">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get a pointer to the value pointed to by the iterator. <a href="#ac8e422c668e03f4032d06b1c88f7ee81">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the node. <a href="#a4bbd6e457a176c2d87c643ee436f9cde">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class template for a doubly linked list iterator.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Template Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">T</td>
<td class="doxyParamItemDescription"><p>Type of object returned by the iterator.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">N</td>
<td class="doxyParamItemDescription"><p>Type of intrusive node. Must have the public members <b>previous</b> &amp; <b>next</b>.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">U</td>
<td class="doxyParamItemDescription"><p>Type stored in the list, derived from T.</p></td>
</tr>
</table>
</dd>
</dl>

<p>This iterator provides an interface similar to <span class="doxyComputerOutput">std::list::iterator</span> for traversing a doubly linked list. It supports bidirectional iteration and access to the underlying node and value. In a typical doubly linked list, all types are <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span>.</p>


<p>Definition at line 68 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### difference\_type {#ada31e9233c36174ea54d5278ec63251b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::difference_type =  ptrdiff_t</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer difference.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00094">94</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ada31e9233c36174ea54d5278ec63251b">94</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ada31e9233c36174ea54d5278ec63251b">difference_type</a> = ptrdiff_t;</span></span></div>

</div>

</div>
</div>

### iterator\_category {#a13e836efd2f10d029fa0f2697591a30d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::iterator_category =  std::bidirectional_iterator_tag</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Category of iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00099">99</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a13e836efd2f10d029fa0f2697591a30d">99</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a13e836efd2f10d029fa0f2697591a30d">iterator_category</a> = std::bidirectional_iterator_tag;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#a402e63a0f1ac7e49890a36795af68833}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::iterator_pointer =  N*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00089">89</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a402e63a0f1ac7e49890a36795af68833">89</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> = N*;</span></span></div>

</div>

</div>
</div>

### pointer {#a0eaa1bf17be01fcf623d00edea2a574f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::pointer =  value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00079">79</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0eaa1bf17be01fcf623d00edea2a574f">79</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a> = <a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#acc050f68a1e8a5f2dca40aa46837a171}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::reference =  value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00084">84</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#acc050f68a1e8a5f2dca40aa46837a171">84</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#acc050f68a1e8a5f2dca40aa46837a171">reference</a> = <a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### value\_type {#a28d100bd546f4d20dd029a88eaa5be45}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::value_type =  U</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00074">74</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a28d100bd546f4d20dd029a88eaa5be45">74</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> = U;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### doubly\_list\_iterator() {#abdecdb8d164aadec97b60853bf209b7f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Default constructor. Constructs an iterator pointing to <span class="doxyComputerOutput">nullptr</span>.</p>


<p>The default constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator</a></span> initialises the iterator to a null state, meaning it does not point to any node in the list. This is typically used to create an "end" iterator or to initialise an iterator variable before assigning it to a valid node.</p>



:::info
<p>The internal node pointer is value-initialised (set to <span class="doxyComputerOutput">nullptr</span>), ensuring that the iterator is safe to use in comparisons and will not dereference an invalid address.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00107">107</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00067">67</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#abdecdb8d164aadec97b60853bf209b7f">67</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator&lt;T, N, U&gt;::doubly_list_iterator</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">68</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>{}</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">69</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">70</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>


<p>Referenced by <a href="#a0e955577b82393f56888de3d8493dbfd">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator==</a>.</p>

</div>
</div>

### doubly\_list\_iterator() {#a68685b6723db57d6548fa463ac16b9ae}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator (<a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> const node)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel explicit">explicit</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Construct an iterator from a node pointer.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">node</td>
<td class="doxyParamItemDescription"><p>Pointer to the node to which the iterator should point.</p></td>
</tr>
</table>
</dd>
</dl>

<p>This constructor creates a <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator</a></span> that points to the specified node. The internal node pointer is set to the provided node address, allowing the iterator to traverse the list starting from that node. This constructor is typically used to initialise an iterator to a specific position within the list, such as the beginning or end.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00114">114</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00081">81</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a68685b6723db57d6548fa463ac16b9ae">81</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator&lt;T, N, U&gt;::doubly_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">82</span><span class="doxyLineContent"><span class="doxyHighlight">      <a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> node) noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">83</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>{ node }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### doubly\_list\_iterator() {#a16e0a8a9e96cd4d150cdfc064edc5f06}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator (<a href="#acc050f68a1e8a5f2dca40aa46837a171">reference</a> element)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel explicit">explicit</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Construct an iterator from a reference to an element.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">element</td>
<td class="doxyParamItemDescription"><p>Reference to the element to which the iterator should point.</p></td>
</tr>
</table>
</dd>
</dl>

<p>This constructor creates a <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator</a></span> that points to the specified element. Since <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">doubly_list</a></span> elements are the nodes themselves (T derives from <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></span>), the internal node pointer is set to the address of the element directly. This is typically used to initialise an iterator to a specific object in the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00123">123</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00096">96</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a16e0a8a9e96cd4d150cdfc064edc5f06">96</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator&lt;T, N, U&gt;::doubly_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">97</span><span class="doxyLineContent"><span class="doxyHighlight">      <a href="#acc050f68a1e8a5f2dca40aa46837a171">reference</a> element) noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">98</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>{ &amp;element }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">99</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">100</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator--() {#a22d3b74c3ed3419fa33100b3915a4707}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt; &amp; micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator-- ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Pre-decrement operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Reference to the decremented iterator.</p></dd>
</dl>


<p>The pre-decrement operator (<span class="doxyComputerOutput">operator--</span>) moves the iterator to the previous node in the list. It updates the internal node pointer to point to the node returned by the current node's <span class="doxyComputerOutput">previous</span> pointer. This enables backward traversal of the list, following the linked structure in reverse.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00166">166</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00178">178</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a22d3b74c3ed3419fa33100b3915a4707">178</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a22d3b74c3ed3419fa33100b3915a4707">doubly_list_iterator&lt;T, N, U&gt;::operator--</a>() noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">179</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">180</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>-&gt;previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### operator--() {#acf5491ed00b250a2d9f93cbccb66ac99}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt; micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator-- (int)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Post-decrement operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Iterator before decrement.</p></dd>
</dl>


<p>The post-decrement operator (<span class="doxyComputerOutput"><a href="#acf5491ed00b250a2d9f93cbccb66ac99">operator--(int)</a></span>) moves the iterator to the previous node in the list, but returns a copy of the iterator as it was before the decrement. This enables iteration logic that requires access to the current element before moving backward, following the standard C++ iterator semantics for post-decrement.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00174">174</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00194">194</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#acf5491ed00b250a2d9f93cbccb66ac99">194</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a22d3b74c3ed3419fa33100b3915a4707">doubly_list_iterator&lt;T, N, U&gt;::operator--</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">195</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">196</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">197</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>-&gt;previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">198</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">199</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### operator-&gt;() {#a9c9223877eafda48859ccd7d01ff0cc7}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt;::pointer micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator-&gt; ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Pointer access operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the value pointed to by the iterator.</p></dd>
</dl>


<p>The pointer access operator (<span class="doxyComputerOutput">operator-&gt;</span>) allows the iterator to provide direct access to the value pointed to by the iterator, mimicking the behavior of a raw pointer. Internally, it calls <span class="doxyComputerOutput"><a href="#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer()</a></span>, which computes and returns a pointer to the underlying value or object associated with the current node in the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00134">134</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00112">112</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9c9223877eafda48859ccd7d01ff0cc7">112</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a9c9223877eafda48859ccd7d01ff0cc7">doubly_list_iterator&lt;T, N, U&gt;::operator-&gt;</a>() const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#ac8e422c668e03f4032d06b1c88f7ee81">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_pointer</a>.</p>

</div>
</div>

### operator\*() {#a18549f728349cbe704d2ef44245afa68}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt;::reference micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator* ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Dereference operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Reference to the value pointed to by the iterator.</p></dd>
</dl>


<p>The dereference operator (<span class="doxyComputerOutput">operator*</span>) provides access to the value or object pointed to by the iterator. Internally, it calls <span class="doxyComputerOutput"><a href="#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer()</a></span> to obtain a pointer to the underlying value or object associated with the current node in the list, and then dereferences it to return a reference.</p>


<p>This allows the iterator to be used in a manner similar to standard C++ iterators, enabling direct access to the list element for reading or modification.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00142">142</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00130">130</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a18549f728349cbe704d2ef44245afa68">130</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a18549f728349cbe704d2ef44245afa68">doubly_list_iterator&lt;T, N, U&gt;::operator*</a>() const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">131</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">132</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *<a href="#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#ac8e422c668e03f4032d06b1c88f7ee81">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_pointer</a>.</p>

</div>
</div>

### operator++() {#a38c8a345db4c1d1e86728836d73e2dc3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt; &amp; micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator++ ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Pre-increment operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Reference to the incremented iterator.</p></dd>
</dl>


<p>The pre-increment operator (<span class="doxyComputerOutput">operator++</span>) advances the iterator to the next node in the list. It updates the internal node pointer to point to the node returned by the current node's <span class="doxyComputerOutput">next()</span> method. This allows the iterator to traverse the list in the forward direction, following the linked structure.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00150">150</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00145">145</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a38c8a345db4c1d1e86728836d73e2dc3">145</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a38c8a345db4c1d1e86728836d73e2dc3">doubly_list_iterator&lt;T, N, U&gt;::operator++</a>() noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">146</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">147</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>-&gt;next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">148</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">149</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### operator++() {#abf034fddf2e4ed8b5cdb75c287380453}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt; micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator++ (int)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Post-increment operator.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Iterator before increment.</p></dd>
</dl>


<p>The post-increment operator (<span class="doxyComputerOutput"><a href="#abf034fddf2e4ed8b5cdb75c287380453">operator++(int)</a></span>) advances the iterator to the next node in the list, but returns a copy of the iterator as it was before the increment. This allows iteration logic that requires access to the current element before moving to the next one, following the standard C++ iterator semantics for post-increment.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00158">158</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00161">161</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#abf034fddf2e4ed8b5cdb75c287380453">161</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a38c8a345db4c1d1e86728836d73e2dc3">doubly_list_iterator&lt;T, N, U&gt;::operator++</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>-&gt;next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### operator==() {#a0e955577b82393f56888de3d8493dbfd}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator== (const <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> &amp; other)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Equality comparison operator.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">other</td>
<td class="doxyParamItemDescription"><p>Iterator to compare with.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p><span class="doxyComputerOutput">true</span> if both iterators point to the same node, <span class="doxyComputerOutput">false</span> otherwise.</p></dd>
</dl>



:::info
<p>The inequality operator (<span class="doxyComputerOutput">!=</span>) is synthesised automatically by the compiler from this operator (C++20).</p>
:::


<p>The equality comparison operator (<span class="doxyComputerOutput">operator==</span>) checks whether two iterators point to the same node in the list by comparing their internal node pointers. This allows for standard iterator comparisons, such as detecting the end of a range or verifying if two iterators refer to the same position.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00188">188</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00211">211</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0e955577b82393f56888de3d8493dbfd">211</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0e955577b82393f56888de3d8493dbfd">doubly_list_iterator&lt;T, N, U&gt;::operator==</a>(</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">212</span><span class="doxyLineContent"><span class="doxyHighlight">      </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp; other) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">213</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">214</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a> == other.node_;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">215</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#abdecdb8d164aadec97b60853bf209b7f">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator</a> and <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### get\_iterator\_pointer() {#a289d46e5287ce2f9751d7102ca48dc73}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt;::iterator_pointer micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_iterator_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Get the internal iterator pointer (node pointer).</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the node.</p></dd>
</dl>


<p>Returns the internal node pointer that the iterator currently references. This is useful for advanced list operations or when direct access to the underlying node structure is required, such as for interoperability with other list utilities or for debugging purposes.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00208">208</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00226">226</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a289d46e5287ce2f9751d7102ca48dc73">226</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a289d46e5287ce2f9751d7102ca48dc73">doubly_list_iterator&lt;T, N, U&gt;::get_iterator_pointer</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">227</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">228</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">229</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>

</div>
</div>

### get\_pointer() {#ac8e422c668e03f4032d06b1c88f7ee81}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_iterator&lt; T, N, U &gt;::pointer micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Get a pointer to the value pointed to by the iterator.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the value.</p></dd>
</dl>


<p>Returns the node pointer cast to the value pointer type. In the typical usage where all three template parameters are the same type (<span class="doxyComputerOutput">T</span>, <span class="doxyComputerOutput">N</span>, <span class="doxyComputerOutput">U</span> all equal), this is a trivial static cast.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00198">198</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00239">239</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac8e422c668e03f4032d06b1c88f7ee81">239</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ac8e422c668e03f4032d06b1c88f7ee81">doubly_list_iterator&lt;T, N, U&gt;::get_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">240</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">241</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">242</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4bbd6e457a176c2d87c643ee436f9cde">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</a>.</p>


<p>Referenced by <a href="#a18549f728349cbe704d2ef44245afa68">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator*</a> and <a href="#a9c9223877eafda48859ccd7d01ff0cc7">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator-&gt;</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### node\_ {#a4bbd6e457a176c2d87c643ee436f9cde}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">iterator_pointer micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::node_</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel protected">protected</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Pointer to the node.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00214">214</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4bbd6e457a176c2d87c643ee436f9cde">214</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> <a href="#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#abdecdb8d164aadec97b60853bf209b7f">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator</a>, <a href="#a68685b6723db57d6548fa463ac16b9ae">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator</a>, <a href="#a16e0a8a9e96cd4d150cdfc064edc5f06">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::doubly_list_iterator</a>, <a href="#a289d46e5287ce2f9751d7102ca48dc73">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_iterator_pointer</a>, <a href="#ac8e422c668e03f4032d06b1c88f7ee81">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::get_pointer</a>, <a href="#a38c8a345db4c1d1e86728836d73e2dc3">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator++</a>, <a href="#abf034fddf2e4ed8b5cdb75c287380453">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator++</a>, <a href="#a22d3b74c3ed3419fa33100b3915a4707">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator--</a>, <a href="#acf5491ed00b250a2d9f93cbccb66ac99">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator--</a> and <a href="#a0e955577b82393f56888de3d8493dbfd">micro_os_plus::utils::doubly_list_iterator&lt; T, N, U &gt;::operator==</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.15.0.</p>

</div>
