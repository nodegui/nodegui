import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QSinglePointEvent } from './QSinglePointEvent';

export class QMouseEvent extends QSinglePointEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QMouseEvent(event));
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
