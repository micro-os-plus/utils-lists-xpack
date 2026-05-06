---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/doubly-list
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `doubly_list` Class Template

<p>A class template for a doubly linked list of nodes. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;<br/>
class micro_os_plus::utils::doubly_list&lt;T, L&gt; { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Public Member Typedefs Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a735ee001c008f04eb19cd31e5ea43668">is_statically_allocated</a> = typename links_type::is_statically_allocated</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating if the links node is statically allocated. <a href="#a735ee001c008f04eb19cd31e5ea43668">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator</a>&lt; <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> &gt;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of iterator over the values. <a href="#a806d82876c5eadc20150fccb4d380d64">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to the iterator internal pointer. <a href="#ac466265f112e5f41b06b64e794f3db63">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> = L</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of the links node object where the pointers to the list head and tail are stored. <a href="#aed5fc0c1164c30d890986b08d8f3a4da">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a06b1703840274b544b5886a9190bef4b">pointer</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer to object <em>pointed to</em> by the iterator. <a href="#a06b1703840274b544b5886a9190bef4b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> &amp;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to object <em>pointed to</em> by the iterator. <a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a> = std::reverse_iterator&lt; <a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a> &gt;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reverse iterator over the values. <a href="#a51bfca23b338fb2ba434e49b0a296ee9">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> = T</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of value <em>pointed to</em> by the iterator. <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Constructors Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemNoTypeNameTemplate" colspan="2" align="left" valign="top"><a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct a doubly linked list. <a href="#a7105e8211e6c99d4b589759db0b60172">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemNoTypeNameTemplate" colspan="2" align="left" valign="top"><a href="#a651a33d33feaeb0fdfc0bf905e098218">doubly_list</a> (const doubly_list &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#a651a33d33feaeb0fdfc0bf905e098218">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemNoTypeNameTemplate" colspan="2" align="left" valign="top"><a href="#a63ee95c08711fb063e880b1122ffe38f">doubly_list</a> (doubly_list &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#a63ee95c08711fb063e880b1122ffe38f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Destructor Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aae54cb514e9356a017b79c862abaa378">~doubly_list</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the list. <a href="#aae54cb514e9356a017b79c862abaa378">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a94ebc26808071cb791c1917c83fc94f7">operator=</a> (const doubly_list &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a94ebc26808071cb791c1917c83fc94f7">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a8b1c494a5d53f363c7905cabb23da66c">operator=</a> (doubly_list &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#a8b1c494a5d53f363c7905cabb23da66c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Functions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a901d37d96ab59b0863e78774a0b72079">begin</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator begin. <a href="#a901d37d96ab59b0863e78774a0b72079">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0748cb8980a43053479be54b576910b0">clear</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Clear the list. <a href="#a0748cb8980a43053479be54b576910b0">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a1031c0cc9462644160ea66eaa4c3d700">empty</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is empty. <a href="#a1031c0cc9462644160ea66eaa4c3d700">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a9abe477245ac344d306a9ed55f6a4430">end</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator end. <a href="#a9abe477245ac344d306a9ed55f6a4430">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a06b1703840274b544b5886a9190bef4b">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a34e804930d1b4ab2ea7a538ab4b17d97">head</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>head</b>. <a href="#a34e804930d1b4ab2ea7a538ab4b17d97">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ab42aae2bfccbee1628b1b470911f6def">initialise_once</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the list only at first run. <a href="#ab42aae2bfccbee1628b1b470911f6def">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a2b0c8c399237932f92c93a60d26f2bea">initialised</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is initialised (only statically allocated lists can be uninitialised). <a href="#a2b0c8c399237932f92c93a60d26f2bea">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#af31780e2a87d34eca81ad2a8f47afe2c">link_head</a> (reference node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the head of the list. <a href="#af31780e2a87d34eca81ad2a8f47afe2c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ab700f9e890a253eeefb42c8a15b9e403">link_tail</a> (reference node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the tail of the list. <a href="#ab700f9e890a253eeefb42c8a15b9e403">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr const <a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> *</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">links_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the address of the node storing the list links. <a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aa59f07f0ab869376dfb09dbbe11a92d4">rbegin</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reverse iterator begin. <a href="#aa59f07f0ab869376dfb09dbbe11a92d4">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0314a3e78b3cd027ffed6975a3da4ffa">rend</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reverse iterator end. <a href="#a0314a3e78b3cd027ffed6975a3da4ffa">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#a06b1703840274b544b5886a9190bef4b">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a6e9d3f30c694a21d98098cac97802ecb">tail</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>tail</b>. <a href="#a6e9d3f30c694a21d98098cac97802ecb">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>The list top node used to point to <b>head</b> and <b>tail</b> nodes. <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class template for a doubly linked list of nodes.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Template Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">T</td>
<td class="doxyParamItemDescription"><p>Type of the elements linked into the list, derived from class <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></span>.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">L</td>
<td class="doxyParamItemDescription"><p>Type of the links node (either <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span> or <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></span>).</p></td>
</tr>
</table>
</dd>
</dl>

<p>This class implements a generic doubly linked list, maintaining a pair of head and tail pointers to allow efficient iteration and manipulation of nodes. The list elements (of type T) must be derived from <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></span> (typically from <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span>) and extended with the required payload, which may be the actual content or a pointer to it.</p>


<p>The class uses composition for the links node, rather than inheritance, to avoid inheriting unwanted methods. Iterators return pointers to the list elements, enabling traversal of the list in a manner similar to standard containers.</p>



:::info
<p><span class="doxyComputerOutput">std::reverse_iterator</span> adaptors (<span class="doxyComputerOutput"><a href="#aa59f07f0ab869376dfb09dbbe11a92d4">rbegin()</a></span>/<span class="doxyComputerOutput"><a href="#a0314a3e78b3cd027ffed6975a3da4ffa">rend()</a></span>) are provided as thin wrappers around the bidirectional <span class="doxyComputerOutput"><a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a></span>.</p>
:::


<p>Definition at line 249 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### is\_statically\_allocated {#a735ee001c008f04eb19cd31e5ea43668}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::is_statically_allocated = 
        typename links_type::is_statically_allocated</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating if the links node is statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00291">291</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a735ee001c008f04eb19cd31e5ea43668">291</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a735ee001c008f04eb19cd31e5ea43668">is_statically_allocated</a> =</span></span></div>

</div>

</div>
</div>

### iterator {#a806d82876c5eadc20150fccb4d380d64}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::iterator =  doubly_list_iterator&lt;value_type&gt;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of iterator over the values.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00276">276</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a806d82876c5eadc20150fccb4d380d64">276</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator&lt;value_type&gt;</a>;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#ac466265f112e5f41b06b64e794f3db63}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::iterator_pointer =  value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00286">286</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac466265f112e5f41b06b64e794f3db63">286</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### links\_type {#aed5fc0c1164c30d890986b08d8f3a4da}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_type =  L</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of the links node object where the pointers to the list head and tail are stored.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00256">256</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aed5fc0c1164c30d890986b08d8f3a4da">256</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> = L;</span></span></div>

</div>

</div>
</div>

### pointer {#a06b1703840274b544b5886a9190bef4b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::pointer =  value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00266">266</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a06b1703840274b544b5886a9190bef4b">266</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a06b1703840274b544b5886a9190bef4b">pointer</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#a5c8bc0b786d3e38ac36d4c6e12bb8ade}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::reference =  value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00271">271</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">271</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> = <a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### reverse\_iterator {#a51bfca23b338fb2ba434e49b0a296ee9}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::reverse_iterator =  std::reverse_iterator&lt;iterator&gt;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reverse iterator over the values.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00281">281</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">281</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a> = std::reverse_iterator&lt;iterator&gt;;</span></span></div>

</div>

</div>
</div>

### value\_type {#aabd15bd5b78a500a9e350ff21c6bcf28}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list&lt; T, L &gt;::value_type =  T</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00261">261</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aabd15bd5b78a500a9e350ff21c6bcf28">261</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> = T;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### doubly\_list() {#a7105e8211e6c99d4b589759db0b60172}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Construct a doubly linked list.</p>


<p>For non-statically allocated lists, the initial list status is <em>empty</em> after construction, meaning the list is ready for use and contains no nodes.</p>


<p>For statically allocated lists, the list remains <em>uninitialised</em> after construction, with its internal pointers set to <span class="doxyComputerOutput">nullptr</span>. Such lists require explicit initialisation (typically via <span class="doxyComputerOutput"><a href="#ab42aae2bfccbee1628b1b470911f6def">initialise_once()</a></span>) before use.</p>


<p>This constructor does not clear or modify the internal pointers for statically allocated lists, relying on zero-initialisation by the runtime. For dynamically allocated lists, it calls <span class="doxyComputerOutput"><a href="#a0748cb8980a43053479be54b576910b0">clear()</a></span> to ensure the list is in a valid empty state.</p>


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">doubly_list</a></span> objects. This ensures the integrity of the list structure, as duplicating or moving lists could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00297">297</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00270">270</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a7105e8211e6c99d4b589759db0b60172">270</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list&lt;T, L&gt;::doubly_list</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">271</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">272</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) \</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">273</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">    &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCTORS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">274</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">275</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCTORS</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">276</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">277</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">278</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">279</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightComment">// By all means, do not add any code to clear the pointers, since</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">280</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightComment">// the links node was statically initialised.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">281</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">282</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">283</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">284</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="#a0748cb8980a43053479be54b576910b0">clear</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">285</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">286</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a0748cb8980a43053479be54b576910b0">micro_os_plus::utils::doubly_list&lt; T, L &gt;::clear</a>.</p>


