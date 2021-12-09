import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';
import { QSize } from '../../QtCore/QSize';

export class QResizeEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QResizeEvent(event));
    }
    oldSize(): QSize {
        return new QSize(this.native.oldSize());
    }
    size(): QSize {
        return new QSize(this.native.size());
    }
}
