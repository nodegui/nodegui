import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QPainterPath } from '../QtWidgets/QPainterPath';
import { PenStyle, SizeMode } from '../QtEnums';
import { QBrush } from '../QtGui/QBrush';
import { QColor } from '../QtGui/QColor';
import { QPoint } from '../QtCore/QPoint';
import { QPen } from '../QtGui/QPen';
import { QWidget } from './QWidget';
import { QImage } from '../QtGui/QImage';
import { QPixmap } from '../QtGui/QPixmap';
import { QFont } from '../QtGui/QFont';
import { QRect } from '../QtCore/QRect';
import { QRectF } from '../QtCore/QRectF';

/**

> Lets you paint on widgets.

* **This class is a JS wrapper around Qt's [QPainter class](https://doc.qt.io/qt-5/qpainter.html)**

Note: QPainter works only inside the paint event.

### Example

```javascript

import { FlexLayout, WidgetEventTypes, QMainWindow, QPainter, QWidget } from '@nodegui/nodegui';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.resize(200, 200);

win.addEventListener(WidgetEventTypes.Paint, () => {
    const painter = new QPainter(win);
    painter.drawText(20, 20, 'Hello');
    painter.end();
});
win.show();
(global as any).win = win;

```

## Advanced example:

https://github.com/nodegui/examples/blob/master/nodegui/custom-native-widget-qpainter
*/
export class QPainter extends Component {
    constructor(device?: QWidget | QImage) {
        let native: NativeElement;
        if (device) {
            if (device instanceof QWidget) {
                native = new addon.QPainter('qwidget', device.native);
            } else {
                native = new addon.QPainter('qimage', device.native);
            }
        } else {
            native = new addon.QPainter();
        }
        super(native);
    }

