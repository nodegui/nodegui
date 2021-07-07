import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QRect } from '../../..';
import { QEvent } from './QEvent';

export class QPaintEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QPaintEvent(event));
    }
    rect(): QRect {
        return this.native.rect();
    }
}
