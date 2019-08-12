# NodeGUI

Build **performant**, **native** and **cross-platform** desktop applications with **JavaScript** + powerful **CSS like styling**.🚀

NodeGUI is powered by **Qt5** 💚 which makes it CPU and memory efficient as compared to other chromium based solutions like electron.

If you are looking for React based version, check out: [NodeGUI React Desktop](https://github.com/nodegui/react-desktop).

Visit: https://nodegui.github.io/nodegui for docs.

<img alt="logo" src="https://github.com/nodegui/nodegui/raw/master/extras/logo/nodegui.png" height="200" />

## How does it look?

<div style="display:inline; margin: 0 auto;">
<img alt="demo_linux" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_linux.png" height="300" />
<img alt="demo_win" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_win.jpg" height="300" />
<img alt="demo_mac" src="https://github.com/nodegui/nodegui/raw/master/examples/calculator/calculator_mac.png" height="300" />
</div>

**More screenshots?**

[See examples](https://github.com/nodegui/nodegui/tree/master/examples/)

[See React based examples](https://github.com/nodegui/react-desktop/tree/master/examples/)

## Features

- 🧬 Cross platform. Should work on major Linux flavours, Windows and MacOS
- 📉 Low CPU and memory footprint. Current CPU stays at 0% on idle and memory usage is under 20mb for a hello world program.
- 💅 Styling with CSS (includes actual cascading). Also has full support for Flexbox layout (thanks to Yoga).
- ✅ Complete Nodejs api support (Currently runs on Node v12.x - and is easily upgradable). Hence has access to all nodejs compatible npm modules.
- 🎪 Native widget event listener support. supports all event available from Qt / NodeJs.
- 💸 Can be used for Commercial applications.
- 🕵️‍♂️ Good Devtools support.
- 📚 Good documentation and website.
- 🧙‍♂️ Good documentation for contributors.
- 🦹🏻‍♀️ Good support for dark mode (Thanks to QT).
- 🏅First class Typescript support. (Works on regular JS projects too 😉).

## Current focus:

- [ ] (Partial support is present) Easily exstensible for creating custom native widgets (like react native).
- [ ] (Partial) Should have a decent list of stylable native widgets.
- [ ] Easy build and packaging process.

## Getting Started

- Check out [nodegui-starter](https://github.com/nodegui/nodegui-starter) to get up and running with your own React Desktop app!
- Read through the [docs](https://nodegui.github.io/nodegui)

## Docs for contributing

Looking to contribute? If you wish to implement a new widget/add more features and need help understanding the codebase. You can start here:

Contributing developer docs link:

https://github.com/nodegui/nodegui/tree/master/docs/development

## Building

`npm run build [--qt_home_dir=/path/to/qt]`

### LICENSE

MIT

## Note

> Since we do not in any way modify the code of Qt and only link to it dynamically, I beleive we are in compliance with the LGPL license requirements of QT. And hence this library can be licensed under its own License (for which we have chosen MIT License).
> The links to QT source code and appropriate license notices are attached. We try our best to abide by the software licenses and any non compliance is not by will. If there is some discrepancy please let us know in the issues and we will try and fix it up.
> If you follow the recommended build steps and do not statically link QT libraries on your own you are safe to use this library for commerical puropses (provided you abide by MIT License).
