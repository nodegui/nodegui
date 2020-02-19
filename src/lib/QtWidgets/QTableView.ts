import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { SortOrder, PenStyle } from '../QtEnums';
import { QAbstractItemView, QAbstractItemViewSignals } from './QAbstractItemView';

/**
 
> The QTableView class provides a default model/view implementation of a table view.

* **This class is a JS wrapper around Qt's [QTableView class](https://doc.qt.io/qt-5/qtableview.html)**

### Example

```javascript
const { QTableView } = require("@nodegui/nodegui");

const tableview = new QTableView();

```
 */
export abstract class NodeTableView<Signals extends QTableViewSignals> extends QAbstractItemView<Signals> {
    setCornerButtonEnabled(enable: boolean): void {
        this.setProperty('cornerButtonEnabled', enable);
    }
    isCornerButtonEnabled(): boolean {
        return this.property('cornerButtonEnabled').toBool();
    }
    setGridStyle(style: PenStyle): void {
        this.setProperty('gridStyle', style);
    }
    gridStyle(): PenStyle {
        return this.property('gridStyle').toInt();
    }
    setShowGrid(show: boolean): void {
        this.setProperty('showGrid', show);
    }
    showGrid(): boolean {
        return this.property('showGrid').toBool();
    }
    setSortingEnabled(enable: boolean): void {
        this.setProperty('sortingEnabled', enable);
    }
    isSortingEnabled(): boolean {
        return this.property('sortingEnabled').toBool();
    }
    setWordWrap(on: boolean): void {
        this.setProperty('wordWrap', on);
    }
    wordWrap(): boolean {
        return this.property('wordWrap').toBool();
    }
    clearSpans(): void {
        this.native.clearSpans();
    }
    columnAt(x: number): number {
        return this.native.columnAt(x);
    }
    columnSpan(row: number, column: number): number {
        return this.native.columnSpan(row, column);
    }
    columnViewportPosition(column: number): number {
        return this.native.columnViewportPosition(column);
    }
    setColumnWidth(column: number, width: number): void {
        this.native.setColumnWidth(column, width);
    }
    columnWidth(column: number): number {
        return this.native.columnWidth(column);
    }
    setColumnHidden(column: number, hide: boolean): void {
        this.native.setColumnHidden(column, hide);
    }
    isColumnHidden(column: number): boolean {
        return this.native.isColumnHidden(column);
    }
    setRowHidden(row: number, hide: boolean): void {
        this.native.setRowHidden(row, hide);
    }
    isRowHidden(row: number): boolean {
        return this.native.isRowHidden(row);
    }
    rowAt(y: number): number {
        return this.native.rowAt(y);
    }
    setRowHeight(row: number, height: number): void {
        this.native.setRowHeight(row, height);
    }
    rowHeight(row: number): number {
        return this.native.rowHeight(row);
    }
    rowSpan(row: number, column: number): number {
        return this.native.rowSpan(row, column);
    }
    rowViewportPosition(row: number): number {
        return this.native.rowViewportPosition(row);
    }
    setSpan(row: number, column: number, rowSpanCount: number, columnSpanCount: number): void {
        this.native.setSpan(row, column, rowSpanCount, columnSpanCount);
    }
    hideColumn(column: number): void {
        this.native.hideColumn(column);
    }
    hideRow(row: number): void {
        this.native.hideRow(row);
    }
    resizeColumnToContents(column: number): void {
        this.native.resizeColumnToContents(column);
    }
    resizeColumnsToContents(): void {
        this.native.resizeColumnsToContents();
    }
    resizeRowToContents(row: number): void {
        this.native.resizeRowToContents(row);
    }
    resizeRowsToContents(): void {
        this.native.resizeRowsToContents();
    }
    selectColumn(column: number): void {
        this.native.selectColumn(column);
    }
    selectRow(row: number): void {
        this.native.selectRow(row);
    }
    showColumn(column: number): void {
        this.native.showColumn(column);
    }
    showRow(row: number): void {
        this.native.showRow(row);
    }
    sortByColumn(column: number, order: SortOrder): void {
        this.native.sortByColumn(column, order);
    }
}

export class QTableView extends NodeTableView<QTableViewSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTableView(parent.native);
        } else {
            native = new addon.QTableView();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
}

export type QTableViewSignals = QAbstractItemViewSignals;
