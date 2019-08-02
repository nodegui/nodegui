## Class: QLabel

> Create and control text.

**This class is a JS wrapper around Qt's [QLabel class](https://doc.qt.io/qt-5/qlabel.html)**

A `QLabel` provides ability to add and manipulate text.

**QLabel inherits from [NodeWidget](api/NodeWidget.md)**

### Example

```javascript
const { QLabel } = require("@nodegui/nodegui");

const label = new QLabel();
label.setText("Hello");
```

### `new QLabel(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

### Static Methods

QLabel can access all the static methods defined in [NodeWidget](api/NodeWidget.md)

### Instance Properties

QLabel can access all the instance properties defined in [NodeWidget](api/NodeWidget.md)

### Instance Methods

QLabel can access all the instance methods defined in [NodeWidget](api/NodeWidget.md)

Additionally it also has the following instance methods:

#### `label.setText(text)`

Sets the given text to the label.

- `text` string

#### `label.text()`

returns the current text from the label.

#### `label.setWordWrap(on)`

- `on` boolean - If true it sets wordwrap on the label
