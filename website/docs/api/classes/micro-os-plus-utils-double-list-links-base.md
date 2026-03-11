---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/double-list-links-base
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `double_list_links_base` Class

<p>A base class for a doubly linked list node. <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::double_list_links_base { ... }
</div>

## Included Headers

<div class="doxyIncludesList">#include &lt;<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">micro-os-plus/utils/lists.h</a>&gt;
</div>

## Derived Classes

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links">double_list_links</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class for the core of a doubly linked list (pointers to neighbours). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours). <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links/#details">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct an uninitialised list node. <a href="#a414a3b580f22c9e5b528748321f444bf">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a275208a1bb725aef51783b846b6bc5ae">double_list_links_base</a> (const double_list_links_base &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#a275208a1bb725aef51783b846b6bc5ae">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ad612a4bbd88be53fbf60782650f12959">double_list_links_base</a> (double_list_links_base &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#ad612a4bbd88be53fbf60782650f12959">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a03cbf77f8e038bfd28bd6aaa02e54801">~double_list_links_base</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#a03cbf77f8e038bfd28bd6aaa02e54801">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#abf5c00306fbc5499a189f358022e4942">operator=</a> (const double_list_links_base &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#abf5c00306fbc5499a189f358022e4942">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a2f7c25a82c09798f07eb516e79ea4cd5">operator=</a> (double_list_links_base &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#a2f7c25a82c09798f07eb516e79ea4cd5">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links. <a href="#af00094c1fb22120e6c8361bcbd94412d">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a19d5ef00655b74ec23dee3a4acb08513">initialize_once</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Initialise the node links only if not already initialised. <a href="#a19d5ef00655b74ec23dee3a4acb08513">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a5f8747ea15632be0b184be317bc1f98c">link_next</a> (double_list_links_base *node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>next</b>. <a href="#a5f8747ea15632be0b184be317bc1f98c">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a9b3158786426a54c1d833723eae895b4">link_previous</a> (double_list_links_base *node)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Link the new node as <b>previous</b>. <a href="#a9b3158786426a54c1d833723eae895b4">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a8f12afc06993300454b0ad618a4204c3">linked</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is linked to a doubly linked list. <a href="#a8f12afc06993300454b0ad618a4204c3">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a52cfec44e36307862ce8bf8522059c78">next</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>next</b> node. <a href="#a52cfec44e36307862ce8bf8522059c78">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a8c0fd02eb96b1799a45285620fc8718a">previous</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Get the link to the <b>previous</b> node. <a href="#a8c0fd02eb96b1799a45285620fc8718a">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">bool</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> (void) const</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Check if the node is uninitialised. <a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#af71b18b73b6079575d3532cd80e75aed">unlink</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Remove this node from the list. <a href="#af71b18b73b6079575d3532cd80e75aed">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>next</b> node. <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> *</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Pointer to the <b>previous</b> node. <a href="#a15d3c57a6bbdaac2de839ac47010b86d">More...</a></p>
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


<p>Definition at line 117 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxySectionDef">

## Public Constructors

### double\_list\_links\_base() {#a414a3b580f22c9e5b528748321f444bf}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links_base::double_list_links_base ()</td>
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

<p>Construct an uninitialised list node.</p>


<p>This must be an empty constructor that does not modify the member pointers, leaving them unchanged. For statically initialised lists, this means both pointers remain as <span class="doxyComputerOutput">nullptr</span>, representing an uninitialised state. For regular (dynamically initialised) lists, the derived class constructor will handle the initialisation of the pointers.</p>



:::info
<p>This design allows statically allocated objects to be safely zero-initialised at startup (via BSS initialisation), ensuring that the list links are in a known state before any constructors run. It also avoids unnecessary writes for statically allocated objects.</p>
:::



:::warning
<p>Code analysis tools may report:</p>


<ul class="doxyList ">
<li>Member <span class="doxyComputerOutput">previous_</span> was not initialized in constructor</li>
<li>Member <span class="doxyComputerOutput">next_</span> was not initialized in constructor These warnings are expected and can be safely ignored in this context.</li>
</ul>
:::


<dl class="doxySectionUser">
<dt>The rule of five</dt>
<dd><p>The copy constructor, move constructor, copy assignment operator, and move assignment operator are explicitly deleted to prevent accidental copying or moving of <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list</a> objects. This ensures the integrity of the list structure, as duplicating or moving lists could result in invalid or inconsistent links within the list.</p></dd>
</dl>


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00123">123</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00075">75</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a414a3b580f22c9e5b528748321f444bf">75</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base::double_list_links_base</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">76</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">77</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">78</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Referenced by <a href="#a275208a1bb725aef51783b846b6bc5ae">double_list_links_base</a>, <a href="#ad612a4bbd88be53fbf60782650f12959">double_list_links_base</a>, <a href="#a5f8747ea15632be0b184be317bc1f98c">link_next</a>, <a href="#a9b3158786426a54c1d833723eae895b4">link_previous</a>, <a href="#abf5c00306fbc5499a189f358022e4942">operator=</a> and <a href="#a2f7c25a82c09798f07eb516e79ea4cd5">operator=</a>.</p>

</div>
</div>

### double\_list\_links\_base() {#a275208a1bb725aef51783b846b6bc5ae}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links_base::double_list_links_base (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00135">135</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>.</p>

</div>
</div>

