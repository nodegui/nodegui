import addon from '../utils/addon';
import { NodeLayout } from './QLayout';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { FlexLayout } from '../core/FlexLayout';
import { WidgetAttribute, WindowType } from '../QtEnums';
import { QIcon } from '../QtGui/QIcon';
import { QCursor } from '../QtGui/QCursor';
import { CursorShape, WindowState } from '../QtEnums';
import { StyleSheet, prepareInlineStyleSheet } from '../core/Style/StyleSheet';
import { checkIfNativeElement } from '../utils/helpers';
import { YogaWidget } from '../core/YogaWidget';
import { QSize } from '../QtCore/QSize';
// All Widgets should extend from NodeWidget
// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends YogaWidget {
    layout?: NodeLayout;
    _rawInlineStyle = '';
    type = 'widget';
    show(): void {
        this.native.show();
    }
    hide(): void {
        this.native.hide();
    }
    isVisible(): boolean {
        return this.native.isVisible();
    }
    close(): boolean {
        return this.native.close();
    }
    setStyleSheet(styleSheet: string): void {
        const preparedSheet = StyleSheet.create(styleSheet);
        this.native.setStyleSheet(preparedSheet);
    }
    styleSheet(): string {
        return this.native.styleSheet();
    }
    setInlineStyle(style: string): void {
        this._rawInlineStyle = style;
        const preparedSheet = prepareInlineStyleSheet(this, style);
        this.native.setStyleSheet(preparedSheet);
    }
    setGeometry(x: number, y: number, w: number, h: number): void {
        this.native.setGeometry(x, y, w, h);
    }
    geometry(): Rect {
        return this.native.geometry();
    }
    setMouseTracking(isMouseTracked: boolean): void {
        this.native.setMouseTracking(isMouseTracked);
    }
    hasMouseTracking(): boolean {
        return this.native.hasMouseTracking();
    }
    setEnabled(enabled: boolean): void {
        this.native.setEnabled(enabled);
    }
    isEnabled(): boolean {
        return this.native.isEnabled();
    }
    setWindowOpacity(opacity: number): void {
        this.native.setWindowOpacity(opacity);
    }
    windowOpacity(): number {
        return this.native.windowOpacity();
    }
    setWindowTitle(title: string): void {
        return this.native.setWindowTitle(title);
    }
    windowTitle(): string {
        return this.native.windowTitle();
    }
    setWindowState(state: WindowState): void {
        return this.native.setWindowState(state);
    }
    windowState(): number {
        return this.native.windowState();
    }
    setCursor(cursor: CursorShape | QCursor): void {
        //TODO:getter
        this.native.setCursor(cursor);
    }
    setWindowIcon(icon: QIcon): void {
        //TODO:getter
        this.native.setWindowIcon(icon.native);
    }
    setMinimumSize(minw: number, minh: number): void {
        this.native.setMinimumSize(minw, minh);
    }
    setMaximumSize(maxw: number, maxh: number): void {
        this.native.setMaximumSize(maxw, maxh);
    }
    setFixedSize(width: number, height: number): void {
        this.native.setFixedSize(width, height);
    }
    resize(width: number, height: number): void {
        this.native.resize(width, height);
    }
    size(): QSize {
        return new QSize(this.native.size());
    }
    move(x: number, y: number): void {
        this.native.move(x, y);
    }
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    repaint(): void {
        // react:⛔️
        this.native.repaint();
    }
    update(): void {
        // react:⛔️
        this.native.update();
    }
    updateGeometry(): void {
        // react:⛔️
        this.native.updateGeometry();
    }
    setAttribute(attribute: WidgetAttribute, switchOn: boolean): void {
        // react:⛔️
        return this.native.setAttribute(attribute, switchOn);
    }
    testAttribute(attribute: WidgetAttribute): boolean {
        // react:⛔️
        return this.native.testAttribute(attribute);
    }
    setWindowFlag(windowType: WindowType, switchOn: boolean): void {
        // react:⛔️
        return this.native.setWindowFlag(windowType, switchOn);
    }
    setLayout(parentLayout: NodeLayout): void {
        const flexLayout = parentLayout as FlexLayout;
        this.native.setLayout(parentLayout.native);
        if (flexLayout.setFlexNode) {
            //if flex layout set the flexnode
            flexLayout.setFlexNode(this.getFlexNode());
        }
        this.layout = parentLayout;
    }
    adjustSize(): void {
        this.native.adjustSize();
    }
    activateWindow(): void {
        this.native.activateWindow();
    }
    raise(): void {
        this.native.raise();
    }
    lower(): void {
        this.native.lower();
    }
    setObjectName(objectName: string): void {
        super.setObjectName(objectName);
        if (this._rawInlineStyle) {
            this.setInlineStyle(this._rawInlineStyle);
        }
    }
    showFullScreen(): void {
        this.native.showFullScreen();
    }
    showMinimized(): void {
        this.native.showMinimized();
    }
    showMaximized(): void {
        this.native.showMaximized();
    }
    showNormal(): void {
        this.native.showNormal();
    }
}

type Rect = {
    x: number;
    y: number;
    width: number;
    height: number;
};
type arg = NodeWidget | NativeElement;

export class QWidget extends NodeWidget {
    native: NativeElement;
    constructor(arg?: arg) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as NodeWidget) {
            parent = arg as NodeWidget;
            native = new addon.QWidget(parent.native);
        } else {
            native = new addon.QWidget();
        }
        super(native);
        this.nodeParent = parent;
        this.native = native;
    }
}

export const QWidgetEvents = BaseWidgetEvents;
