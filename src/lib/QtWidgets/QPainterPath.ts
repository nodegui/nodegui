import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { SizeMode, FillRule } from '../QtEnums';
import { QFont } from '../QtGui/QFont';

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

    addEllipse(x: number, y: number, width: number, height: number): void {
        return this.native.addEllipse(x, y, width, height);
    }

    addPath(path: QPainterPath): void {
        return this.native.addPath(path);
    }

    addRoundedRect(
        x: number,
        y: number,
        width: number,
        height: number,
        xRadius: number,
        yRadius: number,
        mode: SizeMode,
    ): void {
        return this.native.addRoundedRect(x, y, width, height, xRadius, yRadius, mode);
    }

    addText(x: number, y: number, font: QFont, text: string): void {
        return this.native.addText(x, y, font, text);
    }

    angleAtPercent(t: number): number {
        return this.native.angleAtPercent(t);
    }

    arcMoveTo(x: number, y: number, width: number, height: number, angle: number): void {
        return this.native.arcMoveTo(x, y, width, height, angle);
    }
    arcTo(x: number, y: number, width: number, height: number, startAngle: number, sweepLength: number): void {
        return this.native.arcTo(x, y, width, height, startAngle, sweepLength);
    }
    boundingRect(): { x: number; y: number; width: number; height: number } {
        return this.native.boundingRect();
    }
    capacity(): number {
        return this.native.capacity();
    }
    clear(): void {
        return this.native.clear();
    }
    connectPath(path: QPainterPath): void {
        return this.native.connectPath(path);
    }
    controlPointRect(): { x: number; y: number; width: number; height: number } {
        return this.native.controlPointRect();
    }
    currentPosition(): { x: number; y: number } {
        return this.native.currentPosition();
    }
    elementCount(): number {
        return this.native.elementCount();
    }
    fillRule(): FillRule {
        return this.native.fillRule();
    }
    intersects(path: QPainterPath): boolean {
        return this.native.intersects(path);
    }
    isEmpty(): boolean {
        return this.native.isEmpty();
    }
    length(): number {
        return this.native.length();
    }
    percentAtLength(len: number): number {
        return this.native.percentAtLength(len);
    }
    pointAtPercent(p: number): { x: number; y: number } {
        return this.native.pointAtPercent(p);
    }
    reserve(size: number): void {
        return this.native.reserve(size);
    }
    setElementPositionAt(index: number, x: number, y: number): void {
        return this.native.setElementPositionAt(index, x, y);
    }
    setFillRule(fillRule: FillRule): void {
        return this.native.setFillRule(fillRule);
    }
    slopeAtPercent(p: number): number {
        return this.native.slopeAtPercent(p);
    }
    swap(other: QPainterPath): void {
        return this.native.swap(other);
    }
    translate(x: number, y: number): void {
        return this.native.translate(x, y);
    }
}
