---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/intrusive-list
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `intrusive_list` Class Template

<p>A class template for a list of nodes which store the links inside themselves as intrusive nodes. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;<br/>
class micro_os_plus::utils::intrusive_list&lt;T, N, MP, L, U&gt; { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>"
</div>

## Base class

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">doubly_list&lt;T, L&gt;</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class template for a doubly linked list of nodes. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Typedefs Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a> = ptrdiff_t</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer difference. <a href="#ac680e68f2e9956c87105cccdfbedeb6b">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a265d899bb1ab09596057665937377481">is_statically_allocated</a> = typename links_type::is_statically_allocated</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating if the links node is statically allocated. <a href="#a265d899bb1ab09596057665937377481">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a6c44dc25422336e98d5c450874496041">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator</a>&lt; T, N, MP, U &gt;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of iterator over the values. <a href="#a6c44dc25422336e98d5c450874496041">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> = N *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to the iterator internal pointer. <a href="#a3c9a90f0bde3f7d498d4419c41adf723">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a> = L</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of the list links node object where the pointers to the list head and tail are stored. <a href="#a0bb5c5cba26ff911bbae525200d9e3c1">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a> *</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of pointer to object <em>pointed to</em> by the iterator. <a href="#ac7006fb066460b5ff008f6f64d62e272">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a> &amp;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reference to object <em>pointed to</em> by the iterator. <a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a> = std::reverse_iterator&lt; <a href="#a6c44dc25422336e98d5c450874496041">iterator</a> &gt;</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of reverse iterator over the values. <a href="#a65a1af0be82741cf1759c7ef3d237baf">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a75fc498797691719252818fb40047e14">value_type</a> = U</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type of value <em>pointed to</em> by the iterator. <a href="#a75fc498797691719252818fb40047e14">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aac471c87c75b56ee264396e144367186">intrusive_list</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an intrusive doubly linked list. <a href="#aac471c87c75b56ee264396e144367186">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemNoTypeNameTemplate" colspan="2" align="left" valign="top"><a href="#ae66333c76d059f070d959298e0fa396c">intrusive_list</a> (const intrusive_list &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#ae66333c76d059f070d959298e0fa396c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemNoTypeNameTemplate" colspan="2" align="left" valign="top"><a href="#ace009ba3457127e9311d9fc8ae80b181">intrusive_list</a> (intrusive_list &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#ace009ba3457127e9311d9fc8ae80b181">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">~intrusive_list</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the list. <a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#aac471c87c75b56ee264396e144367186">intrusive_list</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a96c735ada72f8b5f08b07b40bd315bb4">operator=</a> (const intrusive_list &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a96c735ada72f8b5f08b07b40bd315bb4">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#aac471c87c75b56ee264396e144367186">intrusive_list</a> &amp;</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aefd72bb2624733146adfd2f1de3f341e">operator=</a> (intrusive_list &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#aefd72bb2624733146adfd2f1de3f341e">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a6c44dc25422336e98d5c450874496041">iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#adef2b182f0ffdecb849e7e134c519972">begin</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator begin. <a href="#adef2b182f0ffdecb849e7e134c519972">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">clear</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Clear the list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aac60af945ef1a00463fc38dac3bdad84">empty</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is empty. <a href="#aac60af945ef1a00463fc38dac3bdad84">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a6c44dc25422336e98d5c450874496041">iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4c9475e107b02f9940623ec283b5e789">end</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator end. <a href="#a4c9475e107b02f9940623ec283b5e789">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">head</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>head</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a354dd2dfa628779115681a8699098f50">initialise_once</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the list only at first run. <a href="#a354dd2dfa628779115681a8699098f50">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">initialised</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is initialised (only statically allocated lists can be uninitialised). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#af56d27306de13d542af3fc75c8b33a98">link_head</a> (reference node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the head of the list. <a href="#af56d27306de13d542af3fc75c8b33a98">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ac0693cd4f727c8e7895cdaa88beed572">link_tail</a> (reference node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the tail of the list. <a href="#ac0693cd4f727c8e7895cdaa88beed572">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr const <a href="#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a> *</td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">links_pointer</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the address of the node storing the list links. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a3ddaec2647ff81b7af23a51129d46b25">rbegin</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reverse iterator begin. <a href="#a3ddaec2647ff81b7af23a51129d46b25">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#add97ee6a82f85e13879740459c67a06f">rend</a> () const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reverse iterator end. <a href="#add97ee6a82f85e13879740459c67a06f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top">constexpr <a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">tail</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>tail</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#aeefaa688359ada2d5891db7888a0c9ff">unlink_head</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Unlink the first element from the list. <a href="#aeefaa688359ada2d5891db7888a0c9ff">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a7878a8547530eabf72a45d32a6bb5b61">unlink_tail</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Unlink the last element from the list. <a href="#a7878a8547530eabf72a45d32a6bb5b61">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Functions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexTemplate">
<td class="doxyMemberIndexTemplate" colspan="2"><div>template &lt; ... &gt;</div></td>
</tr>
<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a7544708bb62129c7ca80053bb2a09012">get_pointer</a> (iterator_pointer node) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the address of the object from the intrusive node pointer. <a href="#a7544708bb62129c7ca80053bb2a09012">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a></td>
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>The list top node used to point to <b>head</b> and <b>tail</b> nodes. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class template for a list of nodes which store the links inside themselves as intrusive nodes.</p>


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
<td class="doxyParamItemDescription"><p>Type of intrusive node with the next &amp; previous links.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">MP</td>
<td class="doxyParamItemDescription"><p>Name of the intrusive node member in object T.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">L</td>
<td class="doxyParamItemDescription"><p>Type of the links node (one of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span> or <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></span>).</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">U</td>
<td class="doxyParamItemDescription"><p>Type stored in the list, derived from T.</p></td>
</tr>
</table>
</dd>
</dl>

<p>This class implements an intrusive doubly linked list, where each object stores its own link node as a member. The list maintains a pair of head and tail pointers, allowing efficient insertion, removal, and iteration. The intrusive approach eliminates the need for separate node allocations, as the links are embedded within the objects themselves.</p>


<p>The template parameter <span class="doxyComputerOutput">MP</span> specifies the member pointer to the intrusive node within the object, enabling the list to compute the address of the parent object from the node pointer. This design supports both regular and statically allocated lists, depending on the type used for <span class="doxyComputerOutput">L</span>.</p>


<p>Iterators provide access to the objects in the list, supporting bidirectional traversal.</p>


<p><b>Example</b></p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyNoLineNumber">&nbsp;</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">namespace </span><span class="doxyHighlight">os = micro_os_plus;</span></span></div>
<div class="doxyCodeLine"><span class="doxyNoLineNumber">&nbsp;</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight">threads_list = os::utils::intrusive_list&lt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyNoLineNumber">&nbsp;</span><span class="doxyLineContent"><span class="doxyHighlight">  thread, os::utils::doubly_list_links, &amp;thread::child_links_&gt;;</span></span></div>

</div>


<p>For statically allocated lists, set L=<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a>.</p>


<p>Definition at line 277 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### difference\_type {#ac680e68f2e9956c87105cccdfbedeb6b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::difference_type = ptrdiff_t</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer difference.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00325">325</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">325</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a> = ptrdiff_t;</span></span></div>

</div>

</div>
</div>

### is\_statically\_allocated {#a265d899bb1ab09596057665937377481}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::is_statically_allocated = 
typename links_type::is_statically_allocated</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating if the links node is statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00314">314</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a265d899bb1ab09596057665937377481">314</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a265d899bb1ab09596057665937377481">is_statically_allocated</a> =</span></span></div>

</div>

</div>
</div>

### iterator {#a6c44dc25422336e98d5c450874496041}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::iterator = intrusive_list_iterator&lt;T, N, MP, U&gt;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of iterator over the values.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00304">304</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6c44dc25422336e98d5c450874496041">304</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a6c44dc25422336e98d5c450874496041">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator&lt;T, N, MP, U&gt;</a>;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#a3c9a90f0bde3f7d498d4419c41adf723}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::iterator_pointer = N*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00320">320</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">320</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> = N*;</span></span></div>

</div>

</div>
</div>

### links\_type {#a0bb5c5cba26ff911bbae525200d9e3c1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::links_type = L</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of the list links node object where the pointers to the list head and tail are stored.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00284">284</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">284</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a> = L;</span></span></div>

</div>

</div>
</div>

### pointer {#ac7006fb066460b5ff008f6f64d62e272}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::pointer = value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00294">294</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac7006fb066460b5ff008f6f64d62e272">294</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#aa9d68f393f6506fd6d84d7f9e7e520c3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::reference = value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00299">299</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">299</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### reverse\_iterator {#a65a1af0be82741cf1759c7ef3d237baf}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::reverse_iterator = std::reverse_iterator&lt;iterator&gt;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reverse iterator over the values.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00309">309</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a65a1af0be82741cf1759c7ef3d237baf">309</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a> = std::reverse_iterator&lt;iterator&gt;;</span></span></div>

</div>

</div>
</div>

### value\_type {#a75fc498797691719252818fb40047e14}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::value_type = U</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00289">289</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a75fc498797691719252818fb40047e14">289</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a75fc498797691719252818fb40047e14">value_type</a> = U;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### intrusive\_list() {#aac471c87c75b56ee264396e144367186}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list ()</td>
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

<p>Construct an intrusive doubly linked list.</p>


<p>The default constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span> creates an empty intrusive list. No initialisation of internal pointers is performed here; for statically allocated lists, the pointers are expected to be zero-initialised by the runtime, while for dynamically allocated lists, initialisation is handled by the base class or explicit methods.</p>


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> objects. This ensures the integrity of the list structure, as duplicating or moving lists could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00330">330</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00282">282</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aac471c87c75b56ee264396e144367186">282</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#aac471c87c75b56ee264396e144367186">intrusive_list&lt;T, N, MP, L, U&gt;::intrusive_list</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">283</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">284</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">285</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">286</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">287</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#ae66333c76d059f070d959298e0fa396c">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>, <a href="#ace009ba3457127e9311d9fc8ae80b181">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>, <a href="#a96c735ada72f8b5f08b07b40bd315bb4">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a> and <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### intrusive\_list() {#ae66333c76d059f070d959298e0fa396c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list (const intrusive_list &amp;)</td>
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


<p>Copying of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span> instances is explicitly disallowed to prevent accidental duplication, which could compromise the integrity of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00342">342</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<p>Reference <a href="#aac471c87c75b56ee264396e144367186">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>.</p>

</div>
</div>

### intrusive\_list() {#ace009ba3457127e9311d9fc8ae80b181}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list (intrusive_list &amp;&amp;)</td>
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


<p>Moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span> instances is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving lists.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00352">352</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<p>Reference <a href="#aac471c87c75b56ee264396e144367186">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~intrusive\_list() {#a6ba6bf42bf7abceddaaabb3ec8bb3e3d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::~intrusive_list ()</td>
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


<p>The destructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span> does not perform any cleanup or pointer manipulation. List management and node unlinking are handled elsewhere, so the destructor is intentionally left empty to avoid unnecessary writes or side effects during object destruction.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00380">380</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00298">298</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">298</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">intrusive_list&lt;T, N, MP, L, U&gt;::~intrusive_list</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">299</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">300</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">301</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">302</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">303</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a96c735ada72f8b5f08b07b40bd315bb4}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list &amp; micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator= (const <a href="#aac471c87c75b56ee264396e144367186">intrusive_list</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00363">363</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<p>Reference <a href="#aac471c87c75b56ee264396e144367186">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>.</p>

</div>
</div>

### operator=() {#aefd72bb2624733146adfd2f1de3f341e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list &amp; micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator= (<a href="#aac471c87c75b56ee264396e144367186">intrusive_list</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00374">374</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>.</p>


<p>References <a href="#aac471c87c75b56ee264396e144367186">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list</a>, <a href="#adef2b182f0ffdecb849e7e134c519972">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::begin</a>, <a href="#aac60af945ef1a00463fc38dac3bdad84">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::empty</a>, <a href="#a4c9475e107b02f9940623ec283b5e789">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::end</a>, <a href="#a7544708bb62129c7ca80053bb2a09012">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::get_pointer</a>, <a href="#a354dd2dfa628779115681a8699098f50">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::initialise_once</a>, <a href="#af56d27306de13d542af3fc75c8b33a98">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_head</a>, <a href="#ac0693cd4f727c8e7895cdaa88beed572">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_tail</a>, <a href="#a3ddaec2647ff81b7af23a51129d46b25">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rbegin</a>, <a href="#add97ee6a82f85e13879740459c67a06f">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rend</a>, <a href="#aeefaa688359ada2d5891db7888a0c9ff">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head</a> and <a href="#a7878a8547530eabf72a45d32a6bb5b61">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### begin() {#adef2b182f0ffdecb849e7e134c519972}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::iterator micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::begin ()</td>
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

<p>Iterator begin.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>An iterator positioned at the first element.</p></dd>
</dl>


<p>Returns an iterator to the first element in the intrusive list. The iterator points to the node after the internal links node (the head). For statically allocated lists, the initialisation check is handled by the links class. If the list is empty, the iterator will compare equal to <span class="doxyComputerOutput"><a href="#a4c9475e107b02f9940623ec283b5e789">end()</a></span>.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00455">455</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00421">421</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#adef2b182f0ffdecb849e7e134c519972">421</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#adef2b182f0ffdecb849e7e134c519972">intrusive_list&lt;T, N, MP, L, U&gt;::begin</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">422</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">423</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">424</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">425</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">426</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">427</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">428</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">429</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a6c44dc25422336e98d5c450874496041">iterator</a>{ </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">430</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">doubly_list&lt;N, L&gt;::links_</a>.next ()) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">431</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a> and <a href="#add97ee6a82f85e13879740459c67a06f">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rend</a>.</p>

</div>
</div>

### clear() {#a0748cb8980a43053479be54b576910b0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">clear()</a></span> method initialises the mandatory internal links node so that both its <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers refer to itself. This marks the list as empty and ensures it is in a safe, known state, ready for new insertions. This operation is typically used to reset the list, removing all elements and breaking any existing links.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00391">391</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h/#l00394">394</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">394</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">doubly_list&lt;T, L&gt;::clear</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">395</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">396</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">397</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">398</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">399</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">400</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialise ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">401</a></span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### empty() {#aac60af945ef1a00463fc38dac3bdad84}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::empty (void)</td>
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

<p>Checks whether the intrusive list contains any nodes. This method delegates to the underlying double list implementation to determine if the list is empty. The list is considered empty if there are no elements linked.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00403">403</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00334">334</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aac60af945ef1a00463fc38dac3bdad84">334</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aac60af945ef1a00463fc38dac3bdad84">intrusive_list&lt;T, N, MP, L, U&gt;::empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">335</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">336</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a1031c0cc9462644160ea66eaa4c3d700">doubly_list&lt;N, L&gt;::empty</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">337</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a1031c0cc9462644160ea66eaa4c3d700">micro_os_plus::utils::doubly_list&lt; T, L &gt;::empty</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>, <a href="#aeefaa688359ada2d5891db7888a0c9ff">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head</a> and <a href="#a7878a8547530eabf72a45d32a6bb5b61">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail</a>.</p>

</div>
</div>

### end() {#a4c9475e107b02f9940623ec283b5e789}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::iterator micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::end ()</td>
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

<p>Iterator end.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>An iterator positioned after the last element.</p></dd>
</dl>


<p>Returns an iterator to the position after the last element in the intrusive list (the end iterator). This iterator points to the internal links node, which acts as a sentinel. It is used as the past-the-end marker in iteration and comparison operations. The end iterator does not reference any valid list element.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00463">463</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00444">444</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4c9475e107b02f9940623ec283b5e789">444</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a4c9475e107b02f9940623ec283b5e789">intrusive_list&lt;T, N, MP, L, U&gt;::end</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">445</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">446</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">447</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">448</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">449</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">450</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert would probably be redundant, since it was</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">451</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// already tested in `begin()`.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">452</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">453</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight">links_type_ = </span><span class="doxyHighlightKeyword">typename</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">doubly_list&lt;N, L&gt;::links_type</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">454</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a6c44dc25422336e98d5c450874496041">iterator</a>{ </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">455</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">links_type_*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">doubly_list&lt;N, L&gt;::links_pointer</a> ())) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">456</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_pointer</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a> and <a href="#a3ddaec2647ff81b7af23a51129d46b25">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rbegin</a>.</p>

