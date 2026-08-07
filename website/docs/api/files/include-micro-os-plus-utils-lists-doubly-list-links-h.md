---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/lists/doubly-list-links-h
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - file

---

<div class="doxyPage">

# `doubly-list-links.h` File

<p>C++ header file with the declarations for the µOS++ doubly linked list link node classes. <a href="#details">More...</a></p>

## Included Headers

<div class="doxyIncludesList">#include "micro-os-plus/diag/trace.h"
#include &lt;cstdint&gt;
#include &lt;cstddef&gt;
#include &lt;cassert&gt;
#include &lt;concepts&gt;
#include &lt;iterator&gt;
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">inlines/doubly-list-links-inlines.h</a>"
</div>

## Namespaces Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">namespace</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus">micro_os_plus</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>The primary namespace for the µOS++ framework. <a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">namespace</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils">utils</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>The µOS++ utilities definitions. <a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Classes Index

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

## Concepts Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">concept</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Concept satisfied by any type publicly derived from <span class="doxyComputerOutput">doubly_list_links_base</span>. <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>C++ header file with the declarations for the µOS++ doubly linked list link node classes.</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a></span> header file contains the C++ declarations of the <span class="doxyComputerOutput">doubly_list_links_base</span>, <span class="doxyComputerOutput">doubly_list_links</span>, and <span class="doxyComputerOutput">static_doubly_list_links</span> classes.</p>


<p>The class implementations are in <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a> and <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>.</p>


## File Listing

The file content with the documentation metadata removed is:

