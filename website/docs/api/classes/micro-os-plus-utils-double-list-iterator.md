---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/double-list-iterator
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `double_list_iterator` Class Template

<p>A class template for a doubly linked list forward iterator. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
template &lt;class T, class N = T, class U = T&gt;
class micro_os_plus::utils::double_list_iterator&lt;T, N, U&gt; { ... }
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a2503f7f12aa9fda358cf1536cd36c313">difference_type</a> = ptrdiff_t</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer difference. <a href="#a2503f7f12aa9fda358cf1536cd36c313">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a608d5247c01f595f4f00d5a54c3fafc2">iterator_category</a> = std::forward_iterator_tag</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Category of iterator. <a href="#a608d5247c01f595f4f00d5a54c3fafc2">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a> = N *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to the iterator internal pointer. <a href="#afb43bcf73a842c31d48e128c4c289d26">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4d40f463ce14aaed72a3132e49ae99b0">pointer</a> = <a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer to object <em>pointed to</em> by the iterator. <a href="#a4d40f463ce14aaed72a3132e49ae99b0">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac0ad55399bdc6d2b83a1829f86ff7586">reference</a> = <a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a> &amp;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to object <em>pointed to</em> by the iterator. <a href="#ac0ad55399bdc6d2b83a1829f86ff7586">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a> = U</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of value <em>pointed to</em> by the iterator. <a href="#ac2589f53de7916d046b4177f4f7ff346">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">double_list_iterator</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Default constructor. Constructs an iterator pointing to <span class="doxyComputerOutput">nullptr</span>. <a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a9dcb547fe44a5956040c3c873fa2ae7d">double_list_iterator</a> (iterator_pointer const node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a node pointer. <a href="#a9dcb547fe44a5956040c3c873fa2ae7d">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a03f4f8570751fcfdcd9ad2ad4e1f27d9">double_list_iterator</a> (reference element)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a reference to an element. <a href="#a03f4f8570751fcfdcd9ad2ad4e1f27d9">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a5cce9653aa78c5989ef863a6a7831d59">operator!=</a> (const double_list_iterator &amp;other) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Inequality comparison operator. <a href="#a5cce9653aa78c5989ef863a6a7831d59">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#ac0ad55399bdc6d2b83a1829f86ff7586">reference</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a81984e048a2b2778bfd6fd5098a4e7d4">operator*</a> () const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Dereference operator. <a href="#a81984e048a2b2778bfd6fd5098a4e7d4">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a79955aa86c312930d561bfdaa7f8e740">operator++</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-increment operator. <a href="#a79955aa86c312930d561bfdaa7f8e740">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a60ce68c08d226be1b5ff5bc92e21a4fc">operator++</a> (int)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-increment operator. <a href="#a60ce68c08d226be1b5ff5bc92e21a4fc">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a511da5b3fb41b18a16d1d04c4f7b1095">operator--</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-decrement operator. <a href="#a511da5b3fb41b18a16d1d04c4f7b1095">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a1bc00178e8a6da8c816716236fd60be1">operator--</a> (int)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-decrement operator. <a href="#a1bc00178e8a6da8c816716236fd60be1">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a4d40f463ce14aaed72a3132e49ae99b0">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4c59c7d0ddbf8a7e2008d6288a042c08">operator-&gt;</a> () const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer access operator. <a href="#a4c59c7d0ddbf8a7e2008d6288a042c08">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4046bc946ebb2d019dac5fd3ffd4d118">operator==</a> (const double_list_iterator &amp;other) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Equality comparison operator. <a href="#a4046bc946ebb2d019dac5fd3ffd4d118">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a473a42671746c760cd95646f0810b469">get_iterator_pointer</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the internal iterator pointer (node pointer). <a href="#a473a42671746c760cd95646f0810b469">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N = T, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a4d40f463ce14aaed72a3132e49ae99b0">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4dda1a12bf05e974cc3e6394f28302a0">get_pointer</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get a pointer to the value pointed to by the iterator. <a href="#a4dda1a12bf05e974cc3e6394f28302a0">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the node. <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class template for a doubly linked list forward iterator.</p>


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

<p>This iterator provides an interface similar to <span class="doxyComputerOutput">std::list::iterator</span> for traversing a doubly linked list. It supports bidirectional iteration and access to the underlying node and value. In a typical doubly linked list, all types are <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a></span>.</p>


<p>Definition at line 494 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### difference\_type {#a2503f7f12aa9fda358cf1536cd36c313}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::difference_type =  ptrdiff_t</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer difference.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00520">520</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2503f7f12aa9fda358cf1536cd36c313">520</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a2503f7f12aa9fda358cf1536cd36c313">difference_type</a> = ptrdiff_t;</span></span></div>

</div>

</div>
</div>