</div>
</div>

### head() {#a34e804930d1b4ab2ea7a538ab4b17d97}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>Returns a pointer to the first node in the list. If the list is empty, this will point to the internal links node itself, which can be used to detect the end of the list during iteration. The returned pointer should be checked against <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> or the sentinel node to determine if the list contains any elements.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00401">401</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h/#l00413">413</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">413</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">doubly_list&lt;T, L&gt;::head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">414</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">415</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">416</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### initialise\_once() {#a354dd2dfa628779115681a8699098f50}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::initialise_once (void)</td>
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


<p>If the statically allocated list is still in the initial uninitialised state (with both pointers null), this method initialises the list to the empty state, with both pointers pointing to itself. For non-statically initialised lists, this method has no effect.</p>



:::info
<p>Must be manually called for statically allocated lists before inserting elements or performing any other operations.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00392">392</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00319">319</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a354dd2dfa628779115681a8699098f50">319</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a354dd2dfa628779115681a8699098f50">intrusive_list&lt;T, N, MP, L, U&gt;::initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">320</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">321</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab42aae2bfccbee1628b1b470911f6def">doubly_list&lt;N, L&gt;::initialise_once</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">322</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab42aae2bfccbee1628b1b470911f6def">micro_os_plus::utils::doubly_list&lt; T, L &gt;::initialise_once</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### initialised() {#a2b0c8c399237932f92c93a60d26f2bea}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00358">358</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h/#l00327">327</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">327</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">doubly_list&lt;T, L&gt;::initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">328</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">329</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">330</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">331</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.initialised ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">332</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">333</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">334</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">335</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">336</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">337</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; N, doubly_list_links &gt;::links_</a>.</p>

