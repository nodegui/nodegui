import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';

/**
 
> Lets you paint paths on widgets.

* **This class is a JS wrapper around Qt's [QPainterPath class](https://doc.qt.io/qt-5/qpainterpath.html)**

*/

export class QPainterPath extends Component {
    native: NativeElement;
    constructor() {
        super();
        const native = new addon.QPainterPath();
        this.native = native;
    }

    moveTo(x: number, y: number): void {
        return this.native.moveTo(x, y);
    }

    addRect(x: number, y: number, width: number, height: number): void {
        return this.native.addRect(x, y, width, height);
    }

    lineTo(x: number, y: number): boolean {
        return this.native.lineTo(x, y);
    }

    cubicTo(c1X: number, c1Y: number, c2X: number, c2Y: number, endPointX: number, endPointY: number): boolean {
        return this.native.cubicTo(c1X, c1Y, c2X, c2Y, endPointX, endPointY);
    }

    quadTo(cx: number, cy: number, endPointX: number, endPointY: number): boolean {
        return this.native.quadTo(cx, cy, endPointX, endPointY);
    }

    closeSubpath(): void {
        return this.native.closeSubpath();
    }
}
