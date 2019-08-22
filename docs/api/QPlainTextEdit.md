## Class: QPlainTextEdit

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

### Static Methods

QPlainTextEdit can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

### Instance Properties

QPlainTextEdit can access all the instance properties defined in [NodeWidget](api/NodeWidget.md).

### Instance Methods

QPlainTextEdit can access all the instance methods defined in [NodeWidget](api/NodeWidget.md).

#### [`plainTextEdit.setPlainText(text)`](https://doc.qt.io/qt-5/qplaintextedit.html#setPlainText)

Sets the given text to the plainTextEdit.

- `text` string

#### [`plainTextEdit.toPlainText()`](https://doc.qt.io/qt-5/qplaintextedit.html#toPlainText)

Returns the text of the text edit as plain text.

#### [`plainTextEdit.clear()`](https://doc.qt.io/qt-5/qplaintextedit.html#clear)

Deletes all the text in the text edit.
