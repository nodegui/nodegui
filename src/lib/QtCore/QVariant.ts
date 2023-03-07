import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QRect } from './QRect';

export type QVariantType = NativeElement | string | string[] | number | boolean | QRect;

export class QVariant extends Component {
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(variant: QVariantType);
    constructor(arg?: QVariantType | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg) && arg instanceof addon.QVariant) {
            native = arg as NativeElement;
        } else if (arg) {
            native = new addon.QVariant.convertToQVariant(arg);
        } else {
            native = new addon.QVariant();
        }
        super(native);
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

/**
 * Get the correct native object which should be passed down to the
 * C++ wrapper from a QVariantType object.
 */
export function nativeObjectFromVariantType(obj: QVariantType): any {
    if (obj instanceof QRect) {
        return obj.native;
    }
    return obj;
}