### double\_list\_links\_base() {#ad612a4bbd88be53fbf60782650f12959}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links_base::double_list_links_base (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00144">144</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~double\_list\_links\_base() {#a03cbf77f8e038bfd28bd6aaa02e54801}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::double_list_links_base::~double_list_links_base ()</td>
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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00172">172</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00093">93</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a03cbf77f8e038bfd28bd6aaa02e54801">93</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a03cbf77f8e038bfd28bd6aaa02e54801">double_list_links_base::~double_list_links_base</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">94</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">95</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">96</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#abf5c00306fbc5499a189f358022e4942}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base &amp; micro_os_plus::utils::double_list_links_base::operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00155">155</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>.</p>

</div>
</div>

### operator=() {#a2f7c25a82c09798f07eb516e79ea4cd5}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">double_list_links_base &amp; micro_os_plus::utils::double_list_links_base::operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base">double_list_links_base</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00166">166</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<p>Reference <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af00094c1fb22120e6c8361bcbd94412d">113</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#af00094c1fb22120e6c8361bcbd94412d">double_list_links_base::initialize</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">116</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">117</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>


<p>Referenced by <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links/#aac63387a5b83fd66b646799691220460">micro_os_plus::utils::double_list_links::double_list_links</a>, <a href="#a19d5ef00655b74ec23dee3a4acb08513">initialize_once</a> and <a href="#af71b18b73b6079575d3532cd80e75aed">unlink</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a19d5ef00655b74ec23dee3a4acb08513">83</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a19d5ef00655b74ec23dee3a4acb08513">double_list_links_base::initialize_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">84</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">85</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> ())</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">86</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">87</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">88</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">89</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a> and <a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a5f8747ea15632be0b184be317bc1f98c">101</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a5f8747ea15632be0b184be317bc1f98c">double_list_links_base::link_next</a> (<a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">102</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">103</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">104</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p after %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">105</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">106</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">107</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">108</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">109</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">110</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">111</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">112</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">113</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">114</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">115</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>, <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9b3158786426a54c1d833723eae895b4">127</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a9b3158786426a54c1d833723eae895b4">double_list_links_base::link_previous</a> (<a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* node)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">128</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">129</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">130</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() link %p before %p\n"</span><span class="doxyHighlight">, __func__, node, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">131</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">132</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">133</span><span class="doxyLineContent"><span class="doxyHighlight">    assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ != </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">134</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">135</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make the new node point to its new neighbours.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">136</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">137</span><span class="doxyLineContent"><span class="doxyHighlight">    node-&gt;<a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>-&gt;next_ = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = node;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">141</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>, <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a8f12afc06993300454b0ad618a4204c3">176</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a8f12afc06993300454b0ad618a4204c3">double_list_links_base::linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">177</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">178</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight"> || <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">179</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">180</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">181</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">182</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">183</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">184</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">185</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a52cfec44e36307862ce8bf8522059c78">137</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a52cfec44e36307862ce8bf8522059c78">double_list_links_base::next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">138</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">139</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">140</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a8c0fd02eb96b1799a45285620fc8718a">154</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#a8c0fd02eb96b1799a45285620fc8718a">double_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">155</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">156</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">157</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>Reference <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">58</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">double_list_links_base::uninitialized</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span><span class="doxyHighlightKeyword"> const</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">59</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">  </span><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">60</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight"> || <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">61</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">62</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">63</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> == </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">64</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">65</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">66</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">67</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>


<p>Referenced by <a href="#a19d5ef00655b74ec23dee3a4acb08513">initialize_once</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#af71b18b73b6079575d3532cd80e75aed">151</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#af71b18b73b6079575d3532cd80e75aed">double_list_links_base::unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">152</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">153</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_TRACE_UTILS_LISTS)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">154</span><span class="doxyLineContent"><span class="doxyHighlight">    trace::printf (</span><span class="doxyHighlightStringLiteral">"%s() %p \n"</span><span class="doxyHighlight">, __func__, </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">155</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">156</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">157</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Make neighbours point to each other.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">158</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This works even if the node is already unlinked,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">159</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// so no need for an extra test.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">160</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>-&gt;next_ = <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">161</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>-&gt;previous_ = <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">162</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">163</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Reset the unlinked node to the initial state,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">164</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// with both pointers pointing to itself.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">165</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">166</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>


<p>References <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a>, <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> and <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac66d4990300bc2a5471bcb446a3f6f4f">278</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* <a href="#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a>, <a href="#a5f8747ea15632be0b184be317bc1f98c">link_next</a>, <a href="#a9b3158786426a54c1d833723eae895b4">link_previous</a>, <a href="#a8f12afc06993300454b0ad618a4204c3">linked</a>, <a href="#a52cfec44e36307862ce8bf8522059c78">next</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links/#ac7c7be24256a093ae9b047efd45cbfc3">micro_os_plus::utils::static_double_list_links::nullify</a>, <a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> and <a href="#af71b18b73b6079575d3532cd80e75aed">unlink</a>.</p>

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

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a15d3c57a6bbdaac2de839ac47010b86d">273</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="#a414a3b580f22c9e5b528748321f444bf">double_list_links_base</a>* <a href="#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a>;</span></span></div>

</div>


<p>Referenced by <a href="#af00094c1fb22120e6c8361bcbd94412d">initialize</a>, <a href="#a5f8747ea15632be0b184be317bc1f98c">link_next</a>, <a href="#a9b3158786426a54c1d833723eae895b4">link_previous</a>, <a href="#a8f12afc06993300454b0ad618a4204c3">linked</a>, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links/#ac7c7be24256a093ae9b047efd45cbfc3">micro_os_plus::utils::static_double_list_links::nullify</a>, <a href="#a8c0fd02eb96b1799a45285620fc8718a">previous</a>, <a href="#ab1f8f02b4ce24ae9eeae5383f8b0498b">uninitialized</a> and <a href="#af71b18b73b6079575d3532cd80e75aed">unlink</a>.</p>

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
