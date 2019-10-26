---
sidebar_label: QKeySequence
title: QKeySequence
---

> The QKeySequence class encapsulates a key sequence as used by shortcuts. .

**This class is a JS wrapper around Qt's [QKeySequence class](https://doc.qt.io/qt-5/qkeysequence.html)**

**QKeySequence inherits from [Component](api/Component.md)**

### Example

```javascript
const { QKeySequence } = require("@nodegui/nodegui");

const keySequence = new QKeySequence(`Ctrl+L`);
```

### `new QKeySequence(sequence?)`

- `sequence` string (_optional_). String representation of the key sequence. For example: `Ctrl+M`

## Static Methods

QKeySequence can access all the static methods defined in [Component](api/Component.md)

## Instance Properties

QKeySequence can access all the instance properties defined in [Component](api/Component.md)

## Instance Methods

QKeySequence can access all the instance methods defined in [Component](api/Component.md)
Additionally it also has the following instance methods:

### `keySequence.count()`

Returns the number of keys in the key sequence. The maximum is 4. It calls the native method [QKeySequence: count](https://doc.qt.io/qt-5/QKeySequence.html#count).
