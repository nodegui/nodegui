import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QRect extends Component {
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(x?: number, y?: number, width?: number, height?: number);
    constructor(arg?: NativeElement | number, y = 0, width = 0, height = 0) {
        super();
        const count = arguments.length;
        if (count > 1) {
            this.native = new addon.QRect(arg, y, width, height);
        } else if (count == 1 && checkIfNativeElement(arg)) {
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
