import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { QLayout, QLayoutSignals } from './QLayout';
import { NativeElement } from '../core/Component';
import { AlignmentFlag, Direction } from '../QtEnums';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

/**

> Lines up child widgets horizontally or vertically.

* **This class is a JS wrapper around Qt's [QBoxLayout class](https://doc.qt.io/qt-5/qboxlayout.html)**

### Example

```javascript
// This example arranges two calendars horizontally.

const { QBoxLayout, QCalendarWidget } = require("@nodegui/nodegui");

const centralWidget = new QWidget();
const boxLayout = new QBoxLayout(0);

boxLayout.addWidget(new QCalendarWidget());
boxLayout.addWidget(new QCalendarWidget());
centralWidget.setLayout(boxLayout);
```
 */
export class QBoxLayout extends QLayout<QBoxLayoutSignals> {
    constructor(arg: NativeElement | Direction, parent?: QWidget) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (parent) {
            native = new addon.QBoxLayout(arg as Direction, parent.native);
        } else {
            native = new addon.QBoxLayout(arg as Direction);
        }
        super(native);
    }
    addLayout(layout: QLayout, stretch = 0): void {
        this.native.addLayout(layout.native, stretch);
    }
    addSpacing(size: number): void {
        this.native.addSpacing(size);
    }
    addStretch(stretch = 0): void {
        this.native.addStretch(stretch);
    }
    addStrut(size: number): void {
        this.native.addStrut(size);
    }
    addWidget(widget: QWidget, stretch = 0, alignment: AlignmentFlag = 0): void {
        this.native.addWidget(widget.native, stretch, alignment);
    }
    insertWidget(index: number, widget: QWidget, stretch = 0): void {
        this.native.insertWidget(index, widget.native, stretch);
    }
    direction(): Direction {
        return this.native.direction();
    }
    insertLayout(index: number, layout: QLayout, stretch = 0): void {
        this.native.insertLayout(index, layout.native, stretch);
    }
    insertSpacing(index: number, size: number): void {
        this.native.insertSpacing(index, size);
    }
    insertStretch(index: number, stretch = 0): void {
        this.native.insertStretch(index, stretch);
    }
    removeWidget(widget: QWidget): void {
        this.native.removeWidget(widget.native);
    }
    setDirection(dir: Direction): void {
        this.native.setDirection(dir);
    }
    setStretch(index: number, stretch: number): void {
        this.native.setStretch(index, stretch);
    }
    count(): number {
        return this.native.count();
    }
}
wrapperCache.registerWrapper('QBoxLayoutWrap', QBoxLayout);

export type QBoxLayoutSignals = QLayoutSignals;
