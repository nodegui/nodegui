import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';
import { QPoint } from '../../QtCore/QPoint';

export class QMoveEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QMoveEvent(event));
    }

    oldPos(): QPoint {
        return new QPoint(this.native.oldPos());
    }

    pos(): QPoint {
        return new QPoint(this.native.pos());
    }
}
