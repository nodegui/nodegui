---
sidebar_label: QAbstractScrollArea
title: QAbstractScrollArea
---

> Abstract class to add functionalities common to all scrollarea based widgets.

**This class implements all methods, properties of Qt's [QAbstractScrollArea class](https://doc.qt.io/qt-5/qabstractscrollarea.html) so that it can be inherited by all scroll based widgets**

`QAbstractScrollArea` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all scrollable widget's easily. If you wish to create a scrollarea use [QScrollArea](api/QScrollArea.md) instead.

**QAbstractScrollArea is the base class for all widgets. It inherits from another abstract class [NodeWidget](api/NodeWidget.md)**

QAbstractScrollArea will list all methods and properties that are common to all scrollable widgets in the NodeGui world.

## Static Methods

QAbstractScrollArea can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QAbstractScrollArea can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QAbstractScrollArea can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `widget.setViewport(widget)`

Sets the viewport to be the given widget. It calls the native method [QAbstractScrollArea: setViewport](https://doc.qt.io/qt-5/qabstractscrollarea.html#setViewport).

- `widget` NodeWidget.

### `widget.viewport()`

Returns the viewport widget (NodeWidget). It calls the native method [QAbstractScrollArea: viewport](https://doc.qt.io/qt-5/qabstractscrollarea.html#viewport).
