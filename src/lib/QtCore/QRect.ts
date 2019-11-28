import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QRect extends Component {
    native: NativeElement;
    constructor(arg?: NativeElement) {
        super();
        if (!arg) {
            this.native = new addon.QRect();
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QRect();
        }
    }
    setWidth(width: number): void {
        return this.native.setWidth(width);
    }
    width(): number {
        return this.native.width();
    }
    setHeight(height: number): void {
        return this.native.setHeight(height);
    }
    height(): number {
        return this.native.height();
    }
    static fromQVariant(variant: QVariant): QRect {
        return new QRect(addon.QRect.fromQVariant(variant.native));
    }
}
