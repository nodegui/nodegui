import { QRect } from '../QtCore/QRect';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import addon from '../utils/addon';

/**
 
> QDesktopWidget is a class that provides access to screen information on multi-head systems..

* **This class is a JS wrapper around Qt's [QDesktopWidget Class](https://doc.qt.io/qt-5/qdesktopwidget.html)**

The QDesktopWidget class provides information about the user's desktop, such as its total size, number of screens, the geometry of each screen, and whether they are configured as separate desktops or a single virtual desktop.

### Example

```js
const { QDesktopWidget } = require("@nodegui/nodegui");

const desktop = new QDesktopWidget();
const availableGeometry = desktop.availableGeometry();
const screenGeometry = desktop.screenGeometry();
console.log(availableGeometry.width() + 'x' + availableGeometry.height());
console.log(screenGeometry.width() + 'x' + screenGeometry.height());
console.log(desktop.screenNumber());
```
 */
export type QDesktopWidgetSignals = QWidgetSignals;
export class QDesktopWidget extends NodeWidget<QDesktopWidgetSignals> {
    native: NativeElement;
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDesktopWidget(parent.native);
        } else {
            native = new addon.QDesktopWidget();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    availableGeometry(screen = -1): QRect {
        return new QRect(this.native.availableGeometry(screen));
    }
    screenGeometry(screen = -1): QRect {
        return new QRect(this.native.screenGeometry(screen));
    }
    screenNumber(): number {
        return this.native.screenNumber();
    }
}
