import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
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
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        super();
        let native;
        if (parent) {
            native = new addon.QTimeEdit(parent.native);
        } else {
            native = new addon.QTimeEdit();
        }
        this.native = native;
        this.setNodeParent(parent);
    }
}
