import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';

/**

> Create and control number.

* **This class is a JS wrapper around Qt's [QLCDNumber class](https://doc.qt.io/qt-5/qlcdnumber.html)**

The `QLCDNumber` widget displays a number with LCD-like digits.

### Example

```javascript
const { QLCDNumber } = require("@nodegui/nodegui");

const lcd = new QLCDNumber();

```

 */
export class QLCDNumber extends QWidget<QLCDNumberSignals> {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QLCDNumber(parent.native);
        } else {
            native = new addon.QLCDNumber();
        }
        super(native);
    }
    setDigitCount(numDigits: number): void {
        this.setProperty('digitCount', numDigits);
    }
    digitCount(): number {
        return this.property('digitCount').toInt();
    }
    intValue(): number {
        return this.property('intValue').toInt();
    }
    setMode(mode: Mode): void {
        this.setProperty('mode', mode);
    }
    mode(): Mode {
        return this.property('mode').toInt();
    }
    setSegmentStyle(style: SegmentStyle): void {
        this.setProperty('segmentStyle', style);
    }
    segmentStyle(): SegmentStyle {
        return this.property('segmentStyle').toInt();
    }
    setSmallDecimalPoint(enabled: boolean): void {
        this.setProperty('smallDecimalPoint', enabled);
    }
    smallDecimalPoint(): boolean {
        return this.property('smallDecimalPoint').toBool();
    }
    value(): number {
        return this.property('value').toDouble();
    }
    checkOverflow(num: number): boolean {
        return this.native.checkOverflow(num);
    }
    display(value: string | number): void {
        this.native.display(value);
    }
    setBinMode(): void {
        this.native.setBinMode();
    }
    setDecMode(): void {
        this.native.setDecMode();
    }
    setHexMode(): void {
        this.native.setHexMode();
    }
    setOctMode(): void {
        this.native.setOctMode();
    }
}

export enum Mode {
    Hex,
    Dec,
    Oct,
    Bin,
}

export enum SegmentStyle {
    Outline,
    Filled,
    Flat,
}

export interface QLCDNumberSignals extends QWidgetSignals {
    overflow: () => void;
}
