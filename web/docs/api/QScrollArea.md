---
sidebar_label: QScrollArea
title: QScrollArea
---

> A `QScrollArea` provides a scrolling view onto another widget.

**This class is a JS wrapper around Qt's [QScrollArea class](https://doc.qt.io/qt-5/qscrollarea.html)**

**QScrollArea inherits from [QAbstractScrollArea](api/QAbstractScrollArea.md)**

### Example

```javascript
const { QScrollArea } = require("@nodegui/nodegui");

const scrollArea = new QScrollArea();
scrollArea.setInlineStyle("flex: 1; width:'100%';");

const imageLabel = new QLabel();
const pixmap = new QPixmap(
  path.resolve(__dirname, "../extras/assets/kitchen.png")
);
imageLabel.setPixmap(pixmap);

scrollArea.setWidget(imageLabel);
```

### `new QScrollArea(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QScrollArea can access all the static methods defined in [QAbstractScrollArea](api/QAbstractScrollArea.md)

## Instance Properties

QScrollArea can access all the instance properties defined in [QAbstractScrollArea](api/QAbstractScrollArea.md)

## Instance Methods

QScrollArea can access all the instance methods defined in [QAbstractScrollArea](api/QAbstractScrollArea.md). Additionally it also has the following instance methods:

### `scrollArea.setWidget(widget)`

Sets the scroll area's widget. It calls the native method [QScrollArea: setWidget](https://doc.qt.io/qt-5/qscrollarea.html#setWidget).

- `widget` NodeWidget - Any widget you want to enclose in a scroll area.
