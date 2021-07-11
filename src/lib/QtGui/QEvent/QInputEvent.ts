import { KeyboardModifier } from '../../QtEnums';
import { QEvent } from './QEvent';

export abstract class QInputEvent extends QEvent {
    modifiers(): KeyboardModifier {
        return this.native.modifiers();
    }
    timestamp(): number {
        return this.native.timestamp();
    }
}