<p>Referenced by <a href="#a651a33d33feaeb0fdfc0bf905e098218">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>, <a href="#a63ee95c08711fb063e880b1122ffe38f">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>, <a href="#a94ebc26808071cb791c1917c83fc94f7">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### doubly\_list() {#a651a33d33feaeb0fdfc0bf905e098218}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list (const doubly_list &amp;)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel delete">delete</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Deleted copy constructor.</p>


<p>Copying of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">doubly_list</a></span> instances is explicitly disallowed to prevent accidental duplication, which could compromise the integrity of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00307">307</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<p>Reference <a href="#a7105e8211e6c99d4b589759db0b60172">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>.</p>

</div>
</div>

### doubly\_list() {#a63ee95c08711fb063e880b1122ffe38f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list (doubly_list &amp;&amp;)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel delete">delete</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Deleted move constructor.</p>


<p>Moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">doubly_list</a></span> instances is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving lists.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00317">317</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<p>Reference <a href="#a7105e8211e6c99d4b589759db0b60172">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~doubly\_list() {#aae54cb514e9356a017b79c862abaa378}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list&lt; T, L &gt;::~doubly_list ()</td>
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

<p>Destruct the list.</p>


<p>Normally at this point there must be no nodes in the list. However, for statically allocated lists, this might not be always true due to their lifetime and initialization patterns.</p>



:::info
<p>In debug mode, the destructor emits a warning if the list is not empty when destroyed, helping to catch potential resource leaks or logic errors in list management.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00343">343</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00301">301</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aae54cb514e9356a017b79c862abaa378">301</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#aae54cb514e9356a017b79c862abaa378">doubly_list&lt;T, L&gt;::~doubly_list</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">302</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">303</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) \</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">304</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">    &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCTORS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">305</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">306</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_TRACE_UTILS_LISTS_CONSTRUCTORS</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">307</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">308</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Perhaps enable it for non statically allocated lists.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">309</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// assert (empty ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">310</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">311</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (!<a href="#a1031c0cc9462644160ea66eaa4c3d700">empty</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">312</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">313</span><span class="doxyLineContent"><span class="doxyHighlight">        trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p list not empty\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">314</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">315</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">316</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a1031c0cc9462644160ea66eaa4c3d700">micro_os_plus::utils::doubly_list&lt; T, L &gt;::empty</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a94ebc26808071cb791c1917c83fc94f7}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list &amp; micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator= (const <a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> &amp;)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel delete">delete</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Deleted copy assignment operator.</p>


