import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement } from '../utils/helpers';
import { CheckState } from '../QtEnums';
import { wrapperCache } from '../core/WrapperCache';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QCheckBox(parent.native);
        } else {
            native = new addon.QCheckBox();
        }
        super(native);
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
wrapperCache.registerWrapper('QCheckBoxWrap', QCheckBox);

export interface QCheckBoxSignals extends QAbstractButtonSignals {
    stateChanged: (state: number) => void;
}
