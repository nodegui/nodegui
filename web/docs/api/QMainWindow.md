---
sidebar_label: QMainWindow
title: QMainWindow
---

> Create and control windows.

**This class is a JS wrapper around Qt's [QMainWindow class](https://doc.qt.io/qt-5/qmainwindow.html)**

A `QMainWindow` provides a main application window. Every widget in NodeGui should be a child/nested child of QMainWindow. QMainWindow in NodeGui is also responsible for FlexLayout calculations of its children.

**QMainWindow inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QMainWindow, QWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();

const centralWidget = new QWidget();
win.setCentralWidget(centralWidget);

win.show();

global.win = win; // prevent's gc of win
```

QMainWindow needs to have a central widget set before other widgets can be added as a children/nested children.
Once a central widget is set you can add children/layout to the central widget.

## Static Methods

QMainWindow can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QMainWindow can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance properties:

### `win.layout`

A `NodeLayout` representing current layout that is set on the window. If a centralWidget is set then the layout of central widget is returned.

### `win.centralWidget`

A `NodeWidget` representing currently set central widget on the window.

## Instance Methods

QMainWindow can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `win.setCentralWidget(widget)`

Sets the given widget to be the main window's central widget.

- `widget` NodeWidget - Any widget that inherits from NodeWidget class.
