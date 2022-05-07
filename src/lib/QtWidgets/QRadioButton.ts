import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement, checkIfNapiExternal } from '../utils/helpers';

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
    constructor(arg?: QWidget | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QRadioButton(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as QWidget;
            native = new addon.QRadioButton(parentWidget.native);
        } else {
            native = new addon.QRadioButton();
        }
        super(native);
    }
}

export type QRadioButtonSignals = QAbstractButtonSignals;
