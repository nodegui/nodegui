import { QMenu } from './QMenu';
import { NativeElement } from '../core/Component';
import { QWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QAction } from './QAction';

/**

> The QMenuBar class provides a menu widget for use in menu bars, context menus, and other popup menus.

* **This class is a JS wrapper around Qt's [QMenuBar class](https://doc.qt.io/qt-5/qmenu.html)**

### Example

```javascript
const { QMenuBar, QMainWindow } = require("@nodegui/nodegui");
const win = new QMainWindow();
const menu = new QMenuBar();
const menuBar = new QMenuBar();
win.setMenuBar(menuBar);
win.show();
global.win = win;
```
 */
export class QMenuBar extends QWidget<QMenuBarSignals> {
    _menus: Set<QMenu>;

    constructor(arg?: QWidget | NativeElement) {
        let native;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (typeof arg === 'object') {
            native = new addon.QMenuBar(arg.native);
        } else {
            native = new addon.QMenuBar();
        }
        super(native);
        this._menus = new Set<QMenu>();
    }
    addMenu(menu: QMenu | string): QMenu {
        if (typeof menu === 'string') {
            const qmenu = new QMenu();
            qmenu.setTitle(menu);
            this.native.addMenu(qmenu.native);
            this._menus.add(qmenu);
            return qmenu;
        }
        this.native.addMenu(menu.native);
        this._menus.add(menu);
        return menu;
    }
    addSeparator(): QAction {
        return this.native.addSeparator();
    }
    setNativeMenuBar(nativeMenuBar: boolean): void {
        this.native.setNativeMenuBar(nativeMenuBar);
    }
}

export type QMenuBarSignals = QWidgetSignals;
