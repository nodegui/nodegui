---
sidebar_label: QAbstractSlider
title: QAbstractSlider
---

> Abstract class to add functionalities common to all slider based widgets.

**This class implements all methods, properties of Qt's [QAbstractSlider class](https://doc.qt.io/qt-5/qabstractslider.html) so that it can be inherited by all slider based widgets**

`QAbstractSlider` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all slider widget's easily. If you wish to create a slider use [QDial](api/QDial.md) instead.

**QAbstractSlider is the base class for all widgets. It inherits from another abstract class [NodeWidget](api/NodeWidget.md)**

QAbstractSlider will list all methods and properties that are common to all slider widgets in the NodeGui world.

## Static Methods

QAbstractSlider can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QAbstractSlider can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QAbstractSlider can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `widget.setSingleStep(step)`

Sets the step value for user arrow key slider interaction. It calls the native method [QAbstractSlider: setSingleStep](https://doc.qt.io/qt-5/qabstractslider.html#singleStep-prop).

- `step` number - Specified single step value.

### `widget.setMaximum(maximum)`

Sets the maximum value for slider. It calls the native method [QAbstractSlider: setMaximum](https://doc.qt.io/qt-5/qabstractslider.html#maximum-prop).

- `maximum` number - Specified maximum slider value.

### `widget.setMinimum(minimum)`

Sets the minimum value for slider. It calls the native method [QAbstractSlider: setMinimum](https://doc.qt.io/qt-5/qabstractslider.html#minimum-prop).

- `minimum` number - Specified minimum slider value.

### `widget.setValue(value)`

Sets the current value for slider. It calls the native method [QAbstractSlider: setValue](https://doc.qt.io/qt-5/qabstractslider.html#value-prop).

- `value` number - Specified current slider value.

### `widget.setOrientation(orientation)`

Sets the current orientation for slider. It calls the native method [QAbstractSlider: setOrientation](https://doc.qt.io/qt-5/qabstractslider.html#orientation-prop).

- `orientation` Orientation - Specifies visual orientation of the slider. [Orientation is an enum from Qt](api/QtEnums.md)

### `slider.maximum()`

Returns the maximum value (Number) of the slider. It calls the native method [QAbstractSlider: maximum](https://doc.qt.io/qt-5/qabstractslider.html#maximum-prop).

### `slider.minimum()`

Returns the minimum value (Number) of the slider. It calls the native method [QAbstractSlider: minimum](https://doc.qt.io/qt-5/qabstractslider.html#minimum-prop).

### `slider.value()`

Returns the current value (Number) of the slider. It calls the native method [QAbstractSlider: value](https://doc.qt.io/qt-5/qabstractslider.html#value-prop).
