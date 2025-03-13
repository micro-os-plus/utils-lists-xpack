/*
 * This file is part of the xPack project (http://xpack.github.io).
 * Copyright (c) 2024 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

export const customDocsGettingStartedSidebarCategory =
{
  type: 'category',
  label: 'Getting Started',
  link: {
    type: 'doc',
    id: 'getting-started/index',
  },
  collapsed: true,
  items: [
    {
      type: 'doc',
      id: 'getting-started/glossary/index',
      label: 'Glossary'
    },
  ]
}
