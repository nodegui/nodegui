---
sidebar_label: QLineEdit
title: QLineEdit
---

> Create and control editable text field.

**This class is a JS wrapper around Qt's [QLineEdit class](https://doc.qt.io/qt-5/qlineedit.html)**

A `QLineEdit` provides ability to add and manipulate native editable text field widgets.

**QLineEdit inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QLineEdit } = require("@nodegui/nodegui");

const lineEdit = new QLineEdit();
```

### `new QLineEdit(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QLineEdit can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QLineEdit can access all the instance properties defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance properties:

### `lineEdit.placeholderText`

The placeholder text set on the lineEdit.

## Instance Methods

QLineEdit can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `lineEdit.setText(text)`

Sets the given text to the lineEdit.

- `text` string

### `lineEdit.setPlaceholderText(text)`

Sets the given text to the lineEdit's placeholder.

- `text` string

### `lineEdit.text()`

Returns the currently set text from native lineEdit widget.

### `lineEdit.setReadOnly(isReadOnly)`

Sets the lineEdit to be read only. lineEdit property holds whether the line edit is read only.

- `isReadOnly` boolean

### `lineEdit.clear()`

Clears the lineEdit.
