---
sidebar_label: QMenuBar
title: QMenuBar
---

> The QMenuBar class provides a menu widget for use in menu bars, context menus, and other popup menus.

**This class is a JS wrapper around Qt's [QMenuBar class](https://doc.qt.io/qt-5/qmenu.html)**

**QMenuBar inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QMenuBar, QMainWindow } = require("@nodegui/nodegui");
const win = new QMainWindow();
const menu = new QMenuBar();
const menuBar = new QMenuBar();
win.setMenuBar(menuBar);
win.show();
global.win = win;
```

### `new QMenuBar(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QMenuBar can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QMenuBar can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QMenuBar can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `menu.addMenu(menu)`

Appends menu to the menu bar. It calls the native method [QMenuBar: addMenu](https://doc.qt.io/qt-5/qmenubar.html#addMenu).

- `menu` [QMenu](api/QMenu).

### `menu.setNativeMenuBar(nativeMenuBar)`

This property holds whether or not a menubar will be used as a native menubar on platforms that support it. It calls the native method [QMenuBar: setNativeMenuBar](https://doc.qt.io/qt-5/qmenubar.html#nativeMenuBar-prop).

- `nativeMenuBar` Boolean.
