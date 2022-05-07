import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { QDialog, QDialogSignals } from './QDialog';

/**

> Create and control progress dialogs.

* **This class is a JS wrapper around Qt's [QProgressDialog class](https://doc.qt.io/qt-5/qprogressdialog.html)**

The `QProgressDialog` class provides feedback on the progress of a slow operation.

### Example

```javascript
const { QProgressDialog } = require("@nodegui/nodegui");

const progressDialog = new QProgressDialog();

```
 */
export class QProgressDialog extends QDialog<QProgressDialogSignals> {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QProgressDialog(parent.native);
        } else {
            native = new addon.QProgressDialog();
        }
        super(native);
    }
    setAutoClose(close: boolean): void {
        this.setProperty('autoClose', close);
    }
    autoClose(): boolean {
        return this.property('autoClose').toBool();
    }
    setAutoReset(reset: boolean): void {
        this.setProperty('autoReset', reset);
    }
    autoReset(): boolean {
        return this.property('autoReset').toBool();
    }
    setLabelText(text: string): void {
        this.setProperty('labelText', text);
    }
    labelText(): string {
        return this.property('labelText').toString();
    }
    setMaximum(maximum: number): void {
        this.setProperty('maximum', maximum);
    }
    maximum(): number {
        return this.property('maximum').toInt();
    }
    setMinimum(minimum: number): void {
        this.setProperty('minimum', minimum);
    }
    minimum(): number {
        return this.property('minimum').toInt();
    }
    setMinimumDuration(ms: number): void {
        this.setProperty('minimumDuration', ms);
    }
    minimumDuration(): number {
        return this.property('minimumDuration').toInt();
    }
    setValue(progress: number): void {
        this.setProperty('value', progress);
    }
    value(): number {
        return this.property('value').toInt();
    }
    wasCanceled(): boolean {
        return this.property('wasCanceled').toBool();
    }
    cancel(): void {
        this.native.cancel();
    }
    reset(): void {
        this.native.reset();
    }
    setCancelButtonText(text: string): void {
        this.native.setCancelButtonText(text);
    }
    setRange(minimum: number, maximum: number): void {
        this.native.setRange(minimum, maximum);
    }
}

export interface QProgressDialogSignals extends QDialogSignals {
    canceled: () => void;
}
