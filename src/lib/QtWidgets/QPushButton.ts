import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement, NativeRawPointer, Component } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement, checkIfNapiExternal } from '../utils/helpers';
import { QMenu } from './QMenu';

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
    private _menu?: QMenu | null;

    constructor(arg?: QWidget | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        let parent: Component | undefined;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QPushButton(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as QWidget;
            native = new addon.QPushButton(parentWidget.native);
            parent = parentWidget;
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        parent && this.setNodeParent(parent);
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
        this._menu = menu;
        this.native.setMenu(menu.native);
    }
    menu(): QMenu | null {
        if (this._menu) {
            return this._menu;
        }
        return null;
    }
    showMenu(): void {
        this.native.showMenu();
    }
}

export type QPushButtonSignals = QAbstractButtonSignals;
