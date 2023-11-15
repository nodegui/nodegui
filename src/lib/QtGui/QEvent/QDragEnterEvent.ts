import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QDragMoveEvent } from './QDragMoveEvent';

export class QDragEnterEvent extends QDragMoveEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QDragEnterEvent(event));
    }
}