### iterator\_category {#a608d5247c01f595f4f00d5a54c3fafc2}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::iterator_category =  std::forward_iterator_tag</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Category of iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00525">525</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a608d5247c01f595f4f00d5a54c3fafc2">525</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a608d5247c01f595f4f00d5a54c3fafc2">iterator_category</a> = std::forward_iterator_tag;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#afb43bcf73a842c31d48e128c4c289d26}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::iterator_pointer =  N*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00515">515</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#afb43bcf73a842c31d48e128c4c289d26">515</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a> = N*;</span></span></div>

</div>

</div>
</div>

### pointer {#a4d40f463ce14aaed72a3132e49ae99b0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::pointer =  value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00505">505</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4d40f463ce14aaed72a3132e49ae99b0">505</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a4d40f463ce14aaed72a3132e49ae99b0">pointer</a> = <a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#ac0ad55399bdc6d2b83a1829f86ff7586}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::reference =  value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00510">510</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac0ad55399bdc6d2b83a1829f86ff7586">510</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac0ad55399bdc6d2b83a1829f86ff7586">reference</a> = <a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### value\_type {#ac2589f53de7916d046b4177f4f7ff346}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::value_type =  U</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00500">500</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac2589f53de7916d046b4177f4f7ff346">500</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac2589f53de7916d046b4177f4f7ff346">value_type</a> = U;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### double\_list\_iterator() {#ac26720e2d8837ad6e26e2f103bf3e8e3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::double_list_iterator ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Default constructor. Constructs an iterator pointing to <span class="doxyComputerOutput">nullptr</span>.</p>


<p>The default constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a></span> initialises the iterator to a null state, meaning it does not point to any node in the list. This is typically used to create an "end" iterator or to initialise an iterator variable before assigning it to a valid node.</p>



:::info
<p>The internal node pointer is value-initialised (set to <span class="doxyComputerOutput">nullptr</span>), ensuring that the iterator is safe to use in comparisons and will not dereference an invalid address.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00533">533</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00285">285</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">285</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">double_list_iterator&lt;T, N, U&gt;::double_list_iterator</a> () : <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>{}</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">286</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">287</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### double\_list\_iterator() {#a9dcb547fe44a5956040c3c873fa2ae7d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::double_list_iterator (<a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a> const node)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel explicit">explicit</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
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

<p>This constructor creates a <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a></span> that points to the specified node. The internal node pointer is set to the provided node address, allowing the iterator to traverse the list starting from that node. This constructor is typically used to initialise an iterator to a specific position within the list, such as the beginning or end.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00540">540</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00298">298</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9dcb547fe44a5956040c3c873fa2ae7d">298</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">double_list_iterator&lt;T, N, U&gt;::double_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">299</span><span class="doxyLineContent"><span class="doxyHighlight">      <a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a> </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">300</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>{ node }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">301</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">302</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### double\_list\_iterator() {#a03f4f8570751fcfdcd9ad2ad4e1f27d9}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::double_list_iterator (<a href="#ac0ad55399bdc6d2b83a1829f86ff7586">reference</a> element)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel explicit">explicit</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00548">548</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator--() {#a511da5b3fb41b18a16d1d04c4f7b1095}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt; &amp; micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator-- ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00591">591</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00391">391</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a511da5b3fb41b18a16d1d04c4f7b1095">391</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a511da5b3fb41b18a16d1d04c4f7b1095">double_list_iterator&lt;T, N, U&gt;::operator--</a>()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">392</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">393</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>-&gt;previous);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">394</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">395</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator--() {#a1bc00178e8a6da8c816716236fd60be1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt; micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator-- (int)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>The post-decrement operator (<span class="doxyComputerOutput"><a href="#a1bc00178e8a6da8c816716236fd60be1">operator--(int)</a></span>) moves the iterator to the previous node in the list, but returns a copy of the iterator as it was before the decrement. This enables iteration logic that requires access to the current element before moving backward, following the standard C++ iterator semantics for post-decrement.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00599">599</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00407">407</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a1bc00178e8a6da8c816716236fd60be1">407</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a511da5b3fb41b18a16d1d04c4f7b1095">double_list_iterator&lt;T, N, U&gt;::operator--</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">408</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">409</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">410</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>-&gt;previous);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">411</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">412</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator-&gt;() {#a4c59c7d0ddbf8a7e2008d6288a042c08}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt;::pointer micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator-&gt; ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>The pointer access operator (<span class="doxyComputerOutput">operator-&gt;</span>) allows the iterator to provide direct access to the value pointed to by the iterator, mimicking the behavior of a raw pointer. Internally, it calls <span class="doxyComputerOutput"><a href="#a4dda1a12bf05e974cc3e6394f28302a0">get_pointer()</a></span>, which computes and returns a pointer to the underlying value or object associated with the current node in the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00559">559</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00325">325</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4c59c7d0ddbf8a7e2008d6288a042c08">325</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a4c59c7d0ddbf8a7e2008d6288a042c08">double_list_iterator&lt;T, N, U&gt;::operator-&gt;</a>()</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">326</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">327</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a4dda1a12bf05e974cc3e6394f28302a0">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">328</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator!=() {#a5cce9653aa78c5989ef863a6a7831d59}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator!= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a> &amp; other)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Inequality comparison operator.</p>


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
<dd><p><span class="doxyComputerOutput">true</span> if the iterators point to different nodes, <span class="doxyComputerOutput">false</span> otherwise.</p></dd>
</dl>