<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00001"></a>1</span><span class="doxyLineContent"><span class="doxyHighlightComment">/*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00002"></a>2</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * This file is part of the µOS++ project (https://micro-os-plus.github.io/).</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00003"></a>3</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00004"></a>4</span><span class="doxyLineContent"><span class="doxyHighlightComment"> *</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00005"></a>5</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * Permission to use, copy, modify, and/or distribute this software for any</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00006"></a>6</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * purpose is hereby granted, under the terms of the MIT license.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00007"></a>7</span><span class="doxyLineContent"><span class="doxyHighlightComment"> *</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00008"></a>8</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * If a copy of the license was not distributed with this file, it can be</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00009"></a>9</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * obtained from https://opensource.org/licenses/mit.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00010"></a>10</span><span class="doxyLineContent"><span class="doxyHighlightComment"> */</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00011"></a>11</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00012"></a>12</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00026"></a>26</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00027"></a>27</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_LINKS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00028"></a>28</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_LINKS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00029"></a>29</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00030"></a>30</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00035"></a>35</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00036"></a>36</span><span class="doxyLineContent"><span class="doxyHighlightComment">// Repeated here, the file is included directly by `doubly-list-links.cpp`.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00037"></a>37</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if __has_include("micro-os-plus/project-config.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00038"></a>38</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "micro-os-plus/project-config.h"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00039"></a>39</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// __has_include("micro-os-plus/project-config.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00040"></a>40</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00041"></a>41</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if __has_include("micro-os-plus/utils/lists-defines.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00042"></a>42</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "micro-os-plus/utils/lists-defines.h"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00043"></a>43</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// __has_include("micro-os-plus/utils/lists-defines.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00044"></a>44</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00045"></a>45</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "micro-os-plus/diag/trace.h"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00046"></a>46</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00047"></a>47</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include &lt;cstdint&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00048"></a>48</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include &lt;cstddef&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00049"></a>49</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include &lt;cassert&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00050"></a>50</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include &lt;concepts&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00051"></a>51</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include &lt;iterator&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00052"></a>52</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00053"></a>53</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00054"></a>54</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00055"></a>55</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00056"></a>56</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00057"></a>57</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00058"></a>58</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic ignored "-Waggregate-return"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00059"></a>59</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00060"></a>60</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic ignored "-Wc++98-compat"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00061"></a>61</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00062"></a>62</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00063"></a>63</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00078"></a><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus">78</a></span><span class="doxyLineContent"><span class="doxyHighlightKeyword">namespace </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils">micro_os_plus::utils</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00079"></a>79</span><span class="doxyLineContent"><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00080"></a>80</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00081"></a>81</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00097"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">97</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00098"></a>98</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00099"></a>99</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00103"></a>103</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a> () </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00104"></a>104</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00105"></a>105</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This class follows the rule of five.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00106"></a>106</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00115"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae5d6fa336952664139f68b27e8c4aacb">115</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae5d6fa336952664139f68b27e8c4aacb">doubly_list_links_base</a> (</span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;) = </span><span class="doxyHighlightKeyword">delete</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00116"></a>116</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00124"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6f693da01593bf7f3e11186c25506fd9">124</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6f693da01593bf7f3e11186c25506fd9">doubly_list_links_base</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;&amp;) = </span><span class="doxyHighlightKeyword">delete</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00125"></a>125</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00134"></a>134</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00135"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a7382bf2027888b6edb259e9ed1dd7d8c">135</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a7382bf2027888b6edb259e9ed1dd7d8c">operator=</a>(</span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00136"></a>136</span><span class="doxyLineContent"><span class="doxyHighlight">        = </span><span class="doxyHighlightKeyword">delete</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00137"></a>137</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00145"></a>145</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00146"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f583c3336517c7f9c78ae136e323f70">146</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a7382bf2027888b6edb259e9ed1dd7d8c">operator=</a>(<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>&amp;&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00147"></a>147</span><span class="doxyLineContent"><span class="doxyHighlight">        = </span><span class="doxyHighlightKeyword">delete</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00148"></a>148</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00152"></a>152</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2fb315714d71fb437d4f43c8d9b7e0e5">~doubly_list_links_base</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00153"></a>153</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00162"></a>162</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00163"></a>163</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0ac52ac284a45e3c5f293c34bef2bbe0">initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00164"></a>164</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00173"></a>173</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00174"></a>174</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00175"></a>175</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00184"></a>184</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00185"></a>185</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8f3b3c5686e857557c5bf69d0313292e">initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00186"></a>186</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00194"></a>194</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00195"></a>195</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ad9c5cdfe5cd9e7f0b1012236cbdaca55">link_next</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00196"></a>196</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00204"></a>204</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00205"></a>205</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2e58bddc3885fa85d263e16e19601ec1">link_previous</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* node) </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00206"></a>206</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00215"></a>215</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00216"></a>216</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a0216c42bec0ad0eed843b3aa3b1c0463">unlink</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00217"></a>217</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00226"></a>226</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00227"></a>227</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00228"></a>228</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00236"></a>236</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00237"></a>237</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00238"></a>238</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00246"></a>246</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00247"></a>247</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00248"></a>248</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00249"></a>249</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">protected</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00253"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">253</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00254"></a>254</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00258"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">258</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00259"></a>259</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00260"></a>260</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00261"></a>261</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00262"></a>262</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00280"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">280</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> : </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00281"></a>281</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00282"></a>282</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00287"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a60b3f3c0a2696f7284d268288047ad54">287</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a60b3f3c0a2696f7284d268288047ad54">is_statically_allocated</a> = std::false_type;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00288"></a>288</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00292"></a>292</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00293"></a>293</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00294"></a>294</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This class follows the rule of five.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00295"></a>295</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00304"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ad5e4574780fc474e91d0c511e25dd714">304</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00305"></a>305</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00313"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a47b58548578410e082de35fc39bb84de">313</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00314"></a>314</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00323"></a>323</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00324"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a1c7a615082c2dc03e995584576196e0f">324</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00325"></a>325</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00326"></a>326</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00334"></a>334</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00335"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a51eb96fc2cd35541d810be49328dc024">335</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a>&amp;&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00336"></a>336</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00337"></a>337</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00345"></a>345</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr ~<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00346"></a>346</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00347"></a>347</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00348"></a>348</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00349"></a>349</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00380"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links">380</a></span><span class="doxyLineContent"><span class="doxyHighlight">  class <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> : public <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00381"></a>381</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00382"></a>382</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00386"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a2e3e1cea0aa11f4174a3d3e57685583e">386</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a2e3e1cea0aa11f4174a3d3e57685583e">is_statically_allocated</a> = std::true_type;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00387"></a>387</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00392"></a>392</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00393"></a>393</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00402"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a4c9d7450cb72071ee02aca2eff769df9">402</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00403"></a>403</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00412"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ae9494c4d04558ec268347dc65cb12f63">412</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00413"></a>413</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00422"></a>422</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00423"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#abc9d7309596e6bb1d512a4464bc6b0b6">423</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00424"></a>424</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00425"></a>425</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00433"></a>433</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00434"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#adae3cfb509afbf57d1adf82b02410bb9">434</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a>&amp;&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00435"></a>435</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00436"></a>436</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00440"></a>440</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr ~<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00441"></a>441</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00450"></a>450</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00451"></a>451</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">reset</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00452"></a>452</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00453"></a>453</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00454"></a>454</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00455"></a>455</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00466"></a>466</span><span class="doxyLineContent"><span class="doxyHighlight">  template &lt;class T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00467"></a><a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">467</a></span><span class="doxyLineContent"><span class="doxyHighlight">  concept <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00468"></a>468</span><span class="doxyLineContent"><span class="doxyHighlight">      = std::derived_from&lt;T, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a>&gt;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00469"></a>469</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00470"></a>470</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// --------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00471"></a>471</span><span class="doxyLineContent"><span class="doxyHighlight">} </span><span class="doxyHighlightComment">// namespace micro_os_plus::utils</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00472"></a>472</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00473"></a>473</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00474"></a>474</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00475"></a>475</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00476"></a>476</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00477"></a>477</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00478"></a>478</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00479"></a>479</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00480"></a>480</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00481"></a>481</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ============================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00482"></a>482</span><span class="doxyLineContent"><span class="doxyHighlightComment">// Templates &amp; constexpr implementations.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00483"></a>483</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00484"></a>484</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">inlines/doubly-list-links-inlines.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00485"></a>485</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00486"></a>486</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00487"></a>487</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00488"></a>488</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_LINKS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00489"></a>489</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00490"></a>490</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