    // *** Public Functions ***
    // TODO: const QBrush &	background() const
    // TODO: Qt::BGMode 	backgroundMode() const
    begin(device: QWidget | QImage): boolean {
        if (device instanceof QWidget) {
            return this.native.begin(device.native, 'widget');
        } else {
            return this.native.begin(device.native, 'image');
        }
    }
    beginNativePainting(): void {
        this.native.beginNativePainting();
    }
    // TODO: QRectF 	boundingRect(const QRectF &rectangle, int flags, const QString &text)
    // TODO: QRect 	boundingRect(const QRect &rectangle, int flags, const QString &text)
    boundingRect(x: number, y: number, w: number, h: number, flags: number, text: string): QRect {
        return new QRect(this.native.boundingRect(x, y, w, h, flags, text));
    }
    /**
     * Version of boundingRect() which takes floating point parameters.
     */
    boundingRectF(x: number, y: number, w: number, h: number, flags: number, text: string): QRect {
        return new QRectF(this.native.boundingRectF(x, y, w, h, flags, text));
    }
    // TODO: QRectF 	boundingRect(const QRectF &rectangle, const QString &text, const QTextOption &option = QTextOption())
    // TODO: const QBrush &	brush() const
    // TODO: QPoint 	brushOrigin() const
    // TODO: QRectF 	clipBoundingRect() const
    // TODO: QPainterPath 	clipPath() const
    // TODO: QRegion 	clipRegion() const
    // TODO: QTransform 	combinedTransform() const
    compositionMode(): CompositionMode {
        return this.native.compositionMode();
    }
    // TODO: QPaintDevice *	device() const
    // TODO: const QTransform &	deviceTransform() const
    // TODO: void 	drawArc(const QRectF &rectangle, int startAngle, int spanAngle)
    drawArc(x: number, y: number, width: number, height: number, startAngle: number, spanAngle: number): void {
        this.native.drawArc(x, y, width, height, startAngle, spanAngle);
    }
    /**
     * Version of drawArc() which takes floating point parameters.
     */
    drawArcF(x: number, y: number, width: number, height: number, startAngle: number, spanAngle: number): void {
        this.native.drawArcF(x, y, width, height, startAngle, spanAngle);
    }
    // TODO: void 	drawChord(const QRectF &rectangle, int startAngle, int spanAngle)
    drawChord(x: number, y: number, width: number, height: number, startAngle: number, spanAngle: number): void {
        this.native.drawChord(x, y, width, height, startAngle, spanAngle);
    }
    /**
     * Version of drawChord() which takes floating point parameters.
     */
    drawChordF(x: number, y: number, width: number, height: number, startAngle: number, spanAngle: number): void {
        this.native.drawChordF(x, y, width, height, startAngle, spanAngle);
    }
    // TODO: void 	drawChord(const QRect &rectangle, int startAngle, int spanAngle)
    drawConvexPolygon(points: QPoint[]): void {
        const nativePoints = points.map((point) => point.native);
        this.native.drawConvexPolygon(nativePoints);
    }
    drawConvexPolygonF(points: QPoint[]): void {
        const nativePoints = points.map((point) => point.native);
        this.native.drawConvexPolygonF(nativePoints);
    }
    // TODO: void 	drawConvexPolygon(const QPolygonF &polygon)
    drawEllipse(x: number, y: number, width: number, height: number): void {
        return this.native.drawEllipse(x, y, width, height);
    }
    /**
     * Version of drawEllipse() which takes floating point parameters.
     */
    drawEllipseF(x: number, y: number, width: number, height: number): void {
        return this.native.drawEllipseF(x, y, width, height);
    }
    // TODO: void 	drawEllipse(const QRectF &rectangle)
    // TODO: void 	drawGlyphRun(const QPointF &position, const QGlyphRun &glyphs)
    drawImage(x: number, y: number, image: QImage, sx = 0, sy = 0, sw = -1, sh = -1): void {
        this.native.drawImage(x, y, image.native, sx, sy, sw, sh);
    }
    /**
     * Version of drawImage() which takes floating point parameters.
     */
    drawImageF(x: number, y: number, image: QImage, sx = 0, sy = 0, sw = -1, sh = -1): void {
        this.native.drawImageF(x, y, image.native, sx, sy, sw, sh);
    }
    drawLine(x1: number, y1: number, x2: number, y2: number): void {
        this.native.drawLine(x1, y1, x2, y2);
    }
    /**
     * Version of drawLine() which takes floating point parameters.
     */
    drawLineF(x1: number, y1: number, x2: number, y2: number): void {
        this.native.drawLineF(x1, y1, x2, y2);
    }
    // TODO: void 	drawLines(const QVector<QLineF> &lines)
    drawPath(path: QPainterPath): void {
        return this.native.drawPath(path.native);
    }
    // TODO: void 	drawPicture(int x, int y, const QPicture &picture)
    drawPie(x: number, y: number, width: number, height: number, startAngle: number, sweepLength: number): void {
        return this.native.drawPie(x, y, width, height, startAngle, sweepLength);
    }
    /**
     * Version of drawPie() which takes floating point parameters.
     */
    drawPieF(x: number, y: number, width: number, height: number, startAngle: number, sweepLength: number): void {
        return this.native.drawPieF(x, y, width, height, startAngle, sweepLength);
    }

    drawPixmap(x: number, y: number, pixmap: QPixmap, sx = 0, sy = 0, sw = -1, sh = -1): void {
        return this.native.drawPixmap(x, y, pixmap.native, sx, sy, sw, sh);
    }
    // TODO: void 	drawPixmapF(int x, int y, int w, int h, const QPixmap &pixmap, int sx, int sy, int sw, int sh)
    // TODO: void 	drawPixmapFragments(const QPainter::PixmapFragment *fragments, int fragmentCount, const QPixmap &pixmap, QPainter::PixmapFragmentHints hints = PixmapFragmentHints())

    drawPoint(x: number, y: number): void {
        this.native.drawPoint(x, y);
    }
    drawPointF(x: number, y: number): void {
        this.native.drawPointF(x, y);
    }
    // TODO: void 	drawPoints(const QPointF *points, int pointCount)
    // TODO: void 	drawPolygon(const QPointF *points, int pointCount, Qt::FillRule fillRule = Qt::OddEvenFill)
    drawRect(x: number, y: number, width: number, height: number): void {
        this.native.drawRect(x, y, width, height);
    }
    /**
     * Version of drawRect() which takes floating point parameters.
     */
    drawRectF(x: number, y: number, width: number, height: number): void {
        this.native.drawRectF(x, y, width, height);
    }
    // TODO: void 	drawRects(const QVector<QRectF> &rectangles)

    drawRoundedRect(
        x: number,
        y: number,
        w: number,
        h: number,
        xRadius: number,
        yRadius: number,
        mode = SizeMode.AbsoluteSize,
    ): void {
        this.native.drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
    }