<p>The inequality comparison operator (<span class="doxyComputerOutput">operator!=</span>) checks whether two iterators point to different nodes in the list by comparing their internal node pointers. This is useful for standard iterator operations, such as determining whether an iterator has reached the end of a range or for loop termination conditions.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00619">619</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00440">440</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a5cce9653aa78c5989ef863a6a7831d59">440</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a5cce9653aa78c5989ef863a6a7831d59">double_list_iterator&lt;T, N, U&gt;::operator!=</a>(</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">441</span><span class="doxyLineContent"><span class="doxyHighlight">      </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">double_list_iterator</a>&amp; other)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">442</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">443</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> != other.<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">444</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator\*() {#a81984e048a2b2778bfd6fd5098a4e7d4}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt;::reference micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator* ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>The dereference operator (<span class="doxyComputerOutput">operator*</span>) provides access to the value or object pointed to by the iterator. Internally, it calls <span class="doxyComputerOutput"><a href="#a4dda1a12bf05e974cc3e6394f28302a0">get_pointer()</a></span> to obtain a pointer to the underlying value or object associated with the current node in the list, and then dereferences it to return a reference.</p>


<p>This allows the iterator to be used in a manner similar to standard C++ iterators, enabling direct access to the list element for reading or modification.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00567">567</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00343">343</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a81984e048a2b2778bfd6fd5098a4e7d4">343</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a81984e048a2b2778bfd6fd5098a4e7d4">double_list_iterator&lt;T, N, U&gt;::operator*</a>()</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">344</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">345</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *<a href="#a4dda1a12bf05e974cc3e6394f28302a0">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">346</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator++() {#a79955aa86c312930d561bfdaa7f8e740}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt; &amp; micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator++ ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00575">575</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00358">358</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a79955aa86c312930d561bfdaa7f8e740">358</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a79955aa86c312930d561bfdaa7f8e740">double_list_iterator&lt;T, N, U&gt;::operator++</a>()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">359</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">360</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>-&gt;next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">361</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">362</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator++() {#a60ce68c08d226be1b5ff5bc92e21a4fc}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt; micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator++ (int)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>The post-increment operator (<span class="doxyComputerOutput"><a href="#a60ce68c08d226be1b5ff5bc92e21a4fc">operator++(int)</a></span>) advances the iterator to the next node in the list, but returns a copy of the iterator as it was before the increment. This allows iteration logic that requires access to the current element before moving to the next one, following the standard C++ iterator semantics for post-increment.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00583">583</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00374">374</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a60ce68c08d226be1b5ff5bc92e21a4fc">374</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a79955aa86c312930d561bfdaa7f8e740">double_list_iterator&lt;T, N, U&gt;::operator++</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">375</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">376</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">377</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>-&gt;next);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">378</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">379</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### operator==() {#a4046bc946ebb2d019dac5fd3ffd4d118}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::operator== (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-iterator">double_list_iterator</a> &amp; other)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>The equality comparison operator (<span class="doxyComputerOutput">operator==</span>) checks whether two iterators point to the same node in the list by comparing their internal node pointers. This allows for standard iterator comparisons, such as detecting the end of a range or verifying if two iterators refer to the same position.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00609">609</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00424">424</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4046bc946ebb2d019dac5fd3ffd4d118">424</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a4046bc946ebb2d019dac5fd3ffd4d118">double_list_iterator&lt;T, N, U&gt;::operator==</a>(</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">425</span><span class="doxyLineContent"><span class="doxyHighlight">      </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="#ac26720e2d8837ad6e26e2f103bf3e8e3">double_list_iterator</a>&amp; other)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">426</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">427</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a> == other.<a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">428</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### get\_iterator\_pointer() {#a473a42671746c760cd95646f0810b469}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_iterator&lt; T, N, U &gt;::iterator_pointer micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::get_iterator_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00639">639</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00455">455</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a473a42671746c760cd95646f0810b469">455</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a473a42671746c760cd95646f0810b469">double_list_iterator&lt;T, N, U&gt;::get_iterator_pointer</a> ()</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">456</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">457</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">458</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### get\_pointer() {#a4dda1a12bf05e974cc3e6394f28302a0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">pointer micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::get_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00629">629</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### node\_ {#ac185c8ffa5f9d12454f264fa9b0a1733}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N = T, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">iterator_pointer micro_os_plus::utils::double_list_iterator&lt; T, N, U &gt;::node_</td>
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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00645">645</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac185c8ffa5f9d12454f264fa9b0a1733">645</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#afb43bcf73a842c31d48e128c4c289d26">iterator_pointer</a> <a href="#ac185c8ffa5f9d12454f264fa9b0a1733">node_</a>;</span></span></div>

</div>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.0.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.14.0.</p>

</div>
