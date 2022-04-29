import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { QAbstractSpinBox, QAbstractSpinBoxSignals, StepType } from './QAbstractSpinBox';

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
export class QSpinBox extends QAbstractSpinBox<QSpinBoxSignals> {
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QSpinBox(parent.native);
        } else {
            native = new addon.QSpinBox();
        }
        super(native);
        this.setNodeParent(parent);
    }
    cleanText(): string {
        return this.property('cleanText').toString();
    }
    setDisplayIntegerBase(base: number): void {
        this.setProperty('displayIntegerBase', base);
    }
    displayIntegerBase(): number {
        return this.property('displayIntegerBase').toInt();
    }
    setMaximum(max: number): void {
        this.setProperty('maximum', max);
    }
    maximum(): number {
        return this.property('maximum').toInt();
    }
    setMinimum(min: number): void {
        this.setProperty('minimum', min);
    }
    minimum(): number {
        return this.property('minimum').toInt();
    }
    setPrefix(prefix: string): void {
        this.setProperty('prefix', prefix);
    }
    prefix(): string {
        return this.property('prefix').toString();
    }
    setSingleStep(val: number): void {
        this.setProperty('singleStep', val);
    }
    singleStep(): number {
        return this.property('singleStep').toInt();
    }
    setStepType(stepType: StepType): void {
        this.setProperty('stepType', stepType);
    }
    stepType(): StepType {
        return this.property('stepType').toInt();
    }
    setSuffix(suffix: string): void {
        this.setProperty('suffix', suffix);
    }
    suffix(): string {
        return this.property('suffix').toString();
    }
    setValue(val: number): void {
        this.setProperty('value', val);
    }
    value(): number {
        return this.property('value').toInt();
    }
    setRange(minimum: number, maximum: number): void {
        this.native.setRange(minimum, maximum);
    }
}

export interface QSpinBoxSignals extends QAbstractSpinBoxSignals {
    valueChanged: (value: number) => void;
}
