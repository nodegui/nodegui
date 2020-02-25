import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { TabPosition } from '../QtEnums';

/**
 
> Create and control a stack of tabbed widgets.

* **This class is a JS wrapper around Qt's [QTabWidget class](https://doc.qt.io/qt-5/qtabwidget.html)**

A 'QTabWidget' provides a tab bar and a "page area" that is used to display pages related to each tab. 

### Example

```javascript
// This example creates two tabs, each holding a separate calendar.
const { QTabWidget, QCalendarWidget, QIcon } = require("@nodegui/nodegui");

const tabWidget = new QTabWidget();

tabWidget.addTab(new QCalendarWidget(), new QIcon(), 'Tab 1');
tabWidget.addTab(new QCalendarWidget(), new QIcon(), 'Tab 2');
```
 */
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

    addTab(page: NodeWidget<any>, icon: QIcon, label: string): number {
        const index = this.native.addTab(page.native, icon.native, label);
        this.tabs.push(page);
        page.setFlexNodeSizeControlled(true);
        return index;
    }

    setTabPosition(tabPosition: TabPosition): void {
        this.native.setTabPosition(tabPosition);
    }

    setTabText(tabIndex: number, tabText: string): void {
        this.native.setTabText(tabIndex, tabText);
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

export interface QTabWidgetSignals extends QWidgetSignals {
    currentChanged: (index: number) => void;
    tabBarClicked: (index: number) => void;
    tabBarDoubleClicked: (index: number) => void;
    tabCloseRequested: (index: number) => void;
}
