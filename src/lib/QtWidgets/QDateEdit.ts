import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDateTimeEdit } from './QDateTimeEdit';

/**

> Creates a widget to edit dates with spin box layout. WIP!

* **This class is a JS wrapper around Qt's [QDateEdit class](https://doc.qt.io/qt-5/qdateedit.html)**

A `QDateEdit` provides a widget for editing dates based on the QDateTimeEdit widget.

### Example

```javascript
const { QDateEdit } = require("@nodegui/nodegui");

const dateEdit = new QDateEdit();
// must be implemented
```
 */
export class QDateEdit extends QDateTimeEdit {
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QDateEdit(parent.native);
        } else {
            native = new addon.QDateEdit();
        }
        super(native);
    }
}
