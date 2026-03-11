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
template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;
class micro_os_plus::utils::intrusive_list&lt;T, N, MP, L, U&gt; { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Base class

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list">double_list&lt;T, L&gt;</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class template for a doubly linked list of nodes. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#details">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a54065d590254d59ade7c08ca0def9aff">is_statically_allocated</a> = typename links_type::is_statically_allocated</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating if the links node is statically allocated. <a href="#a54065d590254d59ade7c08ca0def9aff">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a05efb4b473471f15d792fb4042435bc2">intrusive_list</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an intrusive doubly linked list. <a href="#a05efb4b473471f15d792fb4042435bc2">More...</a></p>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;</td>
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
<td class="doxyMemberIndexItemTypeTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;</td>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a4b9e40a7f40719a137a45a18b914bfe5">begin</a> () const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator begin. <a href="#a4b9e40a7f40719a137a45a18b914bfe5">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ab19a62873a09745075bdceb60096c03c">clear</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Clear the list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ab19a62873a09745075bdceb60096c03c">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a0fa893095f3705c8dc2c59033258faac">empty</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is empty. <a href="#a0fa893095f3705c8dc2c59033258faac">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a7b1a1165f207467209a06cf7cb97e6be">end</a> () const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Iterator begin. <a href="#a7b1a1165f207467209a06cf7cb97e6be">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aba89961ff686c458b91bbe59f2480519">head</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>head</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aba89961ff686c458b91bbe59f2480519">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a6ea6345b2ce0664b1fc1bbd484d7a653">initialize_once</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialize the list only at first run. <a href="#a6ea6345b2ce0664b1fc1bbd484d7a653">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a69ff5a010ced371d2bff3e4ebe1fb13d">link_head</a> (reference node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the head of the list. <a href="#a69ff5a010ced371d2bff3e4ebe1fb13d">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a39f23959a6cd2774eb5ed1f1caeda242">link_tail</a> (reference node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Add a node to the tail of the list. <a href="#a39f23959a6cd2774eb5ed1f1caeda242">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a052a2e54bdf39df3c7d57e51a555ecab">links_pointer</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the address of the node storing the list links. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a052a2e54bdf39df3c7d57e51a555ecab">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a4ff535226e16d0d2e5aeb8c6a5590021">tail</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the list <b>tail</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a4ff535226e16d0d2e5aeb8c6a5590021">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aee22388cb4629e7a170c216cb95d0236">uninitialized</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the list is uninitialised (only statically allocated lists can be uninitialised). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aee22388cb4629e7a170c216cb95d0236">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#a5705b4896215d3fc3d8941c26e814bac">unlink_head</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Unlink the first element from the list. <a href="#a5705b4896215d3fc3d8941c26e814bac">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#ad499ca0d5953647f3a23876e28f73295">unlink_tail</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Unlink the last element from the list. <a href="#ad499ca0d5953647f3a23876e28f73295">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="#adec6609971de187a30fdc6607031c78a">get_pointer</a> (iterator_pointer node) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the address of the object from the intrusive node pointer. <a href="#adec6609971de187a30fdc6607031c78a">More...</a></p>
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
<td class="doxyMemberIndexItemNameTemplate" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>The list top node used to point to <b>head</b> and <b>tail</b> nodes. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">More...</a></p>
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
<td class="doxyParamItemDescription"><p>Type of the links node (one of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a></span> or <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a></span>).</p></td>
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
<div class="doxyCodeLine"><span class="doxyNoLineNumber">&nbsp;</span><span class="doxyLineContent"><span class="doxyHighlight">  thread, os::utils::double_list_links, &amp;thread::child_links_&gt;;</span></span></div>

</div>


<p>For statically allocated lists, set L=<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a>.</p>


<p>Definition at line 1140 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### difference\_type {#ac680e68f2e9956c87105cccdfbedeb6b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::difference_type =  ptrdiff_t</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer difference.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01188">1188</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">1188</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a> = ptrdiff_t;</span></span></div>

</div>

</div>
</div>

### is\_statically\_allocated {#a54065d590254d59ade7c08ca0def9aff}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01177">1177</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a54065d590254d59ade7c08ca0def9aff">1177</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a54065d590254d59ade7c08ca0def9aff">is_statically_allocated</a> =</span></span></div>

</div>

</div>
</div>

### iterator {#a6c44dc25422336e98d5c450874496041}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::iterator =  intrusive_list_iterator&lt;T, N, MP, U&gt;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of iterator over the values.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01172">1172</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6c44dc25422336e98d5c450874496041">1172</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a6c44dc25422336e98d5c450874496041">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator&lt;T, N, MP, U&gt;</a>;</span></span></div>

</div>

</div>
</div>

### iterator\_pointer {#a3c9a90f0bde3f7d498d4419c41adf723}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::iterator_pointer =  N*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to the iterator internal pointer.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01183">1183</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">1183</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> = N*;</span></span></div>

</div>

</div>
</div>

### links\_type {#a0bb5c5cba26ff911bbae525200d9e3c1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::links_type =  L</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of the list links node object where the pointers to the list head and tail are stored.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01152">1152</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">1152</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a> = L;</span></span></div>

</div>

</div>
</div>

### pointer {#ac7006fb066460b5ff008f6f64d62e272}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::pointer =  value_type*</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of pointer to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01162">1162</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac7006fb066460b5ff008f6f64d62e272">1162</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a>*;</span></span></div>

</div>

</div>
</div>

### reference {#aa9d68f393f6506fd6d84d7f9e7e520c3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::reference =  value_type&amp;</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of reference to object <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01167">1167</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">1167</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> = <a href="#a75fc498797691719252818fb40047e14">value_type</a>&amp;;</span></span></div>

</div>

</div>
</div>

### value\_type {#a75fc498797691719252818fb40047e14}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::value_type =  U</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type of value <em>pointed to</em> by the iterator.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01157">1157</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a75fc498797691719252818fb40047e14">1157</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a75fc498797691719252818fb40047e14">value_type</a> = U;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### intrusive\_list() {#a05efb4b473471f15d792fb4042435bc2}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01193">1193</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00961">961</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a05efb4b473471f15d792fb4042435bc2">961</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a05efb4b473471f15d792fb4042435bc2">intrusive_list&lt;T, N, MP, L, U&gt;::intrusive_list</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">962</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">963</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### intrusive\_list() {#ae66333c76d059f070d959298e0fa396c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01205">1205</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

### intrusive\_list() {#ace009ba3457127e9311d9fc8ae80b181}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::intrusive_list (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01215">1215</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~intrusive\_list() {#a6ba6bf42bf7abceddaaabb3ec8bb3e3d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01243">1243</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00973">973</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">973</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a6ba6bf42bf7abceddaaabb3ec8bb3e3d">intrusive_list&lt;T, N, MP, L, U&gt;::~intrusive_list</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">974</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">975</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a96c735ada72f8b5f08b07b40bd315bb4}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list &amp; micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01226">1226</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

### operator=() {#aefd72bb2624733146adfd2f1de3f341e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list &amp; micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01237">1237</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### begin() {#a4b9e40a7f40719a137a45a18b914bfe5}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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


<p>Returns an iterator to the first element in the intrusive list. The iterator points to the node after the internal links node (the head). For statically allocated lists, the initialisation check is handled by the links class. If the list is empty, the iterator will compare equal to <span class="doxyComputerOutput"><a href="#a7b1a1165f207467209a06cf7cb97e6be">end()</a></span>.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01316">1316</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01076">1076</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a4b9e40a7f40719a137a45a18b914bfe5">1076</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a4b9e40a7f40719a137a45a18b914bfe5">intrusive_list&lt;T, N, MP, L, U&gt;::begin</a> ()</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1077</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1078</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1079</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1080</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a6c44dc25422336e98d5c450874496041">iterator</a>{ </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1081</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">double_list&lt;N, L&gt;::links_</a>.next ()) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1082</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### clear() {#ab19a62873a09745075bdceb60096c03c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::clear (void)</td>
</tr>
</table>
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


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ab19a62873a09745075bdceb60096c03c">clear()</a></span> method initialises the mandatory internal links node so that both its <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers refer to itself. This marks the list as empty and ensures it is in a safe, known state, ready for new insertions. This operation is typically used to reset the list, removing all elements and breaking any existing links.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00821">821</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00601">601</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ab19a62873a09745075bdceb60096c03c">601</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ab19a62873a09745075bdceb60096c03c">double_list&lt;T, L&gt;::clear</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">602</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">603</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">604</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() @%p\n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">605</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">606</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>.initialize ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">607</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### empty() {#a0fa893095f3705c8dc2c59033258faac}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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
<span class="doxyMemberLabel constexpr">constexpr</span>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01266">1266</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01004">1004</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0fa893095f3705c8dc2c59033258faac">1004</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0fa893095f3705c8dc2c59033258faac">intrusive_list&lt;T, N, MP, L, U&gt;::empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1005</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1006</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#ae5fcdb79a6a10fa523cd39a5363ff76a">double_list&lt;N, L&gt;::empty</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1007</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### end() {#a7b1a1165f207467209a06cf7cb97e6be}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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
</span>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Iterator begin.</p>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>An iterator positioned after the last element.</p></dd>
</dl>