<p>Copy assignment is explicitly disallowed to prevent accidental overwriting of list objects, which could lead to corruption of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00328">328</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<p>Reference <a href="#a7105e8211e6c99d4b589759db0b60172">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>.</p>

</div>
</div>

### operator=() {#a8b1c494a5d53f363c7905cabb23da66c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list &amp; micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator= (<a href="#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> &amp;&amp;)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel delete">delete</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Deleted move assignment operator.</p>


<p>Move assignment is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving lists.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00338">338</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<p>References <a href="#a7105e8211e6c99d4b589759db0b60172">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a>, <a href="#a901d37d96ab59b0863e78774a0b72079">micro_os_plus::utils::doubly_list&lt; T, L &gt;::begin</a>, <a href="#a0748cb8980a43053479be54b576910b0">micro_os_plus::utils::doubly_list&lt; T, L &gt;::clear</a>, <a href="#a1031c0cc9462644160ea66eaa4c3d700">micro_os_plus::utils::doubly_list&lt; T, L &gt;::empty</a>, <a href="#a9abe477245ac344d306a9ed55f6a4430">micro_os_plus::utils::doubly_list&lt; T, L &gt;::end</a>, <a href="#a34e804930d1b4ab2ea7a538ab4b17d97">micro_os_plus::utils::doubly_list&lt; T, L &gt;::head</a>, <a href="#ab42aae2bfccbee1628b1b470911f6def">micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialise_once</a>, <a href="#a2b0c8c399237932f92c93a60d26f2bea">micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialised</a>, <a href="#af31780e2a87d34eca81ad2a8f47afe2c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::link_head</a>, <a href="#ab700f9e890a253eeefb42c8a15b9e403">micro_os_plus::utils::doubly_list&lt; T, L &gt;::link_tail</a>, <a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_pointer</a>, <a href="#aa59f07f0ab869376dfb09dbbe11a92d4">micro_os_plus::utils::doubly_list&lt; T, L &gt;::rbegin</a>, <a href="#a0314a3e78b3cd027ffed6975a3da4ffa">micro_os_plus::utils::doubly_list&lt; T, L &gt;::rend</a> and <a href="#a6e9d3f30c694a21d98098cac97802ecb">micro_os_plus::utils::doubly_list&lt; T, L &gt;::tail</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### begin() {#a901d37d96ab59b0863e78774a0b72079}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::iterator micro_os_plus::utils::doubly_list&lt; T, L &gt;::begin ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Iterator begin.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>An iterator to the first element.</p></dd>
</dl>


