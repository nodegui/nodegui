import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { QDateTimeEdit } from './QDateTimeEdit';

/**

> Creates a widget to edit dates with spin box layout. WIP!

* **This class is a JS wrapper around Qt's [QTimeEdit class](https://doc.qt.io/qt-5/qtimeedit.html)**

A `QTimeEdit` a widget for editing times based on the QDateTimeEdit widget

### Example

```javascript
const { QTimeEdit } = require("@nodegui/nodegui");

const timeEdit = new QTimeEdit();
// must be implemented
```
 */
export class QTimeEdit extends QDateTimeEdit {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QTimeEdit(parent.native);
        } else {
            native = new addon.QTimeEdit();
        }
        super(native);
        this.setNodeParent(parent);
    }
}
