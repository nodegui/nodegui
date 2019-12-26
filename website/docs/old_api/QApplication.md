---
sidebar_label: QApplication
title: QApplication
---

> QApplication is the root object for the entire application. It manages app level settings.

**This class is a JS wrapper around Qt's [QApplication class](https://doc.qt.io/qt-5/qapplication.html)**

The QApplication class manages the GUI application's control flow and main settings. In NodeGui you will never create an instance of it manually. NodeGui's internal runtime `Qode` does it for you on app start. You can access the initialised QApplication though if needed.

**QApplication inherits from [Component](api/Component.md)**

### Example

```js
const { QApplication } = require("@nodegui/nodegui");

const qApp = QApplication.instance();
qApp.quit();
```

## Static Methods

QApplication can access all the static methods defined in [Component](api/Component.md). Additionally it also has the following static methods.

### `QApplication.instance()`

Returns the already initialised QApplication instance. It calls the native method [QApplication: instance](https://doc.qt.io/qt-5/qcoreapplication.html#instance).

### `QApplication.clipboard()`

Returns the object for interacting with the clipboard. It calls the native method [QApplication: clipboard](https://doc.qt.io/qt-5/qguiapplication.html#clipboard). See QClipboard.

## Instance Properties

QApplication can access all the instance properties defined in [Component](api/Component.md)

## Instance Methods

QApplication can access all the instance methods defined in [Component](api/Component.md). Additionally it also has the following instance methods:

### `qApp.quit()`

Quits the entire app. It calls the native method [QApplication: quit](https://doc.qt.io/qt-5/qcoreapplication.html#quit).

### `qApp.exit(returnCode)`

Tells the application to exit with a return code. It calls the native method [QApplication: exit](https://doc.qt.io/qt-5/qcoreapplication.html#exit).

- `returnCode` number - The exit code while quitting the app.

### `qApp.processEvents()`

Processes all pending events for the calling thread . It calls the native method [QApplication: processEvents](https://doc.qt.io/qt-5/qcoreapplication.html#processEvents).

### `qApp.exec()`

> We will never call this method in NodeGui, since Qode will execute this function for us. It exists for experiments only.

Enters the main event loop and waits until exit() is called. Returns the value that was passed to exit() (which is 0 if exit() is called via quit()). It calls the native method [QApplication: exec](https://doc.qt.io/qt-5/qcoreapplication.html#exec).

Returns the exit code after app exits.
