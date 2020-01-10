import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer, Component } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement, checkIfNapiExternal } from '../utils/helpers';

/**
 
> Create and control checkbox.

* **This class is a JS wrapper around Qt's [QCheckBox class](https://doc.qt.io/qt-5/qcheckbox.html)**

A `QCheckBox` provides ability to add and manipulate native checkbox widgets.

### Example

```javascript
const { QCheckBox } = require("@nodegui/nodegui");

const checkbox = new QCheckBox();
checkbox.setText("Hello");
```
 */
export class QCheckBox extends QAbstractButton<QCheckBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(rawPointer: NativeRawPointer<any>, disableNativeDeletion?: boolean);
    constructor(arg?: NodeWidget<any> | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        let parent: Component | undefined;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QCheckBox(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as NodeWidget<any>;
            native = new addon.QCheckBox(parentWidget.native);
            parent = parentWidget;
        } else {
            native = new addon.QCheckBox();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
    setChecked(check: boolean): void {
        this.native.setChecked(check);
    }
    isChecked(): boolean {
        return this.native.isChecked();
    }
}

export type QCheckBoxSignals = QAbstractButtonSignals;
