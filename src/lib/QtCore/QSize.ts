import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QSize extends Component {
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(width?: number, height?: number);
    constructor(arg?: number | NativeElement, height?: number) {
        super();
        if (!arg) {
            this.native = new addon.QSize();
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QSize(arg, height);
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
    static fromQVariant(variant: QVariant): QSize {
        return new QSize(addon.QSize.fromQVariant(variant.native));
    }
}
