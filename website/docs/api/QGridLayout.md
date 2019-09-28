---
sidebar_label: QGridLayout
title: QGridLayout
---

> The QGridLayout class lays out widgets in a grid.

**This class is a JS wrapper around Qt's [QGridLayout](https://doc.qt.io/qt-5/qgridlayout.html)**

**QGridLayout inherits from [NodeLayout](api/NodeLayout.md)**

### Example

```javascript
const { QGridLayout, QWidget, QLabel } = require("@nodegui/nodegui");

const view = new QWidget();
const layout = new QGridLayout();
view.setLayout(layout);

const label = new QLabel();
label.setText("label1");
const label2 = new QLabel();
label2.setText("label2");

layout.addWidget(label);
layout.addWidget(label2);
```

## Static Methods

QGridLayout can access all the static methods defined in [NodeLayout](api/NodeLayout.md)

## Instance Properties

QGridLayout can access all the instance properties defined in [NodeLayout](api/NodeLayout.md)

## Instance Methods

QGridLayout can access all the instance methods defined in [NodeLayout](api/NodeLayout.md)

Additionally it also has the following instance methods:

### `layout.addWidget(childWidget)`

Adds the childWidget to the layout. It calls the native method QGridLayout [QGridLayout: addWidget](https://doc.qt.io/qt-5/qwidget.html#show).

- `childWidget` NodeWidget - child widget that needs to be added to the layout.

### `layout.removeWidget(childWidget)`

Removes the childWidget from the layout. It calls the native method of custom QGridLayout. [QGridLayout: removeWidget](https://doc.qt.io/qt-5/qlayout.html#removeWidget).

- `childWidget` NodeWidget - child widget that needs to be added to the layout.
