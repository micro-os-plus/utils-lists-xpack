---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/intrusive-list-iterator
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `intrusive_list_iterator` Class Template

<p>A class template for the intrusive list iterator. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
template &lt;class T, class N, N T::* MP, class U = T&gt;<br/>
class micro_os_plus::utils::intrusive_list_iterator&lt;T, N, MP, U&gt; { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>"
</div>

## Public Member Typedefs Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#adf2b6ab52c63f0747113565c183df0f3">difference_type</a> = ptrdiff_t</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer difference. <a href="#adf2b6ab52c63f0747113565c183df0f3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a879cf5b1d6d65ce492aec7f307fa474e">iterator_category</a> = std::bidirectional_iterator_tag</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Category of iterator. <a href="#a879cf5b1d6d65ce492aec7f307fa474e">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> = N *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to the iterator internal pointer. <a href="#a520f5e4b1067d0febf857e04f6f37b83">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a08ac64c64dce736d83a93dfc838083af">pointer</a> = <a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer to object <em>pointed to</em> by the iterator. <a href="#a08ac64c64dce736d83a93dfc838083af">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> = <a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a> &amp;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to object <em>pointed to</em> by the iterator. <a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a> = U</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of value <em>pointed to</em> by the iterator. <a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Constructors Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Default constructor. Constructs an iterator pointing to <span class="doxyComputerOutput">nullptr</span>. <a href="#a7f50db671a84210327743eb29cae2170">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#af3bf247661cb8d3cc9876cc1451fe64d">intrusive_list_iterator</a> (iterator_pointer const node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a node pointer. <a href="#af3bf247661cb8d3cc9876cc1451fe64d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a064fb9a6cf27543e453874d2c4650d5a">intrusive_list_iterator</a> (reference element) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an iterator from a reference to an element. <a href="#a064fb9a6cf27543e453874d2c4650d5a">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a02d97e48aa2727ed8445c023942f30e6">operator*</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Dereference operator. <a href="#a02d97e48aa2727ed8445c023942f30e6">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a50d428211ad0b30b6140c85cb898ff50">operator++</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-increment operator. <a href="#a50d428211ad0b30b6140c85cb898ff50">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aa8fa99a95e7d9a21ba91206cec42b5e6">operator++</a> (int) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-increment operator. <a href="#aa8fa99a95e7d9a21ba91206cec42b5e6">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aee99a90c7b61cba2c453301e9a410946">operator--</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pre-decrement operator. <a href="#aee99a90c7b61cba2c453301e9a410946">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a3120afffac4d89be37b06190ac32c3b2">operator--</a> (int) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Post-decrement operator. <a href="#a3120afffac4d89be37b06190ac32c3b2">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a08ac64c64dce736d83a93dfc838083af">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ad5c0f3d97e59d361f3f69f91f98001a3">operator-&gt;</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer access operator. <a href="#ad5c0f3d97e59d361f3f69f91f98001a3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#af21195356b367c6a5d061aa893e2f7c0">operator==</a> (const intrusive_list_iterator &amp;other) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Equality comparison operator. <a href="#af21195356b367c6a5d061aa893e2f7c0">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Functions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a72e4be9dcf753c754d8f6ddb3e32dc39">get_iterator_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Retrieve the iterator pointer for the current node. <a href="#a72e4be9dcf753c754d8f6ddb3e32dc39">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a08ac64c64dce736d83a93dfc838083af">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the object pointer from the intrusive node. <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt;class T, class N, N T::* MP, class U = T&gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aee433922fe4b649d6c1b529e620e9345">node_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to intrusive node. <a href="#aee433922fe4b649d6c1b529e620e9345">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class template for the intrusive list iterator.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Template Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">T</td>
<td class="doxyParamItemDescription"><p>Type of object that includes the intrusive node.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">N</td>
<td class="doxyParamItemDescription"><p>Type of intrusive node. Must have the public members <b>previous</b> &amp; <b>next</b>.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">MP</td>
<td class="doxyParamItemDescription"><p>Name of the intrusive node member in object T.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">U</td>
<td class="doxyParamItemDescription"><p>Type stored in the list, derived from T.</p></td>
</tr>
</table>
</dd>
</dl>

<p>This class provides an interface similar to <span class="doxyComputerOutput">std::list::iterator</span>, except that it keeps track of the offset where the intrusive list element is located in the parent object. It supports bidirectional iteration and access to the underlying object and node.</p>


<p>Definition at line 69 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### difference\_type {#adf2b6ab52c63f0747113565c183df0f3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::difference_type = ptrdiff_t</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer difference.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00095">95</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#adf2b6ab52c63f0747113565c183df0f3">95</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#adf2b6ab52c63f0747113565c183df0f3">difference_type</a> = ptrdiff_t;</span></span></div>

</div>

</div>
</div>

### iterator\_category {#a879cf5b1d6d65ce492aec7f307fa474e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::iterator_category = std::bidirectional_iterator_tag</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Category of iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00100">100</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a879cf5b1d6d65ce492aec7f307fa474e">100</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a879cf5b1d6d65ce492aec7f307fa474e">iterator_category</a> = std::bidirectional_iterator_tag;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#a520f5e4b1067d0febf857e04f6f37b83}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::iterator_pointer = N*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00090">90</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a520f5e4b1067d0febf857e04f6f37b83">90</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> = N*;</span></span></div>

</div>

</div>
</div>

### pointer {#a08ac64c64dce736d83a93dfc838083af}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::pointer = value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00080">80</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a08ac64c64dce736d83a93dfc838083af">80</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a08ac64c64dce736d83a93dfc838083af">pointer</a> = <a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#a90c6d3cd7bf8dab6039cb02af0ab5e4e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::reference = value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00085">85</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">85</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> = <a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### value\_type {#aa7fd4b71eb2848e6016ea84fdedb06c7}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::value_type = U</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00075">75</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">75</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a> = U;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### intrusive\_list\_iterator() {#a7f50db671a84210327743eb29cae2170}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator ()</td>
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


<p>The default constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator</a></span> initialises the iterator to a null state, meaning it does not point to any node in the list. This is typically used to create an "end" iterator or to initialise an iterator variable before assigning it to a valid node.</p>



:::info
<p>The internal node pointer is value-initialised (set to <span class="doxyComputerOutput">nullptr</span>), ensuring that the iterator is safe to use in comparisons and will not dereference an invalid address.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00108">108</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00068">68</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a7f50db671a84210327743eb29cae2170">68</a></span><span class="doxyLineContent"><span class="doxyHighlight">                                    U&gt;<a href="#a7f50db671a84210327743eb29cae2170">::intrusive_list_iterator</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">69</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>{}</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">70</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">71</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#a7f50db671a84210327743eb29cae2170">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a> and <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>


<p>Referenced by <a href="#a7f50db671a84210327743eb29cae2170">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a> and <a href="#af21195356b367c6a5d061aa893e2f7c0">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator==</a>.</p>

</div>
</div>

### intrusive\_list\_iterator() {#af3bf247661cb8d3cc9876cc1451fe64d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator (<a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> const node)</td>
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

<p>This constructor creates an <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator</a></span> that points to the specified node. The internal node pointer is set to the provided node address, allowing the iterator to traverse the list starting from that node. This is typically used to initialise an iterator to a specific position within the list, such as the beginning or end.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00115">115</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00082">82</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af3bf247661cb8d3cc9876cc1451fe64d">82</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator&lt;T, N, MP, U&gt;::intrusive_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">83</span><span class="doxyLineContent"><span class="doxyHighlight">      N* </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> node) noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>{ node }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">86</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### intrusive\_list\_iterator() {#a064fb9a6cf27543e453874d2c4650d5a}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator (<a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> element)</td>
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


