/*
 * DO NOT EDIT!
 * Automatically generated from docusaurus-template-liquid/templates/docusaurus.
 *
 * This file is part of the µOS++ project (https://micro-os-plus.github.com).
 * Copyright (c) 2021 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT.
 */

/**

@file top-common.h
@brief Common Doxygen definitions for the µOS++ project.

@details
This file provides the principal Doxygen group and namespace documentation for
the µOS++ project, serving as a central reference for the project's structure
and organisation.

Although named as a header, this file is not included in the build process; it
is intended solely as a documentation resource for Doxygen. Due to Doxygen
processing requirements, it cannot be supplied as a Markdown file or a
.doxyfile.

The file introduces the main documentation group for the µOS++ framework,
outlining the overall project structure, which consists of multiple modular
source libraries maintained as separate repositories within the
[micro-os-plus](https://github.com/micro-os-plus) group on GitHub.

Additionally, it documents the `micro_os_plus` namespace, which acts as the
primary scope for all classes, functions, variables, enumerations, type
definitions, and related entities within the framework. The namespace is
further organised into nested namespaces to promote modularity, reduce
redundancy, and enhance maintainability.

All definitions and documentation topics in this file are maintained in the
`website/doxygen` folder to ensure a consistent and modular structure
throughout the project's documentation.


@dir include
@brief Folder with C/C++ header files.

@details
The `include` folder contains all public header files for the µOS++ libraries.

To provide isolation with other projects, the header files for the µOS++ libraries are located in the `micro-os-plus` folder.


@dir include/micro-os-plus
@brief Folder with C/C++ header files for the µOS++ libraries.

@details
The `include/micro-os-plus` folder contains the public C++ header files for the µOS++ libraries.

These headers define the APIs, data structures, data types and inline implementations that are available to users of the libraries.
All files in this directory are intended for inclusion in user projects and provide the main interface to the utilities functionality.


@defgroup micro-os-plus µOS++ Topics
@brief Topics related to the µOS++ framework.

@details
## Description

The [µOS++ Framework](https://micro-os-plus.github.io) is the principal project
within the µOS++ (micro-os-plus) ecosystem, providing a comprehensive suite of modern
C++ libraries for embedded systems development.

µOS++ is organised as a **collection of modular source libraries**, each maintained
in its own repository on GitHub and collectively managed under the
[micro-os-plus](https://github.com/micro-os-plus) GitHub organization.
This modular structure
enables developers to select and integrate only the components relevant to
their projects, promoting flexibility and maintainability.

The framework covers a wide range of topics, including **core operating system**
functionality, **POSIX I/O**, **testing** frameworks, **utilities**,
and supporting **tools**. Detailed
documentation is provided for each library, ensuring that users have access to
clear guidance, usage examples, and best practices for professional embedded
software development.

By adopting µOS++, developers benefit from a robust, scalable, and
well-documented foundation for building high-quality embedded applications.


@namespace micro_os_plus
@brief The primary namespace for the µOS++ framework.

@details
The `micro_os_plus` namespace serves as the main scope for all components of
the µOS++ framework, encompassing classes, functions, variables, enumerations,
type definitions, and related entities.

This namespace is further structured into nested namespaces, each dedicated to
specific modules or subsystems. By encapsulating all definitions within
well-defined namespaces, the framework achieves clear code organisation,
minimises naming conflicts, and enhances overall maintainability.

This approach promotes modular development, facilitates code reuse, and ensures
seamless integration of components within the µOS++ ecosystem, supporting the
creation of efficient, robust, and scalable embedded systems.

*/
