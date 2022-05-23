import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Create and control a group of checkboxes including a title.

* **This class is a JS wrapper around Qt's [QGroupBox class](https://doc.qt.io/qt-5/qgroupbox.html)**

A `QGroupBox` widget provides a group box frame with a title.

### Example

```javascript
import { FlexLayout, QGroupBox, QRadioButton, QMainWindow } from '@nodegui/nodegui';

const win = new QMainWindow();

const r1 = new QRadioButton();
r1.setText('R1');
const r2 = new QRadioButton();
r2.setText('R2');
const r3 = new QRadioButton();
r3.setText('R3');

const groupBoxLayout = new FlexLayout();
const groupBox = new QGroupBox();
groupBox.setLayout(groupBoxLayout);
groupBoxLayout.addWidget(r1);
groupBoxLayout.addWidget(r2);
groupBoxLayout.addWidget(r3);

win.setCentralWidget(groupBox);
win.resize(400, 400);

win.show();
(global as any).win = win;
```
 */
export class QGroupBox extends QWidget<QGroupBoxSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QGroupBox(parent.native);
        } else {
            native = new addon.QGroupBox();
        }
        super(native);
    }

    setAlignment(alignment: AlignmentFlag): void {
        this.setProperty('alignment', alignment);
    }
    alignment(): AlignmentFlag {
        return this.property('alignment').toInt();
    }
    setCheckable(checkable: boolean): void {
        this.setProperty('checkable', checkable);
    }
    isCheckable(): boolean {
        return this.property('checkable').toBool();
    }
    setChecked(checked: boolean): void {
        this.setProperty('checked', checked);
    }
    isChecked(): boolean {
        return this.property('checked').toBool();
    }
    setFlat(flat: boolean): void {
        this.setProperty('flat', flat);
    }
    isFlat(): boolean {
        return this.property('flat').toBool();
    }
    setTitle(title: string): void {
        this.setProperty('title', title);
    }
    title(): string {
        return this.property('title').toString();
    }
}
wrapperCache.registerWrapper('QGroupBoxWrap', QGroupBox);

export interface QGroupBoxSignals extends QWidgetSignals {
    clicked: (checked: boolean) => void;
    toggled: (on: boolean) => void;
}
