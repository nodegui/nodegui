import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QModelIndex } from './QModelIndex';
import { checkIfNativeElement } from '../utils/helpers';

export type QItemSelectionModelSignals = QObjectSignals;

export class QItemSelectionModel extends NodeObject<QItemSelectionModelSignals> {
    native: NativeElement;
    constructor(arg?: NativeElement) {
        let native = null;
        if (arg == null) {
            native = new addon.QItemSelectionModel();
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            throw new Error('QItemSelectionModel cannot be initialised this way.');
        }
        super(native);
        this.native = native;
    }

    // *** Public Functions ***
    columnIntersectsSelection(column: number, parent: QModelIndex = new QModelIndex()): boolean {
        return this.native.columnIntersectsSelection(column, parent.native);
    }

    currentIndex(): QModelIndex {
        return this.native.currentIndex();
    }

    hasSelection(): boolean {
        return this.native.hasSelection();
    }

    isColumnSelected(column: number, parent: QModelIndex = new QModelIndex()): boolean {
        return this.native.isColumnSelected(column, parent.native);
    }

    isRowSelected(row: number, parent: QModelIndex = new QModelIndex()): boolean {
        return this.native.isRowSelected(row, parent.native);
    }

    isSelected(index: QModelIndex): boolean {
        return this.native.isSelected(index.native);
    }

    // TODO: const QAbstractItemModel *	model() const
    // TODO: QAbstractItemModel *	model()
    rowIntersectsSelection(row: number, parent: QModelIndex = new QModelIndex()): boolean {
        return this.native.rowIntersectsSelection(row, parent.native);
    }

    selectedColumns(row = 0): QModelIndex[] {
        const methodResult = this.native.selectedColumns(row);
        return methodResult.map((item: any) => new QModelIndex(item));
    }

    selectedIndexes(): QModelIndex[] {
        const methodResult = this.native.selectedIndexes();
        return methodResult.map((item: any) => new QModelIndex(item));
    }

    selectedRows(column = 0): QModelIndex[] {
        const methodResult = this.native.selectedRows(column);
        return methodResult.map((item: any) => new QModelIndex(item));
    }

    // TODO: const QItemSelection 	selection() const
    // TODO: void 	setModel(QAbstractItemModel *model)

    // *** Public Slots ***
    clear(): void {
        this.native.clear();
    }

    clearCurrentIndex(): void {
        this.native.clearCurrentIndex();
    }

    clearSelection(): void {
        this.native.clearSelection();
    }

    reset(): void {
        this.native.reset();
    }

    // TODO: virtual void 	select(const QItemSelection &selection, QItemSelectionModel::SelectionFlags command)

    select(index: QModelIndex, command: SelectionFlag): void {
        this.native.select(index.native, command);
    }

    setCurrentIndex(index: QModelIndex, command: SelectionFlag): void {
        this.native.setCurrentIndex(index.native, command);
    }

    // *** Signals ***
    // TODO: void currentChanged(const QModelIndex &current, const QModelIndex &previous)
    // TODO: void 	currentColumnChanged(const QModelIndex &current, const QModelIndex &previous)
    // TODO: void 	currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
    // TODO: void 	modelChanged(QAbstractItemModel *model)
    // TODO: void 	selectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
}

export enum SelectionFlag {
    NoUpdate = 0x0000,
    Clear = 0x0001,
    Select = 0x0002,
    Deselect = 0x0004,
    Toggle = 0x0008,
    Current = 0x0010,
    Rows = 0x0020,
    Columns = 0x0040,
    SelectCurrent = SelectionFlag.Select | SelectionFlag.Current,
    ToggleCurrent = SelectionFlag.Toggle | SelectionFlag.Current,
    ClearAndSelect = SelectionFlag.Clear | SelectionFlag.Select,
}
