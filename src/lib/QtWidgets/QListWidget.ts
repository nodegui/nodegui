import addon from '../utils/addon';
import { NodeWidget, QWidget } from './QWidget';
import { NativeElement, Component } from '../core/Component';
import { QListWidgetItem } from './QListWidgetItem';
import { QAbstractItemView, QAbstractItemViewSignals } from './QAbstractItemView';
import { QSize } from '../QtCore/QSize';
import { QRect } from '../QtCore/QRect';
import { SortOrder, ScrollHint, AlignmentFlag } from '../QtEnums';

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

export class QListWidget extends QAbstractItemView<QListWidgetSignals> {
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
        this.setNodeParent(parent);
        this.items = new Set();
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
    setCurrentItem(item: QListWidgetItem): void {
        this.native.setCurrentItem(item.native);
    }
    setItemWidget(item: QListWidgetItem, widget: QWidget): void {
        this.native.setItemWidget(item.native, widget.native);
    }
    sortItems(order: SortOrder): void {
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
    scrollToItem(item: QListWidgetItem, hint: ScrollHint): void {
        this.native.scrollToItem(item.native, hint);
    }
    clearPropertyFlags(): void {
        this.native.clearPropertyFlags();
    }
    setRowHidden(row: number, hide: boolean): void {
        this.native.setRowHidden(row, hide);
    }
    isRowHidden(row: number): boolean {
        return this.native.isRowHidden(row);
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
    setBatchSize(batchSize: number): void {
        this.setProperty('batchSize', batchSize);
    }
    batchSize(): number {
        return this.property('batchSize').toInt();
    }
    setFlow(flow: Flow): void {
        this.setProperty('flow', flow);
    }
    flow(): Flow {
        return this.property('flow').toInt();
    }
    setGridSize(size: QSize): void {
        this.setProperty('gridSize', size.native);
    }
    gridSize(): QSize {
        const gridSize = this.property('gridSize');
        return QSize.fromQVariant(gridSize);
    }
    setWrapping(enable: boolean): void {
        this.setProperty('isWrapping', enable);
    }
    isWrapping(): boolean {
        return this.property('isWrapping').toBool();
    }
    setItemAlignment(alignment: AlignmentFlag): void {
        this.setProperty('itemAlignment', alignment);
    }
    itemAlignment(): AlignmentFlag {
        return this.property('itemAlignment').toInt();
    }
    setLayoutMode(mode: LayoutMode): void {
        this.setProperty('layoutMode', mode);
    }
    layoutMode(): LayoutMode {
        return this.property('layoutMode').toInt();
    }
    setModelColumn(column: number): void {
        this.setProperty('modelColumn', column);
    }
    modelColumn(): number {
        return this.property('modelColumn').toInt();
    }
    setMovement(movement: Movement): void {
        this.setProperty('movement', movement);
    }
    movement(): Movement {
        return this.property('movement').toInt();
    }
    setResizeMode(mode: ResizeMode): void {
        this.setProperty('resizeMode', mode);
    }
    resizeMode(): ResizeMode {
        return this.property('resizeMode').toInt();
    }
    setSelectionRectVisible(show: boolean): void {
        this.setProperty('selectionRectVisible', show);
    }
    isSelectionRectVisible(): boolean {
        return this.property('selectionRectVisible').toBool();
    }
    setSpacing(space: number): void {
        this.setProperty('spacing', space);
    }
    spacing(): number {
        return this.property('spacing').toInt();
    }
    setUniformItemSizes(enable: boolean): void {
        this.setProperty('uniformItemSizes', enable);
    }
    uniformItemSizes(): boolean {
        return this.property('uniformItemSizes').toBool();
    }
    setViewMode(mode: ViewMode): void {
        this.setProperty('viewMode', mode);
    }
    viewMode(): ViewMode {
        return this.property('viewMode').toInt();
    }
    setWordWrap(on: boolean): void {
        this.setProperty('wordWrap', on);
    }
    wordWrap(): boolean {
        return this.property('wordWrap').toBool();
    }
}

export enum Flow {
    LeftToRight,
    TopToBottom,
}

export enum LayoutMode {
    SinglePass,
    Batched,
}

export enum Movement {
    Static,
    Free,
    Snap,
}

export enum ResizeMode {
    Fixed,
    Adjust,
}

export enum ViewMode {
    ListMode,
    IconMode,
}

export interface QListWidgetSignals extends QAbstractItemViewSignals {
    currentRowChanged: (currentRow: number) => void;
    currentTextChanged: (currentText: string) => void;
    itemSelectionChanged: () => void;
}
