import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';

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
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QPushButton(parent.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
    setFlat(isFlat: boolean): void {
        this.native.setFlat(isFlat);
    }
}
