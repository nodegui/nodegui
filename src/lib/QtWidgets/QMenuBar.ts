import { QMenu } from './QMenu';
import { NativeElement } from '../core/Component';
import { QWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QAction } from './QAction';
import { wrapperCache } from '../core/WrapperCache';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QMenuBar(parent.native);
        } else {
            native = new addon.QMenuBar();
        }
        super(native);
    }

    addMenu(menu: QMenu | string): QMenu {
        if (typeof menu === 'string') {
            const qmenu = new QMenu();
            qmenu.setTitle(menu);
            this.native.addMenu(qmenu.native);
            return qmenu;
        }
        this.native.addMenu(menu.native);
        return menu;
    }
    addSeparator(): QAction {
        return this.native.addSeparator();
    }
    setNativeMenuBar(nativeMenuBar: boolean): void {
        this.native.setNativeMenuBar(nativeMenuBar);
    }
}
wrapperCache.registerWrapper('QMenuBarWrap', QMenuBar);

export type QMenuBarSignals = QWidgetSignals;
