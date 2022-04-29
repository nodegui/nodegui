import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement, NativeRawPointer, Component } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement, checkIfNapiExternal } from '../utils/helpers';
import { CheckState } from '../QtEnums';

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
    constructor();
    constructor(parent: QWidget);
    constructor(rawPointer: NativeRawPointer<any>, disableNativeDeletion?: boolean);
    constructor(arg?: QWidget | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        let parent: Component | undefined;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QCheckBox(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as QWidget;
            native = new addon.QCheckBox(parentWidget.native);
            parent = parentWidget;
        } else {
            native = new addon.QCheckBox();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    setTristate(y = true): void {
        this.setProperty('tristate', y);
    }
    isTristate(): boolean {
        return this.property('tristate').toBool();
    }
    checkState(): CheckState {
        return this.native.checkState();
    }
    setCheckState(state: CheckState): void {
        this.native.setCheckState(state);
    }
}

export interface QCheckBoxSignals extends QAbstractButtonSignals {
    stateChanged: (state: number) => void;
}