<p>Returns an iterator to the position after the last element in the intrusive list (the end iterator). This iterator points to the internal links node, which acts as a sentinel. It is used as the past-the-end marker in iteration and comparison operations. The end iterator does not reference any valid list element.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01324">1324</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01094">1094</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a7b1a1165f207467209a06cf7cb97e6be">1094</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a7b1a1165f207467209a06cf7cb97e6be">intrusive_list&lt;T, N, MP, L, U&gt;::end</a> ()</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1095</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1096</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert would probably be redundant, since it was</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1097</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// already tested in `begin()`.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1098</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1099</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight">head_type_ = </span><span class="doxyHighlightKeyword">typename</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a2478a7ae1ba2337b5c7be58face3a459">double_list&lt;N, L&gt;::links_type</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1100</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a6c44dc25422336e98d5c450874496041">iterator</a>{ </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1101</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">head_type_*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a052a2e54bdf39df3c7d57e51a555ecab">double_list&lt;N, L&gt;::links_pointer</a> ())) };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1102</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### head() {#aba89961ff686c458b91bbe59f2480519}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list&lt; N, double_list_links &gt;::pointer micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::head (void)</td>
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

<p>Get the list <b>head</b>.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the head node.</p></dd>
</dl>


<p>Returns a pointer to the first node in the list. If the list is empty, this will point to the internal links node itself, which can be used to detect the end of the list during iteration. The returned pointer should be checked against <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#abb4f476badf26d59503fe5a3a2ad0400">end()</a></span> or the sentinel node to determine if the list contains any elements.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00831">831</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00619">619</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aba89961ff686c458b91bbe59f2480519">619</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aba89961ff686c458b91bbe59f2480519">double_list&lt;T, L&gt;::head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">620</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">621</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a7414b872d9dce66e21c17e37f9e127c1">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>.next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">622</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### initialize\_once() {#a6ea6345b2ce0664b1fc1bbd484d7a653}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::initialize_once (void)</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Initialize the list only at first run.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>If the statically allocated list is still in the initial uninitialised state (with both pointers null), this method initialises the list to the empty state, with both pointers pointing to itself. For non-statically initialised lists, this method has no effect.</p>



