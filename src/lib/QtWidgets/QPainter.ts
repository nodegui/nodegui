import addon from '../utils/addon';
import {Component, NativeElement} from '../core/Component';

export class QPainter extends Component {
    native: NativeElement;

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

    end(): void {
        this.native.end();
    }

    rotate(angle: Number): void {
        this.native.rotate(angle);
    }

    setPen(color: Number): void {
        this.native.setPen(color);
    }

    drawLine(x1: Number, y1: number, x2: Number, y2: Number): void {
        this.native.drawLine(x1, y1, x2, y2);
    }

    scale(sx: Number, sy: Number): void {
        this.native.scale(sx, sy);
    }

    translate(dx: Number, dy: Number): void {
        this.native.translate(dx, dy);
    }

}
