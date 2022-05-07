import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider, QAbstractSliderSignals } from './QAbstractSlider';

/**

> Create and control dial slider widgets.

* **This class is a JS wrapper around Qt's [QDial class](https://doc.qt.io/qt-5/qdial.html)**

A `QDial` provides ability to add and manipulate native dial slider widgets.

### Example

```javascript
const { QDial } = require("@nodegui/nodegui");

const dial = new QDial();
```
 */
export class QDial extends QAbstractSlider<QDialSignals> {
    constructor();
    constructor(parent: QWidget);
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QDial(parent.native);
        } else {
            native = new addon.QDial();
        }
        super(native);
    }
    notchSize(): number {
        return this.property('notchSize').toInt();
    }
    setNotchTarget(target: number): void {
        this.setProperty('notchTarget', target);
    }
    notchTarget(): number {
        return this.property('notchTarget').toDouble();
    }
    setNotchesVisible(visible: boolean): void {
        this.setProperty('notchesVisible', visible);
    }
    notchesVisible(): boolean {
        return this.property('notchesVisible').toBool();
    }
    setWrapping(on: boolean): void {
        this.setProperty('wrapping', on);
    }
    wrapping(): boolean {
        return this.property('wrapping').toBool();
    }
}

export type QDialSignals = QAbstractSliderSignals;
