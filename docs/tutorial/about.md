# About NodeGui

[NodeGui](https://nodegui.github.io/nodegui) is an open source library for building cross-platform desktop applications with JavaScript and CSS like styling. NodeGui accomplishes this by combining the powers of [Node.js](https://nodejs.org) and [Qt](https://www.qt.io/). NodeGui apps can be packaged for Mac, Windows, and Linux.

NodeGui began in 2019 as part of frustrations related to Electron and other chromium based cross platform Gui solutions. Electron is a great framework for building cross platform apps but suffers from performance and energy related issues due to heavy reliance on Chromium. NodeGui wants to incorporate everything that is good about Electron: The ease of development, freedom of styling, Native APIs, great documentation, etc. At the same time NodeGui aims to be memory and CPU efficient.

Also, NodeGui is built with Typescript which means you get autocomplete and strong typechecking support from the IDE even when used in a Javascript project.

Get started building with NodeGui in the [First NodeGui app](tutorial/first-app.md).

### Updating Dependencies

When a new version of Node.js is released, NodeGui usually waits about a month before upgrading in order to bring in a more stable version.

NodeGui's version of Qt is usually updated within a month after a new stable version is released, depending on the effort involved in the upgrade.

### Versioning

NodeGui follows [`semver`](https://semver.org).
For most applications, and using any recent version of npm,
running `$ npm install @nodegui/nodegui` will do the right thing.

## Core Philosophy

In order to evolve faster with every Node.Js release, NodeGui aims to patch NodeJs with as much minimum code as possible. This makes sure we support all Node features and keeps upgrade process simple.

NodeGui will always link dynamically to Qt inorder to maintain LGPL lisence requirements for Open source projects.

NodeGui also encourages plugin/module based architecture, hence instead of bloating the entire core of NodeGui we prefer to build independent modules that can be managed and updated by the community thus keeping the end product binary size low and enabling faster upgrades.
