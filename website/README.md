# Website

The project website is generated with [Doxygen](https://www.doxygen.nl).

To build the site, run the following from the top project folder:

```sh
doxygen website/config.doxygen
```

The result is in `website/html`.

## Content

The input folders are:

- `src`
- `include`
- `website/pages/...`

The order of listing the `pages` is also the order of rendering the
entries in the sidebar.

## GitHub Pages

The web site is published by the `publish-github-pages.yml` GitHub Actions workflow:

- <https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/publish-github-pages.yml>

The project GitHub Pages address is:

- <https://micro-os-plus.github.io/utils-lists-xpack/>

## Theme

The project uses the custom <https://jothepro.github.io/doxygen-awesome-css/> theme.

## TODO

- nothing
