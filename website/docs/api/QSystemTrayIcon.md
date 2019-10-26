---
sidebar_label: QSystemTrayIcon
title: QSystemTrayIcon
---

> Create and control system tray icon.

**This class is a JS wrapper around Qt's [QSystemTrayIcon class](https://doc.qt.io/qt-5/qsystemtrayicon.html)**

A `QSystemTrayIcon` provides ability to add and manipulate native system tray icon.

**QSystemTrayIcon inherits from [EventWidget](api/EventWidget.md)**

### Example

```javascript
const { QSystemTrayIcon, QIcon } = require("@nodegui/nodegui");
const trayIcon = new QIcon(
  resolve(__dirname, "some/image/file.png");
);
const tray = new QSystemTrayIcon();
tray.show();

global.trayIcon = trayIcon; // prevent's gc of trayIcon
```

### `new QSystemTrayIcon(parent?)`

- `parent` NodeWidget (_optional_). Any widget inheriting from NodeWidget can be passed as a parent. This will make this widget, the child of the parent widget.

## Static Methods

QSystemTrayIcon can access all the static methods defined in [EventWidget](api/EventWidget.md)

## Instance Properties

QSystemTrayIcon can access all the instance properties defined in [EventWidget](api/EventWidget.md)

## Instance Methods

QSystemTrayIcon can access all the instance methods defined in [EventWidget](api/EventWidget.md). Additionally it also has the following instance methods:

### `trayIcon.show()`

Shows the icon in the system tray icon. It calls the native method [QSystemTrayIcon: show](https://doc.qt.io/qt-5/QSystemTrayIcon.html#show).

### `trayIcon.hide()`

Hides the system tray icon. It calls the native method [QSystemTrayIcon: hide](https://doc.qt.io/qt-5/QSystemTrayIcon.html#hide).

### `trayIcon.setIcon(icon)`

Sets the icon of system tray. It calls the native method [QSystemTrayIcon: setIcon](https://doc.qt.io/qt-5/QSystemTrayIcon.html#icon-prop).

- `icon` [QIcon](api/QIcon.md)

### `trayIcon.isVisible()`

Returns the visibility of icon. It calls the native method [QSystemTrayIcon: setIcon](https://doc.qt.io/qt-5/QSystemTrayIcon.html#visible-prop).
