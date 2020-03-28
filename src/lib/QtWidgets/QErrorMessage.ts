import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeDialog, QDialogSignals } from './QDialog';

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
export class QErrorMessage extends NodeDialog<QErrorMessageSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QErrorMessage(parent.native);
        } else {
            native = new addon.QErrorMessage();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
    showMessage(message: string): void {
        this.native.showMessage(message);
    }
}

export type QErrorMessageSignals = QDialogSignals;
