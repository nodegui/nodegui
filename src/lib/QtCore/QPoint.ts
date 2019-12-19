import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';
export class QPoint extends Component {
    native: NativeElement;
    constructor(arg?: NativeElement | number, y = 0) {
        super();
        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (typeof arg === 'number') {
            this.native = new addon.QPoint(arg, y);
        } else {
            this.native = new addon.QPoint();
        }
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
    static fromQVariant(variant: QVariant): QPoint {
        return new QPoint(addon.QPoint.fromQVariant(variant.native));
    }
}
