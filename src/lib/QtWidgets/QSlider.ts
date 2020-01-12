import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider, QAbstractSliderSignals } from './QAbstractSlider';

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
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QSlider(parent.native);
        } else {
            native = new addon.QSlider();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
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

export enum TickPosition {
    NoTicks,
    TicksAbove,
    TicksBelow,
    TicksBothSides,
    TicksLeft = TicksAbove,
    TicksRight = TicksBelow,
}

export type QSliderSignals = QAbstractSliderSignals;
