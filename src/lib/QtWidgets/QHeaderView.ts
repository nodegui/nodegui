import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractItemView, QAbstractItemViewSignals } from './QAbstractItemView';
import { AlignmentFlag, checkIfNativeElement, Orientation, QPoint, SortOrder } from '../..';

/**

> The QHeaderView class provides a header row or header column for item views.

* **This class is a JS wrapper around Qt's [QHeaderView class](https://doc.qt.io/qt-5/qheaderview.html)**

 */
export abstract class NodeHeaderView<Signals extends QHeaderViewSignals> extends QAbstractItemView<Signals> {
    // *** Public Function ***
    cascadingSectionResizes(): boolean {
        return this.native.cascadingSectionResizes();
    }
    count(): number {
        return this.native.count();
    }
    defaultAlignment(): AlignmentFlag {
        return this.native.defaultAlignment();
    }
    defaultSectionSize(): number {
        return this.native.defaultSectionSize();
    }
    hiddenSectionCount(): number {
        return this.native.hiddenSectionCount();
    }
    hideSection(logicalIndex: number): void {
        this.native.hideSection(logicalIndex);
    }
    highlightSections(): boolean {
        return this.native.highlightSections();
    }
    isFirstSectionMovable(): boolean {
        return this.native.isFirstSectionMovable();
    }
    isSectionHidden(logicalIndex: number): boolean {
        return this.native.isSectionHidden(logicalIndex);
    }
    isSortIndicatorShown(): boolean {
        return this.native.isSortIndicatorShown();
    }
    length(): number {
        return this.native.length();
    }
    logicalIndex(visualIndex: number): number {
        return this.native.logicalIndex(visualIndex);
    }
    logicalIndexAt(positionOrPosOrX: number | QPoint, y?: number): number {
        if (y !== undefined) {
            return this.native.logicalIndexAt_number_number(positionOrPosOrX, y);
        } else if (positionOrPosOrX instanceof QPoint) {
            return this.native.logicalIndexAt_qpoint(positionOrPosOrX.native);
        } else {
            return this.native.logicalIndexAt_number(positionOrPosOrX);
        }
    }
    maximumSectionSize(): number {
        return this.native.maximumSectionSize();
    }
    minimumSectionSize(): number {
        return this.native.minimumSectionSize();
    }
    moveSection(from: number, to: number): void {
        this.native.moveSection(from, to);
    }
    offset(): number {
        return this.native.offset();
    }
    orientation(): Orientation {
        return this.native.orientation();
    }
    resetDefaultSectionSize(): void {
        this.native.resetDefaultSectionSize();
    }
    resizeContentsPrecision(): number {
        return this.native.resizeContentsPrecision();
    }
    resizeSection(logicalIndex: number, size: number): void {
        this.native.resizeSection(logicalIndex, size);
    }
    resizeSections(mode: QHeaderViewResizeMode): void {
        this.native.resizeSections(mode);
    }
    // TODO: bool 	restoreState(const QByteArray &state)
    // TODO: QByteArray 	saveState() const
    sectionPosition(logicalIndex: number): number {
        return this.native.sectionPosition(logicalIndex);
    }
    sectionResizeMode(logicalIndex: number): QHeaderViewResizeMode {
        return this.native.sectionResizeMode(logicalIndex);
    }
    sectionSize(logicalIndex: number): number {
        return this.native.sectionSize(logicalIndex);
    }
    sectionSizeHint(logicalIndex: number): number {
        return this.native.sectionSizeHint(logicalIndex);
    }
    sectionViewportPosition(logicalIndex: number): number {
        return this.native.sectionViewportPosition(logicalIndex);
    }
    sectionsClickable(): boolean {
        return this.native.sectionsClickable();
    }
    sectionsHidden(): boolean {
        return this.native.sectionsHidden();
    }
    sectionsMovable(): boolean {
        return this.native.sectionsMovable();
    }
    sectionsMoved(): boolean {
        return this.native.sectionsMoved();
    }
    setCascadingSectionResizes(enable: boolean): void {
        this.native.setCascadingSectionResizes(enable);
    }
    setDefaultAlignment(alignment: AlignmentFlag): void {
        this.native.setDefaultAlignment(alignment);
    }
    setDefaultSectionSize(size: number): void {
        this.native.setDefaultSectionSize(size);
    }
    setFirstSectionMovable(movable: boolean): void {
        this.native.setFirstSectionMovable(movable);
    }
    setHighlightSections(highlight: boolean): void {
        this.native.setHighlightSections(highlight);
    }
    setMaximumSectionSize(size: number): void {
        this.native.setMaximumSectionSize(size);
    }
    setMinimumSectionSize(size: number): void {
        this.native.setMinimumSectionSize(size);
    }
    setResizeContentsPrecision(precision: number): void {
        this.native.setResizeContentsPrecision(precision);
    }
    setSectionHidden(logicalIndex: number, hide: boolean): void {
        this.native.setSectionHidden(logicalIndex, hide);
    }
    setSectionResizeMode(modeOrlogicalIndex: QHeaderViewResizeMode | number, mode?: QHeaderViewResizeMode): void {
        if (mode !== undefined) {
            this.native.setSectionResizeMode_number_mode(modeOrlogicalIndex, mode);
        } else {
            this.native.setSectionResizeMode_mode(modeOrlogicalIndex);
        }
    }
    setSectionsClickable(clickable: boolean): void {
        this.native.setSectionsClickable(clickable);
    }
    setSectionsMovable(movable: boolean): void {
        this.native.setSectionsMovable(movable);
    }
    setSortIndicator(logicalIndex: number, order: SortOrder): void {
        this.native.setSortIndicator(logicalIndex, order);
    }
    setSortIndicatorShown(show: boolean): void {
        this.native.setSortIndicatorShown(show);
    }
    setStretchLastSection(stretch: boolean): void {
        this.setProperty('stretchLastSection', stretch);
    }

    showSection(logicalIndex: number): void {
        this.native.showSection(logicalIndex);
    }
    sortIndicatorOrder(): SortOrder {
        return this.native.sortIndicatorOrder();
    }
    sortIndicatorSection(): number {
        return this.native.sortIndicatorSection();
    }
    stretchLastSection(): boolean {
        return this.property('stretchLastSection').toBool();
    }
    stretchSectionCount(): number {
        return this.native.stretchSectionCount();
    }
    swapSections(first: number, second: number): void {
        this.native.swapSections(first, second);
    }
    visualIndex(logicalIndex: number): number {
        return this.native.visualIndex(logicalIndex);
    }
    visualIndexAt(position: number): number {
        return this.native.visualIndexAt(position);
    }

    // *** Public Slots ***
    headerDataChanged(orientation: Orientation, logicalFirst: number, logicalLast: number): void {
        this.native.headerDataChanged(orientation, logicalFirst, logicalLast);
    }
    setOffset(offset: number): void {
        this.native.setOffset(offset);
    }
    setOffsetToLastSection(): void {
        this.native.setOffsetToLastSection();
    }
    setOffsetToSectionPosition(visualSectionNumber: number): void {
        this.native.setOffsetToSectionPosition(visualSectionNumber);
    }
}

export class QHeaderView extends NodeHeaderView<QHeaderViewSignals> {
    constructor(orientationOrNative: Orientation | NativeElement, parent: QWidget | null = null) {
        let native: NativeElement;
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
        parent && this.setNodeParent(parent);
    }
}

export enum QHeaderViewResizeMode {
    Interactive = 0,
    Fixed = 2,
    Stretch = 1,
    ResizeToContents = 3,
}

export type QHeaderViewSignals = QAbstractItemViewSignals;
