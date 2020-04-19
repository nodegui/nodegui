import addon from '../utils/addon';
import { NodeWidget, QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { QTreeWidgetItem } from './QTreeWidgetItem';
import { MatchFlag } from '../..';

/**
 
> Creates a tree view that uses a predefined tree model. 

* **This class is a JS wrapper around Qt's [QTreeWidget class](https://doc.qt.io/qt-5/qtreewidget.html)**

### Example

```javascript

const { QMainWindow, QTreeWidgetItem, QTreeWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();
const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem();
item1.setText(0, `item-1`);
const item2 = new QTreeWidgetItem();
item2.setText(0, `item-2`);
const item3 = new QTreeWidgetItem();
item3.setText(0, `item-3`);
const item4 = new QTreeWidgetItem();
item4.setText(0, `item-4`);
const item5 = new QTreeWidgetItem();
item5.setText(0, `item-5`);
const item6 = new QTreeWidgetItem();
item6.setText(0, `item-6`);

tree.addTopLevelItem(item1);
tree.insertTopLevelItems(0, [item2, item3]);
tree.addTopLevelItems([item4, item5]);
tree.insertTopLevelItem(2, item6);

// Add children to item1
const c1item1 = new QTreeWidgetItem(item1);
c1item1.setText(0, `c1item1`);
const c1item2 = new QTreeWidgetItem(item1);
c1item2.setText(0, `c1item1`);

win.setCentralWidget(tree);
win.show();
(global as any).win = win;```
 */
export class QTreeWidget extends QAbstractScrollArea<QTreeWidgetSignals> {
    native: NativeElement;
    topLevelItems: Set<QTreeWidgetItem>;
    itemWidgets: Map<QTreeWidgetItem, QWidget>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTreeWidget(parent.native);
        } else {
            native = new addon.QTreeWidget();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
        this.topLevelItems = new Set<QTreeWidgetItem>();
        this.itemWidgets = new Map<QTreeWidgetItem, QWidget>();
    }

    addTopLevelItem(item: QTreeWidgetItem): void {
        this.topLevelItems.add(item);
        this.native.addTopLevelItem(item.native);
    }

    addTopLevelItems(items: QTreeWidgetItem[]): void {
        const napiItems: NativeElement[] = [];
        items.forEach((item) => {
            this.topLevelItems.add(item);
            napiItems.push(item.native);
        });
        this.native.addTopLevelItems(napiItems);
    }

    insertTopLevelItem(index: number, item: QTreeWidgetItem): void {
        this.topLevelItems.add(item);
        this.native.insertTopLevelItem(index, item.native);
    }

    insertTopLevelItems(index: number, items: QTreeWidgetItem[]): void {
        const napiItems: NativeElement[] = [];
        items.forEach((item) => {
            this.topLevelItems.add(item);
            napiItems.push(item.native);
        });
        this.native.insertTopLevelItems(index, napiItems);
    }

    setHeaderHidden(hide: boolean): void {
        this.native.setProperty('headerHidden', hide);
    }

    selectedItems(): QTreeWidgetItem[] {
        const nativeItems = this.native.selectedItems();
        return nativeItems.map(function (eachItem: QTreeWidgetItem) {
            return new QTreeWidgetItem(eachItem);
        });
    }

    /**
     * Sets the column count of this QTreeWidget.
     * @param columnCount The number of columns.
     */
    setColumnCount(columnCount: number): void {
        this.native.setColumnCount(columnCount);
    }

    /**
     * Sets the width of column of this QTreeWidget.
     * @param column The column index.
     * @param width The size of the columns.
     */
    setColumnWidth(column: number, width: number): void {
        this.native.setColumnWidth(column, width);
    }

    /**
     * Sets the header label.
     * @param label The header label.
     */
    setHeaderLabel(label: string): void {
        this.native.setHeaderLabel(label);
    }

    /**
     * Sets the header labels of the existing columns.
     * @param labels The header labels for each column.
     */
    setHeaderLabels(labels: string[]): void {
        this.native.setHeaderLabels(labels);
    }

    /**
     * Sets the given widget to be displayed in the cell specified by the given item and column.
     * @param item The targeted item.
     * @param column The column in which to show the edit widget.
     * @param widget The edit widget.
     */
    setItemWidget(item: QTreeWidgetItem, column: number, widget: QWidget): void {
        this.itemWidgets.set(item, widget);
        this.native.setItemWidget(item.native, column, widget.native);
    }

    /**
     * Returns the current item in the tree widget.
     */
    currentItem(): QTreeWidgetItem | void {
        const item = this.native.currentItem();
        if (item) {
            return new QTreeWidgetItem(item);
        } else {
            return undefined;
        }
    }

    /**
     * Sets if columns can be sorted by clicking on its header
     * @param enable Sorting enabled or disabled
     */
    setSortingEnabled(enable: boolean): void {
        this.native.setProperty('sortingEnabled', enable);
    }

    findItems(text: string, flags: MatchFlag, column: number): QTreeWidgetItem[] {
        const nativeItems = this.native.findItems(text, flags, column);
        return nativeItems.map(function (eachItem: QTreeWidgetItem) {
            return new QTreeWidgetItem(eachItem);
        });
    }

    takeTopLevelItem(index: number): QTreeWidgetItem | void {
        const item = this.native.takeTopLevelItem(index);
        if (item) {
            return new QTreeWidgetItem(item);
        } else {
            return undefined;
        }
    }

    clear(): void {
        this.topLevelItems.clear();
        this.native.clear();
    }
}

export interface QTreeWidgetSignals extends QAbstractScrollAreaSignals {
    itemSelectionChanged: () => void;
    itemClicked: (item: QTreeWidgetItem, column: number) => void;
    itemChanged: (item: QTreeWidgetItem, column: number) => void;
    currentItemChanged: (current: QTreeWidgetItem, previous: QTreeWidgetItem) => void;
    itemActivated: (item: QTreeWidgetItem | null, column: number) => void;
    itemCollapsed: (item: QTreeWidgetItem) => void;
    itemDoubleClicked: (item: QTreeWidgetItem | null, column: number) => void;
    itemEntered: (item: QTreeWidgetItem, column: number) => void;
    itemExpanded: (item: QTreeWidgetItem) => void;
    itemPressed: (item: QTreeWidgetItem | null, column: number) => void;
}
