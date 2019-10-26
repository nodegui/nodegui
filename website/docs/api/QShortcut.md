---
sidebar_label: QShortcut
title: QShortcut
---

> The QShortcut class is used to create keyboard shortcuts.

**This class is a JS wrapper around Qt's [QShortcut class](https://doc.qt.io/qt-5/qshortcut.html)**

**QShortcut inherits from [EventWidget](api/EventWidget.md)**

### Example

```javascript
const { QShortcut, QKeySequence, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();
const shortcut = new QShortcut(win);
shortcut.setKey(new QKeySequence("Ctrl+M"));
shortcut.setEnabled(true);
shortcut.addEventListener(QShortcutEvents.activated, () => {
  console.log("Shortcut Activated");
});

win.show();
global.win = win;
global.shortcut = shortcut;
```

### `new QShortcut(parent)`

- `parent` NodeWidget. Any widget inheriting from NodeWidget can be passed as a parent. This will make this shortcut bind to the parent widget.

## Static Methods

QShortcut can access all the static methods defined in [EventWidget](api/EventWidget.md)

## Instance Properties

QShortcut can access all the instance properties defined in [EventWidget](api/EventWidget.md)

## Instance Methods

QShortcut can access all the instance methods defined in [EventWidget](api/EventWidget.md). Additionally it also has the following instance methods:

### `shortcut.setEnabled(enabled)`

This property holds whether the shortcut is enabled. It calls the native method [QShortcut: setEnabled](https://doc.qt.io/qt-5/qshortcut.html#enabled-prop).

- `enabled` - Boolean

### `shortcut.setAutoRepeat(on)`

This property holds whether the shortcut can auto repeat. It calls the native method [QShortcut: setAutoRepeat](https://doc.qt.io/qt-5/qshortcut.html#autoRepeat-prop).

- `on` - Boolean

### `shortcut.setKey(keySequence)`

This property holds the shortcut's key sequence. It calls the native method [QShortcut: setKey](https://doc.qt.io/qt-5/qshortcut.html#key-prop).

- `keySequence` [QKeySequence](api/QKeySequence.md)

### `shortcut.setContext(contextEnum)`

This property holds the context in which the shortcut is valid. It calls the native method [QShortcut: setContext](https://doc.qt.io/qt-5/qshortcut.html#context-prop).

- `contextEnum` - ShortcutContext enum.
