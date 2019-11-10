import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';

type QVariantType = NativeElement | Component | string | number | boolean;

export class QVariant extends Component {
    native: NativeElement;
    constructor(arg?: QVariantType) {
        super();
        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (arg) {
            const component = (arg as Component).native || arg;
            this.native = new addon.QVariant(component);
        } else {
            this.native = new addon.QVariant();
        }
    }
    toString(): string {
        return this.native.toString();
    }
    toInt(): string {
        return this.native.toInt();
    }
    toDouble(): string {
        return this.native.toDouble();
    }
    toBool(): string {
        return this.native.toBool();
    }
}
