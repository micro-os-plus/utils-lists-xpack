---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/doubly-list-links-base
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `doubly_list_links_base` Class

<p>A base class for a doubly linked list node. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::doubly_list_links_base { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>"
</div>

## Derived Classes

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class for the core of a doubly linked list (pointers to neighbours). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">static_doubly_list_links</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#details">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> () noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an uninitialised list node. <a href="#abc42b0e738c95b03fcaf4c387f37ad79">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae5d6fa336952664139f68b27e8c4aacb">doubly_list_links_base</a> (const doubly_list_links_base &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#ae5d6fa336952664139f68b27e8c4aacb">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a6f693da01593bf7f3e11186c25506fd9">doubly_list_links_base</a> (doubly_list_links_base &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#a6f693da01593bf7f3e11186c25506fd9">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a2fb315714d71fb437d4f43c8d9b7e0e5">~doubly_list_links_base</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#a2fb315714d71fb437d4f43c8d9b7e0e5">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a7382bf2027888b6edb259e9ed1dd7d8c">operator=</a> (const doubly_list_links_base &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a7382bf2027888b6edb259e9ed1dd7d8c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a8f583c3336517c7f9c78ae136e323f70">operator=</a> (doubly_list_links_base &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#a8f583c3336517c7f9c78ae136e323f70">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links. <a href="#aaf1348f9336c81a961354d6856474bbf">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a8f3b3c5686e857557c5bf69d0313292e">initialise_once</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links only if not already initialised. <a href="#a8f3b3c5686e857557c5bf69d0313292e">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is initialised. <a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">link_next</a> (doubly_list_links_base *node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>next</b>. <a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a2e58bddc3885fa85d263e16e19601ec1">link_previous</a> (doubly_list_links_base *node) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>previous</b>. <a href="#a2e58bddc3885fa85d263e16e19601ec1">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae3945cbe4a2169d5ea238ca0d109cd96">linked</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is linked to a doubly linked list. <a href="#ae3945cbe4a2169d5ea238ca0d109cd96">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a6190af1d7982bfd89f3ca08adafd8f84">next</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>next</b> node. <a href="#a6190af1d7982bfd89f3ca08adafd8f84">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a8820447ea7887e48aa116b25d0672336">previous</a> (void) const noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>previous</b> node. <a href="#a8820447ea7887e48aa116b25d0672336">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a> (void) noexcept</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Remove this node from the list. <a href="#a0216c42bec0ad0eed843b3aa3b1c0463">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>next</b> node. <a href="#ac26d24411c07c3684959520fb404f3c8">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>previous</b> node. <a href="#aa113cf8b5f13364650d353ae83dab0a3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A base class for a doubly linked list node.</p>


<p>This class provides a pair of uninitialised pointers to the <b>next</b> and <b>previous</b> elements in a doubly linked list, along with a set of simple (some inlined) methods to access and manipulate these pointers.</p>



:::info
<p>Both regular and statically allocated list elements are derived from this class.</p>
:::


<p>Definition at line 96 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxySectionDef">

## Public Constructors

### doubly\_list\_links\_base() {#abc42b0e738c95b03fcaf4c387f37ad79}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links_base::doubly_list_links_base ()</td>
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

<p>Construct an uninitialised list node.</p>


<p>This must be an empty constructor that does not modify the member pointers, leaving them unchanged. For statically initialised lists, this means both pointers remain as <span class="doxyComputerOutput">nullptr</span>, representing an uninitialised state. For regular (dynamically initialised) lists, the derived class constructor will handle the initialisation of the pointers.</p>



:::info
<p>This design allows statically allocated objects to be safely zero-initialised at startup (via BSS initialisation), ensuring that the list links are in a known state before any constructors run. It also avoids unnecessary writes for statically allocated objects.</p>
:::



:::warning
<p>Code analysis tools may report:</p>


<ul class="doxyList ">
<li>Member <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> was not initialized in constructor</li>
<li>Member <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span> was not initialized in constructor These warnings are expected and can be safely ignored in this context.</li>
</ul>
:::


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a></span> objects. This ensures the integrity of the list structure, as duplicating or moving nodes could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00102">102</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00082">82</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#abc42b0e738c95b03fcaf4c387f37ad79">82</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base::doubly_list_links_base</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">83</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#ae5d6fa336952664139f68b27e8c4aacb">doubly_list_links_base</a>, <a href="#a6f693da01593bf7f3e11186c25506fd9">doubly_list_links_base</a>, <a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">link_next</a>, <a href="#a2e58bddc3885fa85d263e16e19601ec1">link_previous</a>, <a href="#a7382bf2027888b6edb259e9ed1dd7d8c">operator=</a>, <a href="#a8f583c3336517c7f9c78ae136e323f70">operator=</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">micro_os_plus::utils::static_doubly_list_links::reset</a>.</p>

</div>
</div>

### doubly\_list\_links\_base() {#ae5d6fa336952664139f68b27e8c4aacb}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links_base::doubly_list_links_base (const doubly_list_links_base &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00114">114</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>.</p>

</div>
</div>

### doubly\_list\_links\_base() {#a6f693da01593bf7f3e11186c25506fd9}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links_base::doubly_list_links_base (doubly_list_links_base &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00123">123</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~doubly\_list\_links\_base() {#a2fb315714d71fb437d4f43c8d9b7e0e5}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::doubly_list_links_base::~doubly_list_links_base ()</td>
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


<p>This must be an empty destructor that does not modify or reset the member pointers, leaving them unchanged. For both statically and dynamically allocated lists, the destructor does not perform any cleanup or pointer manipulation, as the list management is handled elsewhere.</p>



:::info
<p>This design avoids unnecessary writes or side effects during object destruction, which is especially important for statically allocated objects or when list nodes may be reused or re-initialised after destruction.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00151">151</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00100">100</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2fb315714d71fb437d4f43c8d9b7e0e5">100</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a2fb315714d71fb437d4f43c8d9b7e0e5">doubly_list_links_base::~doubly_list_links_base</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">101</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">102</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this destructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">103</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a7382bf2027888b6edb259e9ed1dd7d8c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base &amp; micro_os_plus::utils::doubly_list_links_base::operator= (const <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00134">134</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>.</p>

</div>
</div>

### operator=() {#a8f583c3336517c7f9c78ae136e323f70}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">doubly_list_links_base &amp; micro_os_plus::utils::doubly_list_links_base::operator= (<a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00145">145</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<p>Reference <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>.</p>

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


<p>Sets both the <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> and <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointers to point to this node itself, marking the node as unlinked. This state is used to indicate that the node is not currently part of any list.</p>


<p>This method is called during initialisation and after a node is unlinked from a list, ensuring the node is in a safe, standalone state and cannot be traversed as part of a list.</p>



:::info
<p>After unlinking a node from a list, it must be returned to this state to prevent accidental access through stale links.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00173">173</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00120">120</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aaf1348f9336c81a961354d6856474bbf">120</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#aaf1348f9336c81a961354d6856474bbf">doubly_list_links_base::initialise</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">121</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">122</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">123</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">124</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> and <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">micro_os_plus::utils::doubly_list_links::doubly_list_links</a>, <a href="#a8f3b3c5686e857557c5bf69d0313292e">initialise_once</a> and <a href="#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00184">184</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00083">83</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a8f3b3c5686e857557c5bf69d0313292e">83</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a8f3b3c5686e857557c5bf69d0313292e">doubly_list_links_base::initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (!<a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">86</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">87</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">88</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">89</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">90</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">91</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a> and <a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00162">162</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00058">58</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">58</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">doubly_list_links_base::initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">59</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">60</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight"> || <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">61</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">62</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">63</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">64</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">65</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">66</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">67</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> and <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>


<p>Referenced by <a href="#a8f3b3c5686e857557c5bf69d0313292e">initialise_once</a>.</p>

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
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::link_next (<a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> * node)</td>
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


<p>Insert the new node between the <b>next</b> pointer and the node pointed by it. This operation is used by lists to link new nodes to the list head. The new node's <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> pointer is set to the current node, and its <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointer is set to the current node's <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the doubly-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00194">194</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00103">103</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">103</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">doubly_list_links_base::link_next</a> (<a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">104</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">105</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">106</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p after %p\n"</span><span class="doxyHighlight">, __func__,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">107</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (node),</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">108</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">109</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">110</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">111</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">112</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">118</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">119</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> and <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>.</p>

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
<td class="doxyMemberName">void micro_os_plus::utils::doubly_list_links_base::link_previous (<a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> * node)</td>
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


<p>Insert the new node between the <b>previous</b> pointer and the node pointed by it. Used by lists to link new nodes to the list tail. The new node's <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span> pointer is set to the current node, and its <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> pointer is set to the current node's <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the doubly-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00204">204</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00131">131</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a2e58bddc3885fa85d263e16e19601ec1">131</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a2e58bddc3885fa85d263e16e19601ec1">doubly_list_links_base::link_previous</a> (<a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">132</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p before %p\n"</span><span class="doxyHighlight">, __func__,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (node),</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">136</span><span class="doxyLineContent"><span class="doxyHighlight">                   </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">137</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">141</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">142</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;next_ = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">143</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;previous_ = <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">144</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">145</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">146</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">147</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> and <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>

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

<p>To be <em>linked</em>, both pointers must point to different nodes than itself (double list requirement). If either <span class="doxyComputerOutput"><a href="#ac26d24411c07c3684959520fb404f3c8">next_</a></span> or <span class="doxyComputerOutput"><a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a></span> points to <span class="doxyComputerOutput">this</span>, the node is considered unlinked (empty state). This method checks the node's linkage status for safe list operations.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00226">226</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00177">177</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ae3945cbe4a2169d5ea238ca0d109cd96">177</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ae3945cbe4a2169d5ea238ca0d109cd96">doubly_list_links_base::linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">178</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">179</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight"> || <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">180</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">183</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">184</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">185</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">186</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> and <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00236">236</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00147">147</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a6190af1d7982bfd89f3ca08adafd8f84">147</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a6190af1d7982bfd89f3ca08adafd8f84">doubly_list_links_base::next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">148</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">149</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">150</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00246">246</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h/#l00164">164</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a8820447ea7887e48aa116b25d0672336">164</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a8820447ea7887e48aa116b25d0672336">doubly_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">167</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>

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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00215">215</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp/#l00157">157</a> of file <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a0216c42bec0ad0eed843b3aa3b1c0463">157</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a0216c42bec0ad0eed843b3aa3b1c0463">doubly_list_links_base::unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">158</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">159</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">160</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() %p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">static_cast&lt;</span><span class="doxyHighlightKeyword">const </span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (</span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">));</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">161</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make neighbours point to each other.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This works even if the node is already unlinked,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">167</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// so no need for an extra test.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">168</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>-&gt;next_ = <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">169</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>-&gt;previous_ = <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">170</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">171</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Reset the unlinked node to the initial state,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">172</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// with both pointers pointing to itself.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">173</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">174</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a>, <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a> and <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>.</p>

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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00257">257</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac26d24411c07c3684959520fb404f3c8">257</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a>, <a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a>, <a href="#ad9c5cdfe5cd9e7f0b1012236cbdaca55">link_next</a>, <a href="#ae3945cbe4a2169d5ea238ca0d109cd96">linked</a>, <a href="#a6190af1d7982bfd89f3ca08adafd8f84">next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">micro_os_plus::utils::static_doubly_list_links::reset</a> and <a href="#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a>.</p>

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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h/#l00252">252</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aa113cf8b5f13364650d353ae83dab0a3">252</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#aaf1348f9336c81a961354d6856474bbf">initialise</a>, <a href="#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a>, <a href="#a2e58bddc3885fa85d263e16e19601ec1">link_previous</a>, <a href="#ae3945cbe4a2169d5ea238ca0d109cd96">linked</a>, <a href="#a8820447ea7887e48aa116b25d0672336">previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">micro_os_plus::utils::static_doubly_list_links::reset</a> and <a href="#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
