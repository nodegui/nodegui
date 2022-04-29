import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { QIcon } from '../QtGui/QIcon';
import { TextElideMode } from '../QtEnums';
import { QSize } from '../QtCore/QSize';
import { QVariant } from '../QtCore/QVariant';
import { QColor } from '../QtGui/QColor';
import { QPoint } from '../QtCore/QPoint';
import { QRect } from '../QtCore/QRect';

/**

> Create and control tabbar.

* **This class is a JS wrapper around Qt's [QTabBar class](https://doc.qt.io/qt-5/qtabbar.html)**

The QTabBar class provides a tab bar, e.g. for use in tabbed dialogs.

### Example

```javascript
const { QTabBar } = require("@nodegui/nodegui");

const tabBar = new QTabBar();

```
 */
export class QTabBar extends NodeWidget<QTabBarSignals> {
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTabBar(parent.native);
        } else {
            native = new addon.QTabBar();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    setAutoHide(hide: boolean): void {
        this.setProperty('autoHide', hide);
    }
    autoHide(): boolean {
        return this.property('autoHide').toBool();
    }
    setChangeCurrentOnDrag(change: boolean): void {
        this.setProperty('changeCurrentOnDrag', change);
    }
    changeCurrentOnDrag(): boolean {
        return this.property('changeCurrentOnDrag').toBool();
    }
    count(): number {
        return this.property('count').toInt();
    }
    setCurrentIndex(index: number): void {
        this.setProperty('currentIndex', index);
    }
    currentIndex(): number {
        return this.property('currentIndex').toInt();
    }
    setDocumentMode(set: boolean): void {
        this.setProperty('documentMode', set);
    }
    documentMode(): boolean {
        return this.property('documentMode').toBool();
    }
    setDrawBase(drawTheBase: boolean): void {
        this.setProperty('drawBase', drawTheBase);
    }
    drawBase(): boolean {
        return this.property('drawBase').toBool();
    }
    setElideMode(mode: TextElideMode): void {
        this.setProperty('elideMode', mode);
    }
    elideMode(): TextElideMode {
        return this.property('elideMode').toInt();
    }
    setExpanding(enabled: boolean): void {
        this.setProperty('expanding', enabled);
    }
    expanding(): boolean {
        return this.property('expanding').toBool();
    }
    setIconSize(size: QSize): void {
        this.setProperty('iconSize', size.native);
    }
    iconSize(): QSize {
        const size = this.property('iconSize');
        return QSize.fromQVariant(size);
    }
    setMovable(movable: boolean): void {
        this.setProperty('movable', movable);
    }
    isMovable(): boolean {
        return this.property('movable').toBool();
    }
    setSelectionBehaviorOnRemove(behavior: SelectionBehavior): void {
        this.setProperty('selectionBehaviorOnRemove', behavior);
    }
    selectionBehaviorOnRemove(): SelectionBehavior {
        return this.property('selectionBehaviorOnRemove').toInt();
    }
    setShape(shape: TabBarShape): void {
        this.setProperty('shape', shape);
    }
    shape(): TabBarShape {
        return this.property('shape').toInt();
    }
    setTabsClosable(closeable: boolean): void {
        this.setProperty('tabsClosable', closeable);
    }
    tabsClosable(): boolean {
        return this.property('tabsClosable').toBool();
    }
    setUsesScrollButtons(useButtons: boolean): void {
        this.setProperty('usesScrollButtons', useButtons);
    }
    usesScrollButtons(): boolean {
        return this.property('usesScrollButtons').toBool();
    }
    setAccessibleTabName(index: number, name: string): void {
        this.native.setAccessibleTabName(index, name);
    }
    accessibleTabName(index: number): string {
        return this.native.accessibleTabName(index);
    }
    addTab(icon: QIcon | undefined, text: string): number {
        if (icon) {
            return this.native.addTab(icon.native, text);
        } else {
            return this.native.addTab(text);
        }
    }
    insertTab(index: number, icon: QIcon | undefined, text: string): number {
        if (icon) {
            return this.native.insertTab(index, icon.native, text);
        } else {
            return this.native.insertTab(index, text);
        }
    }
    setTabEnabled(index: number, enabled: boolean): void {
        this.native.setTabEnabled(index, enabled);
    }
    isTabEnabled(index: number): boolean {
        return this.native.isTabEnabled(index);
    }
    moveTab(from: number, to: number): void {
        this.native.moveTab(from, to);
    }
    removeTab(index: number): void {
        this.native.removeTab(index);
    }
    setTabButton(index: number, position: ButtonPosition, widget: NodeWidget<any> | undefined | null): void {
        this.native.setTabButton(index, position, widget == null ? null : widget?.native);
    }
    setTabData(index: number, data: QVariant): void {
        this.native.setTabData(index, data.native);
    }
    tabData(index: number): QVariant {
        return new QVariant(this.native.tabData(index));
    }
    setTabIcon(index: number, icon: QIcon): void {
        this.native.setTabIcon(index, icon.native);
    }
    tabIcon(index: number): QIcon {
        return new QIcon(this.native.tabIcon(index));
    }
    setTabText(index: number, text: string): void {
        this.native.setTabText(index, text);
    }
    tabText(index: number): string {
        return this.native.tabText(index);
    }
    setTabTextColor(index: number, color: QColor): void {
        this.native.setTabTextColor(index, color.native);
    }
    tabTextColor(index: number): QColor {
        return new QColor(this.native.tabTextColor(index));
    }
    setTabToolTip(index: number, tip: string): void {
        this.native.setTabToolTip(index, tip);
    }
    tabToolTip(index: number): string {
        return this.native.tabToolTip(index);
    }
    setTabWhatsThis(index: number, text: string): void {
        this.native.setTabWhatsThis(index, text);
    }
    tabWhatsThis(index: number): string {
        return this.native.tabWhatsThis(index);
    }
    tabAt(position: QPoint): number {
        return this.native.tabAt(position.native);
    }
    tabRect(index: number): QRect {
        return new QRect(this.native.tabRect(index));
    }
}

export enum ButtonPosition {
    LeftSide = 0,
    RightSide = 1,
}

export enum SelectionBehavior {
    SelectLeftTab = 0,
    SelectRightTab = 1,
    SelectPreviousTab = 2,
}

export enum TabBarShape {
    RoundedNorth = 0,
    RoundedSouth = 1,
    RoundedWest = 2,
    RoundedEast = 3,
    TriangularNorth = 4,
    TriangularSouth = 5,
    TriangularWest = 6,
    TriangularEast = 7,
}

export interface QTabBarSignals extends QWidgetSignals {
    currentChanged: (index: number) => void;
    tabBarClicked: (index: number) => void;
    tabBarDoubleClicked: (index: number) => void;
    tabCloseRequested: (index: number) => void;
    tabMoved: (from: number, to: number) => void;
}
