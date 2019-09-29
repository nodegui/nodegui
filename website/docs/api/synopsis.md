---
sidebar_label: Synopsis
title: Synopsis
---

> How to use Node.js and NodeGui's APIs.

All of [Node.js's built-in modules](https://nodejs.org/api/) are available in
NodeGui. Also, third-party node modules that are known to work with Node.Js are fully supported as well (including
the native node modules).

Apart from Node.Js ecosystem, NodeGui also provides some extra built-in widget and modules for developing native
desktop applications. So, you can think of NodeGui as NodeJs + Gui Widgets powered by Qt.

The app script is like a normal Node.js script:

```javascript
const { QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();

win.show();

global.win = win; // To prevent win from being garbage collected.
```

To run your app, read [Run your app](/docs/guides/tutorial).

## Destructuring assignment

You can use
[destructuring assignment][destructuring-assignment] to make it easier to use
built-in modules.

```javascript
const {
  QMainWindow,
  QWidget,
  QLabel,
  FlexLayout
} = require("@nodegui/nodegui");

const win = new QMainWindow();

const centralWidget = new QWidget();
centralWidget.setObjectName("myroot");
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);

const label = new QLabel();
label.setInlineStyle("font-size: 16px; font-weight: bold;");
label.setText("Hello World");

rootLayout.addWidget(label);
win.setCentralWidget(centralWidget);
win.setStyleSheet(
  `
    #myroot {
      background-color: #009688;
    }
  `
);
win.show();

global.win = win;
```

[gui]: https://en.wikipedia.org/wiki/Graphical_user_interface
[destructuring-assignment]: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment
