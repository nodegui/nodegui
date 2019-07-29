# Writing Your First NodeGui App

NodeGui enables you to create desktop applications with pure JavaScript. You could see it
as a lightly modified variant of the Node.js runtime that is focused on desktop applications
instead of web servers.

NodeGui is also an efficient JavaScript binding to a cross platform graphical user interface
(GUI) library `Qt`. Qt is one of the most mature and efficient library for building desktop applications.
This enabled NodeGui to be extrememly memory and CPU efficient as compared to other popular Javascript Desktop GUI solutions. A hello world app built with NodeGui runs on less than 20Mb of memory.

## Hello World

Clone and run the code in this tutorial by using the
[`nodegui/nodegui-quick-start`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh
# Clone the repository
$ git clone https://github.com/nodegui/nodegui-quick-start
# Go into the repository
$ cd nodegui-quick-start
# Install dependencies
$ npm install
# Run the app
$ npm start
```

As far as development is concerned, an NodeGui application is essentially a
Node.js application. The starting point is a `package.json` that is identical
to that of a Node.js module. A most basic NodeGui app would have the following
folder structure:

```text
your-app/
├── package.json
├── index.js
```

## NodeGui Development in a Nutshell

NodeGui apps are developed in JavaScript using the same principles and methods
found in Node.js development. All APIs and features found in NodeGui are
accessible through the `@nodegui/nodegui` module, which can be required like any other
Node.js module:

```javascript
require("@nodegui/nodegui");
```

The `@nodegui/nodegui` module exports features in namespaces. As examples, windows can be created
using the `QMainWindow` class. A simple `main.js` file might open a window:

```javascript
const {
  QMainWindow,
  QWidget,
  QLabel,
  FlexLayout
} = require("@nodegui/nodegui");

const win = new QMainWindow();
//-------------------------------
const centralWidget = new QWidget();
centralWidget.setObjectName("myroot");
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);
//--------------------------------------
const label = new QLabel();
label.setObjectName("mylabel");
label.setText("Hello World");
//--------------------------------------
rootLayout.addWidget(label);
win.setCentralWidget(centralWidget);
win.setStyleSheet(
  `
    #myroot {
      background-color: #009688;
    }
    #mylabel {
      font-size: 16px;
      font-weight: bold;
    }
  `
);
win.show();

global.win = win; // To prevent win from being garbage collected.
```

The `index.js` should create windows and handle all the system events your
application might encounter.

## Running Your App

You can try your app by running `npm start` from your application's
directory.

## Trying this Example

Clone and run the code in this tutorial by using the
[`nodegui/nodegui-quick-start`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh
# Clone the repository
$ git clone https://github.com/nodegui/nodegui-quick-start
# Go into the repository
$ cd nodegui-quick-start
# Install dependencies
$ npm install
# Run the app
$ npm start
```

[quick-start]: https://github.com/nodegui/nodegui-quick-start
