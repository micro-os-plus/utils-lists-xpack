---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/lists/doubly-list-h
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - file

---

<div class="doxyPage">

# `doubly-list.h` File

<p>C++ header file with the declarations for the µOS++ doubly linked list iterator and list class templates. <a href="#details">More...</a></p>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>"
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">inlines/doubly-list-inlines.h</a>"
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

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator&lt;T, N, U&gt;</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class template for a doubly linked list iterator. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>C++ header file with the declarations for the µOS++ doubly linked list iterator and list class templates.</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a></span> header file contains the C++ declarations of the <span class="doxyComputerOutput">doubly_list_iterator</span> and <span class="doxyComputerOutput">doubly_list</span> class templates.</p>


<p>The class implementations are in <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


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
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00024"></a>24</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00025"></a>25</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00026"></a>26</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00027"></a>27</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00028"></a>28</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00029"></a>29</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00030"></a>30</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00035"></a>35</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00036"></a>36</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00037"></a>37</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00038"></a>38</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00039"></a>39</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00040"></a>40</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00041"></a>41</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic ignored "-Waggregate-return"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00042"></a>42</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00043"></a>43</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic ignored "-Wc++98-compat"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00044"></a>44</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00045"></a>45</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00046"></a>46</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00047"></a>47</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">namespace </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils">micro_os_plus::utils</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00048"></a>48</span><span class="doxyLineContent"><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00049"></a>49</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00050"></a>50</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00068"></a>68</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">template</span><span class="doxyHighlight"> &lt;</span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> T, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> N = T, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> U = T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00069"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">69</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00070"></a>70</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00071"></a>71</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00075"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">75</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> = U;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00076"></a>76</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00080"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">80</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00081"></a>81</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00085"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">85</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00086"></a>86</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00090"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">90</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> = N*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00091"></a>91</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00095"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ada31e9233c36174ea54d5278ec63251b">95</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ada31e9233c36174ea54d5278ec63251b">difference_type</a> = ptrdiff_t;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00096"></a>96</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00100"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a13e836efd2f10d029fa0f2697591a30d">100</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a13e836efd2f10d029fa0f2697591a30d">iterator_category</a> = std::bidirectional_iterator_tag;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00101"></a>101</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00102"></a>102</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00103"></a>103</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00108"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">108</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00109"></a>109</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00115"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a68685b6723db57d6548fa463ac16b9ae">115</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00116"></a>116</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> const node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00117"></a>117</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00124"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a16e0a8a9e96cd4d150cdfc064edc5f06">124</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a> element) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00125"></a>125</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00126"></a>126</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// DO NOT delete the copy constructors, since the default ones are</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00127"></a>127</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// used.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00128"></a>128</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00134"></a>134</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00135"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a9c9223877eafda48859ccd7d01ff0cc7">135</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-&gt;() const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00136"></a>136</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00142"></a>142</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00143"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a18549f728349cbe704d2ef44245afa68">143</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator* () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00144"></a>144</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00150"></a>150</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00151"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a38c8a345db4c1d1e86728836d73e2dc3">151</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00152"></a>152</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00158"></a>158</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00159"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abf034fddf2e4ed8b5cdb75c287380453">159</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00160"></a>160</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00166"></a>166</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00167"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a22d3b74c3ed3419fa33100b3915a4707">167</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00168"></a>168</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00174"></a>174</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00175"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acf5491ed00b250a2d9f93cbccb66ac99">175</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00176"></a>176</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00188"></a>188</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00189"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0e955577b82393f56888de3d8493dbfd">189</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator== (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp; other) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00190"></a>190</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00198"></a>198</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00199"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ac8e422c668e03f4032d06b1c88f7ee81">199</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00200"></a>200</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00208"></a>208</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00209"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a289d46e5287ce2f9751d7102ca48dc73">209</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a289d46e5287ce2f9751d7102ca48dc73">get_iterator_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00210"></a>210</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00211"></a>211</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00215"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a4bbd6e457a176c2d87c643ee436f9cde">215</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00216"></a>216</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00217"></a>217</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00218"></a>218</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00219"></a>219</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00248"></a>248</span><span class="doxyLineContent"><span class="doxyHighlight">  template &lt;<a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> T,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00249"></a>249</span><span class="doxyLineContent"><span class="doxyHighlight">            <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> L = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a>&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00250"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">250</a></span><span class="doxyLineContent"><span class="doxyHighlight">  class <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00251"></a>251</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00252"></a>252</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00257"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">257</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> = L;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00258"></a>258</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00262"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">262</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> = T;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00263"></a>263</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00267"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">267</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00268"></a>268</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00272"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">272</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00273"></a>273</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00277"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">277</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator&lt;value_type&gt;</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00278"></a>278</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00282"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">282</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a> = std::reverse_iterator&lt;iterator&gt;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00283"></a>283</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00287"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ac466265f112e5f41b06b64e794f3db63">287</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00288"></a>288</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00292"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#adbf5db61332c997df0576be993832ed2">292</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#adbf5db61332c997df0576be993832ed2">is_statically_allocated</a> =</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00293"></a>293</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">typename</span><span class="doxyHighlight"> links_type::is_statically_allocated;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00294"></a>294</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00298"></a>298</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00299"></a>299</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00308"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a651a33d33feaeb0fdfc0bf905e098218">308</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00309"></a>309</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00318"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a63ee95c08711fb063e880b1122ffe38f">318</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00319"></a>319</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00328"></a>328</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00329"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a94ebc26808071cb791c1917c83fc94f7">329</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00330"></a>330</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00331"></a>331</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00339"></a>339</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00340"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a8b1c494a5d53f363c7905cabb23da66c">340</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00341"></a>341</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00342"></a>342</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00346"></a>346</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr ~<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00347"></a>347</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00348"></a>348</span><span class="doxyLineContent"><span class="doxyHighlight">  public:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00358"></a>358</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00359"></a>359</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00360"></a>360</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00369"></a>369</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00370"></a>370</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab42aae2bfccbee1628b1b470911f6def">initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00371"></a>371</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00380"></a>380</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00381"></a>381</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a1031c0cc9462644160ea66eaa4c3d700">empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00382"></a>382</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00391"></a>391</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00392"></a>392</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">clear</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00393"></a>393</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00401"></a>401</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00402"></a>402</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00403"></a>403</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00411"></a>411</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00412"></a>412</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00413"></a>413</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00421"></a>421</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00422"></a>422</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab700f9e890a253eeefb42c8a15b9e403">link_tail</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00423"></a>423</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00431"></a>431</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00432"></a>432</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#af31780e2a87d34eca81ad2a8f47afe2c">link_head</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00433"></a>433</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00434"></a>434</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00435"></a>435</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00441"></a>441</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00442"></a>442</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a901d37d96ab59b0863e78774a0b72079">begin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00443"></a>443</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00449"></a>449</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00450"></a>450</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">end</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00451"></a>451</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00457"></a>457</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00458"></a>458</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aa59f07f0ab869376dfb09dbbe11a92d4">rbegin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00459"></a>459</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00465"></a>465</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00466"></a>466</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0314a3e78b3cd027ffed6975a3da4ffa">rend</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00467"></a>467</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00468"></a>468</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Required in derived class iterator end(), where direct</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00469"></a>469</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// access to member fails.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00483"></a>483</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00484"></a>484</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">links_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00485"></a>485</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00486"></a>486</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00487"></a>487</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00488"></a>488</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00499"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">499</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00500"></a>500</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00501"></a>501</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00502"></a>502</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// --------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00503"></a>503</span><span class="doxyLineContent"><span class="doxyHighlight">} </span><span class="doxyHighlightComment">// namespace micro_os_plus::utils</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00504"></a>504</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00505"></a>505</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00506"></a>506</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00507"></a>507</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00508"></a>508</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00509"></a>509</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00510"></a>510</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00511"></a>511</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00512"></a>512</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00513"></a>513</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ============================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00514"></a>514</span><span class="doxyLineContent"><span class="doxyHighlightComment">// Templates &amp; constexpr implementations.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00515"></a>515</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00516"></a>516</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">inlines/doubly-list-inlines.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00517"></a>517</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00518"></a>518</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00519"></a>519</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00520"></a>520</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00521"></a>521</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00522"></a>522</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
