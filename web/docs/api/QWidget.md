---
sidebar_label: QWidget
title: QWidget
---

> Create and control views.

**This class is a JS wrapper around Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html)**

A `QWidget` can be used to encapsulate other widgets and provide structure. It functions similar to a `div` in the web world.

**QWidget inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("container"); //Similar to setting `id` on the web
view.setLayout(new FlexLayout());
```

### `new QWidget(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QWidget can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QWidget can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QWidget can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)
