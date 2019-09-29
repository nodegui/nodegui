---
sidebar_label: QCheckBox
title: QCheckBox
---

> Create and control checkbox.

**This class is a JS wrapper around Qt's [QCheckBox class](https://doc.qt.io/qt-5/qcheckbox.html)**

A `QCheckBox` provides ability to add and manipulate native checkbox widgets.

**QCheckBox inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QCheckBox } = require("@nodegui/nodegui");

const checkbox = new QCheckBox();
checkbox.setText("Hello");
```

### `new QCheckBox(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QCheckBox can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QCheckBox can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QCheckBox can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `checkbox.setText(text)`

Sets the given text to the checkbox.

- `text` string

### `checkbox.isChecked()`

returns whether the checkbox is checked or not. It calls the native method [QAbstractButton: isChecked](https://doc.qt.io/qt-5/qabstractbutton.html#checked-prop).

### `checkbox.setChecked(check)`

This property holds whether the button is checked. It calls the native method [QAbstractButton: setChecked](https://doc.qt.io/qt-5/qabstractbutton.html#checked-prop).

- `check` boolean
