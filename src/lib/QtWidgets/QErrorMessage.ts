import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDialog, QDialogSignals } from './QDialog';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QErrorMessage(parent.native);
        } else {
            native = new addon.QErrorMessage();
        }
        super(native);
    }
    showMessage(message: string): void {
        this.native.showMessage(message);
    }
}
wrapperCache.registerWrapper('QErrorMessageWrap', QErrorMessage);

export type QErrorMessageSignals = QDialogSignals;
