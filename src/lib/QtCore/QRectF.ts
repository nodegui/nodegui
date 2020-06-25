import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QPointF } from './QPointF';
import { QRect } from './QRect';

/**
 * description
 */
export class QRectF extends Component {
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(x?: number, y?: number, width?: number, height?: number);
    constructor(arg?: NativeElement | number, y = 0, width = 0, height = 0) {
        super();
        const count = arguments.length;
        if (count > 1) {
            this.native = new addon.QRectF(arg, y, width, height);
        } else if (count == 1 && checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QRectF();
        }
    }

    /**
    Adds dx1, dy1, dx2 and dy2 respectively to the existing coordinates of the rectangle.
    */
    adjust(dx1: number, dy1: number, dx2: number, dy2: number): void {
        return this.native.adjust(dx1, dy1, dx2, dy2);
    }

    /**
    Returns a new rectangle with dx1, dy1, dx2 and dy2 added respectively to the existing coordinates of this rectangle.
    */
    adjusted(dx1: number, dy1: number, dx2: number, dy2: number): QRectF {
        return new QRectF(this.native.adjusted(dx1, dy1, dx2, dy2));
    }

    /**
    Returns the y-coordinate of the rectangle's bottom edge.
    */
    bottom(): number {
        return this.native.bottom();
    }

    /**
    Returns the position of the rectangle's bottom-left corner.
    */
    bottomLeft(): QPointF {
        return new QPointF(this.native.bottomLeft());
    }

    /**
    Returns the position of the rectangle's bottom-right corner.
    */
    bottomRight(): QPointF {
        return new QPointF(this.native.bottomRight());
    }

    /**
    Returns the center point of the rectangle.
    */
    center(): QPointF {
        return new QPointF(this.native.center());
    }

    /**
     * Returns true if the given point is inside or on the edge of the rectangle; otherwise returns false.
     */
    contains(arg0: QRectF | number | QPointF, y: number): boolean {
        if (arg0 instanceof QRectF) {
            return this.native.contains_QRect(arg0.native);
        } else if (arg0 instanceof QPointF) {
            return this.native.contains_QPoint(arg0.native);
        }
        return this.native.contains(arg0, y);
    }

    /**
    Returns the height of the rectangle.
    */
    height(): number {
        return this.native.height();
    }

    /**
    Returns the intersection of this rectangle and the given rectangle. Note that r.intersected(s) is equivalent to r & s.
    */
    intersected(rectangle: QRectF): QRectF {
        return new QRectF(this.native.intersected(rectangle.native));
    }

    /**
    Returns true if this rectangle intersects with the given rectangle (i.e. there is a non-empty area of overlap between them), otherwise returns false.
    */
    intersects(rectangle: QRectF): boolean {
        return this.native.intersects(rectangle.native);
    }

    /**
    Returns true if the rectangle is empty, otherwise returns false.
    */
    isEmpty(): boolean {
        return this.native.isEmpty();
    }

    /**
    Returns true if the rectangle is a null rectangle, otherwise returns false.
    */
    isNull(): boolean {
        return this.native.isNull();
    }

    /**
    Returns true if the rectangle is valid, otherwise returns false.
    */
    isValid(): boolean {
        return this.native.isValid();
    }

    /**
    Returns the x-coordinate of the rectangle's left edge. Equivalent to x().
    */
    left(): number {
        return this.native.left();
    }

    /**
    Moves the rectangle vertically, leaving the rectangle's bottom edge at the given y coordinate. The rectangle's size is unchanged.
    */
    moveBottom(y: number): void {
        return this.native.moveBottom(y);
    }

    /**
    Moves the rectangle, leaving the bottom-left corner at the given position. The rectangle's size is unchanged.
    */
    moveBottomLeft(position: QPointF): void {
        return this.native.moveBottomLeft(position.native);
    }

    /**
    Moves the rectangle, leaving the bottom-right corner at the given position. The rectangle's size is unchanged.
    */
    moveBottomRight(position: QPointF): void {
        return this.native.moveBottomRight(position.native);
    }

    /**
    Moves the rectangle, leaving the center point at the given position. The rectangle's size is unchanged.
    */
    moveCenter(position: QPointF): void {
        return this.native.moveCenter(position.native);
    }

    /**
    Moves the rectangle horizontally, leaving the rectangle's left edge at the given x coordinate. The rectangle's size is unchanged.
    */
    moveLeft(x: number): void {
        return this.native.moveLeft(x);
    }

    /**
    Moves the rectangle horizontally, leaving the rectangle's right edge at the given x coordinate. The rectangle's size is unchanged.
    */
    moveRight(x: number): void {
        return this.native.moveRight(x);
    }

    /**
    Moves the rectangle, leaving the top-left corner at the given position (x, y). The rectangle's size is unchanged.
    */
    moveTo(xOrPos: number | QPointF, y: number): void {
        if (xOrPos instanceof QPointF) {
            return this.native.moveTo_QPoint(xOrPos.native);
        }
        return this.native.moveTo(xOrPos, y);
    }

    /**
    Moves the rectangle vertically, leaving the rectangle's top line at the given y coordinate. The rectangle's size is unchanged.
    */
    moveTop(y: number): void {
        return this.native.moveTop(y);
    }

    /**
    Moves the rectangle, leaving the top-left corner at the given position. The rectangle's size is unchanged.
    */
    moveTopLeft(position: QPointF): void {
        return this.native.moveTopLeft(position.native);
    }

    /**
    Moves the rectangle, leaving the top-right corner at the given position. The rectangle's size is unchanged.
    */
    moveTopRight(position: QPointF): void {
        return this.native.moveTopRight(position.native);
    }

