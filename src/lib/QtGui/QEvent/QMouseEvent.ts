import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';

export class QMouseEvent {
    native: NativeElement;
    constructor(event: NativeRawPointer<'QEvent'>) {
        this.native = new addon.QMouseEvent(event);
    }
    button(): number {
        return this.native.button();
    }
    x(): number {
        return this.native.x();
    }
    y(): number {
        return this.native.y();
    }
    globalX(): number {
        return this.native.globalX();
    }
    globalY(): number {
        return this.native.globalY();
    }
}
