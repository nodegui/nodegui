---
sidebar_label: QCursor
title: QCursor
---

> The QCursor class provides scalable icons in different modes and states.

**This class is a JS wrapper around Qt's [QCursor class](https://doc.qt.io/qt-5/qcursor.html)**

### Example

```javascript
const { QCursor } = require("@nodegui/nodegui");

const cursor = new QCursor();
```

### `new QCursor(cursor)`

- `cursor` CursorShape (_optional_). Defines shape for the cursor. [CursorShape is an enum from Qt](api/QtEnums.md)
