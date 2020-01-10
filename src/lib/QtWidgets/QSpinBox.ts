import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';

/**
 
> Create and control spin box widgets.

* **This class is a JS wrapper around Qt's [QSpinBox class](https://doc.qt.io/qt-5/qspinbox.html)**

A `QSpinBox` provides ability to add and manipulate native spin box widgets.

### Example

```javascript
const { QSpinBox } = require("@nodegui/nodegui");

const spinBox = new QSpinBox();
```
 */

export class QSpinBox extends NodeWidget<QSpinBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QSpinBox(parent.native);
        } else {
            native = new addon.QSpinBox();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
    setPrefix(prefix: string): void {
        // react:✓
        this.native.setPrefix(prefix);
    }
    setSuffix(suffix: string): void {
        // react:✓
        this.native.setSuffix(suffix);
    }
    cleanText(): string {
        // react:✓
        return this.native.cleanText();
    }
    setSingleStep(val: number): void {
        // react:✓
        this.native.setSingleStep(val);
    }
    setRange(minimum: number, maximum: number): void {
        // react:✓
        this.native.setRange(minimum, maximum);
    }
    maximum(): number {
        // react:✓
        return this.native.maximum();
    }
    minimum(): number {
        // react:✓
        return this.native.minimum();
    }
    setValue(val: number): void {
        // react:✓
        this.native.setValue(val);
    }
    value(): number {
        // react:✓
        return this.native.value();
    }
}

export interface QSpinBoxSignals extends QWidgetSignals {
    valueChanged: (value: number) => void;
}
