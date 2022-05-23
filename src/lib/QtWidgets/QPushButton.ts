import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement } from '../utils/helpers';
import { QMenu } from './QMenu';
import { wrapperCache } from '../core/WrapperCache';

/**

> Create and control buttons.

* **This class is a JS wrapper around Qt's [QPushButton class](https://doc.qt.io/qt-5/qpushbutton.html)**

A `QPushButton` provides ability to add and manipulate native button widgets.

### Example

```javascript
const { QPushButton } = require("@nodegui/nodegui");

const button = new QPushButton();
button.setText("Hello");
```
 */
export class QPushButton extends QAbstractButton<QPushButtonSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QPushButton(parent.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
    }
    setAutoDefault(auto: boolean): void {
        this.setProperty('autoDefault', auto);
    }
    autoDefault(): boolean {
        return this.property('autoDefault').toBool();
    }
    setDefault(isDefault: boolean): void {
        this.setProperty('default', isDefault);
    }
    isDefault(): boolean {
        return this.property('default').toBool();
    }
    setFlat(isFlat: boolean): void {
        this.setProperty('flat', isFlat);
    }
    isFlat(): boolean {
        return this.property('flat').toBool();
    }
    setMenu(menu: QMenu): void {
        this.native.setMenu(menu.native);
    }
    menu(): QMenu | null {
        return wrapperCache.getWrapper(this.native.menu()) as QMenu;
    }
    showMenu(): void {
        this.native.showMenu();
    }
}
wrapperCache.registerWrapper('QPushButtonWrap', QPushButton);

export type QPushButtonSignals = QAbstractButtonSignals;