    drawRoundedRectF(
        x: number,
        y: number,
        w: number,
        h: number,
        xRadius: number,
        yRadius: number,
        mode = SizeMode.AbsoluteSize,
    ): void {
        this.native.drawRoundedRectF(x, y, w, h, xRadius, yRadius, mode);
    }

    // TODO: void 	drawStaticText(int left, int top, const QStaticText &staticText)
    drawText(x: number, y: number, text: string): void {
        return this.native.drawText(x, y, text);
    }
    /**
     * Version of drawText() which takes floating point parameters
     */
    drawTextF(x: number, y: number, text: string): void {
        return this.native.drawTextF(x, y, text);
    }
    // TODO: void 	drawText(int x, int y, int width, int height, int flags, const QString &text, QRect *boundingRect = nullptr)
    // TODO: void 	drawTiledPixmap(int x, int y, int width, int height, const QPixmap &pixmap, int sx = 0, int sy = 0)
    end(): boolean {
        return this.native.end();
    }
    endNativePainting(): void {
        this.native.endNativePainting();
    }
    eraseRect(x: number, y: number, width: number, height: number): void {
        this.native.eraseRect(x, y, width, height);
    }
    fillPath(path: QPainterPath, brush: QBrush): void {
        this.native.fillPath(path.native, brush.native);
    }
    /**
     * Version of eraseRect() which takes floating point parameters.
     */
    eraseRectF(x: number, y: number, width: number, height: number): void {
        this.native.eraseRectF(x, y, width, height);
    }
    fillRect(x: number, y: number, width: number, height: number, color: QColor): void {
        this.native.fillRect(x, y, width, height, color.native);
    }
    /**
     * Version of fillRect() which takes floating point parameters.
     */
    fillRectF(x: number, y: number, width: number, height: number, color: QColor): void {
        this.native.fillRectF(x, y, width, height, color.native);
    }
    // TODO: const QFont &	font() const
    // TODO: QFontInfo 	fontInfo() const
    // TODO: QFontMetrics 	fontMetrics() const
    // TODO: bool 	hasClipping() const
    // CLASS: QPainter
    // TODO: bool 	isActive() const
    // TODO: Qt::LayoutDirection 	layoutDirection() const
    opacity(): number {
        return this.native.opacity();
    }
    // TODO: QPaintEngine *	paintEngine() const
    // TODO: const QPen &	pen() const
    // TODO: QPainter::RenderHints 	renderHints() const
    // TODO: void 	resetTransform()
    restore(): void {
        this.native.restore();
    }
    rotate(angle: number): void {
        this.native.rotate(angle);
    }
    save(): void {
        this.native.save();
    }
    scale(sx: number, sy: number): void {
        this.native.scale(sx, sy);
    }
    // TODO: void 	setBackground(const QBrush &brush)
    // TODO: void 	setBackgroundMode(Qt::BGMode mode)
    setBrush(colorOrBrush: QColor | QBrush): void {
        if (colorOrBrush instanceof QColor) {
            this.native.setBrush(colorOrBrush.native, 'color');
        } else {
            this.native.setBrush(colorOrBrush.native, 'brush');
        }
    }
    setBrushOrigin(x: number, y: number): void {
        this.native.setBrushOrigin(x, y);
    }
    /**
     * Version of setBrushOrigin() which takes floating point parameters.
     */
    setBrushOriginF(x: number, y: number): void {
        this.native.setBrushOriginF(x, y);
    }
    setCompositionMode(mode: CompositionMode): void {
        this.native.setCompositionMode(mode);
    }
    // TODO: void 	setClipRect(int x, int y, int width, int height, Qt::ClipOperation operation = Qt::ReplaceClip)
    // TODO: void 	setClipRegion(const QRegion &region, Qt::ClipOperation operation = Qt::ReplaceClip)
    // TODO: void 	setClipping(bool enable)
    // TODO: void 	setCompositionMode(QPainter::CompositionMode mode)
    setFont(font: QFont): void {
        this.native.setFont(font.native);
    }
    // TODO: void 	setLayoutDirection(Qt::LayoutDirection direction)
    setOpacity(opacity: number): void {
        this.native.setOpacity(opacity);
    }
    setPen(arg: PenStyle | QColor | QPen): void {
        if (typeof arg == 'number') {
            this.native.setPen(arg, 'style');
        } else if (arg instanceof QColor) {
            this.native.setPen(arg.native, 'color');
        } else if (arg instanceof QPen) {
            this.native.setPen(arg.native, 'pen');
        }
    }
    setRenderHint(hint: RenderHint, on = true): void {
        this.native.setRenderHint(hint, on);
    }
    /**
     * Sets the world transformation matrix.
     *
     * @param matrix2x3 An array of length 6 representing a 2x3 transformation
     *                  matrix. The order of elements corresponds to the
     *                  convention used in QTransform, i.e. m11, m12, m21, m22,
     *                  dx, and dy.
     * @param combine   If set then this transform will be combining with the
     *                  curent one. Otherwise it replaces it completely.
     */
    setTransform(matrix2x3: number[] | Float32Array, combine = false): void {
        if (matrix2x3.length !== 6) {
            throw new Error('Parameter "matrix2x3" to QPainter.setTransform() must have length 6.');
        }

        this.native.setTransform(
            'matrix2x3',
            combine,
            matrix2x3[0],
            matrix2x3[1],
            matrix2x3[2],
            matrix2x3[3],
            matrix2x3[4],
            matrix2x3[5],
        );
    }
    // TODO: void 	setViewTransformEnabled(bool enable)
    // TODO: void 	setViewport(const QRect &rectangle)
    // TODO: void 	setViewport(int x, int y, int width, int height)
    // TODO: void 	setWindow(const QRect &rectangle)
    // TODO: void 	setWindow(int x, int y, int width, int height)
    // TODO: void 	setWorldMatrixEnabled(bool enable)
    // TODO: void 	setWorldTransform(const QTransform &matrix, bool combine = false)
    // TODO: void 	shear(qreal sh, qreal sv)
    strokePath(path: QPainterPath, pen: QPen): void {
        return this.native.strokePath(path.native, pen.native);
    }
    // TODO: bool 	testRenderHint(QPainter::RenderHint hint) const
    // TODO: const QTransform &	transform() const
    translate(dx: number, dy: number): void {
        this.native.translate(dx, dy);
    }
    // TODO: bool 	viewTransformEnabled() const
    // TODO: QRect 	viewport() const
    // TODO: QRect 	window() const
    // TODO: bool 	worldMatrixEnabled() const
    // TODO: const QTransform &	worldTransform() const
}

