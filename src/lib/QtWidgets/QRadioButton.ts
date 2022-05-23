import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

/**

> Create and control radio button.

* **This class is a JS wrapper around Qt's [QRadioButton class](https://doc.qt.io/qt-5/qradiobutton.html)**

A `QRadioButton` provides ability to add and manipulate native radio button widgets.

### Example

```javascript
const { QRadioButton } = require("@nodegui/nodegui");

const radioButton = new QRadioButton();
radioButton.setText("Hello");
```

 */
export class QRadioButton extends QAbstractButton<QRadioButtonSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QRadioButton(parent.native);
        } else {
            native = new addon.QRadioButton();
        }
        super(native);
    }
}
wrapperCache.registerWrapper('QRadioButtonWrap', QRadioButton);

export type QRadioButtonSignals = QAbstractButtonSignals;
