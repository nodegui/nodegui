import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QDateTimeEdit } from './QDateTimeEdit';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QTimeEdit(parent.native);
        } else {
            native = new addon.QTimeEdit();
        }
        super(native);
    }
}
wrapperCache.registerWrapper('QTimeEditWrap', QTimeEdit);
