---
sidebar_label: QSpinBox
title: QSpinBox
---

> Create and control spin box widgets.

**This class is a JS wrapper around Qt's [QSpinBox class](https://doc.qt.io/qt-5/qspinbox.html)**

A `QSpinBox` provides ability to add and manipulate native spin box widgets.

**QSpinBox inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QSpinBox } = require("@nodegui/nodegui");

const spinBox = new QSpinBox();
```

### `new QSpinBox(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QSpinBox can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QSpinBox can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QSpinBox can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `spinBox.setValue(val)`

Sets the current value of the spinBox. It calls the native method [QSpinBox: setValue](https://doc.qt.io/qt-5/qspinbox.html#value-prop).

- `val` number - Set the value as current value

### `spinBox.setRange(minimum, maximum)`

Sets the min/max value of the spinBox. It calls the native method [QSpinBox: setRange](https://doc.qt.io/qt-5/qspinbox.html#setRange).

- `max` number - Set the value as max value of the progress bar.

### `spinBox.setPrefix(prefix)`

Sets the prefix of the spinBox. It calls the native method [QSpinBox: setPrefix](https://doc.qt.io/qt-5/qspinbox.html#prefix-prop).

- `prefix` string - Specifies prefix content shows before the spinBox value. [Prefix is an enum from Qt](api/QtEnums.md)

### `spinBox.setSuffix(suffix)`

Sets the suffix of the spinBox. It calls the native method [QSpinBox: setSuffix](https://doc.qt.io/qt-5/qspinbox.html#suffix-prop).

- `suffix` string - Specifies suffix content shows after the spinBox value. [Suffix is an enum from Qt](api/QtEnums.md)

### `spinBox.setSingleStep(val)`

Sets the single step value of the spinBox. It calls the native method [QSpinBox: setSingleStep](https://doc.qt.io/qt-5/qspinbox.html#singleStep-prop).

- `val` number - Specifies amount value changes with each step. [Suffix is an enum from Qt](api/QtEnums.md)

### `spinBox.cleanText()`

Returns the text content (String) of the spinBox excluding any prefix, suffix, or leading or trailing whitespace. It calls the native method [QSpinBox: value](https://doc.qt.io/qt-5/qspinbox.html#minimum-prop).

### `spinBox.minimum()`

Returns the minimum value (Number) of the spinBox. It calls the native method [QSpinBox: value](https://doc.qt.io/qt-5/qspinbox.html#minimum-prop).

### `spinBox.maximum()`

Returns the maximum value (Number) of the spinBox. It calls the native method [QSpinBox: value](https://doc.qt.io/qt-5/qspinbox.html#maximum-prop).

### `spinBox.value()`

Returns the current value (Number) of the spinBox. It calls the native method [QSpinBox: value](https://doc.qt.io/qt-5/qspinbox.html#value-prop).
