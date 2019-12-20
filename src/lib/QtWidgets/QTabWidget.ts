import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { TabPosition } from '../QtEnums';

interface QTabWidgetSignals {
    currentChanged: (index: number) => void;
    tabBarClicked: (index: number) => void;
    tabBarDoubleClicked: (index: number) => void;
    tabCloseRequested: (index: number) => void;
}

export class QTabWidget extends NodeWidget<QTabWidgetSignals> {
    native: NativeElement;
    tabs: NodeWidget<any>[];
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTabWidget(parent.native);
        } else {
            native = new addon.QTabWidget();
        }
        super(native);
        this.setNodeParent(parent);
        this.tabs = [];
        this.native = native;
    }

    addTab(page: NodeWidget<any>, icon: QIcon, label: string): void {
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
