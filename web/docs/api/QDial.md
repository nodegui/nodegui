---
sidebar_label: QDial
title: QDial
---

> Create and control dial slider widgets.

**This class is a JS wrapper around Qt's [QDial class](https://doc.qt.io/qt-5/qdial.html)**

A `QDial` provides ability to add and manipulate native dial slider widgets.

**QDial inherits from [QAbstractSlider](api/QAbstractSlider.md)**

### Example

```javascript
const { QDial } = require("@nodegui/nodegui");

const dial = new QDial();
```

### `new QDial(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QDial can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QDial can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QDial can access all the instance methods defined in [NodeWidget](api/NodeWidget.md). Additionally it also has the following instance methods:

### `dial.setNotchesVisible(visible)`

Sets the visibility of notches drawn around the dial. It calls the native method [QDial: setNotchesVisible](https://doc.qt.io/qt-5/qdial.html#notchTarget-prop).

- `visible` boolean - Set the value as current notch visibility.

### `dial.setWrapping(on)`

Sets the ability to wrap arrow around the dial instead of limiting it to upper part of the dial. It calls the native method [QDial: setWrapping](https://doc.qt.io/qt-5/qdial.html#wrapping-prop).

- `on` boolean - Set the value as current wrapping setting.

### `dial.setNotchTarget(target)`

Sets the number of pixels between dial notches. It calls the native method [QDial: setNotchTarget](https://doc.qt.io/qt-5/qdial.html#notchTarget-prop).

- `target` number - Specifies number of pixels between notches.

### `dial.notchTarget()`

Returns the current number of pixels between dial notches. It calls the native method [QDial: notchTarget](https://doc.qt.io/qt-5/qdial.html#notchTarget-prop).

### `dial.notchesVisible()`

Returns the visibility status (Boolean) of dial notches. It calls the native method [QDial: notchesVisible](https://doc.qt.io/qt-5/qdial.html#notchesVisible-prop).

### `dial.notchesVisible()`

Returns the visibility status (Boolean) of dial notches. It calls the native method [QDial: notchesVisible](https://doc.qt.io/qt-5/qdial.html#notchesVisible-prop).

### `dial.wrapping()`

Returns the current wrapping (Boolean) state of the dial. It calls the native method [QDial: wrapping](https://doc.qt.io/qt-5/qdial.html#wrapping-prop).
