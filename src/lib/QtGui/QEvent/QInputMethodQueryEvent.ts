import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QVariant, QVariantType, nativeObjectFromVariantType } from '../../QtCore/QVariant';
import { QEvent } from './QEvent';

/**
 * Note: Qt performs some default processing for `QInputMethodQueryEvents`.
 * When attaching an event listener via `addEventListener()` use the
 * options object to specify that you want to run after the default
 * processing, otherwise your `setValue()` calls will be overwritten.
 */
export class QInputMethodQueryEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QInputMethodQueryEvent(event));
    }

    queries(): number /* InputMethodQueries */ {
        return this.native.queries();
    }

    setValue(query: number /* InputMethodQuery */, value: QVariantType): void {
        this.native.setValue(query, nativeObjectFromVariantType(value));
    }

    value(query: number /* InputMethodQuery */): QVariant {
        return new QVariant(this.native.value(query));
    }
}
