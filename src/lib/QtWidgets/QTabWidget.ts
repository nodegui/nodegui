import addon from '../utils/addon';
import { NodeWidget, QWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { TabPosition } from '../QtEnums';

export const QTabWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
    currentChanged: 'currentChanged',
    tabBarClicked: 'tabBarClicked',
    tabBarDoubleClicked: 'tabBarDoubleClicked',
    tabCloseRequested: 'tabCloseRequested',
});

export class QTabWidget extends NodeWidget {
    native: NativeElement;
    tabs: QWidget[];
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QTabWidget(parent.native);
        } else {
            native = new addon.QTabWidget();
        }
        super(native);
        this.nodeParent = parent;
        this.tabs = [];
        this.native = native;
    }

    addTab(page: NodeWidget, icon: QIcon, label: string): void {
        this.native.addTab(page.native, icon.native, label);
        this.tabs.push(page);
        page.setFlexNodeSizeControlled(true);
    }

    setTabPosition(tabPosition: TabPosition): void {
        this.native.setTabPosition(tabPosition);
    }

    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }

    currentIndex(): number {
        return this.native.currentIndex();
    }

    removeTab(index: number): void {
        this.native.removeTab(index);
        const toRemove = this.tabs[index];
        toRemove.setFlexNodeSizeControlled(false);
        this.tabs.splice(index, 1);
    }

    setTabsClosable(closeable: boolean): void {
        this.native.setTabsClosable(closeable);
    }
}
