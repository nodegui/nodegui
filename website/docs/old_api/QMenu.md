---
sidebar_label: QMenu
title: QMenu
---

> The QMenu class provides a menu widget for use in menu bars, context menus, and other popup menus.

**This class is a JS wrapper around Qt's [QMenu class](https://doc.qt.io/qt-5/qmenu.html)**

**QMenu inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
```

### `new QMenu(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QMenu can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QMenu can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QMenu can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `menu.setTitle(title)`

This property holds the title of the menu. It calls the native method [QMenu: setTitle](https://doc.qt.io/qt-5/qmenu.html#title-prop).

- `title` string

### `menu.addAction(action)`

Appends the action action to this widget's list of actions. It calls the native method [QMenu: addAction](https://doc.qt.io/qt-5/qwidget.html#addAction).

- `action` [QAction](api/QAction).
