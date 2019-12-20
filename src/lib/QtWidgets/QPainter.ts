import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { PenStyle } from '../QtEnums';
import { QColor } from '../QtCore/QColor';
import { QPoint } from '../QtCore/QPoint';

export enum RenderHint {
    Antialiasing = 0x01,
    TextAntialiasing = 0x02,
    SmoothPixmapTransform = 0x04,
    HighQualityAntialiasing = 0x08,
    NonCosmeticDefaultPen = 0x10,
    Qt4CompatiblePainting = 0x20,
    LosslessImageRendering = 0x40,
}

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

    drawText(x: number, y: number, text: string): void {
        return this.native.drawText(x, y, text);
    }

    begin(device: Component): boolean {
        return this.native.begin(device.native);
    }

    end(): boolean {
        return this.native.end();
    }

    rotate(angle: number): void {
        this.native.rotate(angle);
    }

    setPen(arg: PenStyle | QColor): void {
        if (typeof arg == 'number') {
            this.native.setPen(arg, 'style');
        } else if (arg instanceof QColor) {
            this.native.setPen(arg.native, 'color');
        }
    }

    setRenderHint(hint: RenderHint, on = true): void {
        this.native.setRenderHint(hint, on);
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
        const nativePoints = points.map(point => point.native);
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
}
