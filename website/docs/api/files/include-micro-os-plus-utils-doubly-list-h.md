---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/doubly-list-h
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

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>"
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">inlines/doubly-list-inlines.h</a>"
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


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a></span> header file contains the C++ declarations of the <span class="doxyComputerOutput">doubly_list_iterator</span> and <span class="doxyComputerOutput">doubly_list</span> class templates.</p>


<p>The class implementations are in <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>.</p>


## File Listing

The file content with the documentation metadata removed is:

<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00001"></a>1</span><span class="doxyLineContent"><span class="doxyHighlightComment">/*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00002"></a>2</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * This file is part of the µOS++ project (https://micro-os-plus.github.com/).</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00003"></a>3</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * Copyright (c) 2016-2026 Liviu Ionescu. All rights reserved.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00004"></a>4</span><span class="doxyLineContent"><span class="doxyHighlightComment"> *</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00005"></a>5</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * Permission to use, copy, modify, and/or distribute this software</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00006"></a>6</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * for any purpose is hereby granted, under the terms of the MIT license.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00007"></a>7</span><span class="doxyLineContent"><span class="doxyHighlightComment"> *</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00008"></a>8</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * If a copy of the license was not distributed with this file, it can</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00009"></a>9</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * be obtained from https://opensource.org/licenses/mit.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00010"></a>10</span><span class="doxyLineContent"><span class="doxyHighlightComment"> */</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00011"></a>11</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00012"></a>12</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00024"></a>24</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00025"></a>25</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00026"></a>26</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00027"></a>27</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00028"></a>28</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00029"></a>29</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00030"></a>30</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-links-h">doubly-list-links.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifdef __cplusplus</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00035"></a>35</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00036"></a>36</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00037"></a>37</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00038"></a>38</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00039"></a>39</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00040"></a>40</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic ignored "-Waggregate-return"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00041"></a>41</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00042"></a>42</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic ignored "-Wc++98-compat"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00043"></a>43</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00044"></a>44</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00045"></a>45</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00046"></a>46</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">namespace </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils">micro_os_plus::utils</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00047"></a>47</span><span class="doxyLineContent"><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00048"></a>48</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00049"></a>49</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00067"></a>67</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">template</span><span class="doxyHighlight"> &lt;</span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> T, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> N = T, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> U = T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00068"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">68</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00069"></a>69</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00070"></a>70</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00074"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">74</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a> = U;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00075"></a>75</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00079"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">79</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00080"></a>80</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00084"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">84</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a28d100bd546f4d20dd029a88eaa5be45">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00085"></a>85</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00089"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">89</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> = N*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00090"></a>90</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00094"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ada31e9233c36174ea54d5278ec63251b">94</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ada31e9233c36174ea54d5278ec63251b">difference_type</a> = ptrdiff_t;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00095"></a>95</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00099"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a13e836efd2f10d029fa0f2697591a30d">99</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a13e836efd2f10d029fa0f2697591a30d">iterator_category</a> = std::bidirectional_iterator_tag;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00100"></a>100</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00101"></a>101</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00102"></a>102</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00107"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">107</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00108"></a>108</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00114"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a68685b6723db57d6548fa463ac16b9ae">114</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00115"></a>115</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> const node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00116"></a>116</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00123"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a16e0a8a9e96cd4d150cdfc064edc5f06">123</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a> element) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00124"></a>124</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00125"></a>125</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// DO NOT delete the copy constructors, since the default ones are</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00126"></a>126</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// used.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00127"></a>127</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00133"></a>133</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00134"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a9c9223877eafda48859ccd7d01ff0cc7">134</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-&gt;() const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00135"></a>135</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00141"></a>141</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acc050f68a1e8a5f2dca40aa46837a171">reference</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00142"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a18549f728349cbe704d2ef44245afa68">142</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator* () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00143"></a>143</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00149"></a>149</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00150"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a38c8a345db4c1d1e86728836d73e2dc3">150</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00151"></a>151</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00157"></a>157</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00158"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abf034fddf2e4ed8b5cdb75c287380453">158</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00159"></a>159</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00165"></a>165</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00166"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a22d3b74c3ed3419fa33100b3915a4707">166</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00167"></a>167</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00173"></a>173</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00174"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#acf5491ed00b250a2d9f93cbccb66ac99">174</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00175"></a>175</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00187"></a>187</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00188"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0e955577b82393f56888de3d8493dbfd">188</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator== (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#abdecdb8d164aadec97b60853bf209b7f">doubly_list_iterator</a>&amp; other) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00189"></a>189</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00197"></a>197</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a0eaa1bf17be01fcf623d00edea2a574f">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00198"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ac8e422c668e03f4032d06b1c88f7ee81">198</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#ac8e422c668e03f4032d06b1c88f7ee81">get_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00199"></a>199</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00207"></a>207</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00208"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a289d46e5287ce2f9751d7102ca48dc73">208</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a289d46e5287ce2f9751d7102ca48dc73">get_iterator_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00209"></a>209</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00210"></a>210</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00214"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a4bbd6e457a176c2d87c643ee436f9cde">214</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a402e63a0f1ac7e49890a36795af68833">iterator_pointer</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator/#a4bbd6e457a176c2d87c643ee436f9cde">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00215"></a>215</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00216"></a>216</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00217"></a>217</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00218"></a>218</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00247"></a>247</span><span class="doxyLineContent"><span class="doxyHighlight">  template &lt;<a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> T,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00248"></a>248</span><span class="doxyLineContent"><span class="doxyHighlight">            <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> L = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a>&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00249"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list">249</a></span><span class="doxyLineContent"><span class="doxyHighlight">  class <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00250"></a>250</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00251"></a>251</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00256"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">256</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> = L;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00257"></a>257</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00261"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">261</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a> = T;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00262"></a>262</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00266"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">266</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00267"></a>267</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00271"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">271</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00272"></a>272</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00276"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">276</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-iterator">doubly_list_iterator&lt;value_type&gt;</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00277"></a>277</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00281"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">281</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a> = std::reverse_iterator&lt;iterator&gt;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00282"></a>282</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00286"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ac466265f112e5f41b06b64e794f3db63">286</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ac466265f112e5f41b06b64e794f3db63">iterator_pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aabd15bd5b78a500a9e350ff21c6bcf28">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00287"></a>287</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00291"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a735ee001c008f04eb19cd31e5ea43668">291</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a735ee001c008f04eb19cd31e5ea43668">is_statically_allocated</a> =</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00292"></a>292</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">typename</span><span class="doxyHighlight"> links_type::is_statically_allocated;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00293"></a>293</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00297"></a>297</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00298"></a>298</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00307"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a651a33d33feaeb0fdfc0bf905e098218">307</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00308"></a>308</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00317"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a63ee95c08711fb063e880b1122ffe38f">317</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00318"></a>318</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00327"></a>327</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00328"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a94ebc26808071cb791c1917c83fc94f7">328</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00329"></a>329</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00337"></a>337</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00338"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a8b1c494a5d53f363c7905cabb23da66c">338</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00339"></a>339</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00343"></a>343</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr ~<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00344"></a>344</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00345"></a>345</span><span class="doxyLineContent"><span class="doxyHighlight">  public:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00355"></a>355</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00356"></a>356</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a2b0c8c399237932f92c93a60d26f2bea">initialised</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00357"></a>357</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00366"></a>366</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00367"></a>367</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab42aae2bfccbee1628b1b470911f6def">initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00368"></a>368</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00377"></a>377</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00378"></a>378</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a1031c0cc9462644160ea66eaa4c3d700">empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00379"></a>379</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00388"></a>388</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00389"></a>389</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0748cb8980a43053479be54b576910b0">clear</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00390"></a>390</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00398"></a>398</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00399"></a>399</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a34e804930d1b4ab2ea7a538ab4b17d97">head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00400"></a>400</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00408"></a>408</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a06b1703840274b544b5886a9190bef4b">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00409"></a>409</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a6e9d3f30c694a21d98098cac97802ecb">tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00410"></a>410</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00418"></a>418</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00419"></a>419</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ab700f9e890a253eeefb42c8a15b9e403">link_tail</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00420"></a>420</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00428"></a>428</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00429"></a>429</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#af31780e2a87d34eca81ad2a8f47afe2c">link_head</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a5c8bc0b786d3e38ac36d4c6e12bb8ade">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00430"></a>430</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00431"></a>431</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00432"></a>432</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00438"></a>438</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00439"></a>439</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a901d37d96ab59b0863e78774a0b72079">begin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00440"></a>440</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00446"></a>446</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a806d82876c5eadc20150fccb4d380d64">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00447"></a>447</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a9abe477245ac344d306a9ed55f6a4430">end</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00448"></a>448</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00454"></a>454</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00455"></a>455</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aa59f07f0ab869376dfb09dbbe11a92d4">rbegin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00456"></a>456</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00462"></a>462</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a51bfca23b338fb2ba434e49b0a296ee9">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00463"></a>463</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a0314a3e78b3cd027ffed6975a3da4ffa">rend</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00464"></a>464</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00465"></a>465</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Required in derived class iterator end(), where direct</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00466"></a>466</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// access to member fails.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00480"></a>480</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00481"></a>481</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#ad30c1c31d1fe0d806ec271aa58e8eb4d">links_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00482"></a>482</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00483"></a>483</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00484"></a>484</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00485"></a>485</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00496"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">496</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#aed5fc0c1164c30d890986b08d8f3a4da">links_type</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a33f7b43e5620467ed3ea3a1b38b86e45">links_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00497"></a>497</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00498"></a>498</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00499"></a>499</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// --------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00500"></a>500</span><span class="doxyLineContent"><span class="doxyHighlight">} </span><span class="doxyHighlightComment">// namespace micro_os_plus::utils</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00501"></a>501</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00502"></a>502</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00503"></a>503</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00504"></a>504</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00505"></a>505</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00506"></a>506</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00507"></a>507</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00508"></a>508</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// __cplusplus</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00509"></a>509</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00510"></a>510</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ============================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00511"></a>511</span><span class="doxyLineContent"><span class="doxyHighlightComment">// Templates &amp; constexpr implementations.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00512"></a>512</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00513"></a>513</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/doubly-list-inlines-h">inlines/doubly-list-inlines.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00514"></a>514</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00515"></a>515</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00516"></a>516</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00517"></a>517</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_DOUBLY_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00518"></a>518</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00519"></a>519</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.15.0.</p>

</div>
