/*
 * DO NOT EDIT!
 * Automatically generated from docusaurus-template-liquid/templates/docusaurus.
 *
 * This file is part of the xPack project (http://xpack.github.io).
 * Copyright (c) 2024 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

import Link from '@docusaurus/Link';

import type { FeatureItem } from './FeatureItem';

export const FeatureList: FeatureItem[] = [
  {
    title: 'Modern, portable, configurable',
    Svg: require('@site/static/img/mosaic.svg').default,
    description: (
      <>
        The modern <b>C++</b> code is highly portable and compiles seamlessly with the latest versions of <b>GCC</b> and <b>clang</b>. To facilitate integration, both <b>CMake</b> and <b>meson</b> configurations are provided.
      </>
    ),
  },
  {
    title: 'Easy to Use & Reproducible',
    Svg: require('@site/static/img/check-badge.svg').default,
    description: (
      <>
        Projects can reference this library through an explicitly versioned <b>dependency</b>. This guarantees reproducibility, which is particularly advantageous in <b>CI/CD</b> environments.
      </>
    ),
  },
  {
    title: 'Part of the Node.js ecosystem',
    Svg: require('@site/static/img/globe.svg').default,
    description: (
      <>
        The <b><Link to="https://xpack.github.io/xpm/">xpm</Link></b> CLI tool
        complements <b><Link to="https://docs.npmjs.com/cli/">npm</Link></b> with
        several additional features tailored for <b>C/C++ projects</b>.
        This enables the
        source package to integrate seamlessly into the Node.js ecosystem,
        while still permitting manual installation of the library.
      </>
    ),
  },
];