</div>
</div>

### link\_head() {#af56d27306de13d542af3fc75c8b33a98}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_head (<a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node)</td>
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
<td class="doxyParamItemDescription"><p>Reference to a list node.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Adds a new node to the beginning (head) of the intrusive list. The offset of the intrusive node member within the containing object is computed, and the node is linked before the current head node. This operation does not check for duplicate nodes or whether the node is already linked elsewhere. For statically allocated lists, the initialisation check is handled by the links class.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00423">423</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00384">384</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af56d27306de13d542af3fc75c8b33a98">384</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#af56d27306de13d542af3fc75c8b33a98">intrusive_list&lt;T, N, MP, L, U&gt;::link_head</a> (U&amp; node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">385</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">386</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">387</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p %p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">),</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">388</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">389</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">390</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">391</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">392</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">393</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the byte offset of the intrusive node member within T.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">394</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Note: see the comment in get_pointer() regarding the use of</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">395</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// a null pointer dereference to obtain the member offset.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">396</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">397</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">398</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">399</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add thread intrusive node at the beginning of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">400</span><span class="doxyLineContent"><span class="doxyHighlight">    (</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">doubly_list&lt;N, L&gt;::head</a> ()))</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">401</span><span class="doxyLineContent"><span class="doxyHighlight">        -&gt;link_previous (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">402</span><span class="doxyLineContent"><span class="doxyHighlight">            </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node) + offset));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">403</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">micro_os_plus::utils::doubly_list&lt; T, L &gt;::head</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### link\_tail() {#ac0693cd4f727c8e7895cdaa88beed572}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_tail (<a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node)</td>
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
<td class="doxyParamItemDescription"><p>Reference to a list node.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Adds a new node to the end (tail) of the intrusive list. The offset of the intrusive node member within the containing object is computed, and the node is linked after the current tail node. This operation does not check for duplicate nodes or whether the node is already linked elsewhere. For statically allocated lists, the initialisation check is handled by the links class.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00413">413</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00351">351</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac0693cd4f727c8e7895cdaa88beed572">351</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ac0693cd4f727c8e7895cdaa88beed572">intrusive_list&lt;T, N, MP, L, U&gt;::link_tail</a> (U&amp; node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">352</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">353</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">354</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p %p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">),</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">355</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">356</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">357</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">358</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">359</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">360</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the byte offset of the intrusive node member within T.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">361</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Note: see the comment in get_pointer() regarding the use of</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">362</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// a null pointer dereference to obtain the member offset.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">363</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">364</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">365</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">366</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add thread intrusive node at the end of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">367</span><span class="doxyLineContent"><span class="doxyHighlight">    (</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">doubly_list&lt;N, L&gt;::tail</a> ()))</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">368</span><span class="doxyLineContent"><span class="doxyHighlight">        -&gt;link_next (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">369</span><span class="doxyLineContent"><span class="doxyHighlight">            </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node) + offset));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">370</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">micro_os_plus::utils::doubly_list&lt; T, L &gt;::tail</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### links\_pointer() {#ad30c1c31d1fe0d806ec271aa58e8eb4d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>Returns the address of the <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></span> member. This method is required by derived classes (such as <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span>) when constructing their <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> iterator, where a direct reference to the protected member is not accessible.</p>


