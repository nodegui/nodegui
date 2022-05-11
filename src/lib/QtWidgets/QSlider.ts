import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider, QAbstractSliderSignals } from './QAbstractSlider';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

/**

> Create and control slider widgets.

* **This class is a JS wrapper around Qt's [QSlider class](https://doc.qt.io/qt-5/qslider.html)**

A `QSlider` provides ability to add and manipulate native slider widgets.

### Example

```javascript
const { QSlider } = require("@nodegui/nodegui");

const slider = new QSlider();
```
 */
export class QSlider extends QAbstractSlider<QSliderSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QSlider(parent.native);
        } else {
            native = new addon.QSlider();
        }
        super(native);
    }
    setTickInterval(ti: number): void {
        this.setProperty('tickInterval', ti);
    }
    tickInterval(): number {
        return this.property('tickInterval').toInt();
    }
    setTickPosition(position: TickPosition): void {
        this.setProperty('tickPosition', position);
    }
    tickPosition(): TickPosition {
        return this.property('tickPosition').toInt();
    }
}
wrapperCache.registerWrapper('QSliderWrap', QSlider);

export enum TickPosition {
    NoTicks,
    TicksAbove,
    TicksBelow,
    TicksBothSides,
    TicksLeft = TicksAbove,
    TicksRight = TicksBelow,
}

export type QSliderSignals = QAbstractSliderSignals;
