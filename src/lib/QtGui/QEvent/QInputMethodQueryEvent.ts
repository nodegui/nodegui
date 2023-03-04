import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QVariant, QVariantType } from '../../QtCore/QVariant';
import { QEvent } from './QEvent';
import { QRect } from '../../QtCore/QRect';

export class QInputMethodQueryEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QInputMethodQueryEvent(event));
    }

    queries(): number /* InputMethodQueries */ {
        return this.native.queries();
    }

    setValue(query: number /* InputMethodQuery */, value: QVariantType): void {
        if (value instanceof QRect) {
            this.native.setValue(query, value.native);
        } else {
            this.native.setValue(query, value);
        }
    }

    value(query: number /* InputMethodQuery */): QVariant {
        return new QVariant(this.native.value(query));
    }
}
