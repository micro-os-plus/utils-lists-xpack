---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/double-list-links
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `double_list_links` Class

<p>A class for the core of a doubly linked list (pointers to neighbours). <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::double_list_links { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Base class

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A base class for a doubly linked list node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#details">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae39df3f7eb990642da31bff296768a78">is_statically_allocated</a> = std::false_type</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating that the links node is <b>not</b> statically allocated. <a href="#ae39df3f7eb990642da31bff296768a78">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#aac63387a5b83fd66b646799691220460">double_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct a list node (initialise the pointers). <a href="#aac63387a5b83fd66b646799691220460">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ac959e3c2ac390872e194018476c9f0f3">double_list_links</a> (const double_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#ac959e3c2ac390872e194018476c9f0f3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ae1471ea9089b776330fb6984feb17258">double_list_links</a> (double_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#ae1471ea9089b776330fb6984feb17258">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ab5fce2392408fc24234fda6ad8474637">~double_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#ab5fce2392408fc24234fda6ad8474637">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a256f1ab823a6571d1fa0430914540974">operator=</a> (const double_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a256f1ab823a6571d1fa0430914540974">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ad231c1cdeae18df2fab5d2cb0cd2cb71">operator=</a> (double_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#ad231c1cdeae18df2fab5d2cb0cd2cb71">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">initialize</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">initialize_once</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links only if not already initialised. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">link_next</a> (double_list_links_base *node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>next</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">link_previous</a> (double_list_links_base *node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>previous</b>. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">linked</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is linked to a doubly linked list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a52cfec44e36307862ce8bf8522059c78">next</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>next</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a52cfec44e36307862ce8bf8522059c78">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8c0fd02eb96b1799a45285620fc8718a">previous</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>previous</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8c0fd02eb96b1799a45285620fc8718a">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is uninitialised. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">unlink</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Remove this node from the list. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Protected Member Attributes Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>next</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>previous</b> node. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>A class for the core of a doubly linked list (pointers to neighbours).</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a></span> class provides the fundamental structure for a doubly linked list node, inheriting the pair of pointers to the <b>next</b> and <b>previous</b> elements and the associated access methods from <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a></span>. The constructor initialises the pointers to form an empty list, where both pointers refer to the node itself.</p>


<p>This class is intended for use as the core linking mechanism within doubly linked lists, supporting efficient insertion and removal operations.</p>


<p>Definition at line 300 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### is\_statically\_allocated {#ae39df3f7eb990642da31bff296768a78}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::double_list_links::is_statically_allocated =  std::false_type</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating that the links node is <b>not</b> statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00307">307</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ae39df3f7eb990642da31bff296768a78">307</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#ae39df3f7eb990642da31bff296768a78">is_statically_allocated</a> = std::false_type;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### double\_list\_links() {#aac63387a5b83fd66b646799691220460}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links::double_list_links ()</td>
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

<p>Construct a list node (initialise the pointers).</p>


<p>The constructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a></span> is used for regular (non-static) list link nodes. It explicitly initialises the node by calling <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">initialize()</a></span>, which sets both the <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers to point to this node itself, marking it as unlinked and ready for use in a list. This ensures that dynamically allocated or automatic list nodes always start in a known, safe state, regardless of their memory contents prior to construction.</p>



:::info
<p>For statically allocated nodes, the constructor is intentionally left empty to allow BSS zero-initialisation. For dynamically allocated nodes, explicit initialisation is required to avoid undefined pointer values.</p>
:::


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> objects. This ensures the integrity of the list structure, as duplicating or moving lists could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00312">312</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00254">254</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#aac63387a5b83fd66b646799691220460">254</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#aac63387a5b83fd66b646799691220460">double_list_links::double_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">255</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">256</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// For regular (non static) classes the members</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">257</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// must be explicitly initialised.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">258</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">initialize</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">259</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">micro_os_plus::utils::double_list_links_base::initialize</a>.</p>


<p>Referenced by <a href="#ac959e3c2ac390872e194018476c9f0f3">double_list_links</a>, <a href="#ae1471ea9089b776330fb6984feb17258">double_list_links</a>, <a href="#a256f1ab823a6571d1fa0430914540974">operator=</a> and <a href="#ad231c1cdeae18df2fab5d2cb0cd2cb71">operator=</a>.</p>

</div>
</div>

### double\_list\_links() {#ac959e3c2ac390872e194018476c9f0f3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links::double_list_links (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00324">324</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#aac63387a5b83fd66b646799691220460">double_list_links</a>.</p>

</div>
</div>

### double\_list\_links() {#ae1471ea9089b776330fb6984feb17258}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links::double_list_links (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00333">333</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#aac63387a5b83fd66b646799691220460">double_list_links</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~double\_list\_links() {#ab5fce2392408fc24234fda6ad8474637}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links::~double_list_links ()</td>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00365">365</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00266">266</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ab5fce2392408fc24234fda6ad8474637">266</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#ab5fce2392408fc24234fda6ad8474637">double_list_links::~double_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">267</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">268</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a256f1ab823a6571d1fa0430914540974}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links &amp; micro_os_plus::utils::double_list_links::operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00344">344</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#aac63387a5b83fd66b646799691220460">double_list_links</a>.</p>

</div>
</div>

### operator=() {#ad231c1cdeae18df2fab5d2cb0cd2cb71}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links &amp; micro_os_plus::utils::double_list_links::operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00355">355</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#aac63387a5b83fd66b646799691220460">double_list_links</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Member Functions

### initialize() {#af00094c1fb22120e6c8361bcbd94412d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list_links_base::initialize (void)</td>
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

<p>Initialise the node links.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxySectionUser">
<dt>Returns</dt>
<dd><p>Nothing.</p></dd>
</dl>


<p>Sets both the <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers to point to this node itself, marking the node as unlinked. This state is used to indicate that the node is not currently part of any list.</p>


<p>This method is called during initialisation and after a node is unlinked from a list, ensuring the node is in a safe, standalone state and cannot be traversed as part of a list.</p>



:::info
<p>After unlinking a node from a list, it must be returned to this state to prevent accidental access through stale links.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00194">194</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00113">113</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">113</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">double_list_links_base::initialize</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="#aac63387a5b83fd66b646799691220460">double_list_links</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">micro_os_plus::utils::double_list_links_base::initialize_once</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">micro_os_plus::utils::double_list_links_base::unlink</a>.</p>

</div>
</div>

### initialize\_once() {#a19d5ef00655b74ec23dee3a4acb08513}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list_links_base::initialize_once (void)</td>
</tr>
</table>
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
<dd><p>Nothing.</p></dd>
</dl>


<p>If the statically allocated list is still in the initial <em>uninitialised</em> state (with both pointers <span class="doxyComputerOutput">nullptr</span>), this method initialises the list to the empty state, with both pointers pointing to itself.</p>


<p>For non-statically initialised lists, this method is ineffective, since the node is always initialised at construct time.</p>



:::info
<p>This method must be manually called for a statically allocated list before inserting elements or performing any other operations.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00205">205</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00083">83</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">83</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">double_list_links_base::initialize_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">86</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">87</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">initialize</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">88</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">89</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">micro_os_plus::utils::double_list_links_base::initialize</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">micro_os_plus::utils::double_list_links_base::uninitialized</a>.</p>

</div>
</div>

### link\_next() {#a5f8747ea15632be0b184be317bc1f98c}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list_links_base::link_next (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> * node)</td>
</tr>
</table>
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


<p>Insert the new node between the <b>next</b> pointer and the node pointed by it. This operation is used by lists to link new nodes to the list head. The new node's <span class="doxyComputerOutput">previous_</span> pointer is set to the current node, and its <span class="doxyComputerOutput">next_</span> pointer is set to the current node's <span class="doxyComputerOutput">next_</span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the double-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00215">215</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00101">101</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">101</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">double_list_links_base::link_next</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">102</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">103</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">104</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p after %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">105</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">106</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">107</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">108</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">109</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">110</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">111</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">112</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">micro_os_plus::utils::double_list_links_base::double_list_links_base</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>

</div>
</div>

### link\_previous() {#a9b3158786426a54c1d833723eae895b4}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list_links_base::link_previous (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> * node)</td>
</tr>
</table>
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


<p>Insert the new node between the <b>previous</b> pointer and the node pointed by it. Used by lists to link new nodes to the list tail. The new node's <span class="doxyComputerOutput">next_</span> pointer is set to the current node, and its <span class="doxyComputerOutput">previous_</span> pointer is set to the current node's <span class="doxyComputerOutput">previous_</span>. The neighbouring nodes are updated to point to the new node, maintaining the integrity of the double-linked list.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00225">225</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00127">127</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">127</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">double_list_links_base::link_previous</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">128</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">129</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">130</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p before %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">131</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">132</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">136</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">137</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>-&gt;next_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">141</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">micro_os_plus::utils::double_list_links_base::double_list_links_base</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>

</div>
</div>

### linked() {#a8f12afc06993300454b0ad618a4204c3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::double_list_links_base::linked (void)</td>
</tr>
</table>
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

<p>To be <em>linked</em>, both pointers must point to different nodes than itself (double list requirement). If either <span class="doxyComputerOutput">next_</span> or <span class="doxyComputerOutput">previous_</span> points to <span class="doxyComputerOutput">this</span>, the node is considered unlinked (empty state). This method checks the node's linkage status for safe list operations.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00247">247</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00176">176</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">176</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">double_list_links_base::linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">177</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">178</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">179</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">180</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">183</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">184</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">185</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>

</div>
</div>

### next() {#a52cfec44e36307862ce8bf8522059c78}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base * micro_os_plus::utils::double_list_links_base::next (void)</td>
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

<p>Get the link to the <b>next</b> node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Return Values</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">Pointer</td>
<td class="doxyParamItemDescription"><p>to the next node.</p></td>
</tr>
</table>
</dd>
</dl>

<p>Returns a pointer to the next node in the list. If this node is the last in the list, the returned pointer may refer back to the list's sentinel node (for example, the links node in the list container) or to itself if the list is empty.</p>



:::info
<p>The returned pointer is of type <span class="doxyComputerOutput">double_list_links_base*</span> and may need to be cast to the appropriate derived type by the caller.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00257">257</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00137">137</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a52cfec44e36307862ce8bf8522059c78">137</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a52cfec44e36307862ce8bf8522059c78">double_list_links_base::next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a>.</p>

</div>
</div>

### previous() {#a8c0fd02eb96b1799a45285620fc8718a}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base * micro_os_plus::utils::double_list_links_base::previous (void)</td>
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

<p>Get the link to the <b>previous</b> node.</p>


<dl class="doxySectionUser">
<dt>Parameters</dt>
<dd><p>None.</p></dd>
</dl>


<dl class="doxyParamsList">
<dt class="doxyParamsTableTitle">Return Values</dt>
<dd>
<table class="doxyParamsTable">
<tr class="doxyParamItem">
<td class="doxyParamItemName">Pointer</td>
<td class="doxyParamItemDescription"><p>to the previous node.</p></td>
</tr>
</table>
</dd>
</dl>

<p>Returns a pointer to the previous node in the list. If this node is the first in the list, the returned pointer may refer back to the list's sentinel node (such as the links node in the list container) or to itself if the list is empty.</p>



:::info
<p>The returned pointer is of type <span class="doxyComputerOutput">double_list_links_base*</span> and may need to be cast to the appropriate derived type by the caller.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00267">267</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00154">154</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8c0fd02eb96b1799a45285620fc8718a">154</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8c0fd02eb96b1799a45285620fc8718a">double_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">155</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">156</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">157</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>

</div>
</div>

### uninitialized() {#ab1f8f02b4ce24ae9eeae5383f8b0498b}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">bool micro_os_plus::utils::double_list_links_base::uninitialized (void)</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Check if the node is uninitialised.</p>


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
<td class="doxyParamItemDescription"><p>The links are <b>not</b> initialised.</p></td>
</tr>
<tr class="doxyParamItem">
<td class="doxyParamItemName">false</td>
<td class="doxyParamItemDescription"><p>The links are initialised.</p></td>
</tr>
</table>
</dd>
</dl>

<p>An <em>uninitialized</em> node is a node with its pointers set to <span class="doxyComputerOutput">nullptr</span>. Only statically allocated nodes in their initial state are considered uninitialized. Regular (dynamically or automatically allocated) nodes are always initialized during construction, so this method will only return <span class="doxyComputerOutput">true</span> for statically allocated nodes that have not yet been initialized.</p>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00183">183</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00058">58</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">58</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">double_list_links_base::uninitialized</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">59</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">60</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">61</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">62</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">63</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">64</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">65</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">66</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">67</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a19d5ef00655b74ec23dee3a4acb08513">micro_os_plus::utils::double_list_links_base::initialize_once</a>.</p>

</div>
</div>

### unlink() {#af71b18b73b6079575d3532cd80e75aed}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::double_list_links_base::unlink (void)</td>
</tr>
</table>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00236">236</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00151">151</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">151</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">double_list_links_base::unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">152</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">153</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">154</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() %p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">155</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">156</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">157</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make neighbours point to each other.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">158</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This works even if the node is already unlinked,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">159</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// so no need for an extra test.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">160</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>-&gt;next_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">161</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Reset the unlinked node to the initial state,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// with both pointers pointing to itself.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">initialize</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">micro_os_plus::utils::double_list_links_base::initialize</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">micro_os_plus::utils::double_list_links_base::next_</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">micro_os_plus::utils::double_list_links_base::previous_</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Protected Member Attributes

### next\_ {#ac66d4990300bc2a5471bcb446a3f6f4f}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base* micro_os_plus::utils::double_list_links_base::next_</td>
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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00278">278</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">278</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">micro_os_plus::utils::double_list_links_base::initialize</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">micro_os_plus::utils::double_list_links_base::link_next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">micro_os_plus::utils::double_list_links_base::link_previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">micro_os_plus::utils::double_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a52cfec44e36307862ce8bf8522059c78">micro_os_plus::utils::double_list_links_base::next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links/#ac7c7be24256a093ae9b047efd45cbfc3">micro_os_plus::utils::static_double_list_links::nullify</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">micro_os_plus::utils::double_list_links_base::uninitialized</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">micro_os_plus::utils::double_list_links_base::unlink</a>.</p>

</div>
</div>

### previous\_ {#a15d3c57a6bbdaac2de839ac47010b86d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base* micro_os_plus::utils::double_list_links_base::previous_</td>
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

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00273">273</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">273</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>

</div>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af00094c1fb22120e6c8361bcbd94412d">micro_os_plus::utils::double_list_links_base::initialize</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a5f8747ea15632be0b184be317bc1f98c">micro_os_plus::utils::double_list_links_base::link_next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a9b3158786426a54c1d833723eae895b4">micro_os_plus::utils::double_list_links_base::link_previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8f12afc06993300454b0ad618a4204c3">micro_os_plus::utils::double_list_links_base::linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links/#ac7c7be24256a093ae9b047efd45cbfc3">micro_os_plus::utils::static_double_list_links::nullify</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a8c0fd02eb96b1799a45285620fc8718a">micro_os_plus::utils::double_list_links_base::previous</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ab1f8f02b4ce24ae9eeae5383f8b0498b">micro_os_plus::utils::double_list_links_base::uninitialized</a> and <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#af71b18b73b6079575d3532cd80e75aed">micro_os_plus::utils::double_list_links_base::unlink</a>.</p>

</div>
</div>

</div>

<hr/>

The documentation for this class was generated from the following files:

<ul>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a></li>
<li><a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a></li>
</ul>

<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.0.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.14.0.</p>

</div>
