---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/doubly-list-links
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `doubly_list_links` Class

<p>A class for the core of a doubly linked list (pointers to neighbours). <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::doubly_list_links { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>"
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a60b3f3c0a2696f7284d268288047ad54">is_statically_allocated</a> = std::false_type</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating that the links node is <b>not</b> statically allocated. <a href="#a60b3f3c0a2696f7284d268288047ad54">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct a list node (initialise the pointers). <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ad5e4574780fc474e91d0c511e25dd714">doubly_list_links</a> (const doubly_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#ad5e4574780fc474e91d0c511e25dd714">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a47b58548578410e082de35fc39bb84de">doubly_list_links</a> (doubly_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#a47b58548578410e082de35fc39bb84de">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a88922c7df8cdc6ac63f597afe1f78966">~doubly_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#a88922c7df8cdc6ac63f597afe1f78966">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a1c7a615082c2dc03e995584576196e0f">operator=</a> (const doubly_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a1c7a615082c2dc03e995584576196e0f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a51eb96fc2cd35541d810be49328dc024">operator=</a> (doubly_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#a51eb96fc2cd35541d810be49328dc024">More...</a></p>
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

<p>A class for the core of a doubly linked list (pointers to neighbours).</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span> class provides the fundamental structure for a doubly linked list node, inheriting the pair of pointers to the <b>next</b> and <b>previous</b> elements and the associated access methods from <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></span>. The constructor initialises the pointers to form an empty list, where both pointers refer to the node itself.</p>


<p>This class is intended for use as the core linking mechanism within doubly linked lists, supporting efficient insertion and removal operations.</p>


<p>Definition at line 270 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### is\_statically\_allocated {#a60b3f3c0a2696f7284d268288047ad54}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::doubly_list_links::is_statically_allocated = std::false_type</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating that the links node is <b>not</b> statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00277">277</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a60b3f3c0a2696f7284d268288047ad54">277</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a60b3f3c0a2696f7284d268288047ad54">is_statically_allocated</a> = std::false_type;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### doubly\_list\_links() {#ae49a3ba1aad4be92cbd17b5d04266f2f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links::doubly_list_links ()</td>
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

<p>Construct a list node (initialise the pointers).</p>


<p>The constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span> is used for regular (non-static) list link nodes. It explicitly initialises the node by calling <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise()</a></span>, which sets both the <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> and <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointers to point to this node itself, marking it as unlinked and ready for use in a list. This ensures that dynamically allocated or automatic list nodes always start in a known, safe state, regardless of their memory contents prior to construction.</p>



:::info
<p>For statically allocated nodes, the constructor is intentionally left empty to allow BSS zero-initialisation. For dynamically allocated nodes, explicit initialisation is required to avoid undefined pointer values.</p>
:::


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></span> objects. This ensures the integrity of the list structure, as duplicating or moving nodes could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00282">282</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00280">280</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">280</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links::doubly_list_links</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">281</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">282</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// For regular (non static) classes the members</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">283</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// must be explicitly initialised.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">284</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">285</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>.</p>


<p>Referenced by <a href="#ad5e4574780fc474e91d0c511e25dd714">doubly_list_links</a>, <a href="#a47b58548578410e082de35fc39bb84de">doubly_list_links</a>, <a href="#a1c7a615082c2dc03e995584576196e0f">operator=</a> and <a href="#a51eb96fc2cd35541d810be49328dc024">operator=</a>.</p>

</div>
</div>

### doubly\_list\_links() {#ad5e4574780fc474e91d0c511e25dd714}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links::doubly_list_links (const doubly_list_links &amp;)</td>
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


<p>Copying of list node objects is explicitly disallowed to prevent accidental duplication, which could compromise the integrity of the list structure.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00294">294</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>.</p>

</div>
</div>

### doubly\_list\_links() {#a47b58548578410e082de35fc39bb84de}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links::doubly_list_links (doubly_list_links &amp;&amp;)</td>
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


<p>Moving of list node objects is explicitly disallowed to avoid invalid or inconsistent links within the list that could result from moving nodes.</p>


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00303">303</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~doubly\_list\_links() {#a88922c7df8cdc6ac63f597afe1f78966}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links::~doubly_list_links ()</td>
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


<p>Destroys the node. No special cleanup is required as the class does not manage resources.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00335">335</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00292">292</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a88922c7df8cdc6ac63f597afe1f78966">292</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a88922c7df8cdc6ac63f597afe1f78966">doubly_list_links::~doubly_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">293</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">294</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a1c7a615082c2dc03e995584576196e0f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links &amp; micro_os_plus::utils::doubly_list_links::operator= (const <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00314">314</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>.</p>

</div>
</div>

### operator=() {#a51eb96fc2cd35541d810be49328dc024}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links &amp; micro_os_plus::utils::doubly_list_links::operator= (<a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00325">325</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00164">164</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00120">120</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">120</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">doubly_list_links_base::initialise</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">121</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">122</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">123</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">124</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">micro_os_plus::utils::doubly_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">micro_os_plus::utils::doubly_list_links_base::initialise_once</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00175">175</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00087">87</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">87</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">doubly_list_links_base::initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">88</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">89</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (!<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">90</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">91</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">92</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">93</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">94</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">95</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00153">153</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00062">62</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">62</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">doubly_list_links_base::initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">63</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">64</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">65</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">66</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">67</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">68</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">69</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">70</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">71</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00185">185</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00107">107</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">107</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">doubly_list_links_base::link_next</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">108</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">109</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">110</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p after %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">111</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">112</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">118</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">119</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">120</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">121</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00195">195</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00133">133</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">133</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">doubly_list_links_base::link_previous</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">136</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p before %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">137</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">141</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">142</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">143</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">144</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">145</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">146</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">147</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00217">217</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00174">174</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00227">227</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00144">144</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00237">237</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h/#l00161">161</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">161</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">doubly_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">micro_os_plus::utils::doubly_list_links_base::previous_</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00206">206</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00157">157</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">157</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">doubly_list_links_base::unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">158</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">159</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">160</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() %p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">161</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make neighbours point to each other.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This works even if the node is already unlinked,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// so no need for an extra test.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">167</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">168</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">169</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Reset the unlinked node to the initial state,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">170</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// with both pointers pointing to itself.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">171</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">172</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00248">248</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">248</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">micro_os_plus::utils::doubly_list_links_base::initialised</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">micro_os_plus::utils::doubly_list_links_base::link_next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">micro_os_plus::utils::doubly_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">micro_os_plus::utils::doubly_list_links_base::next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a38c70e107d85e1fb859157235bf1eccc">micro_os_plus::utils::static_doubly_list_links::reset</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h/#l00243">243</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">243</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">micro_os_plus::utils::doubly_list_links_base::initialise</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">micro_os_plus::utils::doubly_list_links_base::initialised</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">micro_os_plus::utils::doubly_list_links_base::link_previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">micro_os_plus::utils::doubly_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">micro_os_plus::utils::doubly_list_links_base::previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a38c70e107d85e1fb859157235bf1eccc">micro_os_plus::utils::static_doubly_list_links::reset</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">micro_os_plus::utils::doubly_list_links_base::unlink</a>.</p>

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

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
