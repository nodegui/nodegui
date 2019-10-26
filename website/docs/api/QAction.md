---
sidebar_label: QAction
title: QAction
---

> The QAction class provides an abstract user interface action that can be inserted into widgets.

**This class is a JS wrapper around Qt's [QAction class](https://doc.qt.io/qt-5/qaction.html)**

**QAction inherits from [EventWidget](api/EventWidget.md)**

### Example

```javascript
const { QAction, QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
const menuAction = new QAction();
menuAction.setText("subAction");
menuAction.addEventListener("triggered", () => {
  console.log("Action clicked");
});
menu.addAction(menuAction);
```

### `new QAction(parent?)`

- `parent` NodeWidget. Constructs an action with parent. If parent is an action group the action will be automatically inserted into the group.

## Static Methods

QAction can access all the static methods defined in [EventWidget](api/EventWidget.md)

## Instance Properties

QAction can access all the instance properties defined in [EventWidget](api/EventWidget.md)

## Instance Methods

QAction can access all the instance methods defined in [EventWidget](api/EventWidget.md). Additionally it also has the following instance methods:

### `action.setEnabled(enabled)`

This property holds whether the action is enabled. It calls the native method [QAction: setEnabled](https://doc.qt.io/qt-5/qaction.html#enabled-prop).

- `enabled` - Boolean

### `action.setText(on)`

This property holds the action's descriptive text. It calls the native method [QAction: setText](https://doc.qt.io/qt-5/qaction.html#text-prop).

- `text` - string

### `action.setIcon(icon)`

Sets the icon of action. It calls the native method [QAction: setIcon](https://doc.qt.io/qt-5/qaction.html#icon-prop).

- `icon` [QIcon](api/QIcon.md)

### `action.setMenu(menu)`

Sets the menu contained by this action to the specified menu. It calls the native method [QAction: setMenu](https://doc.qt.io/qt-5/qaction.html#setMenu).

- `menu` [QMenu](api/QMenu.md)

### `action.setShortcut(keySequence)`

This property holds the action's key sequence. It calls the native method [QAction: setShortcut](https://doc.qt.io/qt-5/qaction.html#shortcut-prop).

- `keySequence` [QKeySequence](api/QKeySequence.md)

### `action.setShortcutContext(contextEnum)`

This property holds the context in which the action is valid. It calls the native method [QAction: setShortcutContext](https://doc.qt.io/qt-5/qaction.html#shortcutContext-prop).

- `contextEnum` - ShortcutContext enum.
