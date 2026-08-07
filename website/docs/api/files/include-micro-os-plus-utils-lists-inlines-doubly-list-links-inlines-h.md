---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - file

---

<div class="doxyPage">

# `doubly-list-links-inlines.h` File

<p>C++ header file with the inline implementations for the <span class="doxyComputerOutput">doubly_list_links_base</span>, <span class="doxyComputerOutput">doubly_list_links</span>, and <span class="doxyComputerOutput">static_doubly_list_links</span> classes. <a href="#details">More...</a></p>

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

## Description {#details}

<p>C++ header file with the inline implementations for the <span class="doxyComputerOutput">doubly_list_links_base</span>, <span class="doxyComputerOutput">doubly_list_links</span>, and <span class="doxyComputerOutput">static_doubly_list_links</span> classes.</p>


<p>Class definitions are located in <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a>. Inline methods are separated into this file to improve project structure and maintainability.</p>


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
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00013"></a>13</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00014"></a>14</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if !defined(MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_LINKS_H_)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00015"></a>15</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#error \</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00016"></a>16</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">    "Do not include this file directly; use micro-os-plus/utils/doubly-list-links.h."</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00017"></a>17</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_LISTS_DOUBLY_LIST_LINKS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00018"></a>18</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00030"></a>30</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_LISTS_INLINES_DOUBLY_LIST_LINKS_INLINES_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_INLINES_DOUBLY_LIST_LINKS_INLINES_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00035"></a>35</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00036"></a>36</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00037"></a>37</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00038"></a>38</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00039"></a>39</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00040"></a>40</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00041"></a>41</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00042"></a>42</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00043"></a>43</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic ignored "-Waggregate-return"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00044"></a>44</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00045"></a>45</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma clang diagnostic ignored "-Wc++98-compat"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00046"></a>46</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00047"></a>47</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00048"></a>48</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00049"></a>49</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00050"></a>50</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00051"></a>51</span><span class="doxyLineContent"><span class="doxyHighlightKeyword">namespace </span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/namespaces/micro-os-plus/utils">micro_os_plus::utils</a></span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00052"></a>52</span><span class="doxyLineContent"><span class="doxyHighlight">{</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00053"></a>53</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00054"></a>54</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00082"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">82</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base::doubly_list_links_base</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00083"></a>83</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00084"></a>84</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00085"></a>85</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00086"></a>86</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00100"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2fb315714d71fb437d4f43c8d9b7e0e5">100</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a2fb315714d71fb437d4f43c8d9b7e0e5">doubly_list_links_base::~doubly_list_links_base</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00101"></a>101</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00102"></a>102</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this destructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00103"></a>103</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00104"></a>104</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00119"></a>119</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00120"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">120</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">doubly_list_links_base::initialise</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00121"></a>121</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00122"></a>122</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00123"></a>123</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> = </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00124"></a>124</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00125"></a>125</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00126"></a>126</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00127"></a>127</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic push</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00128"></a>128</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00129"></a>129</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00130"></a>130</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#else</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00131"></a>131</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00132"></a>132</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__clang__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00133"></a>133</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00134"></a>134</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00146"></a>146</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00147"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">147</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a6190af1d7982bfd89f3ca08adafd8f84">doubly_list_links_base::next</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00148"></a>148</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00149"></a>149</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00150"></a>150</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00151"></a>151</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00163"></a>163</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a>*</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00164"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">164</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#a8820447ea7887e48aa116b25d0672336">doubly_list_links_base::previous</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00165"></a>165</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00166"></a>166</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00167"></a>167</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00168"></a>168</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00176"></a>176</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeywordType">bool</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00177"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">177</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ae3945cbe4a2169d5ea238ca0d109cd96">doubly_list_links_base::linked</a> (</span><span class="doxyHighlightKeywordType">void</span><span class="doxyHighlight">) </span><span class="doxyHighlightKeyword">const</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00178"></a>178</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00179"></a>179</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">if</span><span class="doxyHighlight"> (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight"> || <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00180"></a>180</span><span class="doxyLineContent"><span class="doxyHighlight">      {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00181"></a>181</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00182"></a>182</span><span class="doxyLineContent"><span class="doxyHighlight">        assert (<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a> == </span><span class="doxyHighlightKeyword">this</span><span class="doxyHighlight">);</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00183"></a>183</span><span class="doxyLineContent"><span class="doxyHighlight">        </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">false</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00184"></a>184</span><span class="doxyLineContent"><span class="doxyHighlight">      }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00185"></a>185</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightKeywordFlow">return</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeyword">true</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00186"></a>186</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00187"></a>187</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00188"></a>188</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00189"></a>189</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00190"></a>190</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00191"></a>191</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00192"></a>192</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00193"></a>193</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00220"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">220</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#ac7ec616db12f77994359e25848a63464">static_doubly_list_links::static_doubly_list_links</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00221"></a>221</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00222"></a>222</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Must be empty! No members must be changed by this constructor!</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00223"></a>223</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00224"></a>224</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00231"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a52afe628d2b9380b345eb4999e2633b3">231</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a52afe628d2b9380b345eb4999e2633b3">static_doubly_list_links::~static_doubly_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00232"></a>232</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00233"></a>233</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">reset</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00234"></a>234</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00235"></a>235</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00249"></a>249</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> </span><span class="doxyHighlightKeywordType">void</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00250"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">250</a></span><span class="doxyLineContent"><span class="doxyHighlight">  <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/static-doubly-list-links/#a3b70705245f6c1ecd918316451bc86f9">static_doubly_list_links::reset</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00251"></a>251</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00252"></a>252</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// Force actual writes, even if the compiler could otherwise prove that</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00253"></a>253</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// the values are never read afterwards (dead store elimination).</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00254"></a>254</span><span class="doxyLineContent"><span class="doxyHighlight">    *</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* volatile*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#ac26d24411c07c3684959520fb404f3c8">next_</a>) = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00255"></a>255</span><span class="doxyLineContent"><span class="doxyHighlight">    *</span><span class="doxyHighlightKeyword">const_cast&lt;</span><span class="doxyHighlight"><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#abc42b0e738c95b03fcaf4c387f37ad79">doubly_list_links_base</a>* volatile*</span><span class="doxyHighlightKeyword">&gt;</span><span class="doxyHighlight"> (&amp;<a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aa113cf8b5f13364650d353ae83dab0a3">previous_</a>) = </span><span class="doxyHighlightKeyword">nullptr</span><span class="doxyHighlight">;</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00256"></a>256</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00257"></a>257</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00258"></a>258</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// ==========================================================================</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00259"></a>259</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00283"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">283</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#ae49a3ba1aad4be92cbd17b5d04266f2f">doubly_list_links::doubly_list_links</a> () noexcept</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00284"></a>284</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00285"></a>285</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// For regular (non static) classes the members</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00286"></a>286</span><span class="doxyLineContent"><span class="doxyHighlight">    </span><span class="doxyHighlightComment">// must be explicitly initialised.</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00287"></a>287</span><span class="doxyLineContent"><span class="doxyHighlight">    <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base/#aaf1348f9336c81a961354d6856474bbf">initialise</a> ();</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00288"></a>288</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00289"></a>289</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00295"></a><a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a88922c7df8cdc6ac63f597afe1f78966">295</a></span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightKeyword">constexpr</span><span class="doxyHighlight"> <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links/#a88922c7df8cdc6ac63f597afe1f78966">doubly_list_links::~doubly_list_links</a> ()</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00296"></a>296</span><span class="doxyLineContent"><span class="doxyHighlight">  {</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00297"></a>297</span><span class="doxyLineContent"><span class="doxyHighlight">  }</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00298"></a>298</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00299"></a>299</span><span class="doxyLineContent"><span class="doxyHighlight">  </span><span class="doxyHighlightComment">// --------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00300"></a>300</span><span class="doxyLineContent"><span class="doxyHighlight">} </span><span class="doxyHighlightComment">// namespace micro_os_plus::utils</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00301"></a>301</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00302"></a>302</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00303"></a>303</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#pragma GCC diagnostic pop</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00304"></a>304</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__GNUC__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00305"></a>305</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00306"></a>306</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00307"></a>307</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00308"></a>308</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00309"></a>309</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00310"></a>310</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00311"></a>311</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00312"></a>312</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_LISTS_INLINES_DOUBLY_LIST_LINKS_INLINES_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00313"></a>313</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00314"></a>314</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
