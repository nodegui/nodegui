import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';

export class QTimerEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QTimerEvent(event));
    }

    timerId(): number {
        return this.native.timerId();
    }
}
