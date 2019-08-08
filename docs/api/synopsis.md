# Synopsis

> How to use Node.js and NodeGui's APIs.

All of [Node.js's built-in modules](https://nodejs.org/api/) are available in
NodeGui and third-party node modules also fully supported as well (including
the [native modules](../tutorial/using-native-node-modules.md)).

NodeGui also provides some extra built-in modules for developing native
desktop applications.

The app script is like a normal Node.js script:

```javascript
const { QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();

win.show();

global.win = win; // To prevent win from being garbage collected.
```

To run your app, read [Run your app](../tutorial/first-app.md#running-your-app).

## Destructuring assignment

You can use
[destructuring assignment][destructuring-assignment] to make it easier to use
built-in modules.

```javascript
const {
  QMainWindow,
  QWidget,
  QLabel,
  FlexLayout,
  StyleSheet
} = require("@nodegui/nodegui");

const win = new QMainWindow();

const centralWidget = new QWidget();
centralWidget.setObjectName("myroot");
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);

const label = new QLabel();
label.setObjectName("mylabel");
label.setText("Hello World");

rootLayout.addWidget(label);
win.setCentralWidget(centralWidget);
win.setStyleSheet(
  StyleSheet.create(
    `
    #myroot {
      background-color: #009688;
    }
    #mylabel {
      font-size: 16px;
      font-weight: bold;
    }
  `
  )
);
win.show();

global.win = win;
```

[gui]: https://en.wikipedia.org/wiki/Graphical_user_interface
[destructuring-assignment]: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment
