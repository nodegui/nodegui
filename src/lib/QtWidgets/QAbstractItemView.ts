import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { QWidget } from './QWidget';
import { QModelIndex } from '../QtCore/QModelIndex';
import { QSize } from '../QtCore/QSize';
import { DropAction } from '../QtEnums/DropAction';
import { TextElideMode } from '../QtEnums/TextElideMode';
import { QAbstractItemModel } from '../QtCore/QAbstractItemModel';
import { QPoint } from '../QtCore/QPoint';
import { QItemSelectionModel } from '../QtCore/QItemSelectionModel';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';
import { QAbstractItemDelegate } from './QAbstractItemDelegate';

/**

> This is the abstract base class of button widgets, providing their functionality.

* **This class is a JS wrapper around Qt's [QAbstractItemView class](https://doc.qt.io/qt-5/qabstractitemview.html)**

The QAbstractItemView class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QListWidget. (n/a QColumnView, QHeaderView, QListView, QTableView, and QTreeView)

*/

export abstract class QAbstractItemView<Signals extends QAbstractItemViewSignals> extends QAbstractScrollArea<Signals> {
    // *** Public Functions ***
    alternatingRowColors(): boolean {
        return this.property('alternatingRowColors').toBool();
    }
    autoScrollMargin(): number {
        return this.property('autoScrollMargin').toInt();
    }
    closePersistentEditor(index: QModelIndex): void {
        this.native.closePersistentEditor(index);
    }
    currentIndex(): QModelIndex {
        return new QModelIndex(this.native.currentIndex());
    }
    defaultDropAction(): DropAction {
        return this.property('defaultDropAction').toInt();
    }
    dragDropMode(): DragDropMode {
        return this.property('dragDropMode').toInt();
    }
    dragDropOverwriteMode(): boolean {
        return this.property('dragDropOverwriteMode').toBool();
    }
    dragEnabled(): boolean {
        return this.property('dragEnabled').toBool();
    }
    editTriggers(): number {
        return this.property('editTriggers').toInt();
    }
    hasAutoScroll(): boolean {
        return this.property('autoScroll').toBool();
    }
    horizontalScrollMode(): ScrollMode {
        return this.property('horizontalScrollMode').toInt();
    }
    iconSize(): QSize {
        const iconSize = this.property('iconSize');
        return QSize.fromQVariant(iconSize);
    }
    indexAt(point: QPoint): QModelIndex {
        return this.native.indexAt(point);
    }
    indexWidget(index: QModelIndex): QWidget {
        return wrapperCache.getWrapper(this.native.indexWidget(index)) as QWidget;
    }