:::info
<p>Must be manually called for statically allocated lists before inserting elements or performing any other operations.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01255">1255</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00990">990</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6ea6345b2ce0664b1fc1bbd484d7a653">990</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a6ea6345b2ce0664b1fc1bbd484d7a653">intrusive_list&lt;T, N, MP, L, U&gt;::initialize_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">991</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">992</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a6c5ca2deb541088fac9aae237e0c3699">double_list&lt;N, L&gt;::initialize_once</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">993</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### link\_head() {#a69ff5a010ced371d2bff3e4ebe1fb13d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_head (<a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node)</td>
</tr>
</table>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01286">1286</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01046">1046</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a69ff5a010ced371d2bff3e4ebe1fb13d">1046</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a69ff5a010ced371d2bff3e4ebe1fb13d">intrusive_list&lt;T, N, MP, L, U&gt;::link_head</a> (U&amp; node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1047</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1048</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1049</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1050</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the distance between the member intrusive link</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1051</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// node and the class begin.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1052</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1053</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1054</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1055</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add thread intrusive node at the end of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1056</span><span class="doxyLineContent"><span class="doxyHighlight">    (</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aba89961ff686c458b91bbe59f2480519">double_list&lt;N, L&gt;::head</a> ()))</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1057</span><span class="doxyLineContent"><span class="doxyHighlight">        -&gt;link_previous (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1058</span><span class="doxyLineContent"><span class="doxyHighlight">            </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node) + offset));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1059</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### link\_tail() {#a39f23959a6cd2774eb5ed1f1caeda242}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::link_tail (<a href="#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node)</td>
</tr>
</table>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01276">1276</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01020">1020</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a39f23959a6cd2774eb5ed1f1caeda242">1020</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a39f23959a6cd2774eb5ed1f1caeda242">intrusive_list&lt;T, N, MP, L, U&gt;::link_tail</a> (U&amp; node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1021</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1022</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The assert(links_.initialised()) is checked by the L class.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1023</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1024</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the distance between the member intrusive link</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1025</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// node and the class begin.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1026</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1027</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1028</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1029</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Add thread intrusive node at the end of the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1030</span><span class="doxyLineContent"><span class="doxyHighlight">    (</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a4ff535226e16d0d2e5aeb8c6a5590021">double_list&lt;N, L&gt;::tail</a> ()))</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1031</span><span class="doxyLineContent"><span class="doxyHighlight">        -&gt;link_next (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight">N*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1032</span><span class="doxyLineContent"><span class="doxyHighlight">            </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;node) + offset));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1033</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### links\_pointer() {#a052a2e54bdf39df3c7d57e51a555ecab}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">const links_type * micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::links_pointer (void)</td>
</tr>
</table>
</td>
<td class="doxyMemberLabelsRight">
<span class="doxyMemberLabels">
<span class="doxyMemberLabel inline">inline</span>
<span class="doxyMemberLabel constexpr">constexpr</span>
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
<dd><p>A pointer to the list head object.</p></dd>
</dl>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00891">891</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a052a2e54bdf39df3c7d57e51a555ecab">891</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a052a2e54bdf39df3c7d57e51a555ecab">links_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">892</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">    </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">893</span><span class="doxyLineContent"><span class="doxyHighlight">      </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> &amp;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">894</span><span class="doxyLineContent"><span class="doxyHighlight">    }</span></span></div>

</div>

</div>
</div>

### tail() {#a4ff535226e16d0d2e5aeb8c6a5590021}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list&lt; N, double_list_links &gt;::pointer micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::tail (void)</td>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00841">841</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00634">634</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a4ff535226e16d0d2e5aeb8c6a5590021">634</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a4ff535226e16d0d2e5aeb8c6a5590021">double_list&lt;T, L&gt;::tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">635</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">636</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a7414b872d9dce66e21c17e37f9e127c1">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>.previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">637</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### uninitialized() {#aee22388cb4629e7a170c216cb95d0236}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::uninitialized (void)</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Check if the list is uninitialised (only statically allocated lists can be uninitialised).</p>


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
<td class="doxyParamItemDescription"><p>The list was <b>not</b> initialised.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The list was initialised.</p></td>
</tr>
</table>
</dd>
</dl>

<p>An uninitialized node is a node with any of the pointers set to <span class="doxyComputerOutput">nullptr</span>. Only statically allocated nodes in the initial state are considered <em>uninitialized</em>. For dynamically allocated lists, this method always returns <span class="doxyComputerOutput">false</span> since their nodes are explicitly initialized during construction.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00788">788</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00542">542</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aee22388cb4629e7a170c216cb95d0236">542</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#aee22388cb4629e7a170c216cb95d0236">double_list&lt;T, L&gt;::uninitialized</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">543</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">544</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> (is_statically_allocated::value)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">545</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">546</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>.uninitialized ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">547</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">548</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">549</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">550</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">551</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">552</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### unlink\_head() {#a5705b4896215d3fc3d8941c26e814bac}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::pointer micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_head (void)</td>
</tr>
</table>
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
<dd><p>Pointer to the first element in the list.</p></dd>
</dl>


<p>Removes and unlinks the first element from the intrusive list. If the list is empty, this operation is a no-op and returns a pointer to the internal links node. The method unlinks the node at the head of the list and returns a pointer to the parent object containing the unlinked node.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01306">1306</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01145">1145</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a5705b4896215d3fc3d8941c26e814bac">1145</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a5705b4896215d3fc3d8941c26e814bac">intrusive_list&lt;T, N, MP, L, U&gt;::unlink_head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1146</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1147</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// No assert here, treat empty link unlinks as nop.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1148</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1149</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The first element in the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1150</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> it</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1151</span><span class="doxyLineContent"><span class="doxyHighlight">        = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">double_list&lt;N, L&gt;::links_</a>.next ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1152</span><span class="doxyLineContent"><span class="doxyHighlight">    it-&gt;unlink ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1153</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1154</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#adec6609971de187a30fdc6607031c78a">get_pointer</a> (it);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1155</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### unlink\_tail() {#ad499ca0d5953647f3a23876e28f73295}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">intrusive_list&lt; T, N, MP, L, U &gt;::pointer micro_os_plus::utils::intrusive_list&lt; T, N, MP, L, U &gt;::unlink_tail (void)</td>
</tr>
</table>
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
<dd><p>Pointer to the last element in the list.</p></dd>
</dl>


<p>Removes and unlinks the last element from the intrusive list. If the list is empty, this operation is a no-op and returns a pointer to the internal links node. The method unlinks the node at the tail of the list and returns a pointer to the parent object containing the unlinked node.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01296">1296</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01167">1167</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ad499ca0d5953647f3a23876e28f73295">1167</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ad499ca0d5953647f3a23876e28f73295">intrusive_list&lt;T, N, MP, L, U&gt;::unlink_tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1168</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1169</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// No assert here, treat empty link unlinks as nop.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1170</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1171</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The last element in the list.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1172</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> it = </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight"><a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1173</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">double_list&lt;N, L&gt;::links_</a>.previous ());</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1174</span><span class="doxyLineContent"><span class="doxyHighlight">    it-&gt;unlink ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1175</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1176</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#adec6609971de187a30fdc6607031c78a">get_pointer</a> (it);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1177</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Functions

### get\_pointer() {#adec6609971de187a30fdc6607031c78a}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l01335">1335</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l01119">1119</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#adec6609971de187a30fdc6607031c78a">1119</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#adec6609971de187a30fdc6607031c78a">intrusive_list&lt;T, N, MP, L, U&gt;::get_pointer</a> (<a href="#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> node)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1120</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1121</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// static_assert(std::is_convertible&lt;U, T&gt;::value == true, "U must be</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1122</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// implicitly convertible to T!");</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1123</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1124</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the distance between the member intrusive link</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1125</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// node and the class begin.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1126</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">auto</span><span class="doxyHighlight"> offset = </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1127</span><span class="doxyLineContent"><span class="doxyHighlight">        &amp;(</span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlight">T*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)-&gt;*MP));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1128</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1129</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Compute the address of the object which includes the</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1130</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// intrusive node, by adjusting down the node address.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1131</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac7006fb066460b5ff008f6f64d62e272">pointer</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">reinterpret_cast&lt;</span><span class="doxyHighlight"><a href="#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a></span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1132</span><span class="doxyLineContent"><span class="doxyHighlight">                                      - offset);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">1133</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### links\_ {#a22d5f70c0589acc1c18d10e740c7a599}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<div class="doxyMemberTemplate">template &lt;class T, class N, N T::* MP, class L = double_list_links, class U = T&gt;</div>
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">links_type micro_os_plus::utils::double_list&lt; N, double_list_links &gt;::links_</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00909">909</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">909</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a2478a7ae1ba2337b5c7be58face3a459">links_type</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list/#a22d5f70c0589acc1c18d10e740c7a599">links_</a>;</span></span></div>

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
