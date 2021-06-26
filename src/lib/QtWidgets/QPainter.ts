import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QPainterPath } from '../QtWidgets/QPainterPath';
import { PenStyle } from '../QtEnums';
import { QColor } from '../QtGui/QColor';
import { QPoint } from '../QtCore/QPoint';
import { QPen } from '../QtGui/QPen';
import { QWidget } from './QWidget';
import { QImage } from '../QtGui/QImage';
import { QFont } from '../QtGui/QFont';

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
    native: NativeElement;
    constructor();
    constructor(device: Component);
    constructor(device?: Component) {
        let native;
        if (device) {
            native = new addon.QPainter(device.native);
        } else {
            native = new addon.QPainter();
        }
        super();
        this.native = native;
    }

    drawArc(x: number, y: number, width: number, height: number, startAngle: number, spanAngle: number): void {
        this.native.drawArc(x, y, width, height, startAngle, spanAngle);
    }
    drawImage(x: number, y: number, image: QImage, sx = 0, sy = 0, sw = -1, sh = -1): void {
        this.native.drawImage(x, y, image.native, sx, sy, sw, sh);
    }
    drawText(x: number, y: number, text: string): void {
        return this.native.drawText(x, y, text);
    }

    drawPath(path: QPainterPath): void {
        return this.native.drawPath(path.native);
    }

    strokePath(path: QPainterPath, pen: QPen): void {
        return this.native.strokePath(path.native, pen.native);
    }

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

    end(): boolean {
        return this.native.end();
    }

    endNativePainting(): void {
        this.native.endNativePainting();
    }

    rotate(angle: number): void {
        this.native.rotate(angle);
    }

    setFont(font: QFont): void {
        this.native.setFont(font.native);
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

    drawEllipse(x: number, y: number, width: number, height: number): void {
        return this.native.drawEllipse(x, y, width, height);
    }

    drawPie(x: number, y: number, width: number, height: number, startAngle: number, sweepLength: number): void {
        return this.native.drawPie(x, y, width, height, startAngle, sweepLength);
    }

    drawLine(x1: number, y1: number, x2: number, y2: number): void {
        this.native.drawLine(x1, y1, x2, y2);
    }

    scale(sx: number, sy: number): void {
        this.native.scale(sx, sy);
    }

    translate(dx: number, dy: number): void {
        this.native.translate(dx, dy);
    }

    drawConvexPolygon(points: QPoint[]): void {
        const nativePoints = points.map((point) => point.native);
        this.native.drawConvexPolygon(nativePoints);
    }

    save(): void {
        this.native.save();
    }

    restore(): void {
        this.native.restore();
    }

    setBrush(color: QColor): void {
        this.native.setBrush(color.native);
    }

    fillRect(x: number, y: number, width: number, height: number, color: QColor): void {
        this.native.fillRect(x, y, width, height, color.native);
    }
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
