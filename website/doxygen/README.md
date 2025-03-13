# Reference pages

The project reference pages are generated with [Doxygen](https://www.doxygen.nl).

## Build

To build the site, run the following from the top project folder:

```sh
doxygen website/doxygen/config.doxygen
```

The result is in `website/static/reference`.

## Content

The input folders are:

- `src`
- `include`
- `website/doxygen/pages/...`

The order of listing the `pages` is also the order of rendering the
entries in the sidebar.

## GitHub Pages

The web site is published by the `publish-github-pages.yml` GitHub Actions workflow:

- <https://github.com/micro-os-plus/utils-lists-xpack/actions/workflows/publish-github-pages.yml>

The project GitHub Pages address is:

- <https://micro-os-plus.github.io/utils-lists-xpack/>

## Doxygen usual commands

```
@n (<br/>)
@note
@warning
@todo
```

No `@example`.

## Theme

The project uses the custom <https://jothepro.github.io/doxygen-awesome-css/> theme.

## TODO

- nothing

## Pending issues

### doxygen

- [Detected potential recursive class relation](https://github.com/doxygen/doxygen/issues/9915)

### doxygen-awesome-css

Missing line numbers (already reported by someone else)

- [When two or more classes are in one header file, only the last class's code source with line number](https://github.com/jothepro/doxygen-awesome-css/issues/128)

### doxygen

- [Add explicit links to static pages](https://github.com/doxygen/doxygen/issues/10447) - fixed in 1.10.0
