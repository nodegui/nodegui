import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDialog, QDialogSignals } from './QDialog';

/**

> Create and control error message dialogs.

* **This class is a JS wrapper around Qt's [QErrorMessage class](https://doc.qt.io/qt-5/qerrormessage.html)**

The `QErrorMessage` class provides an error message display dialog.

### Example

```javascript
const { QErrorMessage } = require("@nodegui/nodegui");

const errorMessage = new QErrorMessage();

```
 */
export class QErrorMessage extends QDialog<QErrorMessageSignals> {
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QErrorMessage(parent.native);
        } else {
            native = new addon.QErrorMessage();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    showMessage(message: string): void {
        this.native.showMessage(message);
    }
}

export type QErrorMessageSignals = QDialogSignals;
