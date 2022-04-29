import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QRect extends Component {
    constructor(nativeOrX?: NativeElement | number, y = 0, width = 0, height = 0) {
        const count = arguments.length;
        let native: NativeElement;
        if (count > 1) {
            native = new addon.QRect(nativeOrX, y, width, height);
        } else if (checkIfNativeElement(nativeOrX)) {
            native = nativeOrX as NativeElement;
        } else {
            native = new addon.QRect();
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
    left(): number {
        return this.native.left();
    }
    setLeft(height: number): void {
        return this.native.setLeft(height);
    }
    top(): number {
        return this.native.top();
    }
    setTop(height: number): void {
        return this.native.setTop(height);
    }
    static fromQVariant(variant: QVariant): QRect {
        return new QRect(addon.QRect.fromQVariant(variant.native));
    }
}
