---
sidebar_label: QRadioButton
title: QRadioButton
---

> Create and control radio button.

**This class is a JS wrapper around Qt's [QRadioButton class](https://doc.qt.io/qt-5/qradiobutton.html)**

A `QRadioButton` provides ability to add and manipulate native radio button widgets.

**QRadioButton inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QRadioButton } = require("@nodegui/nodegui");

const radioButton = new QRadioButton();
radioButton.setText("Hello");
```

### `new QRadioButton(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QRadioButton can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QRadioButton can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

## Instance Methods

QRadioButton can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

### `radioButton.setText(text)`

Sets the given text to the radioButton.

- `text` string
