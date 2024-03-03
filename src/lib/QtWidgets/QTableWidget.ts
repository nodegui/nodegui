import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement, Component } from '../core/Component';
import { MatchFlag, ScrollHint, SortOrder } from '../QtEnums';
import { QTableWidgetItem } from './QTableWidgetItem';
import { QRect } from '../QtCore/QRect';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';
import { QTableView, QTableViewSignals } from './QTableView';
import { QModelIndex } from '../QtCore/QModelIndex';

/**

> Creates and item-based table view.

* **This class is a JS wrapper around Qt's [QTableWidget class](https://doc.qt.io/qt-5/qtablewidget.html)**

### Example

```javascript
const { QTableWidget, QMainWindow, QTableWidgetItem } = require("@nodegui/nodegui");

const win = new QMainWindow();
const table = new QTableWidget(2, 3);
table.setHorizontalHeaderLabels(['first', 'second', 'third']);

const cell00 = new QTableWidgetItem('C00');
const cell01 = new QTableWidgetItem('C01');
const cell10 = new QTableWidgetItem('C10');
const cell11 = new QTableWidgetItem('C11');

table.setItem(0, 0, cell00);
table.setItem(0, 1, cell01);
table.setItem(1, 0, cell10);
table.setItem(1, 1, cell11);

win.setCentralWidget(table);
win.show();
(global as any).win = win;

```
 */
