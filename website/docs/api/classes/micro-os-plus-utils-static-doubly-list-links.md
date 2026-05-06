---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/static-doubly-list-links
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `static_doubly_list_links` Class

<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours). <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::static_doubly_list_links { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Base class

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A base class for a doubly linked list node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Typedefs Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">using</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a2e3e1cea0aa11f4174a3d3e57685583e">is_statically_allocated</a> = std::true_type</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating that the links node is statically allocated. <a href="#a2e3e1cea0aa11f4174a3d3e57685583e">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Constructors Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct a statically allocated list node (<b>BSS</b> initialised). <a href="#ac7ec616db12f77994359e25848a63464">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a4c9d7450cb72071ee02aca2eff769df9">static_doubly_list_links</a> (const static_doubly_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#a4c9d7450cb72071ee02aca2eff769df9">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae9494c4d04558ec268347dc65cb12f63">static_doubly_list_links</a> (static_doubly_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#ae9494c4d04558ec268347dc65cb12f63">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Destructor Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a52afe628d2b9380b345eb4999e2633b3">~static_doubly_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#a52afe628d2b9380b345eb4999e2633b3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#abc9d7309596e6bb1d512a4464bc6b0b6">operator=</a> (const static_doubly_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#abc9d7309596e6bb1d512a4464bc6b0b6">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#adae3cfb509afbf57d1adf82b02410bb9">operator=</a> (static_doubly_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#adae3cfb509afbf57d1adf82b02410bb9">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Member Functions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">initialise_once</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links only if not already initialised. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is initialised. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">link_next</a> (doubly_list_links_base *node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>next</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">link_previous</a> (doubly_list_links_base *node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>previous</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">linked</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is linked to a doubly linked list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">next</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>next</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">previous</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>previous</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a38c70e107d85e1fb859157235bf1eccc">reset</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reset the two pointers to <span class="doxyComputerOutput">nullptr</span>. <a href="#a38c70e107d85e1fb859157235bf1eccc">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Remove this node from the list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>next</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>previous</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours).</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></span> class inherits a pair of uninitialised pointers to the <b>next</b> and <b>previous</b> list elements, as well as methods to access and manipulate these pointers, from its base class.</p>


<p>Instances of this class are intended to be statically allocated in the <b>BSS</b> section and automatically cleared (set to zero) during startup. This design enables reliable initialisation before any static constructors are executed, which is essential because the order of static initialisation is not defined by the C++ standard.</p>


<p>Statically allocated lists are commonly used by registrar objects to automate the self-registration of other statically allocated objects, such as drivers, threads, and similar components. By leveraging <b>BSS</b> initialisation, the registrar is guaranteed to be ready before any static objects attempt to register themselves.</p>


<p>As a consequence, list initialisation cannot be performed in the constructor, but must be done manually before invoking any method that adds elements to the list. This approach ensures robust and predictable behaviour in embedded and system-level applications where static object registration is required.</p>


<p>Definition at line 372 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### is\_statically\_allocated {#a2e3e1cea0aa11f4174a3d3e57685583e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::static_doubly_list_links::is_statically_allocated =  std::true_type</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating that the links node is statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00378">378</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2e3e1cea0aa11f4174a3d3e57685583e">378</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a2e3e1cea0aa11f4174a3d3e57685583e">is_statically_allocated</a> = std::true_type;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### static\_doubly\_list\_links() {#ac7ec616db12f77994359e25848a63464}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_doubly_list_links::static_doubly_list_links ()</td>
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

<p>Construct a statically allocated list node (<b>BSS</b> initialised).</p>


<p>This constructor is intended for statically allocated list link nodes. It must be empty and must not modify the member pointers, leaving them unchanged. For statically allocated objects, the entire memory region is zero-initialised at startup (via BSS initialisation), so both <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> and <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointers are set to <span class="doxyComputerOutput">nullptr</span>, representing an uninitialised state.</p>


<p>This approach ensures that statically allocated lists are in a known, safe state before any constructors run, and avoids unnecessary writes or side effects during construction.</p>



:::warning
<p>Code analysis tools may report:</p>


<ul class="doxyList ">
<li>Member <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> was not initialized in constructor</li>
<li>Member <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> was not initialized in constructor These warnings are expected and can be safely ignored in this context.</li>
</ul>
:::


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></span> objects. This ensures the integrity of the list structure, as duplicating or moving nodes could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00384">384</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00215">215</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac7ec616db12f77994359e25848a63464">215</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links::static_doubly_list_links</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">216</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">217</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">218</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#a4c9d7450cb72071ee02aca2eff769df9">static_doubly_list_links</a>, <a href="#ae9494c4d04558ec268347dc65cb12f63">static_doubly_list_links</a>, <a href="#abc9d7309596e6bb1d512a4464bc6b0b6">operator=</a> and <a href="#adae3cfb509afbf57d1adf82b02410bb9">operator=</a>.</p>

</div>
</div>

### static\_doubly\_list\_links() {#a4c9d7450cb72071ee02aca2eff769df9}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_doubly_list_links::static_doubly_list_links (const static_doubly_list_links &amp;)</td>
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


<p>Copying of statically allocated list node objects is explicitly disallowed to prevent accidental duplication, which could compromise the integrity of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00394">394</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>.</p>

</div>
</div>

### static\_doubly\_list\_links() {#ae9494c4d04558ec268347dc65cb12f63}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_doubly_list_links::static_doubly_list_links (static_doubly_list_links &amp;&amp;)</td>
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


<p>Moving of statically allocated list node objects is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving nodes.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00404">404</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~static\_doubly\_list\_links() {#a52afe628d2b9380b345eb4999e2633b3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_doubly_list_links::~static_doubly_list_links ()</td>
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

<p>Destruct the node.</p>


<p>The destructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></span> is intentionally left empty to avoid modifying the member pointers. The goal is to revert the content to a state similar to the statically initialised state (BSS zero), but recent versions of GCC may optimize out any code that attempts to clear the pointers (dead store elimination).</p>


<p>As a result, explicit pointer clearing in the destructor is not reliable. If pointer reset is required, use the <span class="doxyComputerOutput"><a href="#a38c70e107d85e1fb859157235bf1eccc">reset()</a></span> method explicitly, or clear the memory before invoking the placement <span class="doxyComputerOutput">new</span> constructor again.</p>



:::warning
<p>The code to clear the pointers is now commented out, since recent GCC optimizes it out (dead store elimination). Depending on the version, there might be some attributes to allow this, but they are not safe, for example <span class="doxyComputerOutput">__attribute__((optimize("no-lifetime-dse,no-dse,no-inline")))</span> did not help. The workaround is to use <span class="doxyComputerOutput"><a href="#a38c70e107d85e1fb859157235bf1eccc">reset()</a></span> explicitly, or, even better, to clear the memory before invoking the placement <span class="doxyComputerOutput">new</span> constructor again.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00430">430</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00246">246</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a52afe628d2b9380b345eb4999e2633b3">246</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a52afe628d2b9380b345eb4999e2633b3">static_doubly_list_links::~static_doubly_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">247</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">248</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The goal is to revert the content to a state similar to the</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">249</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// statically initialised state (BSS zero).</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">250</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Unfortunately GCC does not honour this.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">251</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// next_ = nullptr;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">252</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// previous_ = nullptr;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">253</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#abc9d7309596e6bb1d512a4464bc6b0b6}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">static_doubly_list_links &amp; micro_os_plus::utils::static_doubly_list_links::operator= (const <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> &amp;)</td>
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


<p>Copy assignment is explicitly disallowed to prevent accidental overwriting of list node objects, which could lead to corruption of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00415">415</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>.</p>

</div>
</div>

### operator=() {#adae3cfb509afbf57d1adf82b02410bb9}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">static_doubly_list_links &amp; micro_os_plus::utils::static_doubly_list_links::operator= (<a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> &amp;&amp;)</td>
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


<p>Move assignment is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving nodes.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00425">425</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>References <a href="#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> and <a href="#a38c70e107d85e1fb859157235bf1eccc">reset</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### initialise() {#aaf1348f9336c81a961354d6856474bbf}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::initialise (void)</td>
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

<p>Initialise the node links.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Sets both the <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> and <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointers to point to this node itself, marking the node as unlinked. This state is used to indicate that the node is not currently part of any list.</p>


<p>This method is called during initialisation and after a node is unlinked from a list, ensuring the node is in a safe, standalone state and cannot be traversed as part of a list.</p>



:::info
<p>After unlinking a node from a list, it must be returned to this state to prevent accidental access through stale links.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00168">168</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00120">120</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">120</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">doubly_list_links_base::initialise</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">121</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">122</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">123</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">124</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">micro_os_plus::utils::doubly_list_links::doubly_list_links</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">micro_os_plus::utils::doubly_list_links_base::initialise_once</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

</div>
</div>

### initialise\_once() {#a8f3b3c5686e857557c5bf69d0313292e}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list_links_base::initialise_once (void)</td>
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

<p>Initialise the node links only if not already initialised.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>true if the node was initialised, false otherwise.</p></dd>
</dl>


<p>If the statically allocated list is still in the initial <em>uninitialised</em> state (with both pointers <span class="doxyComputerOutput">nullptr</span>), this method initialises the list to the empty state, with both pointers pointing to itself.</p>


<p>For non-statically initialised lists, this method is ineffective, since the node is always initialised at construct time.</p>



:::info
<p>This method must be manually called for a statically allocated list before inserting elements or performing any other operations.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00179">179</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00083">83</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">83</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">doubly_list_links_base::initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (!<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">86</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">87</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">88</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">89</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">90</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">91</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">micro_os_plus::utils::doubly_list_links_base::initialised</a>.</p>

</div>
</div>

### initialised() {#a0ac52ac284a45e3c5f293c34bef2bbe0}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list_links_base::initialised (void)</td>
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

<p>Check if the node is initialised.</p>


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
<td class="doxyParamItemDescription"><p>The links are initialised.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The links are <b>not</b> initialised.</p></td>
</tr>
</table>
</dd>
</dl>

<p>An <em>uninitialised</em> node is a node with its pointers set to <span class="doxyComputerOutput">nullptr</span>. Only statically allocated nodes in their initial state are considered uninitialised. Regular (dynamically or automatically allocated) nodes are always initialised during construction, so this method will only return <span class="doxyComputerOutput">false</span> for statically allocated nodes that have not yet been initialised.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00157">157</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00058">58</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">58</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">doubly_list_links_base::initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">59</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">60</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">61</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">62</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">63</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">64</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">65</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">66</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">67</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">micro_os_plus::utils::doubly_list_links_base::initialise_once</a>.</p>

</div>
</div>

### link\_next() {#ad9c5cdfe5cd9e7f0b1012236cbdaca55}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::link_next (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> * node)</td>
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

<p>Link the new node as <b>next</b>.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">[in] node</td>
<td class="doxyParamItemDescription"><p>Pointer to the node to be linked as next.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Insert the new node between the <b>next</b> pointer and the node pointed by it. This operation is used by lists to link new nodes to the list head. The new node's <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> pointer is set to the current node, and its <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointer is set to the current node's <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the doubly-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00189">189</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00103">103</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">103</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">doubly_list_links_base::link_next</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">104</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">105</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">106</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p after %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">107</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">108</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">109</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">110</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">111</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">112</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">micro_os_plus::utils::doubly_list_links_base::doubly_list_links_base</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a>.</p>

</div>
</div>

### link\_previous() {#a2e58bddc3885fa85d263e16e19601ec1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::link_previous (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> * node)</td>
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

<p>Link the new node as <b>previous</b>.</p>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Parameters</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">[in] node</td>
<td class="doxyParamItemDescription"><p>Pointer to the node to be linked as previous.</p></td>
</tr>
</table>
</dd>
</dl>

<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Insert the new node between the <b>previous</b> pointer and the node pointed by it. Used by lists to link new nodes to the list tail. The new node's <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointer is set to the current node, and its <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> pointer is set to the current node's <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the doubly-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00199">199</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00129">129</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">129</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">doubly_list_links_base::link_previous</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">130</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">131</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">132</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p before %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">136</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">137</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">141</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">142</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">143</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">micro_os_plus::utils::doubly_list_links_base::doubly_list_links_base</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>

</div>
</div>

### linked() {#ae3945cbe4a2169d5ea238ca0d109cd96}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::doubly_list_links_base::linked (void)</td>
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

<p>Check if the node is linked to a doubly linked list.</p>


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
<td class="doxyParamItemDescription"><p>The node is linked with both pointers.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The node is not linked.</p></td>
</tr>
</table>
</dd>
</dl>

<p>To be <em>linked</em>, both pointers must point to different nodes than itself (double list requirement). If either <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> or <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> points to <span class="doxyComputerOutput">this</span>, the node is considered unlinked (empty state). This method checks the node's linkage status for safe list operations.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00221">221</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00174">174</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">174</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">doubly_list_links_base::linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">175</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">176</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">177</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">178</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">179</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">180</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">183</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>

</div>
</div>

### next() {#a6190af1d7982bfd89f3ca08adafd8f84}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base * micro_os_plus::utils::doubly_list_links_base::next (void)</td>
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

<p>Get the link to the <b>next</b> node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the next node.</p></dd>
</dl>


<p>Returns a pointer to the next node in the list. If this node is the last in the list, the returned pointer may refer back to the list's sentinel node (for example, the links node in the list container) or to itself if the list is empty.</p>



:::info
<p>The returned pointer is of type <span class="doxyComputerOutput">doubly_list_links_base*</span> and may need to be cast to the appropriate derived type by the caller.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00231">231</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00144">144</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">144</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">doubly_list_links_base::next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">145</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">146</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">147</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a>.</p>

</div>
</div>

### previous() {#a8820447ea7887e48aa116b25d0672336}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base * micro_os_plus::utils::doubly_list_links_base::previous (void)</td>
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

<p>Get the link to the <b>previous</b> node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Pointer to the previous node.</p></dd>
</dl>


<p>Returns a pointer to the previous node in the list. If this node is the first in the list, the returned pointer may refer back to the list's sentinel node (such as the links node in the list container) or to itself if the list is empty.</p>



:::info
<p>The returned pointer is of type <span class="doxyComputerOutput">doubly_list_links_base*</span> and may need to be cast to the appropriate derived type by the caller.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00241">241</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00161">161</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">161</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">doubly_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>

</div>
</div>

### reset() {#a38c70e107d85e1fb859157235bf1eccc}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::static_doubly_list_links::reset (void)</td>
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

<p>Reset the two pointers to <span class="doxyComputerOutput">nullptr</span>.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Sets both the <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> and <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> pointers to <span class="doxyComputerOutput">nullptr</span>, marking the node as uninitialised. This is typically used for statically allocated nodes to explicitly place them in an uninitialised state.</p>



:::warning
<p>Not very safe, since the compiler may optimise out the code.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00441">441</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00186">186</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a38c70e107d85e1fb859157235bf1eccc">186</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a38c70e107d85e1fb859157235bf1eccc">static_doubly_list_links::reset</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">187</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">188</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">189</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">190</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="#adae3cfb509afbf57d1adf82b02410bb9">operator=</a>.</p>

</div>
</div>

### unlink() {#a0216c42bec0ad0eed843b3aa3b1c0463}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::unlink (void)</td>
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

<p>Remove this node from the list.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Update both neighbours to point to each other, effectively removing the node from the list. The node is then returned to the initial state (empty), with both pointers pointing to itself. This operation is safe to call even if the node is already unlinked.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00210">210</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00153">153</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">153</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">doubly_list_links_base::unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">154</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">155</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE) &amp;&amp; defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">156</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() %p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">157</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">158</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">159</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make neighbours point to each other.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">160</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This works even if the node is already unlinked,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">161</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// so no need for an extra test.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Reset the unlinked node to the initial state,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// with both pointers pointing to itself.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">167</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">168</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### next\_ {#ac26d24411c07c3684959520fb404f3c8}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base* micro_os_plus::utils::doubly_list_links_base::next_</td>
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

<p>Pointer to the <b>next</b> node.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00252">252</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">252</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">micro_os_plus::utils::doubly_list_links_base::initialised</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">micro_os_plus::utils::doubly_list_links_base::link_next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">micro_os_plus::utils::doubly_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">micro_os_plus::utils::doubly_list_links_base::next</a>, <a href="#a38c70e107d85e1fb859157235bf1eccc">reset</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

</div>
</div>

### previous\_ {#aa113cf8b5f13364650d353ae83dab0a3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base* micro_os_plus::utils::doubly_list_links_base::previous_</td>
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

<p>Pointer to the <b>previous</b> node.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00247">247</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">247</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">micro_os_plus::utils::doubly_list_links_base::initialised</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">micro_os_plus::utils::doubly_list_links_base::link_previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">micro_os_plus::utils::doubly_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">micro_os_plus::utils::doubly_list_links_base::previous</a>, <a href="#a38c70e107d85e1fb859157235bf1eccc">reset</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.15.0.</p>

</div>
