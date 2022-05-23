import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider, QAbstractSliderSignals } from './QAbstractSlider';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QScrollBar(parent.native);
        } else {
            native = new addon.QScrollBar();
        }
        super(native);
    }
}
wrapperCache.registerWrapper('QScrollBarWrap', QScrollBar);

export type QScrollBarSignals = QAbstractSliderSignals;