export class QTableWidget extends QTableView<QTableWidgetSignals> {
    items: Set<NativeElement | Component>;
    constructor(rowsOrNativeOrParent: QWidget | NativeElement | number, columns?: number, parent?: QWidget) {
        let native: NativeElement;
        if (checkIfNativeElement(rowsOrNativeOrParent)) {
            native = rowsOrNativeOrParent as NativeElement;
        } else if (typeof rowsOrNativeOrParent == 'number') {
            const rows = rowsOrNativeOrParent;
            if (parent) {
                native = new addon.QTableWidget(rows, columns, parent.native);
            } else {
                native = new addon.QTableWidget(rows, columns);
            }
        } else if (rowsOrNativeOrParent != null) {
            native = new addon.QTableWidget(rowsOrNativeOrParent.native);
        } else {
            native = new addon.QTableWidget();
        }
        super(native);
        this.items = new Set();
    }
    selectedRanges(): Range[] {
        return this.native.selectedRanges();
    }
    closePersistentEditor(itemOrIndex: QTableWidgetItem | QModelIndex): void {
        if (itemOrIndex instanceof QModelIndex) {
            super.closePersistentEditor(itemOrIndex);
        } else {
            this.native.closePersistentEditor_qtablewidgetitem(itemOrIndex.native);
        }
    }
    editItem(item: Component): void {
        this.native.editItem(item.native);
    }
    setCellWidget(row: number, column: number, widget: QWidget): void {
        this.native.setCellWidget(row, column, widget.native);
    }
    setItem(row: number, column: number, item: QTableWidgetItem): void {
        this.native.setItem(row, column, item.native);
        this.items.add(item);
    }
    setHorizontalHeaderItem(column: number, item: QTableWidgetItem): void {
        this.native.setHorizontalHeaderItem(column, item.native);
        this.items.add(item);
    }
    setHorizontalHeaderLabels(labels: string[]): void {
        this.native.setHorizontalHeaderLabels(labels);
    }
    setVerticalHeaderItem(row: number, item: QTableWidgetItem): void {
        this.native.setVerticalHeaderItem(row, item.native);
        this.items.add(item);
    }
    setVerticalHeaderLabels(labels: string[]): void {
        this.native.setVerticalHeaderLabels(labels);
    }
    clear(): void {
        this.native.clear();
        this.items.clear();
    }
    clearContents(): void {
        this.native.clearContents();
        this.items.clear();
    }
    insertColumn(column: number): void {
        this.native.insertColumn(column);
    }
    removeColumn(column: number): void {
        this.native.removeColumn(column);
    }
    insertRow(row: number): void {
        this.native.insertRow(row);
    }
    removeRow(row: number): void {
        this.native.removeRow(row);
    }
    scrollToItem(item: QTableWidgetItem, hint: ScrollHint = ScrollHint.EnsureVisible): void {
        this.native.scrollToItem(item.native, hint);
    }
    cellWidget(row = 0, column = 0): QWidget {
        return new QWidget(this.native.cellWidget(row, column));
    }
    column(item: QTableWidgetItem): number {
        return this.native.column(item.native);
    }
    row(item: QTableWidgetItem): number {
        return this.native.row(item.native);
    }
    currentColumn(): number {
        return this.native.currentColumn();
    }
    currentRow(): number {
        return this.native.currentRow();
    }
    currentItem(): QTableWidgetItem {
        return new QTableWidgetItem(this.native.currentItem());
    }
    findItems(text: string, flags: MatchFlag): QTableWidgetItem[] {
        const nativeItems = this.native.findItems(text, flags);
        return nativeItems.map(function (item: QTableWidgetItem) {
            return new QTableWidgetItem(item);
        });
    }
    isPersistentEditorOpen(itemOrIndex: QTableWidgetItem | QModelIndex): boolean {
        if (itemOrIndex instanceof QModelIndex) {
            return super.isPersistentEditorOpen(itemOrIndex);
        } else {
            return this.native.isPersistentEditorOpen_qtablewidgetitem(itemOrIndex);
        }
    }
    openPersistentEditor(itemOrIndex: QTableWidgetItem | QModelIndex): void {
        if (itemOrIndex instanceof QModelIndex) {
            return super.openPersistentEditor(itemOrIndex);
        } else {
            return this.native.openPersistentEditor_qtablewidgetitem(itemOrIndex.native);
        }
    }
    item(row = 0, column = 0): QTableWidgetItem {
        return new QTableWidgetItem(this.native.item(row, column));
    }
    itemAt(x = 0, y = 0): QTableWidgetItem {
        return new QTableWidgetItem(this.native.itemAt(x, y));
    }
    removeCellWidget(row = 0, column = 0): void {
        this.native.removeCellWidget(row, column);
    }
    setCurrentCell(row = 0, column = 0): void {
        this.native.setCurrentCell(row, column);
    }
    setCurrentItem(item: QTableWidgetItem): void {
        this.native.setCurrentItem(item.native);
    }
    sortItems(column = 0, order = SortOrder.AscendingOrder): void {
        this.native.sortItems(column, order);
    }
    takeItem(row = 0, column = 0): void {
        this.native.takeItem(row, column);
    }
    visualItemRect(item: QTableWidgetItem): QRect {
        return new QRect(this.native.visualItemRect(item.native));
    }
    visualColumn(logicalColumn = 0): number {
        return this.native.visualColumn(logicalColumn);
    }
    visualRow(logicalRow = 0): number {
        return this.native.visualColumn(logicalRow);
    }
    columnCount(): number {
        return this.native.columnCount();
    }
    rowCount(): number {
        return this.native.rowCount();
    }
    setColumnCount(count: number): void {
        this.native.setColumnCount(count);
    }
    setRowCount(count: number): void {
        this.native.setRowCount(count);
    }
}
wrapperCache.registerWrapper('QTableWidgetWrap', QTableWidget);

interface Range {
    topRow: number;
    rightColumn: number;
    bottomRow: number;
    leftColumn: number;
    columnCount: number;
    rowCount: number;
}

export interface QTableWidgetSignals extends QTableViewSignals {
    cellActivated: (row: number, col: number) => void;
    cellChanged: (row: number, col: number) => void;
    cellClicked: (row: number, col: number) => void;
    cellDoubleClicked: (row: number, col: number) => void;
    cellEntered: (row: number, col: number) => void;
    cellPressed: (row: number, col: number) => void;
    currentCellChanged: (
        currentRow: number,
        currentColumn: number,
        previousRow: number,
        previousColumn: number,
    ) => void;
}
