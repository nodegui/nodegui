import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { QWidget } from './QWidget';
import { QModelIndex } from '../QtCore/QModelIndex';
import { QSize } from '../QtCore/QSize';
import { DropAction } from '../QtEnums/DropAction';
import { TextElideMode } from '../QtEnums/TextElideMode';
import { QAbstractItemModel } from '../QtCore/QAbstractItemModel';

/**

> This is the abstract base class of button widgets, providing their functionality.

* **This class is a JS wrapper around Qt's [QAbstractItemView class](https://doc.qt.io/qt-5/qabstractitemview.html)**

The QAbstractItemView class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QListWidget. (n/a QColumnView, QHeaderView, QListView, QTableView, and QTreeView)

*/

export abstract class QAbstractItemView<Signals extends QAbstractItemViewSignals> extends QAbstractScrollArea<Signals> {
    setCurrentIndex(index: QModelIndex): void {
        this.native.setCurrentIndex(index.native);
    }
    currentIndex(): QModelIndex {
        return new QModelIndex(this.native.currentIndex());
    }
    setIndexWidget(index: QModelIndex, widget: QWidget): void {
        this.native.setIndexWidget(index.native, widget.native);
    }
    indexWidget(index: QModelIndex): QWidget {
        return new QWidget(this.native.indexWidget(index));
    }
    scrollToBottom(): void {
        this.native.scrollToBottom();
    }
    scrollToTop(): void {
        this.native.scrollToTop();
    }
    setAlternatingRowColors(enable: boolean): void {
        this.setProperty('alternatingRowColors', enable);
    }
    alternatingRowColors(): boolean {
        return this.property('alternatingRowColors').toBool();
    }
    setAutoScroll(enable: boolean): void {
        this.setProperty('autoScroll', enable);
    }
    hasAutoScroll(): boolean {
        return this.property('autoScroll').toBool();
    }
    setAutoScrollMargin(margin: number): void {
        this.setProperty('autoScrollMargin', margin);
    }
    autoScrollMargin(): number {
        return this.property('autoScrollMargin').toInt();
    }
    setDefaultDropAction(dropAction: DropAction): void {
        this.setProperty('defaultDropAction', dropAction);
    }
    defaultDropAction(): DropAction {
        return this.property('defaultDropAction').toInt();
    }
    setDragDropMode(behavior: DragDropMode): void {
        this.setProperty('dragDropMode', behavior);
    }
    dragDropMode(): DragDropMode {
        return this.property('dragDropMode').toInt();
    }
    setDragDropOverwriteMode(overwrite: boolean): void {
        this.setProperty('dragDropOverwriteMode', overwrite);
    }
    dragDropOverwriteMode(): boolean {
        return this.property('dragDropOverwriteMode').toBool();
    }
    setDragEnabled(enable: boolean): void {
        this.setProperty('dragEnabled', enable);
    }
    dragEnabled(): boolean {
        return this.property('dragEnabled').toBool();
    }
    setEditTriggers(triggers: number): void {
        this.setProperty('editTriggers', triggers);
    }
    editTriggers(): number {
        return this.property('editTriggers').toInt();
    }
    setHorizontalScrollMode(mode: boolean): void {
        this.setProperty('horizontalScrollMode', mode);
    }
    horizontalScrollMode(): ScrollMode {
        return this.property('horizontalScrollMode').toInt();
    }
    resetHorizontalScrollMode(): void {
        this.native.resetHorizontalScrollMode();
    }
    setIconSize(iconSize: QSize): void {
        this.setProperty('iconSize', iconSize.native);
    }
    iconSize(): QSize {
        const iconSize = this.property('iconSize');
        return QSize.fromQVariant(iconSize);
    }
    setSelectionBehavior(behavior: SelectionBehavior): void {
        this.setProperty('selectionBehavior', behavior);
    }
    selectionBehavior(): SelectionBehavior {
        return this.property('selectionBehavior').toInt();
    }
    setSelectionMode(mode: SelectionMode): void {
        this.setProperty('selectionMode', mode);
    }
    selectionMode(): SelectionMode {
        return this.property('selectionMode').toInt();
    }
    setDropIndicatorShown(enable: boolean): void {
        this.setProperty('showDropIndicator', enable);
    }
    showDropIndicator(): boolean {
        return this.property('showDropIndicator').toBool();
    }
    setTabKeyNavigation(enable: boolean): void {
        this.setProperty('tabKeyNavigation', enable);
    }
    tabKeyNavigation(): boolean {
        return this.property('tabKeyNavigation').toBool();
    }
    setTextElideMode(mode: TextElideMode): void {
        this.setProperty('textElideMode', mode);
    }
    textElideMode(): TextElideMode {
        return this.property('textElideMode').toInt();
    }
    setVerticalScrollMode(mode: ScrollMode): void {
        this.setProperty('verticalScrollMode', mode);
    }
    verticalScrollMode(): ScrollMode {
        return this.property('verticalScrollMode').toInt();
    }
    resetVerticalScrollMode(): void {
        this.native.resetVerticalScrollMode();
    }
    setModel(model: QAbstractItemModel): void {
        this.native.setModel(model.native);
    }
}

export enum DragDropMode {
    NoDragDrop,
    DragOnly,
    DropOnly,
    DragDrop,
    InternalMove,
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

export enum ScrollMode {
    ScrollPerItem,
    ScrollPerPixel,
}

export enum SelectionBehavior {
    SelectItems,
    SelectRows,
    SelectColumns,
}

export enum SelectionMode {
    NoSelection,
    SingleSelection,
    MultiSelection,
    ExtendedSelection,
    ContiguousSelection,
}

export interface QAbstractItemViewSignals extends QAbstractScrollAreaSignals {
    viewportEntered: () => void;
}