<p>Returns the address of the <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a></span> member directly. This method is required by derived classes (such as <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a></span>) when constructing their <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">end()</a></span> iterator, where a direct reference to the protected member is not accessible from the derived scope.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00483">483</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h/#l00567">567</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">567</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">doubly_list&lt;T, L&gt;::links_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">568</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">569</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> &amp;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">570</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### rbegin() {#a3ddaec2647ff81b7af23a51129d46b25}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::reverse_iterator micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rbegin ()</td>
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

<p>Reverse iterator begin.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A reverse iterator positioned at the last element.</p></dd>
</dl>


<p>Returns a reverse iterator to the last element in the intrusive list. Equivalent to <span class="doxyComputerOutput"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a>{ <a href="#a4c9475e107b02f9940623ec283b5e789">end()</a> }</span>. Traversal proceeds from the tail towards the head.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00471">471</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00467">467</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a3ddaec2647ff81b7af23a51129d46b25">467</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a3ddaec2647ff81b7af23a51129d46b25">intrusive_list&lt;T, N, MP, L, U&gt;::rbegin</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">468</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">469</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a>{ <a href="#a4c9475e107b02f9940623ec283b5e789">end</a> () };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">470</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a4c9475e107b02f9940623ec283b5e789">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::end</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### rend() {#add97ee6a82f85e13879740459c67a06f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::reverse_iterator micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::rend ()</td>
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

