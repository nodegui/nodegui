---
sidebar_label: QPlainTextEdit
title: QPlainTextEdit
---

> Used to edit and display plain text.

**This class is a JS wrapper around Qt's [QPlainTextEdit class](https://doc.qt.io/qt-5/qplaintextedit.html)**

A `QPlainTextEdit` provides ability to add and manipulate native editable text field widgets.

**QPlainTextEdit inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QPlainTextEdit } = require("@nodegui/nodegui");

const plainTextEdit = new QPlainTextEdit();
```

### `new QPlainTextEdit(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QPlainTextEdit can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

## Instance Properties

QPlainTextEdit can access all the instance properties defined in [NodeWidget](api/NodeWidget.md).

### `plainTextEdit.placeholderText`

The placeholder text set on the plainTextEdit.

## Instance Methods

QPlainTextEdit can access all the instance methods defined in [NodeWidget](api/NodeWidget.md).

### `plainTextEdit.setPlainText(text)`

Sets the given text to the plainTextEdit. It calls the native method [QPlainTextEdit: setPlainText](https://doc.qt.io/qt-5/qplaintextedit.html#setPlainText).

- `text` string

### `plainTextEdit.setPlaceholderText(text)`

Sets the given text to the plainTextEdit's placeholder.

- `text` string

### `plainTextEdit.toPlainText()`

Returns the text of the text edit as plain text. [QPlainTextEdit: toPlainText](https://doc.qt.io/qt-5/qplaintextedit.html#toPlainText).

### `plainTextEdit.setReadOnly(isReadOnly)`

Sets the plainTextEdit to be read only. [QPlainTextEdit: isReadOnly](https://doc.qt.io/qt-5/qplaintextedit.html#readOnly-prop).

### `plainTextEdit.clear()`

Deletes all the text in the text edit.[QPlainTextEdit: clear](https://doc.qt.io/qt-5/qplaintextedit.html#clear).

### `plainTextEdit.setWordWrapMode(mode)`

This property holds the mode QPlainTextEdit will use when wrapping text by words.[QPlainTextEdit: setWordWrapMode](https://doc.qt.io/qt-5/qplaintextedit.html#wordWrapMode-prop).

- mode: QTextOptionWrapMode

### `plainTextEdit.wordWrapMode()`

returns word wrap mode. [QPlainTextEdit: wordWrapMode](https://doc.qt.io/qt-5/qplaintextedit.html#wordWrapMode-prop).

### `plainTextEdit.setLineWrapMode(mode)`

This property holds the line wrap mode. [QPlainTextEdit: setLineWrapMode](https://doc.qt.io/qt-5/qplaintextedit.html#lineWrapMode-prop).

- mode: LineWrapMode

### `plainTextEdit.lineWrapMode()`

returns line wrap mode. [QPlainTextEdit: setLineWrapMode](https://doc.qt.io/qt-5/qplaintextedit.html#lineWrapMode-prop).
