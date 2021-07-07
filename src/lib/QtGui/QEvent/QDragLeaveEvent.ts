import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';

export class QDragLeaveEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QDragLeaveEvent(event));
    }
}
