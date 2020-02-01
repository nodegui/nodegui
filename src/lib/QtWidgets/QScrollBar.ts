import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider, QAbstractSliderSignals } from './QAbstractSlider';

/**
 
> Create and control scollbar widgets.

* **This class is a JS wrapper around Qt's [QScrollBar class](https://doc.qt.io/qt-5/qscrollbar.html)**

A `QScrollBar` provides ability to add and manipulate native scrollbar widgets.

### Example

```javascript
const { QScrollBar } = require("@nodegui/nodegui");

const scrollbar = new QScrollBar();
```
 */
export class QScrollBar extends QAbstractSlider<QScrollBarSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QScrollBar(parent.native);
        } else {
            native = new addon.QScrollBar();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
}

export type QScrollBarSignals = QAbstractSliderSignals;