<p>Returns an iterator to the first element in the list. For statically allocated lists, asserts that the list is already initialised. The iterator will point to the node after the internal links node (the head). If the list is empty, the iterator will compare equal to <span class="doxyComputerOutput"><a href="#a9abe477245ac344d306a9ed55f6a4430">end()</a></span>.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00439">439</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00494">494</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a901d37d96ab59b0863e78774a0b72079">494</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a901d37d96ab59b0863e78774a0b72079">doubly_list&lt;T, L&gt;::begin</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">495</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">496</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">497</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">498</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">499</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">500</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">501</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">502</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialised ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">503</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">504</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">505</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a>{ </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.next ()) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">506</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a> and <a href="#a0314a3e78b3cd027ffed6975a3da4ffa">micro_os_plus::utils::doubly_list&lt; T, L &gt;::rend</a>.</p>

</div>
</div>

### clear() {#a0748cb8980a43053479be54b576910b0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list&lt; T, L &gt;::clear (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Clear the list.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>The <span class="doxyComputerOutput"><a href="#a0748cb8980a43053479be54b576910b0">clear()</a></span> method initialises the mandatory internal links node so that both its <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers refer to itself. This marks the list as empty and ensures it is in a safe, known state, ready for new insertions. This operation is typically used to reset the list, removing all elements and breaking any existing links.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00389">389</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00395">395</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0748cb8980a43053479be54b576910b0">395</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0748cb8980a43053479be54b576910b0">doubly_list&lt;T, L&gt;::clear</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">396</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">397</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">398</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a34e804930d1b4ab2ea7a538ab4b17d97">399</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">400</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">401</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialise ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">402</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#a7105e8211e6c99d4b589759db0b60172">micro_os_plus::utils::doubly_list&lt; T, L &gt;::doubly_list</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### empty() {#a1031c0cc9462644160ea66eaa4c3d700}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list&lt; T, L &gt;::empty (void)</td>
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

<p>Check if the list is empty.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Return Values</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">true</td>
<td class="doxyParamItemDescription"><p>The list has <b>no</b> nodes.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The list has <b>at least one</b> node.</p></td>
</tr>
</table>
</dd>
</dl>

