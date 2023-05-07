# Website

The project website is generated with [Doxygen](https://www.doxygen.nl).

To build the site, run the following from the top project folder:

```sh
doxygen website/config.doxygen
```

The result is in `website/html`.

For local builds, the Doxygen.app can be used, since it also keeps the
configuration file in good shape.

## Content

The input folders are:

- `src`
- `headers`
- `website/pages`
- `README.md` <- the home page

## Theme

Add the <https://jothepro.github.io/doxygen-awesome-css/> theme

Examples:

- https://docs.wxwidgets.org/stable/
- https://jothepro.github.io/libCloudSync/

## TODO

- move common content to the helper and add code to copy it here
- remove the absolute part of paths

## Legacy config

The previous µOS++ Reference also used:

WARN_AS_ERROR = YES
HTML_COLORSTYLE_SAT = 0
HTML_COLORSTYLE_GAMMA = 50
LAYOUT_FILE = DoxygenLayout.xml
HTML_HEADER = header.html
HTML_EXTRA_STYLESHEET = custom.css
