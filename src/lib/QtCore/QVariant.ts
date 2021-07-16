import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';

export type QVariantType = NativeElement | string | string[] | number | boolean;

export class QVariant extends Component {
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(variant: QVariantType);
    constructor(arg?: QVariantType | NativeElement) {
        super();
        if (checkIfNativeElement(arg) && arg instanceof addon.QVariant) {
            this.native = arg as NativeElement;
        } else if (arg) {
            this.native = new addon.QVariant.converToQVariant(arg);
        } else {
            this.native = new addon.QVariant();
        }
    }
    toString(): string {
        return this.native.toString();
    }
    toInt(): number {
        return this.native.toInt();
    }
    toDouble(): number {
        return this.native.toDouble();
    }
    toBool(): boolean {
        return this.native.toBool();
    }
    toStringList(): string[] {
        return this.native.toStringList();
    }
}
