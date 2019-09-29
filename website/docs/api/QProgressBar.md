---
sidebar_label: QProgressBar
title: QProgressBar
---

> Create and control progress bar widgets.

**This class is a JS wrapper around Qt's [QProgressBar class](https://doc.qt.io/qt-5/qprogressbar.html)**

A `QProgressBar` provides ability to add and manipulate native progress bar widgets.

**QProgressBar inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QProgressBar } = require("@nodegui/nodegui");

const progressBar = new QProgressBar();
```

### `new QProgressBar(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QProgressBar can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QProgressBar can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QProgressBar can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `progressBar.setValue(value)`

Sets the current value of the progressBar. It calls the native method [QProgressBar: setValue](https://doc.qt.io/qt-5/qprogressbar.html#value-prop).

- `value` number - Set the value as current value

### `progressBar.setMaximum(max)`

Sets the max value of the progressBar. It calls the native method [QProgressBar: setMaximum](https://doc.qt.io/qt-5/qprogressbar.html#maximum-prop).

- `max` number - Set the value as max value of the progress bar.

### `progressBar.setMinimum(min)`

Sets the min value of the progressBar. It calls the native method [QProgressBar: setMinimum](https://doc.qt.io/qt-5/qprogressbar.html#minimum-prop).

- `min` number - Set the value as min value of the progress bar.

### `progressBar.setOrientation(orientation)`

Sets the orientation of the progressBar. It calls the native method [QProgressBar: setOrientation](https://doc.qt.io/qt-5/qprogressbar.html#orientation-prop).

- `orientation` Orientation - Specifies visual orientation of the progress bar. [Orientation is an enum from Qt](api/QtEnums.md)

### `progressBar.value()`

Returns the current value (Number) of the progressBar. It calls the native method [QProgressBar: value](https://doc.qt.io/qt-5/qprogressbar.html#value-prop).
