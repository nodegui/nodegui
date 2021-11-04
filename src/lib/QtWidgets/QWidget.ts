import addon from '../utils/addon';
import { NodeLayout } from './QLayout';
import { NativeElement } from '../core/Component';
import { FlexLayout } from '../core/FlexLayout';
import { WidgetAttribute, WindowType, ContextMenuPolicy, FocusReason, FocusPolicy } from '../QtEnums';
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
import { QScreen } from '../QtGui/QScreen';
import memoizeOne from 'memoize-one';
import { QGraphicsEffect } from './QGraphicsEffect';
import { QSizePolicyPolicy, QStyle, QWindow } from '../..';
import { wrapperCache } from '../core/WrapperCache';

/**

> Abstract class to add functionalities common to all Widgets.

**This class implements all methods, properties of Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html) so that it can be inherited by all widgets**

`NodeWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all widget's easily. Additionally it helps in type checking process. If you wish to create a `div` like widget use [QWidget](QWidget.md) instead.

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
    _layout?: NodeLayout<Signals>;
    _rawInlineStyle = '';
    type = 'widget';
    private _effect?: QGraphicsEffect<any> | null;
    constructor(native: NativeElement) {
        super(native);
        this.setStyleSheet = memoizeOne(this.setStyleSheet);
        this.setInlineStyle = memoizeOne(this.setInlineStyle);
        this.setObjectName = memoizeOne(this.setObjectName);
    }
    get layout(): NodeLayout<Signals> | undefined {
        return this._layout;
    }
    set layout(l: NodeLayout<Signals> | undefined) {
        this._layout = l;
    }
    // *** Public Functions ***
    acceptDrops(): boolean {
        return this.native.acceptDrops();
    }
    // TODO: QString 	accessibleDescription() const
    // TODO: QString 	accessibleName() const
    // TODO: QList<QAction *> 	actions() const
    activateWindow(): void {
        this.native.activateWindow();
    }
    addAction(action: QAction | string): QAction {
        if (typeof action === 'string') {
            const qaction = new QAction();
            qaction.setText(action);
            this.native.addAction(qaction.native);
            return qaction;
        }
        this.native.addAction(action.native);
        return action;
    }
    // TODO: void 	addActions(QList<QAction *> actions)
    adjustSize(): void {
        this.native.adjustSize();
    }
    // TODO: bool 	autoFillBackground() const
    // TODO: QPalette::ColorRole 	backgroundRole() const
    // TODO: QBackingStore *	backingStore() const
    // TODO: QSize 	baseSize() const
    // TODO: QWidget *	childAt(int x, int y) const
    // TODO: QWidget *	childAt(const QPoint &p) const
    // TODO: QRect 	childrenRect() const
    // TODO: QRegion 	childrenRegion() const
    clearFocus(): void {
        this.native.clearFocus();
    }
    // TODO: void 	clearMask()
    // TODO: QMargins 	contentsMargins() const
    // TODO: QRect 	contentsRect() const
    // TODO: Qt::ContextMenuPolicy 	contextMenuPolicy() const
    // TODO: QCursor 	cursor() const
    // TODO: WId 	effectiveWinId() const
    // TODO: void 	ensurePolished() const
    // TODO: Qt::FocusPolicy 	focusPolicy() const
    // TODO: QWidget *	focusProxy() const
    // TODO: QWidget *	focusWidget() const
    font(): QFont {
        return QFont.fromQVariant(this.property('font'));
    }
    // TODO: QFontInfo 	fontInfo() const
    // TODO: QFontMetrics 	fontMetrics() const
    // TODO: QPalette::ColorRole 	foregroundRole() const
    frameGeometry(): QRect {
        return QRect.fromQVariant(this.property('frameGeometry'));
    }
    // TODO: QSize 	frameSize() const
    geometry(): QRect {
        return QRect.fromQVariant(this.property('geometry'));
    }
    // TODO: QPixmap 	grab(const QRect &rectangle = QRect(QPoint(0, 0), QSize(-1, -1)))
    // TODO: void 	grabGesture(Qt::GestureType gesture, Qt::GestureFlags flags = Qt::GestureFlags())
    // TODO: void 	grabKeyboard()
    // TODO: void 	grabMouse()
    // TODO: void 	grabMouse(const QCursor &cursor)
    // TODO: int 	grabShortcut(const QKeySequence &key, Qt::ShortcutContext context = Qt::WindowShortcut)
    // TODO: QGraphicsEffect *	graphicsEffect() const
    // TODO: QGraphicsProxyWidget *	graphicsProxyWidget() const
    hasFocus(): boolean {
        return this.property('focus').toBool();
    }
    // TODO: virtual bool 	hasHeightForWidth() const
    hasMouseTracking(): boolean {
        return this.native.hasMouseTracking();
    }
    // TODO: bool 	hasTabletTracking() const
    height(): number {
        return this.property('height').toInt();
    }
    // TODO: virtual int 	heightForWidth(int w) const
    // TODO: Qt::InputMethodHints 	inputMethodHints() const
    // TODO: virtual QVariant 	inputMethodQuery(Qt::InputMethodQuery query) const
    // TODO: void 	insertAction(QAction *before, QAction *action)
    // TODO: void 	insertActions(QAction *before, QList<QAction *> actions)
    isActiveWindow(): boolean {
        return this.property('isActiveWindow').toBool();
    }
    // TODO: bool 	isAncestorOf(const QWidget *child) const
    isEnabled(): boolean {
        return this.native.isEnabled();
    }
    // TODO: bool 	isEnabledTo(const QWidget *ancestor) const
    isFullScreen(): boolean {
        return this.property('fullScreen').toBool();
    }
    isHidden(): boolean {
        return this.native.isHidden();
    }
    isMaximized(): boolean {
        return this.property('maximized').toBool();
    }
    isMinimized(): boolean {
        return this.property('minimized').toBool();
    }
    isModal(): boolean {
        return this.property('modal').toBool();
    }
    isVisible(): boolean {
        return this.native.isVisible();
    }
    // TODO: bool 	isVisibleTo(const QWidget *ancestor) const
    isWindow(): boolean {
        return this.native.isWindow();
    }
    isWindowModified(): boolean {
        return this.native.isWindowModified();
    }
    // TODO: QLayout *	layout() const
    // TODO: Qt::LayoutDirection 	layoutDirection() const
    // TODO: QLocale 	locale() const
    // TODO: QPoint 	mapFrom(const QWidget *parent, const QPoint &pos) const
    mapFromGlobal(pos: QPoint): QPoint {
        return new QPoint(this.native.mapFromGlobal(pos.native));
    }
    mapFromParent(pos: QPoint): QPoint {
        return new QPoint(this.native.mapFromParent(pos.native));
    }
    // TODO: QPoint 	mapTo(const QWidget *parent, const QPoint &pos) const
    mapToGlobal(pos: QPoint): QPoint {
        return new QPoint(this.native.mapToGlobal(pos.native));
    }
    mapToParent(pos: QPoint): QPoint {
        return new QPoint(this.native.mapToParent(pos.native));
    }
    // TODO: QRegion 	mask() const
    // TODO: int 	maximumHeight() const
    maximumSize(): QSize {
        return new QSize(this.native.maximumSize());
    }
    // TODO: int 	maximumWidth() const
    // TODO: int 	minimumHeight() const
    minimumSize(): QSize {
        return new QSize(this.native.minimumSize());
    }
    // TODO: virtual QSize 	minimumSizeHint() const
    // TODO: int 	minimumWidth() const
    // TODO: void 	move(const QPoint &)
    move(x: number, y: number): void {
        this.native.move(x, y);
    }
    // TODO: QWidget *	nativeParentWidget() const
    // TODO: QWidget *	nextInFocusChain() const
    // TODO: QRect 	normalGeometry() const
    // TODO: void 	overrideWindowFlags(Qt::WindowFlags flags)
    // TODO: const QPalette &	palette() const
    // TODO: QWidget *	parentWidget() const
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    // TODO: QWidget *	previousInFocusChain() const
    // TODO: QRect 	rect() const
    // TODO: void 	releaseKeyboard()
    // TODO: void 	releaseMouse()
    // TODO: void 	releaseShortcut(int id)
    removeAction(action: QAction): void {
        this.native.removeAction(action.native);
    }
    // TODO: void 	render(QPaintDevice *target, const QPoint &targetOffset = QPoint(), const QRegion &sourceRegion = QRegion(), QWidget::RenderFlags renderFlags = RenderFlags(DrawWindowBackground | DrawChildren))
    // TODO: void 	render(QPainter *painter, const QPoint &targetOffset = QPoint(), const QRegion &sourceRegion = QRegion(), QWidget::RenderFlags renderFlags = RenderFlags(DrawWindowBackground | DrawChildren))
    // TODO: void 	repaint(int x, int y, int w, int h)
    // TODO: void 	repaint(const QRect &rect)
    // TODO: void 	repaint(const QRegion &rgn)
    repolish(): void {
        this.native.repolish();
    }
    // TODO: void 	resize(const QSize &)
    resize(width: number, height: number): void {
        this.native.resize(width, height);
    }
    // TODO: QScreen *QWidget::screen() const
    setAcceptDrops(on: boolean): void {
        this.native.setAcceptDrops(on);
    }
    // TODO: void 	setAcceptDrops(bool on)
    // TODO: void 	setAccessibleDescription(const QString &description)
    // TODO: void 	setAccessibleName(const QString &name)
    setAttribute(attribute: WidgetAttribute, switchOn: boolean): void {
        // react:⛔️
        return this.native.setAttribute(attribute, switchOn);
    }
    // TODO: void 	setAutoFillBackground(bool enabled)
    // TODO: void 	setBackgroundRole(QPalette::ColorRole role)
    // TODO: void 	setBaseSize(const QSize &)
    // TODO: void 	setBaseSize(int basew, int baseh)
    // TODO: void 	setContentsMargins(int left, int top, int right, int bottom)
    // TODO: void 	setContentsMargins(const QMargins &margins)
    setContextMenuPolicy(contextMenuPolicy: ContextMenuPolicy): void {
        this.setProperty('contextMenuPolicy', contextMenuPolicy);
    }
    setCursor(cursor: CursorShape | QCursor): void {
        if (typeof cursor === 'number') {
            this.native.setCursor(cursor);
        } else {
            this.native.setCursor(cursor.native);
        }
    }
    // TODO: void 	setEditFocus(bool enable)
    // TODO: void 	setFixedHeight(int h)
    // TODO: void 	setFixedSize(const QSize &s)
    setFixedSize(width: number, height: number): void {
        this.native.setFixedSize(width, height);
    }
    // TODO: void 	setFixedWidth(int w)
    setFocusPolicy(policy: FocusPolicy): void {
        this.setProperty('focusPolicy', policy);
    }
    // TODO: void 	setFocusProxy(QWidget *w)
    setFont(font: QFont): void {
        this.native.setProperty('font', font.native);
    }
    // TODO: void 	setForegroundRole(QPalette::ColorRole role)
    // TODO: void 	setGeometry(const QRect &)
    setGeometry(x: number, y: number, w: number, h: number): void {
        this.native.setGeometry(x, y, w, h);
    }
    setGraphicsEffect(effect: QGraphicsEffect<any>): void {
        this._effect = effect;
        this.native.setGraphicsEffect(effect.native);
    }
    // TODO: void 	setInputMethodHints(Qt::InputMethodHints hints)
    setInlineStyle(style: string): void {
        this._rawInlineStyle = style;
        const preparedSheet = prepareInlineStyleSheet(this, style);
        this.native.setStyleSheet(preparedSheet);
    }
    setLayout(parentLayout: NodeLayout<Signals>): void {
        const flexLayout = parentLayout as FlexLayout;
        this.native.setLayout(parentLayout.native);
        if (flexLayout.setFlexNode) {
            //if flex layout set the flexnode
            flexLayout.setFlexNode(this.getFlexNode());
        }
        this._layout = parentLayout;
    }
    // TODO: void 	setLayoutDirection(Qt::LayoutDirection direction)
    // TODO: void 	setLocale(const QLocale &locale)
    // TODO: void 	setMask(const QBitmap &bitmap)
    // TODO: void 	setMask(const QRegion &region)
    setMaximumHeight(maxh: number): void {
        this.native.setMaximumHeight(maxh);
    }
    // TODO: void 	setMaximumSize(const QSize &)
    setMaximumSize(maxw: number, maxh: number): void {
        this.native.setMaximumSize(maxw, maxh);
    }
    setMaximumWidth(maxw: number): void {
        this.native.setMaximumWidth(maxw);
    }
    // TODO: void 	setMinimumSize(const QSize &)
    setMinimumHeight(minh: number): void {
        this.native.setMinimumHeight(minh);
    }
    setMinimumSize(minw: number, minh: number): void {
        this.native.setMinimumSize(minw, minh);
    }
    setMinimumWidth(minw: number): void {
        this.native.setMinimumWidth(minw);
    }
    setMouseTracking(isMouseTracked: boolean): void {
        this.native.setMouseTracking(isMouseTracked);
    }
    setObjectName(objectName: string): void {
        super.setObjectName(objectName);
        if (this._rawInlineStyle) {
            this.setInlineStyle(this._rawInlineStyle);
        }
        this.repolish();
    }
    // TODO: void 	setPalette(const QPalette &)
    // TODO: void 	setParent(QWidget *parent)
    // TODO: void 	setParent(QWidget *parent, Qt::WindowFlags f)
    // TODO: void 	setShortcutAutoRepeat(int id, bool enable = true)
    // TODO: void 	setShortcutEnabled(int id, bool enable = true)
    // TODO: void 	setSizeIncrement(const QSize &)
    // TODO: void 	setSizeIncrement(int w, int h)
    // TODO: void 	setSizePolicy(QSizePolicy)
    setSizePolicy(horizontal: QSizePolicyPolicy, vertical: QSizePolicyPolicy): void {
        this.native.setSizePolicy(horizontal, vertical);
    }
    // TODO: void 	setStatusTip(const QString &)
    // TODO: void 	setStyle(QStyle *style)
    // TODO: void 	setTabletTracking(bool enable)
    // TODO: void 	setToolTip(const QString &)
    // TODO: void 	setToolTipDuration(int msec)
    // TODO: void 	setUpdatesEnabled(bool enable)
    // TODO: void 	setWhatsThis(const QString &)
    // TODO: void 	setWindowFilePath(const QString &filePath)
    setWindowFlag(windowType: WindowType, switchOn: boolean): void {
        // react:⛔️
        return this.native.setWindowFlag(windowType, switchOn);
    }
    // TODO: void 	setWindowFlags(Qt::WindowFlags type)
    setWindowIcon(icon: QIcon): void {
        this.native.setWindowIcon(icon.native);
    }
    // TODO: void 	setWindowModality(Qt::WindowModality windowModality)
    setWindowOpacity(opacity: number): void {
        this.native.setWindowOpacity(opacity);
    }
    // TODO: void 	setWindowRole(const QString &role)
    setWindowState(state: WindowState): void {
        return this.native.setWindowState(state);
    }
    size(): QSize {
        return new QSize(this.native.size());
    }
    // TODO: virtual QSize 	sizeHint() const
    // TODO: QSize 	sizeIncrement() const
    // TODO: QSizePolicy 	sizePolicy() const
    // TODO: void 	stackUnder(QWidget *w)
    // TODO: QString 	statusTip() const
    style(): QStyle {
        return new QStyle(this.native.style());
    }
    styleSheet(): string {
        return this.native.styleSheet();
    }
    testAttribute(attribute: WidgetAttribute): boolean {
        // react:⛔️
        return this.native.testAttribute(attribute);
    }
    // TODO: QString 	toolTip() const
    // TODO: int 	toolTipDuration() const
    // TODO: bool 	underMouse() const
    // TODO: void 	ungrabGesture(Qt::GestureType gesture)
    // TODO: void 	unsetCursor()
    // TODO: void 	unsetLayoutDirection()
    // TODO: void 	unsetLocale()
    // TODO: void 	update(int x, int y, int w, int h)
    // TODO: void 	update(const QRect &rect)
    // TODO: void 	update(const QRegion &rgn)
    updateGeometry(): void {
        // react:⛔️
        this.native.updateGeometry();
    }
    // TODO:     bool 	updatesEnabled() const
    // TODO: QRegion 	visibleRegion() const
    // TODO: QString 	whatsThis() const
    width(): number {
        return this.property('width').toInt();
    }
    // TODO: WId 	winId() const
    // TODO: QWidget *	window() const
    // TODO: QString 	windowFilePath() const
    // TODO: Qt::WindowFlags 	windowFlags() const
    windowHandle(): QWindow | null {
        const handle = this.native.windowHandle();
        if (handle != null) {
            return wrapperCache.get<QWindow>(QWindow, handle);
        }
        return null;
    }
    // TODO: QIcon 	windowIcon() const
    // TODO: Qt::WindowModality 	windowModality() const
    windowOpacity(): number {
        return this.native.windowOpacity();
    }
    // TODO: QString 	windowRole() const
    windowState(): number {
        return this.native.windowState();
    }
    windowTitle(): string {
        return this.native.windowTitle();
    }
    // TODO: Qt::WindowType 	windowType() const
    x(): number {
        return this.property('x').toInt();
    }
    y(): number {
        return this.property('y').toInt();
    }

    // *** Public Slots ***
    close(): boolean {
        return this.native.close();
    }
    hide(): void {
        this.native.hide();
    }
    lower(): void {
        this.native.lower();
    }
    raise(): void {
        this.native.raise();
    }
    repaint(): void {
        // react:⛔️
        this.native.repaint();
    }
    setDisabled(disable: boolean): void {
        this.native.setDisabled(disable);
    }
    setEnabled(enabled: boolean): void {
        this.native.setEnabled(enabled);
    }
    setFocus(reason = FocusReason.OtherFocusReason): void {
        this.native.setFocus(reason);
    }
    setHidden(hidden: boolean): void {
        this.native.setHidden(hidden);
    }
    setStyleSheet(styleSheet: string): void {
        const preparedSheet = StyleSheet.create(styleSheet);
        this.native.setStyleSheet(preparedSheet);
    }
    // TODO: void 	setStyleSheet(const QString &styleSheet)
    setVisible(visible: boolean): void {
        this.native.setVisible(visible);
    }
    setWindowModified(modified: boolean): void {
        this.native.setWindowModified(modified);
    }
    setWindowTitle(title: string): void {
        return this.native.setWindowTitle(title);
    }
    show(): void {
        this.native.show();
    }
    showFullScreen(): void {
        this.native.showFullScreen();
    }
    showMaximized(): void {
        this.native.showMaximized();
    }
    showMinimized(): void {
        this.native.showMinimized();
    }
    showNormal(): void {
        this.native.showNormal();
    }
    update(): void {
        // react:⛔️
        this.native.update();
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
