import addon from '../../utils/addon';
import { NativeElement } from '../../core/Component';
import { QRect } from '../../QtCore/QRect';

export class QPaintEvent {
    native: NativeElement;
    constructor(event: NativeElement) {
        this.native = new addon.QPaintEvent(event);
    }
    rect(): QRect {
        return new QRect(this.native.rect());
    }
}
