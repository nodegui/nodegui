import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement } from '../utils/helpers';

export type QPushButtonSignals = QAbstractButtonSignals;
/**
 
> Create and control buttons.

* **This class is a JS wrapper around Qt's [QPushButton class](https://doc.qt.io/qt-5/qpushbutton.html)**

A `QPushButton` provides ability to add and manipulate native button widgets.

### Example

```javascript
const { QPushButton } = require("@nodegui/nodegui");

const button = new QPushButton();
button.setText("Hello");
```
 */
export class QPushButton extends QAbstractButton<QPushButtonSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(native: NativeElement);
    constructor(arg?: NodeWidget<any> | NativeElement) {
        let native;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg) {
            native = new addon.QPushButton(arg.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        this.native = native;
        if (!checkIfNativeElement(arg)) {
            this.setNodeParent(arg as NodeWidget<any>);
        }
    }
    setFlat(isFlat: boolean): void {
        this.native.setFlat(isFlat);
    }
}
