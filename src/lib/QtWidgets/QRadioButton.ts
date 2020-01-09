import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer, Component } from '../core/Component';
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
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(rawPointer: NativeRawPointer<any>, disableNativeDeletion?: boolean);
    constructor(arg?: NodeWidget<any> | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        let parent: Component | undefined;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QRadioButton(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as NodeWidget<any>;
            native = new addon.QRadioButton(parentWidget.native);
            parent = parentWidget;
        } else {
            native = new addon.QRadioButton();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
}

export type QRadioButtonSignals = QAbstractButtonSignals;
