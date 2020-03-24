import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSpinBox, QAbstractSpinBoxSignals, StepType } from './QAbstractSpinBox';

/**
 
> Create and control double spin box widgets.

* **This class is a JS wrapper around Qt's [QDoubleSpinBox class](https://doc.qt.io/qt-5/qdoublespinbox.html)**

A `QDoubleSpinBox` provides ability to add and manipulate native double spin box widgets.

### Example

```javascript
const { QDoubleSpinBox } = require("@nodegui/nodegui");

const doublespinBox = new QDoubleSpinBox();
```
 */
export class QDoubleSpinBox extends QAbstractSpinBox<QDoubleSpinBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDoubleSpinBox(parent.native);
        } else {
            native = new addon.QDoubleSpinBox();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
    cleanText(): string {
        return this.property('cleanText').toString();
    }
    setDecimals(prec: number): void {
        this.setProperty('decimals', prec);
    }
    decimals(): number {
        return this.property('decimals').toInt();
    }
    setMaximum(max: number): void {
        this.setProperty('maximum', max);
    }
    maximum(): number {
        return this.property('maximum').toDouble();
    }
    setMinimum(min: number): void {
        this.setProperty('minimum', min);
    }
    minimum(): number {
        return this.property('minimum').toDouble();
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
        return this.property('singleStep').toDouble();
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
        return this.property('value').toDouble();
    }
    setRange(minimum: number, maximum: number): void {
        this.native.setRange(minimum, maximum);
    }
    textFromValue(value: number): string {
        return this.native.textFromValue(value);
    }
    valueFromText(text: string): number {
        return this.native.valueFromText(text);
    }
}

export interface QDoubleSpinBoxSignals extends QAbstractSpinBoxSignals {
    valueChanged: (value: number) => void;
}