<p>Checks whether the list contains any nodes. The list is considered empty if the internal links node is not linked to any other nodes. This method provides a fast way to determine if the list has elements or is currently empty.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00378">378</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00379">379</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a1031c0cc9462644160ea66eaa4c3d700">379</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a1031c0cc9462644160ea66eaa4c3d700">doubly_list&lt;T, L&gt;::empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">380</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">381</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// If the links node is not linked, the list is empty.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">382</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> !<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.linked ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">383</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#aae54cb514e9356a017b79c862abaa378">micro_os_plus::utils::doubly_list&lt; T, L &gt;::~doubly_list</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac60af945ef1a00463fc38dac3bdad84">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::empty</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### end() {#a9abe477245ac344d306a9ed55f6a4430}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::iterator micro_os_plus::utils::doubly_list&lt; T, L &gt;::end ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Iterator end.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>An iterator positioned after the last element.</p></dd>
</dl>


<p>Returns an iterator to the position after the last element in the list (the end iterator). This iterator points to the internal links node, which acts as a sentinel. It is used as the past-the-end marker in iteration and comparison operations. The end iterator does not reference any valid list element.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00447">447</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00518">518</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9abe477245ac344d306a9ed55f6a4430">518</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a9abe477245ac344d306a9ed55f6a4430">doubly_list&lt;T, L&gt;::end</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">519</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">520</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">521</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">522</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">523</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">524</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert would probably be redundant, since it was</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">525</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// already tested in `begin()`.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">526</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">527</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a806d82876c5eadc20150fccb4d380d64">iterator</a>{ </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">528</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight"><a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a>*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>)) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">529</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a> and <a href="#aa59f07f0ab869376dfb09dbbe11a92d4">micro_os_plus::utils::doubly_list&lt; T, L &gt;::rbegin</a>.</p>

</div>
</div>

### head() {#a34e804930d1b4ab2ea7a538ab4b17d97}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::pointer micro_os_plus::utils::doubly_list&lt; T, L &gt;::head (void)</td>
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

<p>Get the list <b>head</b>.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the head node.</p></dd>
</dl>


<p>Returns a pointer to the first node in the list. If the list is empty, this will point to the internal links node itself, which can be used to detect the end of the list during iteration. The returned pointer should be checked against <span class="doxyComputerOutput"><a href="#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> or the sentinel node to determine if the list contains any elements.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00399">399</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00414">414</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a34e804930d1b4ab2ea7a538ab4b17d97">414</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a34e804930d1b4ab2ea7a538ab4b17d97">doubly_list&lt;T, L&gt;::head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">415</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">416</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a06b1703840274b544b5886a9190bef4b">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">417</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#af56d27306de13d542af3fc75c8b33a98">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_head</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### initialise\_once() {#ab42aae2bfccbee1628b1b470911f6def}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialise_once (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Initialise the list only at first run.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>true if the list was initialised, false otherwise.</p></dd>
</dl>


<p>If the statically allocated list is still in the initial <em>uninitialised</em> state (with both pointers null), this method initialises the list to the empty state, with both pointers pointing to itself. For non-statically initialised lists, this method has no effect.</p>



:::info
<p>Must be manually called for statically allocated lists before inserting elements or performing any other operations.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00367">367</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00354">354</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ab42aae2bfccbee1628b1b470911f6def">354</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ab42aae2bfccbee1628b1b470911f6def">doubly_list&lt;T, L&gt;::initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">355</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2b0c8c399237932f92c93a60d26f2bea">356</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">357</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">358</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">359</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">360</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">361</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">362</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialise_once ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">363</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">364</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">365</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">366</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ab42aae2bfccbee1628b1b470911f6def">367</a></span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">368</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a354dd2dfa628779115681a8699098f50">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::initialise_once</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### initialised() {#a2b0c8c399237932f92c93a60d26f2bea}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialised (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Check if the list is initialised (only statically allocated lists can be uninitialised).</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Return Values</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">true</td>
<td class="doxyParamItemDescription"><p>The list was initialised.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The list was <b>not</b> initialised.</p></td>
</tr>
</table>
</dd>
</dl>

