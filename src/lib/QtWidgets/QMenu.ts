import { NativeElement } from '../core/Component';
import { QWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { QAction } from './QAction';
import { QPoint } from '../QtCore/QPoint';

/**

> The QMenu class provides a menu widget for use in menu bars, context menus, and other popup menus.

* **This class is a JS wrapper around Qt's [QMenu class](https://doc.qt.io/qt-5/qmenu.html)**

### Example

```javascript
const { QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
```
 */
export class QMenu extends QWidget<QMenuSignals> {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QMenu(parent.native);
        } else {
            native = new addon.QMenu();
        }
        super(native);
    }
    clear(): void {
        this.native.clear();
    }
    setTitle(title: string): void {
        this.native.setTitle(title);
    }
    addSeparator(): QAction {
        return this.native.addSeparator();
    }
    exec(point?: QPoint, action?: QAction | null): void {
        if (point && action) {
            this.native.exec(point.native, action.native);
        } else if (point) {
            this.native.exec(point.native);
        } else {
            this.native.exec();
        }
    }
    popup(point: QPoint, action?: QAction): void {
        this.native.popup(point.native, action?.native);
    }
}

export interface QMenuSignals extends QWidgetSignals {
    triggered: (action: NativeElement) => void;
}
