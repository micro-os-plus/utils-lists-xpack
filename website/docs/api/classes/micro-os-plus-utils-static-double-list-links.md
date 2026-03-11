---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/classes/micro-os-plus/utils/static-double-list-links
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - class

---

<div class="doxyPage">

# `static_double_list_links` Class

<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours). <a href="#details">More...</a></p>

## Declaration

<div class="doxyDeclaration">
class micro_os_plus::utils::static_double_list_links { ... }
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a9391daf64c687146e1a44d3d6ce556e7">is_statically_allocated</a> = std::true_type</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Type indicating that the links node is statically allocated. <a href="#a9391daf64c687146e1a44d3d6ce556e7">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a9748ad03de14f62527a68161210c3946">static_double_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Construct a statically allocated list node (<b>BSS</b> initialised). <a href="#a9748ad03de14f62527a68161210c3946">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a6958ea54182c599d01d444e4e9f30df1">static_double_list_links</a> (const static_double_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy constructor. <a href="#a6958ea54182c599d01d444e4e9f30df1">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"></td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a2be6370be0af2f424e41e6a9814bcb2d">static_double_list_links</a> (static_double_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move constructor. <a href="#a2be6370be0af2f424e41e6a9814bcb2d">More...</a></p>
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#abde78859511a6a64bf481128ed84cf87">~static_double_list_links</a> ()</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Destruct the node. <a href="#abde78859511a6a64bf481128ed84cf87">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Public Operators Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#a4890324f5e2fb22f554e0d29803172f1">operator=</a> (const static_double_list_links &amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted copy assignment operator. <a href="#a4890324f5e2fb22f554e0d29803172f1">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ab42a891ed3eca56520eb5e47f6a18916">operator=</a> (static_double_list_links &amp;&amp;)=delete</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Deleted move assignment operator. <a href="#ab42a891ed3eca56520eb5e47f6a18916">More...</a></p>
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
<td class="doxyMemberIndexItemType" align="left" valign="top">void</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="#ac7c7be24256a093ae9b047efd45cbfc3">nullify</a> (void)</td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Reset the two pointers to <span class="doxyComputerOutput">nullptr</span>. <a href="#ac7c7be24256a093ae9b047efd45cbfc3">More...</a></p>
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

<p>A class for the core of a statically allocated doubly linked list (pointers to neighbours).</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a></span> class inherits a pair of uninitialised pointers to the <b>next</b> and <b>previous</b> list elements, as well as methods to access and manipulate these pointers, from its base class.</p>


<p>Instances of this class are intended to be statically allocated in the <b>BSS</b> section and automatically cleared (set to zero) during startup. This design enables reliable initialisation before any static constructors are executed, which is essential because the order of static initialisation is not defined by the C++ standard.</p>


<p>Statically allocated lists are commonly used by registrar objects to automate the self-registration of other statically allocated objects, such as drivers, threads, and similar components. By leveraging <b>BSS</b> initialisation, the registrar is guaranteed to be ready before any static objects attempt to register themselves.</p>


<p>As a consequence, list initialisation cannot be performed in the constructor, but must be done manually before invoking any method that adds elements to the list. This approach ensures robust and predictable behaviour in embedded and system-level applications where static object registration is required.</p>


<p>Definition at line 400 of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxySectionDef">

## Public Member Typedefs

### is\_statically\_allocated {#a9391daf64c687146e1a44d3d6ce556e7}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">using micro_os_plus::utils::static_double_list_links::is_statically_allocated =  std::true_type</td>
</tr>
</table>
</td>
</tr>
</table>
</div>
<div class="doxyMemberDoc">

<p>Type indicating that the links node is statically allocated.</p>

<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00406">406</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9391daf64c687146e1a44d3d6ce556e7">406</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="#a9391daf64c687146e1a44d3d6ce556e7">is_statically_allocated</a> = std::true_type;</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Constructors

### static\_double\_list\_links() {#a9748ad03de14f62527a68161210c3946}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_double_list_links::static_double_list_links ()</td>
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

<p>Construct a statically allocated list node (<b>BSS</b> initialised).</p>


<p>This constructor is intended for statically allocated list link nodes. It must be empty and must not modify the member pointers, leaving them unchanged. For statically allocated objects, the entire memory region is zero-initialised at startup (via BSS initialisation), so both <span class="doxyComputerOutput">previous_</span> and <span class="doxyComputerOutput">next_</span> pointers are set to <span class="doxyComputerOutput">nullptr</span>, representing an uninitialised state.</p>


