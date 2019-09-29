---
sidebar_label: QPushButton
title: QPushButton
---

> Create and control buttons.

**This class is a JS wrapper around Qt's [QPushButton class](https://doc.qt.io/qt-5/qpushbutton.html)**

A `QPushButton` provides ability to add and manipulate native button widgets.

**QPushButton inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QPushButton } = require("@nodegui/nodegui");

const button = new QPushButton();
button.setText("Hello");
```

### `new QPushButton(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QPushButton can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QPushButton can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QPushButton can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `button.setText(text)`

Sets the given text to the button.

- `text` string

### `button.setFlat(isFlat)`

Sets whether the button border is raised.

- `isFlat` boolean

### `button.setIcon(icon)`

Sets an icon in the button.

- `icon` QIcon
