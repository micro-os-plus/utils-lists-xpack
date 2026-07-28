---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/intrusive-list-h
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - file

---

<div class="doxyPage">

# `intrusive-list.h` File

<p>C++ header file with the declarations for the µOS++ intrusive list iterator and list class templates. <a href="#details">More...</a></p>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>"
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">inlines/intrusive-list-inlines.h</a>"
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
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">intrusive_list&lt;T, N, MP, L, U&gt;</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class template for a list of nodes which store the links inside themselves as intrusive nodes. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">class</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator&lt;T, N, MP, U&gt;</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>A class template for the intrusive list iterator. <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#details">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>C++ header file with the declarations for the µOS++ intrusive list iterator and list class templates.</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/intrusive-list-h">intrusive-list.h</a></span> header file contains the C++ declarations of the <span class="doxyComputerOutput">intrusive_list_iterator</span> and <span class="doxyComputerOutput">intrusive_list</span> class templates.</p>


<p>The class implementations are in <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


## File Listing

The file content with the documentation metadata removed is:

<div class="doxyProgramListing">

<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00001"></a>1</span><span class="doxyLineContent"><span class="doxyHighlightComment">/*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00002"></a>2</span><span class="doxyLineContent"><span class="doxyHighlightComment"> * This file is part of the µOS++ project (https://micro-os-plus.github.com/).</span></span></div>
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
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00025"></a>25</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00026"></a>26</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00027"></a>27</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00028"></a>28</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00029"></a>29</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00030"></a>30</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/doubly-list-h">doubly-list.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__cplusplus)</span></span></div>
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
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00068"></a>68</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">template</span><span class="doxyHighlight"> &lt;</span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> T, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> N, N T::* MP, </span><span class="doxyHighlightKeyword">class</span><span class="doxyHighlight"> U = T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00069"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">69</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00070"></a>70</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00071"></a>71</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00075"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aa7fd4b71eb2848e6016ea84fdedb06c7">75</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a> = U;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00076"></a>76</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00080"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a08ac64c64dce736d83a93dfc838083af">80</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a08ac64c64dce736d83a93dfc838083af">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00081"></a>81</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00085"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a90c6d3cd7bf8dab6039cb02af0ab5e4e">85</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aa7fd4b71eb2848e6016ea84fdedb06c7">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00086"></a>86</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00090"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a520f5e4b1067d0febf857e04f6f37b83">90</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> = N*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00091"></a>91</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00095"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#adf2b6ab52c63f0747113565c183df0f3">95</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#adf2b6ab52c63f0747113565c183df0f3">difference_type</a> = ptrdiff_t;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00096"></a>96</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00100"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a879cf5b1d6d65ce492aec7f307fa474e">100</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a879cf5b1d6d65ce492aec7f307fa474e">iterator_category</a> = std::bidirectional_iterator_tag;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00101"></a>101</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00102"></a>102</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00103"></a>103</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00108"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">108</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00109"></a>109</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00115"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#af3bf247661cb8d3cc9876cc1451fe64d">115</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> (</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00116"></a>116</span><span class="doxyLineContent"><span class="doxyHighlight">        <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> const node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00117"></a>117</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00128"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a064fb9a6cf27543e453874d2c4650d5a">128</a></span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr explicit <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a> element) noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00129"></a>129</span><span class="doxyLineContent"><span class="doxyHighlight">      requires std::derived_from&lt;U, T&gt;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00130"></a>130</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00131"></a>131</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// DO NOT delete the copy constructors, since this implies that</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00132"></a>132</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// the default ones will be used.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00133"></a>133</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00139"></a>139</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a08ac64c64dce736d83a93dfc838083af">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00140"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#ad5c0f3d97e59d361f3f69f91f98001a3">140</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-&gt;() const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00141"></a>141</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00147"></a>147</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a90c6d3cd7bf8dab6039cb02af0ab5e4e">reference</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00148"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a02d97e48aa2727ed8445c023942f30e6">148</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator* () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00149"></a>149</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00155"></a>155</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00156"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a50d428211ad0b30b6140c85cb898ff50">156</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00157"></a>157</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00163"></a>163</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00164"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aa8fa99a95e7d9a21ba91206cec42b5e6">164</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator++ (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00165"></a>165</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00171"></a>171</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00172"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aee99a90c7b61cba2c453301e9a410946">172</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00173"></a>173</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00179"></a>179</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00180"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a3120afffac4d89be37b06190ac32c3b2">180</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator-- (</span><span class="doxyHighlightKeywordType">int</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00181"></a>181</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00193"></a>193</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00194"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#af21195356b367c6a5d061aa893e2f7c0">194</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator== (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a7f50db671a84210327743eb29cae2170">intrusive_list_iterator</a>&amp; other) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00195"></a>195</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00203"></a>203</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a08ac64c64dce736d83a93dfc838083af">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00204"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a93c954e164fc4cd26e29f64a54a2cfb5">204</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a93c954e164fc4cd26e29f64a54a2cfb5">get_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00205"></a>205</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00213"></a>213</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00214"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a72e4be9dcf753c754d8f6ddb3e32dc39">214</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a72e4be9dcf753c754d8f6ddb3e32dc39">get_iterator_pointer</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00215"></a>215</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00216"></a>216</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00223"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aee433922fe4b649d6c1b529e620e9345">223</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#a520f5e4b1067d0febf857e04f6f37b83">iterator_pointer</a> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator/#aee433922fe4b649d6c1b529e620e9345">node_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00224"></a>224</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00225"></a>225</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00226"></a>226</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00227"></a>227</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00228"></a>228</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00229"></a>229</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00230"></a>230</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic ignored "-Wdocumentation"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00231"></a>231</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00271"></a>271</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00272"></a>272</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00273"></a>273</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00274"></a>274</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00275"></a>275</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">template</span><span class="doxyHighlight"> &lt;</span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight">T, <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> N, N T::* MP,</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00276"></a>276</span><span class="doxyLineContent"><span class="doxyHighlight">            <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">doubly_list_links_node</a> L = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links">doubly_list_links</a>, </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight">U = T&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00277"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list">277</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">class </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a> : </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list/#a7105e8211e6c99d4b589759db0b60172">doubly_list</a>&lt;N, L&gt;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00278"></a>278</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00279"></a>279</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">public</span><span class="doxyHighlight">:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00284"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a0bb5c5cba26ff911bbae525200d9e3c1">284</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a0bb5c5cba26ff911bbae525200d9e3c1">links_type</a> = L;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00285"></a>285</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00289"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a75fc498797691719252818fb40047e14">289</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a75fc498797691719252818fb40047e14">value_type</a> = U;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00290"></a>290</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00294"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac7006fb066460b5ff008f6f64d62e272">294</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac7006fb066460b5ff008f6f64d62e272">pointer</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a75fc498797691719252818fb40047e14">value_type</a>*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00295"></a>295</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00299"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aa9d68f393f6506fd6d84d7f9e7e520c3">299</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a75fc498797691719252818fb40047e14">value_type</a>&amp;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00300"></a>300</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00304"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a6c44dc25422336e98d5c450874496041">304</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a6c44dc25422336e98d5c450874496041">iterator</a> = <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list-iterator">intrusive_list_iterator&lt;T, N, MP, U&gt;</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00305"></a>305</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00309"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a65a1af0be82741cf1759c7ef3d237baf">309</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a> = std::reverse_iterator&lt;iterator&gt;;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00310"></a>310</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00314"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a265d899bb1ab09596057665937377481">314</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a265d899bb1ab09596057665937377481">is_statically_allocated</a> =</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00315"></a>315</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeyword">typename</span><span class="doxyHighlight"> links_type::is_statically_allocated;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00316"></a>316</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00320"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a3c9a90f0bde3f7d498d4419c41adf723">320</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> = N*;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00321"></a>321</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00325"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac680e68f2e9956c87105cccdfbedeb6b">325</a></span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">using </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac680e68f2e9956c87105cccdfbedeb6b">difference_type</a> = ptrdiff_t;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00326"></a>326</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00330"></a>330</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a> () noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00331"></a>331</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00332"></a>332</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// This class follows the rule of five.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00333"></a>333</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00342"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ae66333c76d059f070d959298e0fa396c">342</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a> (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00343"></a>343</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00352"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ace009ba3457127e9311d9fc8ae80b181">352</a></span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;&amp;) = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00353"></a>353</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00362"></a>362</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00363"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a96c735ada72f8b5f08b07b40bd315bb4">363</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (const <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00364"></a>364</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00365"></a>365</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00373"></a>373</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00374"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aefd72bb2624733146adfd2f1de3f341e">374</a></span><span class="doxyLineContent"><span class="doxyHighlight">    operator= (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a>&amp;&amp;)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00375"></a>375</span><span class="doxyLineContent"><span class="doxyHighlight">        = delete;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00376"></a>376</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00380"></a>380</span><span class="doxyLineContent"><span class="doxyHighlight">    constexpr ~<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac471c87c75b56ee264396e144367186">intrusive_list</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00381"></a>381</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00382"></a>382</span><span class="doxyLineContent"><span class="doxyHighlight">  public:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00391"></a>391</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00392"></a>392</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a354dd2dfa628779115681a8699098f50">initialise_once</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00393"></a>393</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00402"></a>402</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] constexpr </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00403"></a>403</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aac60af945ef1a00463fc38dac3bdad84">empty</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00404"></a>404</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00412"></a>412</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00413"></a>413</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac0693cd4f727c8e7895cdaa88beed572">link_tail</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00414"></a>414</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00422"></a>422</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00423"></a>423</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#af56d27306de13d542af3fc75c8b33a98">link_head</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aa9d68f393f6506fd6d84d7f9e7e520c3">reference</a> node) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00424"></a>424</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00433"></a>433</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac7006fb066460b5ff008f6f64d62e272">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00434"></a>434</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a7878a8547530eabf72a45d32a6bb5b61">unlink_tail</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00435"></a>435</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00444"></a>444</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac7006fb066460b5ff008f6f64d62e272">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00445"></a>445</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#aeefaa688359ada2d5891db7888a0c9ff">unlink_head</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00446"></a>446</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00447"></a>447</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00448"></a>448</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00454"></a>454</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a6c44dc25422336e98d5c450874496041">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00455"></a>455</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#adef2b182f0ffdecb849e7e134c519972">begin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00456"></a>456</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00462"></a>462</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a6c44dc25422336e98d5c450874496041">iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00463"></a>463</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a4c9475e107b02f9940623ec283b5e789">end</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00464"></a>464</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00470"></a>470</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00471"></a>471</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a3ddaec2647ff81b7af23a51129d46b25">rbegin</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00472"></a>472</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00478"></a>478</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a65a1af0be82741cf1759c7ef3d237baf">reverse_iterator</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00479"></a>479</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#add97ee6a82f85e13879740459c67a06f">rend</a> () const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00480"></a>480</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00481"></a>481</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// ------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00482"></a>482</span><span class="doxyLineContent"><span class="doxyHighlight">  protected:</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00489"></a>489</span><span class="doxyLineContent"><span class="doxyHighlight">    [[nodiscard]] <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#ac7006fb066460b5ff008f6f64d62e272">pointer</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00490"></a>490</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a7544708bb62129c7ca80053bb2a09012">get_pointer</a> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/intrusive-list/#a3c9a90f0bde3f7d498d4419c41adf723">iterator_pointer</a> node) const noexcept;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00491"></a>491</span><span class="doxyLineContent"><span class="doxyHighlight">  };</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00492"></a>492</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00493"></a>493</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// --------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00494"></a>494</span><span class="doxyLineContent"><span class="doxyHighlight">} </span><span class="doxyHighlightComment">// namespace micro_os_plus::utils</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00495"></a>495</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00496"></a>496</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00497"></a>497</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00498"></a>498</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00499"></a>499</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00500"></a>500</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00501"></a>501</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00502"></a>502</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00503"></a>503</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00504"></a>504</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ============================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00505"></a>505</span><span class="doxyLineContent"><span class="doxyHighlightComment">// Templates &amp; constexpr implementations.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00506"></a>506</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00507"></a>507</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/inlines/intrusive-list-inlines-h">inlines/intrusive-list-inlines.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00508"></a>508</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00509"></a>509</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00510"></a>510</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00511"></a>511</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_INTRUSIVE_LIST_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00512"></a>512</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00513"></a>513</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
