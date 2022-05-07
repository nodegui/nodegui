import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { SortOrder, PenStyle } from '../QtEnums';
import { QAbstractItemView, QAbstractItemViewSignals } from './QAbstractItemView';
import { QHeaderView } from './QHeaderView';

/**

> The QTableView class provides a default model/view implementation of a table view.

* **This class is a JS wrapper around Qt's [QTableView class](https://doc.qt.io/qt-5/qtableview.html)**

### Example

```javascript
const { QTableView } = require("@nodegui/nodegui");

const tableview = new QTableView();

```
 */
export class QTableView<Signals extends QTableViewSignals = QTableViewSignals> extends QAbstractItemView<Signals> {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QTableView(parent.native);
        } else {
            native = new addon.QTableView();
        }
        super(native);
    }
    // *** Public Functions ***
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

    columnWidth(column: number): number {
        return this.native.columnWidth(column);
    }

    gridStyle(): PenStyle {
        return this.property('gridStyle').toInt();
    }

    horizontalHeader(): QHeaderView {
        return new QHeaderView(this.native.horizontalHeader());
    }

    isColumnHidden(column: number): boolean {
        return this.native.isColumnHidden(column);
    }

    isCornerButtonEnabled(): boolean {
        return this.property('cornerButtonEnabled').toBool();
    }

    isRowHidden(row: number): boolean {
        return this.native.isRowHidden(row);
    }

    isSortingEnabled(): boolean {
        return this.property('sortingEnabled').toBool();
    }

    rowAt(y: number): number {
        return this.native.rowAt(y);
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

    setColumnHidden(column: number, hide: boolean): void {
        this.native.setColumnHidden(column, hide);
    }

    setColumnWidth(column: number, width: number): void {
        this.native.setColumnWidth(column, width);
    }

    setCornerButtonEnabled(enable: boolean): void {
        this.setProperty('cornerButtonEnabled', enable);
    }

    setGridStyle(style: PenStyle): void {
        this.setProperty('gridStyle', style);
    }

    // TODO: void 	setHorizontalHeader(QHeaderView *header)

    setRowHeight(row: number, height: number): void {
        this.native.setRowHeight(row, height);
    }

    setRowHidden(row: number, hide: boolean): void {
        this.native.setRowHidden(row, hide);
    }

    setSortingEnabled(enable: boolean): void {
        this.setProperty('sortingEnabled', enable);
    }

    setSpan(row: number, column: number, rowSpanCount: number, columnSpanCount: number): void {
        this.native.setSpan(row, column, rowSpanCount, columnSpanCount);
    }

    // TODO: void 	setVerticalHeader(QHeaderView *header)

    setWordWrap(on: boolean): void {
        this.setProperty('wordWrap', on);
    }

    showGrid(): boolean {
        return this.property('showGrid').toBool();
    }

    verticalHeader(): QHeaderView {
        return new QHeaderView(this.native.verticalHeader());
    }

    wordWrap(): boolean {
        return this.property('wordWrap').toBool();
    }

    // *** Public Slots ***

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

    setShowGrid(show: boolean): void {
        this.setProperty('showGrid', show);
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

export type QTableViewSignals = QAbstractItemViewSignals;
