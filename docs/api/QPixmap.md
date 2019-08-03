## Class: QPixmap

> The QPixmap class helps hold an image in the form of off-screen image representation.

**This class is a JS wrapper around Qt's [QPixmap class](https://doc.qt.io/qt-5/qpixmap.html)**

A `QPixmap` provides ability to store an image in the memory.

**QPixmap inherits from [Component](api/Component.md)**

### Example

```javascript
const { QPixmap } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const pixMap = new QPixmap(imageUrl);
```

### `new QPixmap(imageUrl?)`

- `imageUrl` string (_optional_). Absolute path of the image that needs to be loaded in the memory.

### Static Methods

QPixmap can access all the static methods defined in [Component](api/Component.md)

### Instance Properties

QPixmap can access all the instance properties defined in [Component](api/Component.md)

### Instance Methods

QPixmap can access all the instance methods defined in [Component](api/Component.md)

Additionally it also has the following instance methods:

#### `pixMap.load(imageUrl)`

loads an image from the url into memory as a Pixmap.
returns true if load was successful otherwise returns false.

- `imageUrl` string (_optional_). Absolute path of the image that needs to be loaded in the memory.