    isPersistentEditorOpen(index: QModelIndex): boolean {
        return this.native.isPersistentEditorOpen(index.native);
    }
    // TODO: QAbstractItemDelegate *	itemDelegate() const
    // TODO: QAbstractItemDelegate *	itemDelegate(const QModelIndex &index) const
    // TODO: QAbstractItemDelegate *	itemDelegateForColumn(int column) const
    // TODO: QAbstractItemDelegate *	itemDelegateForRow(int row) const
    keyboardSearch(search: string): void {
        this.native.keyboardSearch(search);
    }
    // TODO: QAbstractItemModel *	model() const
    openPersistentEditor(index: QModelIndex): void {
        this.native.openPersistentEditor(index.native);
    }
    resetHorizontalScrollMode(): void {
        this.native.resetHorizontalScrollMode();
    }
    resetVerticalScrollMode(): void {
        this.native.resetVerticalScrollMode();
    }
    rootIndex(): QModelIndex {
        return new QModelIndex(this.native.rootIndex());
    }
    scrollTo(index: QModelIndex, hint = ScrollHint.EnsureVisible): void {
        this.native.scrollTo(index.native, hint);
    }
    selectionBehavior(): QAbstractItemViewSelectionBehavior {
        return this.property('selectionBehavior').toInt();
    }
    selectionMode(): SelectionMode {
        return this.property('selectionMode').toInt();
    }
    selectionModel(): QItemSelectionModel {
        return wrapperCache.getWrapper(this.native.selectionModel()) as QItemSelectionModel;
    }
    setAlternatingRowColors(enable: boolean): void {
        this.setProperty('alternatingRowColors', enable);
    }
    setAutoScroll(enable: boolean): void {
        this.setProperty('autoScroll', enable);
    }
    setAutoScrollMargin(margin: number): void {
        this.setProperty('autoScrollMargin', margin);
    }
    setDefaultDropAction(dropAction: DropAction): void {
        this.setProperty('defaultDropAction', dropAction);
    }
    setDragDropMode(behavior: DragDropMode): void {
        this.setProperty('dragDropMode', behavior);
    }
    setDragDropOverwriteMode(overwrite: boolean): void {
        this.setProperty('dragDropOverwriteMode', overwrite);
    }
    setDragEnabled(enable: boolean): void {
        this.setProperty('dragEnabled', enable);
    }
    setDropIndicatorShown(enable: boolean): void {
        this.setProperty('showDropIndicator', enable);
    }
    setEditTriggers(triggers: number): void {
        this.setProperty('editTriggers', triggers);
    }
    setHorizontalScrollMode(mode: boolean): void {
        this.setProperty('horizontalScrollMode', mode);
    }
    setIconSize(iconSize: QSize): void {
        this.setProperty('iconSize', iconSize.native);
    }
    setIndexWidget(index: QModelIndex, widget: QWidget): void {
        this.native.setIndexWidget(index.native, widget.native);
    }
    setItemDelegate(delegate: QAbstractItemDelegate): void {
        if (delegate != null) {
            const parent = delegate.parent();
            if (parent != null && parent != this) {
                throw new Error('NodeGui: QAbstractItemDelegate instances can only be given to one view instance.');
            }
            delegate.setParent(this);
            this.native.setItemDelegate(delegate.native);
        } else {
            this.native.setItemDelegate(null);
        }
    }
    setItemDelegateForColumn(column: number, delegate: QAbstractItemDelegate): void {
        if (delegate != null) {
            const parent = delegate.parent();
            if (parent != null && parent != this) {
                throw new Error('NodeGui: QAbstractItemDelegate instances can only be given to one view instance.');
            }
            delegate.setParent(this);
            this.native.setItemDelegateForColumn(column, delegate.native);
        } else {
            this.native.setItemDelegateForColumn(column, null);
        }
    }
    setItemDelegateForRow(row: number, delegate: QAbstractItemDelegate): void {
        if (delegate != null) {
            const parent = delegate.parent();
            if (parent != null && parent != this) {
                throw new Error('NodeGui: QAbstractItemDelegate instances can only be given to one view instance.');
            }
            delegate.setParent(this);
            this.native.setItemDelegateForColumn(row, delegate.native);
        } else {
            this.native.setItemDelegateForColumn(row, null);
        }
    }
    setModel(model: QAbstractItemModel): void {
        this.native.setModel(model.native);
    }
    setSelectionBehavior(behavior: QAbstractItemViewSelectionBehavior): void {
        this.setProperty('selectionBehavior', behavior);
    }
    setSelectionMode(mode: SelectionMode): void {
        this.setProperty('selectionMode', mode);
    }
    // TODO: virtual void 	setSelectionModel(QItemSelectionModel *selectionModel)
    setTabKeyNavigation(enable: boolean): void {
        this.setProperty('tabKeyNavigation', enable);
    }
    setTextElideMode(mode: TextElideMode): void {
        this.setProperty('textElideMode', mode);
    }
    setVerticalScrollMode(mode: ScrollMode): void {
        this.setProperty('verticalScrollMode', mode);
    }
    showDropIndicator(): boolean {
        return this.property('showDropIndicator').toBool();
    }
    // TODO: virtual int 	sizeHintForColumn(int column) const
    // TODO: QSize 	sizeHintForIndex(const QModelIndex &index) const
    // TODO: virtual int 	sizeHintForRow(int row) const
    tabKeyNavigation(): boolean {
        return this.property('tabKeyNavigation').toBool();
    }
    textElideMode(): TextElideMode {
        return this.property('textElideMode').toInt();
    }
    verticalScrollMode(): ScrollMode {
        return this.property('verticalScrollMode').toInt();
    }
    // TODO: virtual QRect 	visualRect(const QModelIndex &index) const = 0

    // *** Public Slots ***
    clearSelection(): void {
        this.native.clearSelection();
    }
    edit(index: QModelIndex): void {
        this.native.edit(index.native);
    }
    reset(): void {
        this.native.reset();
    }
    scrollToBottom(): void {
        this.native.scrollToBottom();
    }
    scrollToTop(): void {
        this.native.scrollToTop();
    }
    selectAll(): void {
        this.native.selectAll();
    }
    setCurrentIndex(index: QModelIndex): void {
        this.native.setCurrentIndex(index.native);
    }
    setRootIndex(index: QModelIndex): void {
        this.native.setRootIndex(index.native);
    }
    update(index?: QModelIndex): void {
        if (index == null) {
            super.update();
        } else {
            this.native.update_QModelIndex(index.native);
        }
    }
}

export enum DragDropMode {
    NoDragDrop = 0,
    DragOnly = 1,
    DropOnly = 2,
    DragDrop = 3,
    InternalMove = 4,
}

export enum EditTrigger {
    NoEditTriggers = 0,
    CurrentChanged = 1,
    DoubleClicked = 2,
    SelectedClicked = 4,
    EditKeyPressed = 8,
    AnyKeyPressed = 16,
    AllEditTriggers = 31,
}

export enum ScrollHint {
    EnsureVisible = 0,
    PositionAtTop = 1,
    PositionAtBottom = 2,
    PositionAtCenter = 3,
}

export enum ScrollMode {
    ScrollPerItem = 0,
    ScrollPerPixel = 1,
}

// QTabBar also has a SelectionBehavior, so we prefix this one.
export enum QAbstractItemViewSelectionBehavior {
    SelectItems = 0,
    SelectRows = 1,
    SelectColumns = 2,
}

export enum SelectionMode {
    NoSelection = 0,
    SingleSelection = 1,
    MultiSelection = 2,
    ExtendedSelection = 3,
    ContiguousSelection = 4,
}

export interface QAbstractItemViewSignals extends QAbstractScrollAreaSignals {
    activated: (index: NativeElement /* QModelIndex */) => void;
    clicked: (index: NativeElement /* QModelIndex */) => void;
    doubleClicked: (index: NativeElement /* QModelIndex */) => void;
    entered: (index: NativeElement /* QModelIndex */) => void;
    iconSizeChanged: (size: NativeElement /* QSize */) => void;
    pressed: (index: NativeElement /* QModelIndex */) => void;
    viewportEntered: () => void;
}