export enum RenderHint {
    Antialiasing = 0x01,
    TextAntialiasing = 0x02,
    SmoothPixmapTransform = 0x04,
    HighQualityAntialiasing = 0x08,
    NonCosmeticDefaultPen = 0x10,
    Qt4CompatiblePainting = 0x20,
    LosslessImageRendering = 0x40,
}

export enum CompositionMode {
    CompositionMode_SourceOver = 0,
    CompositionMode_DestinationOver = 1,
    CompositionMode_Clear = 2,
    CompositionMode_Source = 3,
    CompositionMode_Destination = 4,
    CompositionMode_SourceIn = 5,
    CompositionMode_DestinationIn = 6,
    CompositionMode_SourceOut = 7,
    CompositionMode_DestinationOut = 8,
    CompositionMode_SourceAtop = 9,
    CompositionMode_DestinationAtop = 10,
    CompositionMode_Xor = 11,
    CompositionMode_Plus = 12,
    CompositionMode_Multiply = 13,
    CompositionMode_Screen = 14,
    CompositionMode_Overlay = 15,
    CompositionMode_Darken = 16,
    CompositionMode_Lighten = 17,
    CompositionMode_ColorDodge = 18,
    CompositionMode_ColorBurn = 19,
    CompositionMode_HardLight = 20,
    CompositionMode_SoftLight = 21,
    CompositionMode_Difference = 22,
    CompositionMode_Exclusion = 23,
    RasterOp_SourceOrDestination = 24,
    RasterOp_SourceAndDestination = 25,
    RasterOp_SourceXorDestination = 26,
    RasterOp_NotSourceAndNotDestination = 27,
    RasterOp_NotSourceOrNotDestination = 28,
    RasterOp_NotSourceXorDestination = 29,
    RasterOp_NotSource = 30,
    RasterOp_NotSourceAndDestination = 31,
    RasterOp_SourceAndNotDestination = 32,
    RasterOp_NotSourceOrDestination = 33,
    RasterOp_ClearDestination = 35,
    RasterOp_SetDestination = 36,
    RasterOp_NotDestination = 37,
    RasterOp_SourceOrNotDestination = 34,
}
