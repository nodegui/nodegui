# nodegui

A cross platform library to build native desktop apps. Based on Qt5.

<img alt="logo" src="https://github.com/nodegui/nodegui/raw/master/extras/logo/nodegui.png" height="200" />

## How does it look?

<div style="display:inline; margin: 0 auto;">
<img alt="demo_linux" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_linux.png" height="300" />
<img alt="demo_win" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_win.jpg" height="300" />
<img alt="demo_mac" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_mac.png" height="300" />
</div>

**More screenshots?**

[See examples](https://github.com/nodegui/nodegui/tree/master/examples/)

## Features

- [x] Cross platform. Should work on major Linux flavours, Windows and MacOS
- [x] Low CPU and memory footprint. Current CPU stays at 0% on idle and memory usage is under 20mb for a hello world program.
- [ ] (Partial support is present) Easily exstensible for creating custom native widgets (like react native).
- [x] Support for flex box layouting using Yoga.
- [x] Supports styling using css (includes actual cascading) or atleast useful subset of css properties.
- [x] Complete Nodejs api support (Currently runs on Node v12 - and is easily upgradable).
- [x] Can use all node compatible npm modules.
- [x] Native widget event listener support.
- [x] Should be usable for commercial applications aswell.
- [ ] (Partial) Should have a decent list of stylable native widgets.
- [ ] Easy build and packaging process.
- [ ] Good Devtools support (hot reload, live reload, debugging etc).
- [x] Good documentation and website.
- [x] Good documentation for contributors.
- [x] Good support for dark mode (Thanks to QT).
- [x] Typescript support

## Docs for contributing

Looking to contribute? If you wish to implement a new widget/add more features and need help understanding the codebase. You can start here:

Contributing developer docs link:

https://github.com/nodegui/nodegui/tree/master/docs/development

## Building

`yarn rebuild:addon [--qt_home_dir=/path/to/qt]`

### LICENSE

```
Since we do not in any way modify the code of Qt and only link to it dynamically, I beleive we are in compliance with the LGPL license requirements of QT. And hence this library can be licensed under its own License (for which we have chosen MIT License).
The links to QT source code and appropriate license notices are attached. We try our best to abide by the software licenses and any non compliance is not by will. If there is some discrepancy please let us know in the issues and we will try and fix it up.
If you follow the recommended build steps and do not statically link QT libraries on your own you are safe to use this library for commerical puropses (provided you abide by MIT License).
```

MIT

# TODO

- Make https://github.com/nodegui/nodegui-starter
