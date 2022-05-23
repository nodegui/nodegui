import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QSize extends Component {
    constructor(nativeElement: NativeElement);
    constructor(width?: number, height?: number);
    constructor(nativeOrWidth?: number | NativeElement, height?: number) {
        let native: NativeElement;
        if (!nativeOrWidth) {
            native = new addon.QSize();
        } else if (checkIfNativeElement(nativeOrWidth)) {
            native = nativeOrWidth as NativeElement;
        } else {
            native = new addon.QSize(nativeOrWidth, height);
        }
        super(native);
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
