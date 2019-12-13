import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement, Component } from '../core/Component';
import { ScrollHint, SortOrder } from '../QtEnums';
import { QTableWidgetItem } from './QTableWidgetItem';
import { QAbstractScrollArea } from './QAbstractScrollArea';

export const QTableWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
    cellActivated: 'cellActivated',
    cellChanged: 'cellChanged',
    cellClicked: 'cellClicked',
    cellDoubleClicked: 'cellDoubleClicked',
    cellEntered: 'cellEntered',
    cellPressed: 'cellPressed',
    currentCellChanged: 'currentCellChanged',
});

interface Range {
    topRow: number;
    rightColumn: number;
    bottomRow: number;
    leftColumn: number;
    columnCount: number;
    rowCount: number;
}

export class QTableWidget extends QAbstractScrollArea {
    native: NativeElement;
    items: Set<NativeElement | Component>;
    constructor(rows: number, columns: number, parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QTableWidget(rows, columns, parent);
        } else {
            native = new addon.QTableWidget(rows, columns);
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
        this.items = new Set();
    }
    selectedRanges(): Range[] {
        return this.native.selectedRanges();
    }
    closePersistentEditor(item: QTableWidgetItem): void {
        this.native.closePersistentEditor(item.native);
    }
    editItem(item: Component): void {
        this.native.editItem(item.native);
    }
    setCellWidget(row: number, column: number, widget: NodeWidget): void {
        this.native.setCellWidget(row, column, widget.native);
        this.items.add(widget);
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
    // FROM TABLEVIEW
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
        this.native.setShowGrid(show);
    }
    showGrid(): boolean {
        return this.native.showGrid();
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
    setColumnWidth(column: number, width: number): void {
        this.native.setColumnWidth(column, width);
    }
    setRowHeight(row: number, height: number): void {
        this.native.setRowHeight(row, height);
    }
    setSortingEnabled(enable: boolean): void {
        this.native.setSortingEnabled(enable);
    }
    isSortingEnabled(): boolean {
        return this.native.isSortingEnabled();
    }
}
