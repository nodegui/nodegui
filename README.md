# NodeGUI
[![All Contributors](https://img.shields.io/badge/all_contributors-6-orange.svg?style=flat-square)](#contributors)

Build **performant**, **native** and **cross-platform** desktop applications with **JavaScript** + powerful **CSS like styling**.🚀

NodeGUI is powered by **Qt5** 💚 which makes it CPU and memory efficient as compared to other chromium based solutions like electron.

If you are looking for **React** based version, check out: **[React NodeGUI](https://github.com/nodegui/react-nodegui)**.

**Other known ports:**

- Angular + NodeGUI - https://github.com/marcus-sa/ngq by @marcus-sa

Visit: https://nodegui.github.io/nodegui for docs.

<img alt="logo" src="https://github.com/nodegui/nodegui/raw/master/extras/logo/nodegui.png" height="200" />

## How does it look?

<div style="display:inline; margin: 0 auto;">
<img alt="demo_linux" src="https://github.com/nodegui/examples/raw/master/nodegui/calculator/calculator_linux.png" height="280" />
<img alt="demo_win" src="https://github.com/nodegui/examples/raw/master/nodegui/calculator/calculator_win.jpg" height="280" />
<img alt="demo_mac" src="https://github.com/nodegui/examples/raw/master/nodegui/calculator/calculator_mac.png" height="280" />
</div>

<div style="display:inline; margin: 0 auto;"><img alt="kitchen" src="https://github.com/nodegui/nodegui/raw/master/extras/assets/kitchen.png" height="280" /><img alt="demo_mac" src="https://github.com/nodegui/examples/raw/master/react-nodegui/weather-app-widget/weather_widget_mac.png" height="280" /><img alt="demo_win" src="https://github.com/nodegui/examples/raw/master/react-nodegui/image-view/image_view_win.jpg" height="280" />
</div>

**More screenshots?**

### More Examples:

https://github.com/nodegui/examples

---

## Features

- 🧬 Cross platform. Should work on major Linux flavours, Windows and MacOS.
- 📉 Low CPU and memory footprint. Current CPU stays at 0% on idle and memory usage is under 20mb for a hello world program.
- 💅 Styling with CSS (includes actual cascading). Also has full support for Flexbox layout (thanks to Yoga).
- ✅ Complete Nodejs api support (Currently runs on Node v12.x - and is easily upgradable). Hence has access to all nodejs compatible npm modules.
- 🎪 Native widget event listener support. Supports all events available from Qt / NodeJs.
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

- Check out [nodegui-starter](https://github.com/nodegui/nodegui-starter) to get up and running with your own React NodeGUI app!
- Read through the [docs](https://nodegui.github.io/nodegui).

## Docs for contributing

Looking to contribute? If you wish to implement a new widget/add more features and need help understanding the codebase, you can start here: [Contributing developer docs](https://github.com/nodegui/nodegui/tree/master/docs/development).

## Building

`npm run build [--qt_home_dir=/path/to/qt]`

### LICENSE

MIT

## Note

> Since we do not in any way modify the code of Qt and only link to it dynamically, I believe we are in compliance with the LGPL license requirements of QT. And hence this library can be licensed under its own License (for which we have chosen MIT License).
> The links to QT source code and appropriate license notices are attached. We try our best to abide by the software licenses and any non compliance is not by will. If there is some discrepancy please let us know in the issues and we will try and fix it up.
> If you follow the recommended build steps and do not statically link QT libraries on your own you are safe to use this library for commerical purposes (provided you abide by MIT License).

## Maintainers ✨

People maintaining this project.

<!-- prettier-ignore -->
<table>
  <tr>
    <td align="center"><a href="https://blog.atulr.com"><img src="https://avatars2.githubusercontent.com/u/4029423?v=4" width="100px;" alt="Atul R"/><br /><sub><b>Atul R</b></sub></a></td>
  </tr>
</table>


## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore -->
<table>
  <tr>
    <td align="center"><a href="https://github.com/kakulgupta"><img src="https://avatars3.githubusercontent.com/u/10727047?v=4" width="100px;" alt="Kakul Gupta"/><br /><sub><b>Kakul Gupta</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=kakulgupta" title="Code">💻</a></td>
    <td align="center"><a href="http://rahulgaba.com"><img src="https://avatars3.githubusercontent.com/u/7898942?v=4" width="100px;" alt="Rahul Gaba"/><br /><sub><b>Rahul Gaba</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=rgabs" title="Code">💻</a></td>
    <td align="center"><a href="https://lramage.gitlab.io"><img src="https://avatars1.githubusercontent.com/u/43783393?v=4" width="100px;" alt="Lucas Ramage"/><br /><sub><b>Lucas Ramage</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=oxr463" title="Documentation">📖</a></td>
    <td align="center"><a href="https://github.com/gamtiq"><img src="https://avatars3.githubusercontent.com/u/1177323?v=4" width="100px;" alt="Denis Sikuler"/><br /><sub><b>Denis Sikuler</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=gamtiq" title="Documentation">📖</a></td>
    <td align="center"><a href="https://twitter.com/nahueljo"><img src="https://avatars1.githubusercontent.com/u/1612488?v=4" width="100px;" alt="Nahuel José"/><br /><sub><b>Nahuel José</b></sub></a><br /><a href="#question-Naahuel" title="Answering Questions">💬</a></td>
    <td align="center"><a href="http://uriziel.pl"><img src="https://avatars1.githubusercontent.com/u/568207?v=4" width="100px;" alt="Paweł Borecki"/><br /><sub><b>Paweł Borecki</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=Uriziel01" title="Code">💻</a></td>
    <td align="center"><a href="http://marcus-sa.me"><img src="https://avatars0.githubusercontent.com/u/8391194?v=4" width="100px;" alt="Marcus S. Abildskov"/><br /><sub><b>Marcus S. Abildskov</b></sub></a><br /><a href="https://github.com/nodegui/nodegui/commits?author=marcus-sa" title="Tests">⚠️</a></td>
</tr>
</table>

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://github.com/all-contributors/all-contributors) specification. Contributions of any kind welcome!
