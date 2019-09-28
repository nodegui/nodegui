---
sidebar_label: QClipboard
title: QClipboard
---

> The QClipboard class provides access to the window system clipboard.

**This class is a JS wrapper around Qt's [QClipboard class](https://doc.qt.io/qt-5/QClipboard.html)**

**QClipboard inherits from [Component](api/Component.md)**

### Example

```javascript
const {
  QClipboard,
  QClipboardMode,
  QApplication
} = require("@nodegui/nodegui");

const clipboard = QApplication.clipboard();
const text = clipboard.text(QClipboardMode.Clipboard);
```

## Static Methods

QClipboard can access all the static methods defined in [Component](api/Component.md)

## Instance Properties

QClipboard can access all the instance properties defined in [Component](api/Component.md)

## Instance Methods

QClipboard can access all the instance methods defined in [Component](api/Component.md). Additionally it has:

### `clipboard.clear(mode)`

Clear the clipboard contents. It calls the native method [QClipboard: clear](https://doc.qt.io/qt-5/qclipboard.html#clear).

- `mode` - This enum type is used to control which part of the system clipboard is used. See https://doc.qt.io/qt-5/qclipboard.html#Mode-enum

### `clipboard.setText(text, mode)`

Copies text into the clipboard as plain text. It calls the native method [QClipboard: setText](https://doc.qt.io/qt-5/qclipboard.html#setText).

- `text` - The text you want to copy to clipboard.

- `mode` - This enum type is used to control which part of the system clipboard is used. See https://doc.qt.io/qt-5/qclipboard.html#Mode-enum

### `clipboard.text(mode)`

Returns the clipboard text as plain text, or an empty string if the clipboard does not contain any text. It calls the native method [QClipboard: text](https://doc.qt.io/qt-5/qclipboard.html#text).

- `mode` - This enum type is used to control which part of the system clipboard is used. See https://doc.qt.io/qt-5/qclipboard.html#Mode-enum
