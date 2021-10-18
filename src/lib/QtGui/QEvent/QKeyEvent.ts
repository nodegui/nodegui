import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QInputEvent } from './QInputEvent';

export class QKeyEvent extends QInputEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QKeyEvent(event));
    }
    text(): string {
        return this.native.text();
    }
    key(): number {
        return this.native.key();
    }
    modifiers(): number {
        return this.native.modifiers();
    }
    count(): number {
        return this.native.count();
    }
    isAutoRepeat(): boolean {
        return this.native.isAutoRepeat();
    }
}
