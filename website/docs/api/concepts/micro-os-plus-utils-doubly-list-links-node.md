---

# DO NOT EDIT!
# Automatically generated via doxygen2docusaurus by Doxygen.

slug: /api/concepts/micro-os-plus/utils/doubly-list-links-node
custom_edit_url: null
toc_max_heading_level: 4
keywords:
  - doxygen
  - reference
  - concept

---

<div class="doxyPage">

# `doubly_list_links_node` Concept

<p>Concept satisfied by any type publicly derived from <span class="doxyComputerOutput">doubly_list_links_base</span>. <a href="#details">More...</a></p>

## Definition

<div class="doxyDefinition">
template &lt;class T&gt;<br/>
concept <a href="/utils-lists-xpack/docs/api/concepts/micro-os-plus/utils/doubly-list-links-node">micro_os_plus::utils::doubly_list_links_node</a> =  std::derived_from&lt;T, <a href="/utils-lists-xpack/docs/api/classes/micro-os-plus/utils/doubly-list-links-base">doubly_list_links_base</a>&gt;
</div>

## Description {#details}

<p>Concept satisfied by any type publicly derived from <span class="doxyComputerOutput">doubly_list_links_base</span>.</p>


<p>Used to constrain the template parameters of <span class="doxyComputerOutput">doubly_list</span> and <span class="doxyComputerOutput">intrusive_list</span> to types that are properly derived from the list node base class, ensuring a valid doubly linked list structure.</p>


<hr/>

<p class="doxyGeneratedBy">Generated via <a href="https://xpack.github.io/doxygen2docusaurus">doxygen2docusaurus</a> 2.1.0 by <a href="https://www.doxygen.nl">Doxygen</a> 1.17.0.</p>

</div>
