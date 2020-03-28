import addon from '../utils/addon';
import { NodeWidget, QWidget } from './QWidget';
import { NativeElement, Component } from '../core/Component';
import { QListWidgetItem } from './QListWidgetItem';
import { NodeListView, QListViewSignals } from './QListView';
import { QRect } from '../QtCore/QRect';
import { SortOrder, ScrollHint, MatchFlag } from '../QtEnums';

/**
 
> Create and control a item-based list.

* **This class is a JS wrapper around Qt's [QListWidget class](https://doc.qt.io/qt-5/qlistwidget.html)**

### Example

```javascript
const { QListWidget, QListWidgetItem } = require("@nodegui/nodegui");

const listWidget = new QListWidget();

for (let i = 0; i < 30; i++) {
  let listWidgetItem = new QListWidgetItem();
  listWidgetItem.setText('listWidgetItem ' + i);
  if (i===3) {
    listWidgetItem.setCheckState(2);
  } else {
    listWidgetItem.setCheckState(0);
  }
  listWidget.addItem(listWidgetItem);
}
```
 */
export class QListWidget extends NodeListView<QListWidgetSignals> {
    native: NativeElement;
    items: Set<NativeElement | Component>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QListWidget(parent.native);
        } else {
            native = new addon.QListWidget();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
        this.items = new Set();
    }
    count(): number {
        return this.property('count').toInt();
    }
    setCurrentRow(row: number): void {
        this.setProperty('currentRow', row);
    }
    currentRow(): number {
        return this.property('currentRow').toInt();
    }
    setSortingEnabled(enable: boolean): void {
        this.setProperty('sortingEnabled', enable);
    }
    isSortingEnabled(): boolean {
        return this.property('sortingEnabled').toBool();
    }
    addItem(item: QListWidgetItem): void {
        this.native.addItem(item.native);
        this.items.add(item);
    }
    addItems(labels: string[]): void {
        this.native.addItems(labels);
    }
    closePersistentEditor(item: QListWidgetItem): void {
        this.native.closePersistentEditor(item.native);
    }
    currentItem(): QListWidgetItem {
        return new QListWidgetItem(this.native.currentItem());
    }
    editItem(item: Component): void {
        this.native.editItem(item.native);
    }
    findItems(text: string, flags: MatchFlag): QListWidgetItem[] {
        const nativeItems = this.native.findItems(text, flags);
        return nativeItems.map(function(item: QListWidgetItem) {
            return new QListWidgetItem(item);
        });
    }
    insertItem(row: number, item: QListWidgetItem): void {
        this.native.insertItem(row, item.native);
        this.items.add(item);
    }
    insertItems(row: number, labels: string[]): void {
        this.native.insertItems(row, labels);
    }
    isPersistentEditorOpen(item: QListWidgetItem): boolean {
        return this.native.isPersistentEditorOpen(item.native);
    }
    item(row: number): QListWidgetItem {
        return new QListWidgetItem(this.native.item(row));
    }
    itemAt(x: number, y: number): QListWidgetItem {
        return new QListWidgetItem(this.native.itemAt(x, y));
    }
    itemWidget(item: QListWidgetItem): QWidget {
        return new QWidget(this.native.itemWidget(item.native));
    }
    openPersistentEditor(item: QListWidgetItem): void {
        this.native.openPersistentEditor(item.native);
    }
    removeItemWidget(item: QListWidgetItem): void {
        this.native.removeItemWidget(item.native);
    }
    row(item: QListWidgetItem): number {
        return this.native.row(item.native);
    }
    selectedItems(): QListWidgetItem[] {
        const nativeItems = this.native.selectedItems();
        return nativeItems.map(function(item: QListWidgetItem) {
            return new QListWidgetItem(item);
        });
    }
    setCurrentItem(item: QListWidgetItem): void {
        this.native.setCurrentItem(item.native);
    }
    setItemWidget(item: QListWidgetItem, widget: NodeWidget<any>): void {
        this.native.setItemWidget(item.native, widget.native);
    }
    sortItems(order = SortOrder.AscendingOrder): void {
        this.native.sortItems(order);
    }
    takeItem(row: number): void {
        this.native.takeItem(row);
    }
    visualItemRect(item: QListWidgetItem): QRect {
        return new QRect(this.native.visualItemRect(item.native));
    }
    clear(): void {
        this.native.clear();
    }
    scrollToItem(item: QListWidgetItem, hint = ScrollHint.EnsureVisible): void {
        this.native.scrollToItem(item.native, hint);
    }
}

export interface QListWidgetSignals extends QListViewSignals {
    currentItemChanged: (current: QListWidgetItem, previous: QListWidgetItem) => void;
    currentRowChanged: (currentRow: number) => void;
    currentTextChanged: (currentText: string) => void;
    itemActivated: (item: QListWidgetItem) => void;
    itemChanged: (item: QListWidgetItem) => void;
    itemClicked: (item: QListWidgetItem) => void;
    itemDoubleClicked: (item: QListWidgetItem) => void;
    itemEntered: (item: QListWidgetItem) => void;
    itemPressed: (item: QListWidgetItem) => void;
    itemSelectionChanged: () => void;
}
