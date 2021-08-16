import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractItemView, QAbstractItemViewSignals } from './QAbstractItemView';
import { checkIfNativeElement, Orientation } from '../..';

/**

> The QHeaderView class provides a header row or header column for item views.

* **This class is a JS wrapper around Qt's [QHeaderView class](https://doc.qt.io/qt-5/qheaderview.html)**

 */
export abstract class NodeHeaderView<Signals extends QHeaderViewSignals> extends QAbstractItemView<Signals> {
    // *** Public Function ***
    // TODO: bool 	cascadingSectionResizes() const
    // TODO: int 	count() const
    // TODO: Qt::Alignment 	defaultAlignment() const
    // TODO: int 	defaultSectionSize() const
    // TODO: int 	hiddenSectionCount() const
    // TODO: void 	hideSection(int logicalIndex)
    // TODO: bool 	highlightSections() const
    // TODO: bool 	isFirstSectionMovable() const
    // TODO: bool 	isSectionHidden(int logicalIndex) const
    // TODO: bool 	isSortIndicatorShown() const
    // TODO: int 	length() const
    // TODO: int 	logicalIndex(int visualIndex) const
    // TODO: int 	logicalIndexAt(int position) const
    // TODO: int 	logicalIndexAt(int x, int y) const
    // TODO: int 	logicalIndexAt(const QPoint &pos) const
    // TODO: int 	maximumSectionSize() const
    // TODO: int 	minimumSectionSize() const
    // TODO: void 	moveSection(int from, int to)
    // TODO: int 	offset() const
    // TODO: Qt::Orientation 	orientation() const
    // TODO: void 	resetDefaultSectionSize()
    // TODO: int 	resizeContentsPrecision() const
    // TODO: void 	resizeSection(int logicalIndex, int size)
    // TODO: void 	resizeSections(QHeaderView::ResizeMode mode)
    // TODO: bool 	restoreState(const QByteArray &state)
    // TODO: QByteArray 	saveState() const
    // TODO: int 	sectionPosition(int logicalIndex) const
    // TODO: QHeaderView::ResizeMode 	sectionResizeMode(int logicalIndex) const
    // TODO: int 	sectionSize(int logicalIndex) const
    // TODO: int 	sectionSizeHint(int logicalIndex) const
    // TODO: int 	sectionViewportPosition(int logicalIndex) const
    // TODO: bool 	sectionsClickable() const
    // TODO: bool 	sectionsHidden() const
    // TODO: bool 	sectionsMovable() const
    // TODO: bool 	sectionsMoved() const
    // TODO: void 	setCascadingSectionResizes(bool enable)
    // TODO: void 	setDefaultAlignment(Qt::Alignment alignment)
    // TODO: void 	setDefaultSectionSize(int size)
    // TODO: void 	setFirstSectionMovable(bool movable)
    // TODO: void 	setHighlightSections(bool highlight)
    // TODO: void 	setMaximumSectionSize(int size)
    // TODO: void 	setMinimumSectionSize(int size)
    // TODO: void 	setResizeContentsPrecision(int precision)
    // TODO: void 	setSectionHidden(int logicalIndex, bool hide)
    // TODO: void 	setSectionResizeMode(QHeaderView::ResizeMode mode)
    // TODO: void 	setSectionResizeMode(int logicalIndex, QHeaderView::ResizeMode mode)
    // TODO: void 	setSectionsClickable(bool clickable)
    // TODO: void 	setSectionsMovable(bool movable)
    // TODO: void 	setSortIndicator(int logicalIndex, Qt::SortOrder order)
    // TODO: void 	setSortIndicatorShown(bool show)

    setStretchLastSection(stretch: boolean): void {
        this.setProperty('stretchLastSection', stretch);
    }

    // TODO: void 	showSection(int logicalIndex)
    // TODO: Qt::SortOrder 	sortIndicatorOrder() const
    // TODO: int 	sortIndicatorSection() const

    stretchLastSection(): boolean {
        return this.property('stretchLastSection').toBool();
    }

    // TODO: int 	stretchSectionCount() const
    // TODO: void 	swapSections(int first, int second)
    // TODO: int 	visualIndex(int logicalIndex) const
    // TODO: int 	visualIndexAt(int position) const

    // *** Public Slots ***
    // TODO: void headerDataChanged(Qt::Orientation orientation, int logicalFirst, int logicalLast)
    // TODO: void setOffset(int offset)
    // TODO: void setOffsetToLastSection()
    // TODO: void setOffsetToSectionPosition(int visualSectionNumber)
}

export class QHeaderView extends NodeHeaderView<QHeaderViewSignals> {
    native: NativeElement;
    constructor(orientationOrNative: Orientation | NativeElement, parent: NodeWidget<any> | null = null) {
        let native;
        if (checkIfNativeElement(orientationOrNative)) {
            native = orientationOrNative as NativeElement;
        } else {
            if (parent != null) {
                native = new addon.QHeaderView(orientationOrNative, parent.native);
            } else {
                native = new addon.QHeaderView(orientationOrNative);
            }
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
}

export type QHeaderViewSignals = QAbstractItemViewSignals;
