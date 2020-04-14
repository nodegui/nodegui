import addon from '../utils/addon';
import { NodeLayout } from './QLayout';
import { NativeElement } from '../core/Component';
import { FlexLayout } from '../core/FlexLayout';
import { WidgetAttribute, WindowType, ContextMenuPolicy } from '../QtEnums';
import { QIcon } from '../QtGui/QIcon';
import { QCursor } from '../QtGui/QCursor';
import { CursorShape, WindowState } from '../QtEnums';
import { StyleSheet, prepareInlineStyleSheet } from '../core/Style/StyleSheet';
import { checkIfNativeElement } from '../utils/helpers';
import { YogaWidget } from '../core/YogaWidget';
import { QPoint } from '../QtCore/QPoint';
import { QSize } from '../QtCore/QSize';
import { QRect } from '../QtCore/QRect';
import { QObjectSignals } from '../QtCore/QObject';
import { QFont } from '../QtGui/QFont';
import { QAction } from './QAction';
import memoizeOne from 'memoize-one';
import { QGraphicsEffect } from './QGraphicsEffect';

/**
 
> Abstract class to add functionalities common to all Widgets.

**This class implements all methods, properties of Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html) so that it can be inherited by all widgets**

`NodeWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all widget's easily. Additionally it helps in type checking process. If you wish to create a `div` like widget use [QWidget](api/QWidget.md) instead.

**NodeWidget is the base class for all widgets.**

### Example

```javascript
const {
  NodeWidget,
  QPushButton,
  QWidget,
  QRadioButton
} = require("@nodegui/nodegui");

// showWidget can accept any widget since it expects NodeWidget
const showWidget = (widget: NodeWidget) => {
  widget.show();
};

showWidget(new QPushButton());
showWidget(new QWidget());
showWidget(new QRadioButton());
```
All Widgets should extend from NodeWidget
Implement all native QWidget methods here so that all widgets get access to those aswell

 */
export abstract class NodeWidget<Signals extends QWidgetSignals> extends YogaWidget<Signals> {
    layout?: NodeLayout<Signals>;
    actions: Set<QAction>;
    _rawInlineStyle = '';
    type = 'widget';
    private _effect?: QGraphicsEffect<any> | null;
    constructor(native: NativeElement) {
        super(native);
        this.actions = new Set<QAction>();
        this.setStyleSheet = memoizeOne(this.setStyleSheet);
        this.setInlineStyle = memoizeOne(this.setInlineStyle);
        this.setObjectName = memoizeOne(this.setObjectName);
    }
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
    mapFromGlobal(pos: QPoint): QPoint {
        return new QPoint(this.native.mapFromGlobal(pos.native));
    }
    mapFromParent(pos: QPoint): QPoint {
        return new QPoint(this.native.mapFromParent(pos.native));
    }
    mapToGlobal(pos: QPoint): QPoint {
        return new QPoint(this.native.mapToGlobal(pos.native));
    }
    mapToParent(pos: QPoint): QPoint {
        return new QPoint(this.native.mapToParent(pos.native));
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
    geometry(): QRect {
        return QRect.fromQVariant(this.property('geometry'));
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
        if (typeof cursor === 'number') {
            this.native.setCursor(cursor);
        } else {
            this.native.setCursor(cursor.native);
        }
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
    setLayout(parentLayout: NodeLayout<Signals>): void {
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
        this.repolish();
    }
    setContextMenuPolicy(contextMenuPolicy: ContextMenuPolicy): void {
        this.setProperty('contextMenuPolicy', contextMenuPolicy);
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
    setFont(font: QFont): void {
        this.native.setProperty('font', font.native);
    }
    font(): QFont {
        return QFont.fromQVariant(this.property('font'));
    }
    addAction(action: QAction | string): QAction {
        if (typeof action === 'string') {
            const qaction = new QAction();
            qaction.setText(action);
            this.native.addAction(qaction.native);
            this.actions.add(qaction);
            return qaction;
        }
        this.native.addAction(action.native);
        this.actions.add(action);
        return action;
    }
    repolish(): void {
        this.native.repolish();
    }
    setGraphicsEffect(effect: QGraphicsEffect<any>): void {
        this._effect = effect;
        this.native.setGraphicsEffect(effect.native);
    }
}

export interface QWidgetSignals extends QObjectSignals {
    windowTitleChanged: (title: string) => void;
    windowIconChanged: (iconNative: NativeElement) => void;
    customContextMenuRequested: (pos: { x: number; y: number }) => void;
}

/**
 > Create and control views.

* **This class is a JS wrapper around Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html)**

A `QWidget` can be used to encapsulate other widgets and provide structure. It functions similar to a `div` in the web world.


### Example

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("container"); //Similar to setting `id` on the web
view.setLayout(new FlexLayout());
```
 */
export class QWidget extends NodeWidget<QWidgetSignals> {
    native: NativeElement;
    constructor(arg?: NodeWidget<QWidgetSignals> | NativeElement) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as NodeWidget<QWidgetSignals>) {
            parent = arg as NodeWidget<QWidgetSignals>;
            native = new addon.QWidget(parent.native);
        } else {
            native = new addon.QWidget();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
}