    /**
    Returns a normalized rectangle; i.e., a rectangle that has a non-negative width and height.
    */
    normalized(): QRectF {
        return new QRectF(this.native.normalized());
    }

    /**
    Returns the x-coordinate of the rectangle's right edge.
    */
    right(): number {
        return this.native.right();
    }

    /**
    Sets the bottom edge of the rectangle to the given y coordinate. May change the height, but will never change the top edge of the rectangle.
    */
    setBottom(y: number): void {
        return this.native.setBottom(y);
    }

    /**
    Set the bottom-left corner of the rectangle to the given position. May change the size, but will never change the top-right corner of the rectangle.
    */
    setBottomLeft(position: QPointF): void {
        return this.native.setBottomLeft(position.native);
    }

    /**
    Set the bottom-right corner of the rectangle to the given position. May change the size, but will never change the top-left corner of the rectangle.
    */
    setBottomRight(position: QPointF): void {
        return this.native.setBottomRight(position.native);
    }

    /**
    Sets the coordinates of the rectangle's top-left corner to (x1, y1), and the coordinates of its bottom-right corner to (x2, y2).
    */
    setCoords(x1: number, y1: number, x2: number, y2: number): void {
        return this.native.setCoords(x1, y1, x2, y2);
    }

    /**
    Sets the height of the rectangle to the given height. The bottom edge is changed, but not the top one.
    */
    setHeight(height: number): void {
        return this.native.setHeight(height);
    }

    /**
    Sets the left edge of the rectangle to the given x coordinate. May change the width, but will never change the right edge of the rectangle.
    */
    setLeft(x: number): void {
        return this.native.setLeft(x);
    }

    /**
    Sets the coordinates of the rectangle's top-left corner to (x, y), and its size to the given width and height.
    */
    setRect(x: number, y: number, width: number, height: number): void {
        return this.native.setRect(x, y, width, height);
    }

    /**
    Sets the right edge of the rectangle to the given x coordinate. May change the width, but will never change the left edge of the rectangle.
    */
    setRight(x: number): void {
        return this.native.setRight(x);
    }

    /**
    Sets the top edge of the rectangle to the given y coordinate. May change the height, but will never change the bottom edge of the rectangle.
    */
    setTop(y: number): void {
        return this.native.setTop(y);
    }

    /**
    Set the top-left corner of the rectangle to the given position. May change the size, but will never change the bottom-right corner of the rectangle.
    */
    setTopLeft(position: QPointF): void {
        return this.native.setTopLeft(position.native);
    }

    /**
    Set the top-right corner of the rectangle to the given position. May change the size, but will never change the bottom-left corner of the rectangle.
    */
    setTopRight(position: QPointF): void {
        return this.native.setTopRight(position.native);
    }

    /**
    Sets the width of the rectangle to the given width. The right edge is changed, but not the left one.
    */
    setWidth(width: number): void {
        return this.native.setWidth(width);
    }

    /**
    Sets the left edge of the rectangle to the given x coordinate. May change the width, but will never change the right edge of the rectangle.
    */
    setX(x: number): void {
        return this.native.setX(x);
    }

    /**
    Sets the top edge of the rectangle to the given y coordinate. May change the height, but will never change the bottom edge of the rectangle.
    */
    setY(y: number): void {
        return this.native.setY(y);
    }

    /**
    Returns a QRect based on the values of this rectangle that is the smallest possible integer rectangle that completely contains this rectangle.
    */
    toAlignedRect(): QRect {
        return new QRect(this.native.toAlignedRect());
    }

    /**
    Returns a QRect based on the values of this rectangle. Note that the coordinates in the returned rectangle are rounded to the nearest integer.
    */
    toRect(): QRect {
        return new QRect(this.native.toRect());
    }

    /**
    Returns the y-coordinate of the rectangle's top edge. Equivalent to y().
    */
    top(): number {
        return this.native.top();
    }

    /**
    Returns the position of the rectangle's top-left corner.
    */
    topLeft(): QPointF {
        return new QPointF(this.native.topLeft());
    }

    /**
    Returns the position of the rectangle's top-right corner.
    */
    topRight(): QPointF {
        return new QPointF(this.native.topRight());
    }

    /**
    Moves the rectangle dx along the x-axis and dy along the y-axis, relative to the current position. Positive values move the rectangle to the right and downwards.
    */
    translate(dxOrOffset: number | QPointF, dy: number): void {
        if (dxOrOffset instanceof QPointF) {
            return this.native.translate_QPoint(dxOrOffset.native);
        }
        return this.native.translate(dxOrOffset, dy);
    }
    /**
    Returns a copy of the rectangle that is translated dx along the x axis and dy along the y axis, relative to the current position. Positive values move the rectangle to the right and down.
    */
    translated(dxOrOffset: number | QPointF, dy: number): QRectF {
        if (dxOrOffset instanceof QPointF) {
            return new QRectF(this.native.translated_QPoint(dxOrOffset.native));
        }
        return new QRectF(this.native.translated(dxOrOffset, dy));
    }

    /**
    Returns a copy of the rectangle that has its width and height exchanged:
    */
    transposed(): QRectF {
        return new QRectF(this.native.transposed());
    }

    /**
    Returns the bounding rectangle of this rectangle and the given rectangle.
    */
    united(rectangle: QRectF): QRectF {
        return new QRectF(this.native.united(rectangle));
    }

    /**
    Returns the width of the rectangle.
    */
    width(): number {
        return this.native.width();
    }

    /**
    Returns the x-coordinate of the rectangle's left edge. Equivalent to left().
    */
    x(): number {
        return this.native.x();
    }

    /**
    Returns the y-coordinate of the rectangle's top edge. Equivalent to top().
    */
    y(): number {
        return this.native.y();
    }
}
