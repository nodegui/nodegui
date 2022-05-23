import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSpinBox, QAbstractSpinBoxSignals, StepType } from './QAbstractSpinBox';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QDoubleSpinBox(parent.native);
        } else {
            native = new addon.QDoubleSpinBox();
        }
        super(native);
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
wrapperCache.registerWrapper('QDoubleSpinBoxWrap', QDoubleSpinBox);

export interface QDoubleSpinBoxSignals extends QAbstractSpinBoxSignals {
    valueChanged: (value: number) => void;
}
