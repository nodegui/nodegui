import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';

export class QKeyEvent {
    native: NativeElement;
    constructor(event: NativeRawPointer<'QEvent'>) {
        this.native = new addon.QKeyEvent(event);
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
