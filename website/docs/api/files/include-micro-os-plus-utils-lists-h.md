---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/files/include/micro-os-plus/utils/lists-h
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - file

---

<div class="doxyPage">

# `lists.h` File

<p>Aggregate C++ header file for the µOS++ lists classes. <a href="#details">More...</a></p>

## Included Headers

<div class="doxyIncludesList">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">lists/doubly-list-links.h</a>"
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">lists/doubly-list.h</a>"
#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">lists/intrusive-list.h</a>"
</div>

## Macro Definitions Index

<table class="doxyMembersIndex">

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gabaf0f9ceb6be1008107882c4641e3d7b">MICRO_OS_PLUS_UTILS_LISTS_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the µOS++ C++ Intrusive Lists library. <a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gabaf0f9ceb6be1008107882c4641e3d7b">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gaceb30b6e2e4f6a91927986ff08257d0f">MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the trace calls for the µOS++ C++ Intrusive Lists constructors. <a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gaceb30b6e2e4f6a91927986ff08257d0f">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

<tr class="doxyMemberIndexItem">
<td class="doxyMemberIndexItemType" align="left" valign="top">#define</td>
<td class="doxyMemberIndexItemName" align="left" valign="top"><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#ga2298ccb291997f5617a7d6d66a6d9f94">MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</a></td>
</tr>
<tr class="doxyMemberIndexDescription">
<td class="doxyMemberIndexDescriptionLeft"></td>
<td class="doxyMemberIndexDescriptionRight">
<p>Enable the trace calls for the µOS++ C++ Intrusive Lists methods. <a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#ga2298ccb291997f5617a7d6d66a6d9f94">More...</a></p>
</td>
</tr>
<tr class="doxyMemberIndexSeparator">
<td class="doxyMemberIndexSeparator" colspan="2"></td>
</tr>

</table>

## Description {#details}

<p>Aggregate C++ header file for the µOS++ lists classes.</p>


<p>The <span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists-h">lists.h</a></span> header file is the single entry-point for the <b>µOS++ Intrusive Lists</b> library. It includes, in order:</p>


<ul class="doxyList ">
<li><span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">doubly-list-links.h</a></span> — <span class="doxyComputerOutput">doubly_list_links_base</span>, <span class="doxyComputerOutput">doubly_list_links</span>, and <span class="doxyComputerOutput">static_doubly_list_links</span>.</li>
<li><span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">doubly-list.h</a></span> — <span class="doxyComputerOutput">doubly_list_iterator</span> and <span class="doxyComputerOutput">doubly_list</span>.</li>
<li><span class="doxyComputerOutput"><a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">intrusive-list.h</a></span> — <span class="doxyComputerOutput">intrusive_list_iterator</span> and <span class="doxyComputerOutput">intrusive_list</span>.</li>
</ul>

<p>The class implementations are in <a href="/utils-lists-xpack/docs/api/files/src/doubly-list-links-cpp">doubly-list-links.cpp</a>, <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-links-inlines-h">doubly-list-links-inlines.h</a>, <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/doubly-list-inlines-h">doubly-list-inlines.h</a>, and <a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/inlines/intrusive-list-inlines-h">intrusive-list-inlines.h</a>.</p>


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
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00031"></a>31</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00032"></a>32</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#ifndef MICRO_OS_PLUS_UTILS_LISTS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00033"></a>33</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00034"></a>34</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00035"></a>35</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00036"></a>36</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00037"></a>37</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00038"></a>38</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if !(__cplusplus &gt;= 202002L || (defined(_MSVC_LANG) &amp;&amp; _MSVC_LANG &gt;= 202002L))</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00039"></a>39</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#error "C++20 or higher is required"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00040"></a>40</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// C++20 or higher</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00041"></a>41</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__cplusplus)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00042"></a>42</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00043"></a>43</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if __has_include("micro-os-plus/project-config.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00044"></a>44</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "micro-os-plus/project-config.h"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00045"></a>45</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// __has_include("micro-os-plus/project-config.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00046"></a>46</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00047"></a>47</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if __has_include("micro-os-plus/utils/lists-defines.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00048"></a>48</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "micro-os-plus/utils/lists-defines.h"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00049"></a>49</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// __has_include("micro-os-plus/utils/lists-defines.h")</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00050"></a>50</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00051"></a>51</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00052"></a>52</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00053"></a>53</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(__DOXYGEN__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00054"></a><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gabaf0f9ceb6be1008107882c4641e3d7b">54</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_ENABLED</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00055"></a><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#ga2298ccb291997f5617a7d6d66a6d9f94">55</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_ENABLED</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00056"></a><a href="/utils-lists-xpack/docs/api/groups/micro-os-plus-utils-lists-config/#gaceb30b6e2e4f6a91927986ff08257d0f">56</a></span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#define MICRO_OS_PLUS_UTILS_LISTS_TRACE_CONSTRUCTORS_ENABLED </span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00057"></a>57</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(__DOXYGEN__)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00058"></a>58</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00059"></a>59</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00060"></a>60</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00061"></a>61</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#if defined(MICRO_OS_PLUS_UTILS_LISTS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00062"></a>62</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00063"></a>63</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-links-h">lists/doubly-list-links.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00064"></a>64</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/doubly-list-h">lists/doubly-list.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00065"></a>65</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#include "<a href="/utils-lists-xpack/docs/api/files/include/micro-os-plus/utils/lists/intrusive-list-h">lists/intrusive-list.h</a>"</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00066"></a>66</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00067"></a>67</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// defined(MICRO_OS_PLUS_UTILS_LISTS_ENABLED)</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00068"></a>68</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00069"></a>69</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00070"></a>70</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00071"></a>71</span><span class="doxyLineContent"><span class="doxyHighlightPreprocessor">#endif </span><span class="doxyHighlightComment">// MICRO_OS_PLUS_UTILS_LISTS_H_</span></span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00072"></a>72</span></div>
<div class="doxyCodeLine"><span class="doxyLineNumber"><a id="l00073"></a>73</span><span class="doxyLineContent"><span class="doxyHighlightComment">// ----------------------------------------------------------------------------</span></span></div>

</div>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.2.2 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