<p>Reverse iterator end.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A reverse iterator positioned before the first element.</p></dd>
</dl>


<p>Returns a reverse iterator to the position before the first element in the intrusive list. Equivalent to <span class="doxyComputerOutput"><a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a>{ <a href="#adef2b182f0ffdecb849e7e134c519972">begin()</a> }</span>. Used as the past-the-end marker for reverse-direction iteration.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00479">479</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00481">481</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#add97ee6a82f85e13879740459c67a06f">481</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#add97ee6a82f85e13879740459c67a06f">intrusive_list&lt;T, N, MP, L, U&gt;::rend</a> () const noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">482</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">483</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a>{ <a href="#adef2b182f0ffdecb849e7e134c519972">begin</a> () };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">484</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#adef2b182f0ffdecb849e7e134c519972">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::begin</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### tail() {#a6e9d3f30c694a21d98098cac97802ecb}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00411">411</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h/#l00428">428</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">428</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">doubly_list&lt;T, L&gt;::tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">429</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">430</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>.previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#af31780e2a87d34eca81ad2a8f47afe2c">431</a></span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### unlink\_head() {#aeefaa688359ada2d5891db7888a0c9ff}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::pointer micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head (void)</td>
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

<p>Unlink the first element from the list.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the first element in the list, or <span class="doxyComputerOutput">nullptr</span> if the list is empty.</p></dd>
</dl>


