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
import memoizeOne from 'memoize-one';
import { QGraphicsEffect } from './QGraphicsEffect';
import { wrapperCache } from '../core/WrapperCache';
import { QSizePolicyPolicy } from './QSizePolicy';
import { QStyle } from '../QtGui/QStyle';
import { QWindow } from '../QtGui/QWindow';

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
export class QWidget<Signals extends QWidgetSignals = QWidgetSignals> extends YogaWidget<Signals> {
    _layout?: NodeLayout<Signals>;
    _rawInlineStyle: string;
    type: string;
    private _effect?: QGraphicsEffect<any> | null;

    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        let parent: QWidget = null;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as QWidget) {
            parent = arg as QWidget;
            native = new addon.QWidget(parent.native);
        } else {
            native = new addon.QWidget();
        }
        super(native);
        this._rawInlineStyle = '';
        this.type = 'widget';

        this.setNodeParent(parent);

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
        return this.property('acceptDrops').toBool();
    }
    accessibleDescription(): string {
        return this.property('accessibleDescription').toString();
    }
    accessibleName(): string {
        return this.property('accessibleName').toString();
    }
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
    autoFillBackground(): boolean {
        return this.property('autoFillBackground').toBool();
    }
    // CLASS: QWidget
    // TODO: QPalette::ColorRole 	backgroundRole() const
    // TODO: QBackingStore *	backingStore() const
    baseSize(): QSize {
        return QSize.fromQVariant(this.property('baseSize'));
    }
    // TODO: QWidget *	childAt(int x, int y) const
    // TODO: QWidget *	childAt(const QPoint &p) const
    childrenRect(): QRect {
        return QRect.fromQVariant(this.property('childrenRect'));
    }
    // TODO: QRegion 	childrenRegion() const
    clearFocus(): void {
        this.native.clearFocus();
    }
    clearMask(): void {
        this.native.clearMask();
    }
    // TODO: QMargins 	contentsMargins() const
    // TODO: QRect 	contentsRect() const
    contextMenuPolicy(): ContextMenuPolicy {
        return this.property('contextMenuPolicy').toInt();
    }
    // TODO: QCursor 	cursor() const
    // TODO: WId 	effectiveWinId() const
    ensurePolished(): void {
        this.native.ensurePolished();
    }
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
    frameSize(): QSize {
        return QSize.fromQVariant(this.property('frameSize'));
    }
    geometry(): QRect {
        return QRect.fromQVariant(this.property('geometry'));
    }
    // TODO: QPixmap 	grab(const QRect &rectangle = QRect(QPoint(0, 0), QSize(-1, -1)))
    // TODO: void 	grabGesture(Qt::GestureType gesture, Qt::GestureFlags flags = Qt::GestureFlags())
    grabKeyboard(): void {
        this.native.grabKeyboard();
    }
    grabMouse(): void {
        this.native.grabMouse();
    }
    // TODO: void 	grabMouse(const QCursor &cursor)
    // TODO: int 	grabShortcut(const QKeySequence &key, Qt::ShortcutContext context = Qt::WindowShortcut)
    // TODO: QGraphicsEffect *	graphicsEffect() const
    // TODO: QGraphicsProxyWidget *	graphicsProxyWidget() const
    hasFocus(): boolean {
        return this.property('focus').toBool();
    }
    hasHeightForWidth(): boolean {
        return this.native.hasHeightForWidth();
    }
    hasMouseTracking(): boolean {
        return this.property('mouseTracking').toBool();
    }
    hasTabletTracking(): boolean {
        return this.property('tabletTracking').toBool();
    }
    height(): number {
        return this.property('height').toInt();
    }
    heightForWidth(w: number): number {
        return this.native.heightForWidth(w);
    }
    // TODO: Qt::InputMethodHints 	inputMethodHints() const
    // TODO: virtual QVariant 	inputMethodQuery(Qt::InputMethodQuery query) const
    // TODO: void 	insertAction(QAction *before, QAction *action)
    // TODO: void 	insertActions(QAction *before, QList<QAction *> actions)
    isActiveWindow(): boolean {
        return this.property('isActiveWindow').toBool();
    }
    // TODO: bool 	isAncestorOf(const QWidget *child) const
    isEnabled(): boolean {
        return this.property('enabled').toBool();
    }
    // TODO: bool 	isEnabledTo(const QWidget *ancestor) const
    isFullScreen(): boolean {
        return this.property('fullScreen').toBool();
    }
    isHidden(): boolean {
        return !this.property('visible').toBool();
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
        return this.property('visible').toBool();
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
    mapFrom(parent: QWidget, pos: QPoint): QPoint {
        return new QPoint(this.native.mapFrom(parent.native, pos.native));
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
    mapTo(parent: QWidget, pos: QPoint): QPoint {
        return new QPoint(this.native.mapTo(parent.native, pos.native));
    }
    // TODO: QRegion 	mask() const
    maximumHeight(): number {
        return this.property('maximumHeight').toInt();
    }
    maximumSize(): QSize {
        return QSize.fromQVariant(this.property('maximumSize'));
    }
    maximumWidth(): number {
        return this.property('maximumWidth').toInt();
    }
    minimumHeight(): number {
        return this.property('minimumHeight').toInt();
    }
    minimumSize(): QSize {
        return QSize.fromQVariant(this.property('minimumSize'));
    }
    minimumSizeHint(): QSize {
        return new QSize(this.native.minimumSizeHint());
    }
    minimumWidth(): number {
        return this.property('minimumWidth').toInt();
    }
    // TODO: void 	move(const QPoint &)
    move(x: number, y: number): void {
        this.native.move(x, y);
    }
    // TODO: QWidget *	nativeParentWidget() const
    // TODO: QWidget *	nextInFocusChain() const
    normalGeometry(): QRect {
        return QRect.fromQVariant(this.property('normalGeometry'));
    }
    // TODO: void 	overrideWindowFlags(Qt::WindowFlags flags)
    // TODO: const QPalette &	palette() const
    // TODO: QWidget *	parentWidget() const

    // PROP: QWidget
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    // TODO: QWidget *	previousInFocusChain() const
    rect(): QRect {
        return QRect.fromQVariant(this.property('rect'));
    }
    releaseKeyboard(): void {
        this.native.releaseKeyboard();
    }
    releaseMouse(): void {
        this.native.releaseMouse();
    }
    releaseShortcut(id: number): void {
        this.native.releaseShortcut(id);
    }
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
        this.setProperty('acceptDrops', on);
    }
    setAccessibleDescription(description: string): void {
        this.setProperty('accessibleDescription', description);
    }
    setAccessibleName(name: string): void {
        this.setProperty('accessibleName', name);
    }
    setAttribute(attribute: WidgetAttribute, switchOn: boolean): void {
        // react:⛔️
        return this.native.setAttribute(attribute, switchOn);
    }
    setAutoFillBackground(enabled: boolean): void {
        this.setProperty('autoFillBackground', enabled);
    }
    // TODO: void 	setBackgroundRole(QPalette::ColorRole role)
    setBaseSize(size: QSize): void {
        this.setProperty('baseSize', size.native);
    }
    // TODO: void 	setBaseSize(int basew, int baseh)
    setContentsMargins(left: number, top: number, right: number, bottom: number): void {
        this.native.setContentsMargins(left, top, right, bottom);
    }
    // TODO: void 	setContentsMargins(const QMargins &margins)
    setContextMenuPolicy(contextMenuPolicy: ContextMenuPolicy): void {
        this.setProperty('contextMenuPolicy', contextMenuPolicy);
    }
    // PROP: QWidget
    setCursor(cursor: CursorShape | QCursor): void {
        if (typeof cursor === 'number') {
            this.native.setCursor(cursor);
        } else {
            this.native.setCursor(cursor.native);
        }
    }
    // Embedded only: void setEditFocus(bool enable)
    setFixedHeight(h: number): void {
        this.native.setFixedHeight(h);
    }
    // TODO: void 	setFixedSize(const QSize &s)
    setFixedSize(width: number, height: number): void {
        this.native.setFixedSize(width, height);
    }
    setFixedWidth(w: number): void {
        this.native.setFixedWidth(w);
    }
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
    setInlineStyle(style: string, postprocess = true): void {
        if (postprocess) {
            this._rawInlineStyle = style;
            const preparedSheet = prepareInlineStyleSheet(this, style);
            this.native.setStyleSheet(preparedSheet);
        } else {
            this.native.setStyleSheet(style);
        }
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
        this.setProperty('maximumHeight', maxh);
    }
    // PROP: QWidget
    // TODO: void 	setMaximumSize(const QSize &)
    setMaximumSize(maxw: number, maxh: number): void {
        this.native.setMaximumSize(maxw, maxh);
    }
    setMaximumWidth(maxw: number): void {
        this.setProperty('maximumWidth', maxw);
    }
    // PROP: QWidget
    // TODO: void 	setMinimumSize(const QSize &size)
    setMinimumHeight(minh: number): void {
        this.setProperty('minimumHeight', minh);
    }
    setMinimumSize(minw: number, minh: number): void {
        this.native.setMinimumSize(minw, minh);
    }
    setMinimumWidth(minw: number): void {
        this.setProperty('minimumWidth', minw);
    }
    setMouseTracking(isMouseTracked: boolean): void {
        this.setProperty('mouseTracking', isMouseTracked);
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
    setShortcutAutoRepeat(id: number, enable = true): void {
        this.native.setShortcutAutoRepeat(id, enable);
    }
    setShortcutEnabled(id: number, enable = true): void {
        this.native.setShortcutEnabled(id, enable);
    }
    setSizeIncrement(w_or_size: QSize | number, h = 0): void {
        if (typeof w_or_size === 'number') {
            this.native.setSizeIncrement(w_or_size, h);
        } else {
            this.setProperty('sizeIncrement', w_or_size.native);
        }
    }
    // TODO: void 	setSizePolicy(QSizePolicy)
    setSizePolicy(horizontal: QSizePolicyPolicy, vertical: QSizePolicyPolicy): void {
        this.native.setSizePolicy(horizontal, vertical);
    }
    setStatusTip(statusTip: string): void {
        this.setProperty('statusTip', statusTip);
    }
    // TODO: void 	setStyle(QStyle *style)
    setTabletTracking(enable: boolean): void {
        this.setProperty('tabletTracking', enable);
    }
    setToolTip(text: string): void {
        this.native.setProperty('toolTip', text);
    }
    setToolTipDuration(msec: number): void {
        this.setProperty('toolTipDuration', msec);
    }
    setUpdatesEnabled(enable: boolean): void {
        this.native.setProperty('updatesEnabled', enable);
    }
    setWhatsThis(whatsThis: string): void {
        this.setProperty('whatsThis', whatsThis);
    }
    setWindowFilePath(filePath: string): void {
        this.setProperty('windowFilePath', filePath);
    }
    setWindowFlag(windowType: WindowType, switchOn: boolean): void {
        // react:⛔️
        return this.native.setWindowFlag(windowType, switchOn);
    }
    // PROP: QWidget
    // TODO: void 	setWindowFlags(Qt::WindowFlags type)
    setWindowIcon(icon: QIcon): void {
        this.native.setWindowIcon(icon.native);
    }
    // PROP: QWidget
    // TODO: void 	setWindowModality(Qt::WindowModality windowModality)
    setWindowOpacity(opacity: number): void {
        this.native.setWindowOpacity(opacity);
    }
    setWindowRole(role: string): void {
        this.native.setWindowRole(role);
    }
    setWindowState(state: WindowState): void {
        return this.native.setWindowState(state);
    }
    size(): QSize {
        return new QSize(this.native.size());
    }
    sizeHint(): QSize {
        return QSize.fromQVariant(this.property('sizeHint'));
    }
    sizeIncrement(): QSize {
        return QSize.fromQVariant(this.property('sizeIncrement'));
    }
    // PROP: QWidget
    // TODO: QSizePolicy 	sizePolicy() const
    // TODO: void 	stackUnder(QWidget *w)
    statusTip(): string {
        return this.property('statusTip').toString();
    }
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
    toolTip(): string {
        return this.property('toolTip').toString();
    }
    toolTipDuration(): number {
        return this.property('toolTipDuration').toInt();
    }
    // TODO: void 	ungrabGesture(Qt::GestureType gesture)
    underMouse(): boolean {
        return this.native.underMouse();
    }
    unsetCursor(): void {
        this.native.unsetCursor();
    }
    unsetLayoutDirection(): void {
        this.native.unsetLayoutDirection();
    }
    unsetLocale(): void {
        this.native.unsetLocale();
    }
    // TODO: void 	update(int x, int y, int w, int h)
    // TODO: void 	update(const QRect &rect)
    // TODO: void 	update(const QRegion &rgn)
    updateGeometry(): void {
        // react:⛔️
        this.native.updateGeometry();
    }
    updatesEnabled(): boolean {
        return this.property('updatesEnabled').toBool();
    }
    // TODO: QRegion 	visibleRegion() const
    whatsThis(): string {
        return this.property('whatsThis').toString();
    }
    width(): number {
        return this.property('width').toInt();
    }
    winId(): number {
        return this.native.winId();
    }
    // TODO: QWidget *	window() const
    windowFilePath(): string {
        return this.property('windowFilePath').toString();
    }
    // PROP: QWidget
    // TODO: Qt::WindowFlags 	windowFlags() const
    windowHandle(): QWindow | null {
        const handle = this.native.windowHandle();
        if (handle != null) {
            return wrapperCache.get<QWindow>(QWindow, handle);
        }
        return null;
    }
    windowIcon(): QIcon {
        return QIcon.fromQVariant(this.property('windowIcon'));
    }
    // PROP: QWidget
    // TODO: Qt::WindowModality 	windowModality() const
    windowOpacity(): number {
        return this.native.windowOpacity();
    }
    windowRole(): string {
        return this.native.windowRole();
    }
    windowState(): WindowState {
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
        this.setEnabled(!disable);
    }
    setEnabled(enabled: boolean): void {
        this.setProperty('enabled', enabled);
    }
    setFocus(reason = FocusReason.OtherFocusReason): void {
        this.native.setFocus(reason);
    }
    setHidden(hidden: boolean): void {
        this.native.setHidden(hidden);
    }
    setStyleSheet(styleSheet: string, postprocess = true): void {
        if (postprocess) {
            const preparedSheet = StyleSheet.create(styleSheet);
            this.native.setStyleSheet(preparedSheet);
        } else {
            this.native.setStyleSheet(styleSheet);
        }
    }
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