<p>An uninitialised node is a node with any of the pointers set to <span class="doxyComputerOutput">nullptr</span>. Only statically allocated nodes in the initial state are considered <em>uninitialised</em>. For dynamically allocated lists, this method always returns <span class="doxyComputerOutput">true</span> since their nodes are explicitly initialised during construction.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00356">356</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00328">328</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2b0c8c399237932f92c93a60d26f2bea">328</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a2b0c8c399237932f92c93a60d26f2bea">doubly_list&lt;T, L&gt;::initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">329</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">330</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">331</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">332</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialised ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">333</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">334</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">335</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">336</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">337</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">338</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### link\_head() {#af31780e2a87d34eca81ad2a8f47afe2c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list&lt; T, L &gt;::link_head (<a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Add a node to the head of the list.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">[in] node</td>
<td class="doxyParamItemDescription"><p>Reference to the node to add.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Adds a new node to the beginning (head) of the list. For statically allocated lists, asserts that the list is already initialised. The new node is linked before the current head node, updating the list structure accordingly. This operation does not check for duplicate nodes or whether the node is already linked elsewhere.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00429">429</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00469">469</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af31780e2a87d34eca81ad2a8f47afe2c">469</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#af31780e2a87d34eca81ad2a8f47afe2c">doubly_list&lt;T, L&gt;::link_head</a> (<a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">470</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">471</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">472</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p %p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">, &amp;node);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">473</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">474</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">475</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">476</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">477</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialised ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">478</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">479</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">480</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add the new node at the head of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">481</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a34e804930d1b4ab2ea7a538ab4b17d97">head</a> ()-&gt;link_previous (&amp;node);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">482</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### link\_tail() {#ab700f9e890a253eeefb42c8a15b9e403}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list&lt; T, L &gt;::link_tail (<a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Add a node to the tail of the list.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">[in] node</td>
<td class="doxyParamItemDescription"><p>Reference to the node to add.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Adds a new node to the end (tail) of the list. For statically allocated lists, asserts that the list is already initialised. The new node is linked after the current tail node, updating the list structure accordingly. This operation does not check for duplicate nodes or whether the node is already linked elsewhere.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00419">419</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00444">444</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ab700f9e890a253eeefb42c8a15b9e403">444</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ab700f9e890a253eeefb42c8a15b9e403">doubly_list&lt;T, L&gt;::link_tail</a> (<a href="#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">445</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">446</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9abe477245ac344d306a9ed55f6a4430">447</a></span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p %p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">, &amp;node);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">448</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">449</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">450</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">451</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">452</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialised ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">453</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">454</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa59f07f0ab869376dfb09dbbe11a92d4">455</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add new node at the end of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">456</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a6e9d3f30c694a21d98098cac97802ecb">tail</a> ()-&gt;link_next (&amp;node);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">457</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### links\_pointer() {#ad30c1c31d1fe0d806ec271aa58e8eb4d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">const doubly_list&lt; T, L &gt;::links_type * micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_pointer (void)</td>
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

<p>Get the address of the node storing the list links.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A pointer to the internal links node.</p></dd>
</dl>


<p>Returns the address of the <span class="doxyComputerOutput"><a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></span> member. This method is required by derived classes (such as <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span>) when constructing their <span class="doxyComputerOutput"><a href="#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> iterator, where a direct reference to the protected member is not accessible.</p>


<p>Returns the address of the <span class="doxyComputerOutput"><a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></span> member directly. This method is required by derived classes (such as <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span>) when constructing their <span class="doxyComputerOutput"><a href="#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> iterator, where a direct reference to the protected member is not accessible from the derived scope.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00481">481</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00566">566</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">566</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">doubly_list&lt;T, L&gt;::links_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">567</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">568</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> &amp;<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">569</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a4c9475e107b02f9940623ec283b5e789">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::end</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### rbegin() {#aa59f07f0ab869376dfb09dbbe11a92d4}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::reverse_iterator micro_os_plus::utils::doubly_list&lt; T, L &gt;::rbegin ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Reverse iterator begin.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A reverse iterator positioned at the last element.</p></dd>
</dl>


<p>Returns a reverse iterator to the last element in the list. Equivalent to <span class="doxyComputerOutput"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a>{ <a href="#a9abe477245ac344d306a9ed55f6a4430">end()</a> }</span>. Traversal proceeds from the tail towards the head.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00455">455</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00539">539</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa59f07f0ab869376dfb09dbbe11a92d4">539</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aa59f07f0ab869376dfb09dbbe11a92d4">doubly_list&lt;T, L&gt;::rbegin</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">540</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">541</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a>{ <a href="#a9abe477245ac344d306a9ed55f6a4430">end</a> () };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">542</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a9abe477245ac344d306a9ed55f6a4430">micro_os_plus::utils::doubly_list&lt; T, L &gt;::end</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### rend() {#a0314a3e78b3cd027ffed6975a3da4ffa}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::reverse_iterator micro_os_plus::utils::doubly_list&lt; T, L &gt;::rend ()</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Reverse iterator end.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A reverse iterator positioned before the first element.</p></dd>
</dl>


<p>Returns a reverse iterator to the position before the first element in the list. Equivalent to <span class="doxyComputerOutput"><a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a>{ <a href="#a901d37d96ab59b0863e78774a0b72079">begin()</a> }</span>. Used as the past-the-end marker for reverse-direction iteration.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00463">463</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00552">552</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0314a3e78b3cd027ffed6975a3da4ffa">552</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0314a3e78b3cd027ffed6975a3da4ffa">doubly_list&lt;T, L&gt;::rend</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">553</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">554</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a>{ <a href="#a901d37d96ab59b0863e78774a0b72079">begin</a> () };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">555</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a901d37d96ab59b0863e78774a0b72079">micro_os_plus::utils::doubly_list&lt; T, L &gt;::begin</a>.</p>


<p>Referenced by <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

### tail() {#a6e9d3f30c694a21d98098cac97802ecb}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list&lt; T, L &gt;::pointer micro_os_plus::utils::doubly_list&lt; T, L &gt;::tail (void)</td>
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

<p>Get the list <b>tail</b>.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the tail node.</p></dd>
</dl>


<p>Returns a pointer to the last node in the list. If the list is empty, this will point to the internal links node itself, which can be used to detect the end of the list during reverse iteration. The returned pointer should be checked against the sentinel node to determine if the list contains any elements.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00409">409</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h/#l00429">429</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af31780e2a87d34eca81ad2a8f47afe2c">429</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a6e9d3f30c694a21d98098cac97802ecb">doubly_list&lt;T, L&gt;::tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">430</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">431</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a06b1703840274b544b5886a9190bef4b">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">432</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac0693cd4f727c8e7895cdaa88beed572">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_tail</a> and <a href="#a8b1c494a5d53f363c7905cabb23da66c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::operator=</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### links\_ {#a33f7b43e5620467ed3ea3a1b38b86e45}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;doubly_list_links_node T, doubly_list_links_node L = doubly_list_links&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">links_type micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</td>
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

<p>The list top node used to point to <b>head</b> and <b>tail</b> nodes.</p>


<p>This member stores the internal links node for the list. The <b>next</b> pointer of this node points to the head of the list, and the <b>previous</b> pointer points to the tail. For an empty list, both pointers refer to the node itself, simplifying list management and boundary checks.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h/#l00496">496</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a33f7b43e5620467ed3ea3a1b38b86e45">496</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> <a href="#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#a901d37d96ab59b0863e78774a0b72079">micro_os_plus::utils::doubly_list&lt; T, L &gt;::begin</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#adef2b182f0ffdecb849e7e134c519972">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::begin</a>, <a href="#a1031c0cc9462644160ea66eaa4c3d700">micro_os_plus::utils::doubly_list&lt; T, L &gt;::empty</a>, <a href="#a9abe477245ac344d306a9ed55f6a4430">micro_os_plus::utils::doubly_list&lt; T, L &gt;::end</a>, <a href="#a34e804930d1b4ab2ea7a538ab4b17d97">micro_os_plus::utils::doubly_list&lt; T, L &gt;::head</a>, <a href="#a2b0c8c399237932f92c93a60d26f2bea">micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialised</a>, <a href="#af31780e2a87d34eca81ad2a8f47afe2c">micro_os_plus::utils::doubly_list&lt; T, L &gt;::link_head</a>, <a href="#ad30c1c31d1fe0d806ec271aa58e8eb4d">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_pointer</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aeefaa688359ada2d5891db7888a0c9ff">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a7878a8547530eabf72a45d32a6bb5b61">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail</a>.</p>

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
