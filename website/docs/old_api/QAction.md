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

### `action.isCheckable()`

Returns true if this action has been marked as checkable. It calls the native method [QAction: isCheckable](https://doc.qt.io/qt-5/qaction.html#checkable-prop).

### `action.setCheckable(isCheckable)`

Indicate that this action is checkable.

A checkable action is one which has an on/off state. For example, in a word processor, a Bold toolbar button may be either on or off. An action which is not a toggle action is a command action; a command action is simply executed, e.g. file save. By default, this property is `false`.


It calls the native method [QAction: setCheckable](https://doc.qt.io/qt-5/qaction.html#checkable-prop).

- `isCheckable`: boolean

### `action.isChecked()`

Returns true if this action has been marked as checked. It calls the native method [QAction: isChecked](https://doc.qt.io/qt-5/qaction.html#checked-prop).

### `action.setChecked(isChecked)`

Indicate that this action is checked.

Only checkable actions can be checked. By default, this is false (the action is unchecked).

It calls the native method [QAction: setChecked](https://doc.qt.io/qt-5/qaction.html#checkable-prop).

- `isChecked`: boolean

### `action.isSeparator()`

Returns `true` if this action is a separator action; otherwise it returns `false`. It calls the native method [QAction: isSeparator](https://doc.qt.io/qt-5/qaction.html#isSeparator).

### `action.setSeparator(isSeparator)`

If `isSeparator` is `true` then this action will be considered a separator.

How a separator is represented depends on the widget it is inserted into. Under most circumstances the text, submenu, and icon will be ignored for separator actions.

It calls the native method [QAction: setSeparator](https://doc.qt.io/qt-5/qaction.html#setSeparator).

- `isSeparator`: boolean
