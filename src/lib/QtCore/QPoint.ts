import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

/**
 * The QPoint class defines a point in the plane using integer precision.
 */
export class QPoint extends Component {
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(x?: number, y?: number);
    constructor(nativeOrX?: NativeElement | number, y = 0) {
        let native: NativeElement;
        if (checkIfNativeElement(nativeOrX)) {
            native = nativeOrX as NativeElement;
        } else if (typeof nativeOrX === 'number') {
            native = new addon.QPoint(nativeOrX, y);
        } else {
            native = new addon.QPoint();
        }
        super(native);
    }
    setX(value: number): void {
        this.native.setX(value);
    }
    setY(value: number): void {
        this.native.setY(value);
    }
    x(): number {
        return this.native.x();
    }
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
    transposed(): QPoint {
        return new QPoint(this.native.transposed());
    }
    static fromQVariant(variant: QVariant): QPoint {
        return new QPoint(addon.QPoint.fromQVariant(variant.native));
    }
}
