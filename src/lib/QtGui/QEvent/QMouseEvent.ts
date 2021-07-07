import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';

export class QMouseEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QMouseEvent(event));
    }
    button(): number {
        return this.native.button();
    }
    buttons(): number {
        return this.native.buttons();
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
