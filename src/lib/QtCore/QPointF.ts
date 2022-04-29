import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QPoint } from './QPoint';

/**
 * The QPointF class defines a point in the plane using floating point precision
 *
 * A point is specified by a x coordinate and an y coordinate which can be accessed using the x() and y() functions. The coordinates of the point are specified using floating point numbers for accuracy. The isNull() function returns true if both x and y are set to 0.0. The coordinates can be set (or altered) using the setX() and setY() functions
 *
 * In addition, the QPointF class provides a constructor converting a QPoint object into a QPointF object, and a corresponding toPoint() function which returns a QPoint copy of this point.
 */
export class QPointF extends Component {
    constructor(nativeOrXOrQPoint?: NativeElement | number | QPoint, y = 0) {
        let native: NativeElement;
        if (checkIfNativeElement(nativeOrXOrQPoint)) {
            native = nativeOrXOrQPoint as NativeElement;
        } else if (typeof nativeOrXOrQPoint === 'number') {
            native = new addon.QPointF(nativeOrXOrQPoint, y);
        } else if (nativeOrXOrQPoint instanceof QPoint) {
            native = new addon.QPointF(nativeOrXOrQPoint.x(), nativeOrXOrQPoint.y());
        } else {
            native = new addon.QPointF();
        }
        super(native);
    }
    /**
     * Sets the x coordinate of this point to the given x coordinate.
     */
    setX(value: number): void {
        this.native.setX(value);
    }
    /**
     * Sets the y coordinate of this point to the given y coordinate.
     */
    setY(value: number): void {
        this.native.setY(value);
    }
    /**
     * Returns the x coordinate of this point
     */
    x(): number {
        return this.native.x();
    }
    /**
     * Returns the y coordinate of this point
     */
    y(): number {
        return this.native.y();
    }
    /**
     * Returns true if both the x and y coordinates are set to 0.0 (ignoring the sign); otherwise returns false.
     */
    isNull(): boolean {
        return this.native.isNull();
    }
    /**
     * Returns the sum of the absolute values of x() and y(), traditionally known as the "Manhattan length" of the vector from the origin to the point.
     */
    manhattanLength(): number {
        return this.native.manhattanLength();
    }
    /**
     * Returns a point with x and y coordinates exchanged
     */
    transposed(): QPointF {
        return new QPointF(this.native.transposed());
    }
    /**
     * Rounds the coordinates of this point to the nearest integer, and returns a QPoint object with the rounded coordinates.
     */
    toPoint(): QPoint {
        return new QPoint(this.native.toPoint());
    }
    /**
     * Returns the dot product of p1 and p2
     */
    static dotProduct(p1: QPointF, p2: QPointF): number {
        return addon.QPointF.dotProduct(p1.native, p2.native);
    }
}
