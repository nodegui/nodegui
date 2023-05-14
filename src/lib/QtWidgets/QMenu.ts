import { NativeElement } from '../core/Component';
import { QWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { QAction } from './QAction';
import { QPoint } from '../QtCore/QPoint';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';
import { QRect } from '../QtCore/QRect';
import { QIcon } from '../QtGui/QIcon';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QMenu(parent.native);
        } else {
            native = new addon.QMenu();
        }
        super(native);
    }
    clear(): void {
        this.native.clear();
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

    // CLASS: QMenu
    // TODO: QAction *	addMenu(QMenu *menu)
    // TODO: NSMenu *	toNSMenu()

    actionAt(pt: QPoint): QAction {
        return wrapperCache.getWrapper(this.native.actionAt(pt.native)) as QAction;
    }
    actionGeometry(act: QAction): QRect {
        return new QRect(this.native.actionGeometry(act.native));
    }
    activeAction(): QAction {
        return wrapperCache.getWrapper(this.native.activeAction()) as QAction;
    }
    addMenu(title: string): QMenu;
    addMenu(icon: QIcon, title: string): QMenu;
    addMenu(titleOrIcon: string | QIcon, title?: string): QMenu {
        if (typeof titleOrIcon === 'string') {
            return wrapperCache.getWrapper(this.native.addMenu_1(title)) as QMenu;
        } else {
            return wrapperCache.getWrapper(this.native.addMenu_2(titleOrIcon.native, title)) as QMenu;
        }
    }
    addSection(text: string): QAction;
    addSection(icon: QIcon, text: string): QAction;
    addSection(textOrIcon: string | QIcon, text?: string): QAction {
        if (typeof textOrIcon === 'string') {
            return wrapperCache.getWrapper(this.native.addSection_1(textOrIcon)) as QAction;
        } else {
            return wrapperCache.getWrapper(this.native.addSection_2(textOrIcon.native, text)) as QAction;
        }
    }
    defaultAction(): QAction {
        return wrapperCache.getWrapper(this.native.defaultAction()) as QAction;
    }
    hideTearOffMenu(): void {
        this.native.hideTearOffMenu();
    }
    insertMenu(before: QAction, menu: QMenu): QAction {
        return wrapperCache.getWrapper(this.native.insertMenu(before.native, menu.native)) as QAction;
    }

    insertSection(before: QAction, text: string): QAction;
    insertSection(before: QAction, icon: QIcon, text: string): QAction;
    insertSection(before: QAction, textOrIcon: string | QIcon, text?: string): QAction {
        if (typeof textOrIcon === 'string') {
            return wrapperCache.getWrapper(this.native.insertSection_2(before.native, text)) as QAction;
        } else {
            return wrapperCache.getWrapper(
                this.native.insertSection_3(before.native, textOrIcon.native, text),
            ) as QAction;
        }
    }

    insertSeparator(before: QAction): QAction {
        return wrapperCache.getWrapper(this.native.insertSeparator(before.native)) as QAction;
    }
    isEmpty(): boolean {
        return this.native.isEmpty();
    }
    isTearOffMenuVisible(): boolean {
        return this.native.isTearOffMenuVisible();
    }
    menuAction(): QAction {
        return wrapperCache.getWrapper(this.native.menuAction()) as QAction;
    }
    setActiveAction(act: QAction): void {
        this.native.setActiveAction(act.native);
    }
    setAsDockMenu(): void {
        this.native.setAsDockMenu();
    }
    setDefaultAction(act: QAction): void {
        this.native.setDefaultAction(act.native);
    }
    showTearOffMenu(pos: QPoint = null): void {
        if (pos == null) {
            this.native.showTearOffMenu_0();
        } else {
            this.native.showTearOffMenu_1(pos.native);
        }
    }
    icon(): QIcon {
        return this.native.icon();
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon);
    }
    separatorsCollapsible(): boolean {
        return this.property('separatorsCollapsible').toBool();
    }
    setSeparatorsCollapsible(collapse: boolean): void {
        this.setProperty('separatorsCollapsible', collapse);
    }
    isTearOffEnabled(): boolean {
        return this.property('isTearOffEnabled').toBool();
    }
    setTearOffEnabled(tearOffEnabled: boolean): void {
        this.setProperty('tearOffEnabled', tearOffEnabled);
    }
    toolTipsVisible(): boolean {
        return this.property('toolTipsVisible').toBool();
    }
    setToolTipsVisible(visible: boolean): void {
        this.setProperty('toolTipsVisible', visible);
    }
    title(): string {
        return this.property('title').toString();
    }
    setTitle(title: string): void {
        this.setProperty('title', title);
    }
}
wrapperCache.registerWrapper('QMenuWrap', QMenu);

export interface QMenuSignals extends QWidgetSignals {
    aboutToHide: () => void;
    aboutToShow: () => void;
    hovered: (action: NativeElement) => void;
    triggered: (action: NativeElement) => void;
}