<p>Removes and unlinks the first element from the intrusive list. If the list is empty, returns <span class="doxyComputerOutput">nullptr</span> immediately without modifying the list. The method unlinks the node at the head of the list and returns a pointer to the parent object containing the unlinked node.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00445">445</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00530">530</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aeefaa688359ada2d5891db7888a0c9ff">530</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aeefaa688359ada2d5891db7888a0c9ff">intrusive_list&lt;T, N, MP, L, U&gt;::unlink_head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">531</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">532</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">533</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">534</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">535</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">536</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#aac60af945ef1a00463fc38dac3bdad84">empty</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">537</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">538</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">539</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">540</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">541</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The first element in the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">542</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> it</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">543</span><span class="doxyLineContent"><span class="doxyHighlight">        = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">doubly_list&lt;N, L&gt;::links_</a>.next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">544</span><span class="doxyLineContent"><span class="doxyHighlight">    it-&gt;unlink ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">545</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">546</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a7544708bb62129c7ca80053bb2a09012">get_pointer</a> (it);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">547</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#aac60af945ef1a00463fc38dac3bdad84">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::empty</a>, <a href="#a7544708bb62129c7ca80053bb2a09012">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::get_pointer</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

### unlink\_tail() {#a7878a8547530eabf72a45d32a6bb5b61}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::pointer micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail (void)</td>
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

