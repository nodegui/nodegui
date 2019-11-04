---
sidebar_label: Learn the Basics
title: Learn the Basics
---

NodeGui uses native components instead of web based components as building blocks. So to understand the basic structure of a NodeGui app, you need to be familiar with Javascript or Typescript. This tutorial is aimed at everyone who has some web experience with web development.

## NodeGui development in a nutshell

As far as development is concerned, an NodeGui application is essentially a Node.js application. The starting point is a `package.json` that is identical to that of a Node.js module. A most basic NodeGui app would have the following
folder structure:

```text
your-app/
├── package.json
├── index.js
```

All APIs and features found in NodeGui are accessible through the `@nodegui/nodegui` module, which can be required like any other Node.js module. Additionally you have access to all Node.js apis and node modules.

```javascript
require("@nodegui/nodegui");
```

The `@nodegui/nodegui` module exports features in namespaces. As an example, a window can be created
using the `QMainWindow` class. A simple `main.js` file might open a window:

```javascript
const { QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();
win.show();

global.win = win; // To prevent win from being garbage collected.
```

The `index.js` should create windows and handle all the system events your
application might encounter.

## What's going on here?

Firstly, we are running a regular Node.js app. This means that we are not running in a browser environment. The window you see is actually a native widget created by Qt. QMainWindow is essentially a lightweight javascript wrapper over Qt's QMainWindow. Hence every method you call on QMainWindow instance is actually affecting a native window widget. This is very light weight as compared to browser based solutions and hence is more closer to the Operating system.s

## Trying out the starter project

Clone and run the code by using the
[`nodegui/nodegui-starter`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh
 git clone https://github.com/nodegui/nodegui-starter

 cd nodegui-starter

 npm install

 npm start
```

[quick-start]: https://github.com/nodegui/nodegui-starter

## What else other than a basic window?

NodeGui has support for basic widgets like QWidget (similar to div), QCheckBox, QPushButton and many more.
You can take a look at the list of native widgets that NodeGui currently supports here : [Native widgets in NodeGui](/docs/api/QWidget).
With time more widgets and APIs will be added to NodeGui. Apart from modules in NodeGui, you also have access to the entire node modules ecosystem. Thus, any node module that you can use with Node.js, can be used with NodeGui. This makes it extremely powerful.

Fine, I want something more custom and beautiful than just native looking widgets. What do I do?

To make things more beautiful, you will have to [learn about styling](styling). Lets take a look at that next.