<p>This approach ensures that statically allocated lists are in a known, safe state before any constructors run, and avoids unnecessary writes or side effects during construction.</p>



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


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00412">412</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00189">189</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#a9748ad03de14f62527a68161210c3946">189</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#a9748ad03de14f62527a68161210c3946">static_double_list_links::static_double_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">190</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">191</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">192</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

### static\_double\_list\_links() {#a6958ea54182c599d01d444e4e9f30df1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_double_list_links::static_double_list_links (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00422">422</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

### static\_double\_list\_links() {#a2be6370be0af2f424e41e6a9814bcb2d}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_double_list_links::static_double_list_links (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00432">432</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Destructor

### \~static\_double\_list\_links() {#abde78859511a6a64bf481128ed84cf87}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">micro_os_plus::utils::static_double_list_links::~static_double_list_links ()</td>
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


<p>The destructor for <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a></span> is intentionally left empty to avoid modifying the member pointers. The goal is to revert the content to a state similar to the statically initialised state (BSS zero), but recent versions of GCC may optimize out any code that attempts to clear the pointers (dead store elimination).</p>


<p>As a result, explicit pointer clearing in the destructor is not reliable. If pointer reset is required, use the <span class="doxyComputerOutput"><a href="#ac7c7be24256a093ae9b047efd45cbfc3">nullify()</a></span> method explicitly, or clear the memory before invoking the placement <span class="doxyComputerOutput">new</span> constructor again.</p>



:::warning
<p>The code to clear the pointers is now commented out, since recent GCC optimizes it out (dead store elimination). Depending on the version, there might be some attributes to allow this, but they are not safe, for example <span class="doxyComputerOutput">__attribute__((optimize("no-lifetime-dse,no-dse,no-inline")))</span> did not help. The workaround is to use <span class="doxyComputerOutput"><a href="#ac7c7be24256a093ae9b047efd45cbfc3">nullify()</a></span> explicitly, or, even better, to clear the memory before invoking the placement <span class="doxyComputerOutput">new</span> constructor again.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00460">460</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h/#l00220">220</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-inlines-h">lists-inlines.h</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#abde78859511a6a64bf481128ed84cf87">220</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="#abde78859511a6a64bf481128ed84cf87">static_double_list_links::~static_double_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">221</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">222</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// The goal is to revert the content to a state similar to the</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">223</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// statically initialised state (BSS zero).</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">224</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Unfortunately GCC does not honour this.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">225</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// next_ = nullptr;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">226</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// previous_ = nullptr;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">227</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

</div>
</div>

</div>

<div class="doxySectionDef">

## Public Operators

### operator=() {#a4890324f5e2fb22f554e0d29803172f1}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">static_double_list_links &amp; micro_os_plus::utils::static_double_list_links::operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00443">443</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

</div>
</div>

### operator=() {#ab42a891ed3eca56520eb5e47f6a18916}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">static_double_list_links &amp; micro_os_plus::utils::static_double_list_links::operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-double-list-links">static_double_list_links</a> &amp;&amp;)</td>
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


<p>Definition at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00454">454</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>.</p>

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

</div>
</div>

### nullify() {#ac7c7be24256a093ae9b047efd45cbfc3}

<div class="doxyMemberItem">
<div class="doxyMemberProto">
<table class="doxyMemberLabels">
<tr class="doxyMemberLabels">
<td class="doxyMemberLabelsLeft">
<table class="doxyMemberName">
<tr>
<td class="doxyMemberName">void micro_os_plus::utils::static_double_list_links::nullify (void)</td>
</tr>
</table>
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


<p>Sets both the <span class="doxyComputerOutput">next_</span> and <span class="doxyComputerOutput">previous_</span> pointers to <span class="doxyComputerOutput">nullptr</span>, marking the node as uninitialized. This is typically used for statically allocated nodes to explicitly place them in an uninitialized state.</p>



:::warning
<p>Not very safe, since the compiler may optimise out the code.</p>
:::


<p>Declaration at line <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h/#l00471">471</a> of file <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a>, definition at line <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp/#l00203">203</a> of file <a href="/utils-lists-xpack/docs/api/files/src/lists-cpp">lists.cpp</a>.</p>


<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a href="#ac7c7be24256a093ae9b047efd45cbfc3">203</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="#ac7c7be24256a093ae9b047efd45cbfc3">static_double_list_links::nullify</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">204</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">205</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#ac66d4990300bc2a5471bcb446a3f6f4f">next_</a> = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">206</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/double-list-links-base/#a15d3c57a6bbdaac2de839ac47010b86d">previous_</a> = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber">207</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>

</div>

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