<p>Unlink the last element from the list.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the last element in the list, or <span class="doxyComputerOutput">nullptr</span> if the list is empty.</p></dd>
</dl>


<p>Removes and unlinks the last element from the intrusive list. If the list is empty, returns <span class="doxyComputerOutput">nullptr</span> immediately without modifying the list. The method unlinks the node at the tail of the list and returns a pointer to the parent object containing the unlinked node.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00434">434</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00559">559</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a7878a8547530eabf72a45d32a6bb5b61">559</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a7878a8547530eabf72a45d32a6bb5b61">intrusive_list&lt;T, N, MP, L, U&gt;::unlink_tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">560</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">561</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">562</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">563</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">564</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">565</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#aac60af945ef1a00463fc38dac3bdad84">empty</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">566</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">567</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">568</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">569</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">570</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The last element in the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">571</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> it = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">572</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">doubly_list&lt;N, L&gt;::links_</a>.previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">573</span><span class="doxyLineContent"><span class="doxyHighlight">    it-&gt;unlink ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">574</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">575</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a7544708bb62129c7ca80053bb2a09012">get_pointer</a> (it);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">576</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#aac60af945ef1a00463fc38dac3bdad84">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::empty</a>, <a href="#a7544708bb62129c7ca80053bb2a09012">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::get_pointer</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">micro_os_plus::utils::doubly_list&lt; T, L &gt;::links_</a>.</p>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Functions

### get\_pointer() {#a7544708bb62129c7ca80053bb2a09012}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::pointer micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::get_pointer (<a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> node)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel inline">inline</span>
<span class="doxyMemberLabel nodiscard">nodiscard</span>
<span class="doxyMemberLabel noexcept">noexcept</span>
<span class="doxyMemberLabel protected">protected</span>
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Get the address of the object from the intrusive node pointer.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">node</td>
<td class="doxyParamItemDescription"><p>Pointer to the intrusive node.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>A pointer to the parent object containing the node.</p></dd>
</dl>


<p>Computes and returns a pointer to the parent object that contains the intrusive node referenced by the given node pointer. This is achieved by calculating the offset of the intrusive node member within the parent object type and subtracting it from the node's address. This allows retrieval of the full object from just the node pointer, enabling intrusive list traversal and manipulation.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h/#l00490">490</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h/#l00502">502</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a7544708bb62129c7ca80053bb2a09012">502</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a7544708bb62129c7ca80053bb2a09012">intrusive_list&lt;T, N, MP, L, U&gt;::get_pointer</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">503</span><span class="doxyLineContent"><span class="doxyHighlight">      <a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> node) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">504</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">505</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// static_assert(std::is_convertible&lt;U, T&gt;::value == true, "U must be</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">506</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// implicitly convertible to T!");</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">507</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">508</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the byte offset of the intrusive node member within T.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">509</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Note: see the comment in get_pointer() regarding the use of</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">510</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// a null pointer dereference to obtain the member offset.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">511</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">512</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">513</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">514</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the address of the object which includes the</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">515</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// intrusive node, by adjusting down the node address.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">516</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">517</span><span class="doxyLineContent"><span class="doxyHighlight">                                      - offset);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">518</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#aefd72bb2624733146adfd2f1de3f341e">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator=</a>, <a href="#aeefaa688359ada2d5891db7888a0c9ff">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head</a> and <a href="#a7878a8547530eabf72a45d32a6bb5b61">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### links\_ {#a33f7b43e5620467ed3ea3a1b38b86e45}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, doubly_list_links_node N, N T::* MP, doubly_list_links_node L = doubly_list_links, class U = T&gt;</div>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h/#l00498">498</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">498</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a1031c0cc9462644160ea66eaa4c3d700">micro_os_plus::utils::doubly_list&lt; N, doubly_list_links &gt;::empty</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">micro_os_plus::utils::doubly_list&lt; N, doubly_list_links &gt;::end</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">micro_os_plus::utils::doubly_list&lt; N, doubly_list_links &gt;::initialised</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
