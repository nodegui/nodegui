---
sidebar_label: QIcon
title: QIcon
---

> The QIcon class provides scalable icons in different modes and states.

**This class is a JS wrapper around Qt's [QIcon class](https://doc.qt.io/qt-5/qicon.html)**

**QIcon inherits from [Component](api/Component.md)**

### Example

```javascript
const { QIcon } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const icon = new QIcon(imageUrl);
```

### `new QIcon(imageUrl?)`

- `imageUrl` string (_optional_). Absolute path of the image that needs to be loaded in the memory.

## Static Methods

QIcon can access all the static methods defined in [Component](api/Component.md)

## Instance Properties

QIcon can access all the instance properties defined in [Component](api/Component.md)

## Instance Methods

QIcon can access all the instance methods defined in [Component](api/Component.md)
Additionally it also has the following instance methods:

### `icon.pixmap(width, height, mode?, state?)` (v0.1.10 & up)

Returns a pixmap with the requested size, mode, and state, generating one if necessary. The pixmap might be smaller than requested, but never larger.
. It calls the native method [QIcon: pixmap](https://doc.qt.io/qt-5/qicon.html#pixmap-3).

- `width`: number,
- `height`: number
- `mode?`: QIconMode
- `state?`: QIconState
