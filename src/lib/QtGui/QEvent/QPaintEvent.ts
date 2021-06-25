import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';
import { QRect } from '../../..';

export class QPaintEvent {
    native: NativeElement;
    constructor(event: NativeRawPointer<'QEvent'>) {
        this.native = new addon.QPaintEvent(event);
    }
    rect(): QRect {
        return this.native.rect();
    }
}
