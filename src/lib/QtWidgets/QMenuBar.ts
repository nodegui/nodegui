import { QMenu } from './QMenu';
import { NativeElement } from '../core/Component';
import { QWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QAction } from './QAction';
import { wrapperCache } from '../core/WrapperCache';
import { QPoint } from '../QtCore/QPoint';
import { QRect } from '../QtCore/QRect';
import { Corner } from '../QtEnums/Corner';
import { QIcon } from '../QtGui/QIcon';

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

    addSeparator(): QAction {
        return wrapperCache.getWrapper(this.native.addSeparator()) as QAction;
    }

    actionAt(pt: QPoint): QAction {
        return wrapperCache.getWrapper(this.native.actionAt(pt.native)) as QAction;
    }
    actionGeometry(act: QAction): QRect {
        return new QRect(this.native.actionGeometry(act.native));
    }
    activeAction(): QAction {
        return wrapperCache.getWrapper(this.native.activeAction()) as QAction;
    }

    addMenu(menuOrStringOrIcon: QMenu | QIcon | string, title?: string): QMenu {
        if (typeof menuOrStringOrIcon === 'string') {
            return wrapperCache.getWrapper(this.native.addMenu_1(menuOrStringOrIcon)) as QMenu;
        }
        if (menuOrStringOrIcon instanceof QMenu) {
            return wrapperCache.getWrapper(this.native.addMenu(menuOrStringOrIcon.native)) as QMenu;
        }
        return wrapperCache.getWrapper(this.native.addMenu_2(menuOrStringOrIcon.native, title)) as QMenu;
    }

    clear(): void {
        this.native.clear();
    }
    cornerWidget(corner: Corner = Corner.TopRightCorner): QWidget {
        return wrapperCache.getWrapper(this.native.cornerWidget(corner)) as QWidget;
    }
    insertMenu(before: QAction, menu: QMenu): QAction {
        return wrapperCache.getWrapper(this.native.insertMenu(before.native, menu.native)) as QAction;
    }
    insertSeparator(before: QAction): QAction {
        return wrapperCache.getWrapper(this.native.insertSeparator(before.native)) as QAction;
    }
    setActiveAction(act: QAction): void {
        this.native.setActiveAction(act.native);
    }
    setCornerWidget(widget: QWidget, corner: Corner = Corner.TopRightCorner): void {
        this.native.setCornerWidget(widget, corner);
    }

    // CLASS: QMenuBar
    // TODO: NSMenu *	toNSMenu()

    // CLASS: QMenuBar
    isNativeMenuBar(): boolean {
        return this.property('isNativeMenuBar').toBool();
    }
    setNativeMenuBar(nativeMenuBar: boolean): void {
        this.setProperty('nativeMenuBar', nativeMenuBar);
    }
    isDefaultUp(): boolean {
        return this.property('isDefaultUp').toBool();
    }
    setDefaultUp(isDefaultUp: boolean): void {
        this.setProperty('defaultUp', isDefaultUp);
    }
}
wrapperCache.registerWrapper('QMenuBarWrap', QMenuBar);

export type QMenuBarSignals = QWidgetSignals;