:::info
<p>This constructor is only available when <span class="doxyComputerOutput">U</span> is derived from (or is the same type as) <span class="doxyComputerOutput">T</span>, as required by <span class="doxyComputerOutput">std::derived_from&lt;U, T&gt;</span>.</p>
:::


<p>This constructor creates an <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator</a></span> that points to the specified element. The internal node pointer is set to the address of the intrusive node member within the given element, allowing the iterator to traverse the list starting from that element. This is typically used to initialise an iterator to a specific object in the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00128">128</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00097">97</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a064fb9a6cf27543e453874d2c4650d5a">97</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator&lt;T, N, MP, U&gt;::intrusive_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">98</span><span class="doxyLineContent"><span class="doxyHighlight">      <a href="#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> element) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">99</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">requires</span><span class="doxyHighlight"> std::derived_from&lt;U, T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">100</span><span class="doxyLineContent"><span class="doxyHighlight">      : <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>{ &amp;(element.*MP) }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">101</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">102</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator--() {#aee99a90c7b61cba2c453301e9a410946}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt; &amp; micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator-- ()</td>
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


<p>The pre-decrement operator (<span class="doxyComputerOutput">operator--</span>) moves the intrusive list iterator to the previous node in the list. It updates the internal node pointer to point to the node returned by the current node's <span class="doxyComputerOutput">previous()</span> method. This enables backward traversal of the list, following the linked structure in reverse.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00172">172</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00180">180</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aee99a90c7b61cba2c453301e9a410946">180</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aee99a90c7b61cba2c453301e9a410946">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator--</a>() noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>-&gt;previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">183</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">184</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### operator--() {#a3120afffac4d89be37b06190ac32c3b2}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt; micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator-- (int)</td>
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


<p>The post-decrement operator (<span class="doxyComputerOutput"><a href="#a3120afffac4d89be37b06190ac32c3b2">operator--(int)</a></span>) moves the intrusive list iterator to the previous node in the list, but returns a copy of the iterator as it was before the decrement. This enables iteration logic that requires access to the current element before moving backward, following the standard C++ iterator semantics for post-decrement.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00180">180</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00196">196</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a3120afffac4d89be37b06190ac32c3b2">196</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aee99a90c7b61cba2c453301e9a410946">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator--</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">197</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">198</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">199</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>-&gt;previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">200</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">201</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### operator-&gt;() {#ad5c0f3d97e59d361f3f69f91f98001a3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt;::pointer micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator-&gt; ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel inline">inline</span>
<span class="doxyMemberLabel nodiscard">nodiscard</span>
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


<p>The pointer access operator (<span class="doxyComputerOutput">operator-&gt;</span>) allows the intrusive list iterator to provide direct access to the value pointed to by the iterator, mimicking the behavior of a raw pointer. Internally, it calls <span class="doxyComputerOutput"><a href="#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer()</a></span>, which computes and returns a pointer to the underlying value or object associated with the current node in the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00140">140</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00114">114</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ad5c0f3d97e59d361f3f69f91f98001a3">114</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ad5c0f3d97e59d361f3f69f91f98001a3">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator-&gt;</a>() const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_pointer</a>.</p>

</div>
</div>

### operator\*() {#a02d97e48aa2727ed8445c023942f30e6}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt;::reference micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator* ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel inline">inline</span>
<span class="doxyMemberLabel nodiscard">nodiscard</span>
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


<p>The dereference operator (<span class="doxyComputerOutput">operator*</span>) provides access to the value or object pointed to by the iterator. Internally, it calls <span class="doxyComputerOutput"><a href="#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer()</a></span> to obtain a pointer to the underlying value or object associated with the current node in the list, and then dereferences it to return a reference.</p>


<p>This allows the iterator to be used in a manner similar to standard C++ iterators, enabling direct access to the list element for reading or modification.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00148">148</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00132">132</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a02d97e48aa2727ed8445c023942f30e6">132</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a02d97e48aa2727ed8445c023942f30e6">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator*</a>() const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *<a href="#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_pointer</a>.</p>

</div>
</div>

### operator++() {#a50d428211ad0b30b6140c85cb898ff50}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt; &amp; micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator++ ()</td>
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


<p>The pre-increment operator (<span class="doxyComputerOutput">operator++</span>) advances the intrusive list iterator to the next node in the list. It updates the internal node pointer to point to the node returned by the current node's <span class="doxyComputerOutput">next()</span> method. This enables forward traversal of the list, following the linked structure.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00156">156</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00147">147</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a50d428211ad0b30b6140c85cb898ff50">147</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a50d428211ad0b30b6140c85cb898ff50">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator++</a>() noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">148</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">149</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>-&gt;next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">150</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">151</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### operator++() {#aa8fa99a95e7d9a21ba91206cec42b5e6}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt; micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator++ (int)</td>
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


<p>The post-increment operator (<span class="doxyComputerOutput"><a href="#aa8fa99a95e7d9a21ba91206cec42b5e6">operator++(int)</a></span>) advances the intrusive list iterator to the next node in the list, but returns a copy of the iterator as it was before the increment. This allows iteration logic that requires access to the current element before moving to the next one, following the standard C++ iterator semantics for post-increment.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00164">164</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00163">163</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa8fa99a95e7d9a21ba91206cec42b5e6">163</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a50d428211ad0b30b6140c85cb898ff50">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator++</a>(</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> tmp = *</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a> = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>-&gt;next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">167</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> tmp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">168</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### operator==() {#af21195356b367c6a5d061aa893e2f7c0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator== (const <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> &amp; other)</td>
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


<p>The equality comparison operator (<span class="doxyComputerOutput">operator==</span>) checks whether two intrusive list iterators point to the same node in the list by comparing their internal node pointers. This enables standard iterator comparisons, such as detecting the end of a range or verifying if two iterators refer to the same position within the list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00194">194</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00213">213</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af21195356b367c6a5d061aa893e2f7c0">213</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#af21195356b367c6a5d061aa893e2f7c0">intrusive_list_iterator&lt;T, N, MP, U&gt;::operator==</a>(</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">214</span><span class="doxyLineContent"><span class="doxyHighlight">      </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a>&amp; other) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">215</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">216</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a> == other.node_;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">217</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#a7f50db671a84210327743eb29cae2170">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a> and <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### get\_iterator\_pointer() {#a72e4be9dcf753c754d8f6ddb3e32dc39}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt;::iterator_pointer micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_iterator_pointer (void)</td>
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

<p>Retrieve the iterator pointer for the current node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>The iterator pointer corresponding to the current node.</p></dd>
</dl>


<p>Returns a pointer to the internal iterator node associated with the current object. This is typically used for advanced list operations or when direct access to the underlying node is required.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00214">214</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00258">258</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a72e4be9dcf753c754d8f6ddb3e32dc39">258</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a72e4be9dcf753c754d8f6ddb3e32dc39">intrusive_list_iterator&lt;T, N, MP, U&gt;::get_iterator_pointer</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">259</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">260</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">261</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>

</div>
</div>

### get\_pointer() {#a93c954e164fc4cd26e29f64a54a2cfb5}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list_iterator&lt; T, N, MP, U &gt;::pointer micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel inline">inline</span>
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Get the object pointer from the intrusive node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the parent object.</p></dd>
</dl>


<p>Computes and returns a pointer to the parent object that contains the intrusive node currently referenced by the iterator. This is achieved by calculating the offset of the intrusive node member within the parent object type and subtracting it from the node's address. This technique allows the iterator to provide access to the full object from just the node pointer, enabling intrusive list traversal and manipulation.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00204">204</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h/#l00230">230</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a93c954e164fc4cd26e29f64a54a2cfb5">230</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">intrusive_list_iterator&lt;T, N, MP, U&gt;::get_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">231</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">232</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// static_assert(std::is_convertible&lt;U, T&gt;::value == true, "U must be</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">233</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// implicitly convertible to T!");</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">234</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">235</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the byte offset of the intrusive node member within T.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">236</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Note: dereferencing a null pointer is formally undefined behaviour</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">237</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// under the C++ standard. In practice, no known compiler miscompiles</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">238</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// this idiom on any supported target; `offsetof` cannot be used here</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">239</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// because `MP` is a template parameter (a pointer-to-member), not a</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">240</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// literal member name.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">241</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#adf2b6ab52c63f0747113565c183df0f3">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">242</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">243</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">244</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the address of the object which includes the</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">245</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// intrusive node, by adjusting down the node address.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">246</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#a08ac64c64dce736d83a93dfc838083af">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#adf2b6ab52c63f0747113565c183df0f3">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">247</span><span class="doxyLineContent"><span class="doxyHighlight">                                      - offset);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">248</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aee433922fe4b649d6c1b529e620e9345">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</a>.</p>


<p>Referenced by <a href="#a02d97e48aa2727ed8445c023942f30e6">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator*</a> and <a href="#ad5c0f3d97e59d361f3f69f91f98001a3">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator-&gt;</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### node\_ {#aee433922fe4b649d6c1b529e620e9345}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">iterator_pointer micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::node_</td>
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

<p>Pointer to intrusive node.</p>


<p>Stores the address of the current intrusive node in the list.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h/#l00223">223</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aee433922fe4b649d6c1b529e620e9345">223</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> <a href="#aee433922fe4b649d6c1b529e620e9345">node_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#a7f50db671a84210327743eb29cae2170">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a>, <a href="#af3bf247661cb8d3cc9876cc1451fe64d">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a>, <a href="#a064fb9a6cf27543e453874d2c4650d5a">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::intrusive_list_iterator</a>, <a href="#a72e4be9dcf753c754d8f6ddb3e32dc39">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_iterator_pointer</a>, <a href="#a93c954e164fc4cd26e29f64a54a2cfb5">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::get_pointer</a>, <a href="#a50d428211ad0b30b6140c85cb898ff50">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator++</a>, <a href="#aa8fa99a95e7d9a21ba91206cec42b5e6">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator++</a>, <a href="#aee99a90c7b61cba2c453301e9a410946">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator--</a>, <a href="#a3120afffac4d89be37b06190ac32c3b2">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator--</a> and <a href="#af21195356b367c6a5d061aa893e2f7c0">micro_os_plus::utils::intrusive_list_iterator&lt; T, N, MP, U &gt;::operator==</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
