import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QEvent } from './QEvent';

export class QInputMethodEvent extends QEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QInputMethodEvent(event));
    }
    commitString(): string {
        return this.native.commitString();
    }
    preeditString(): string {
        return this.native.preeditString();
    }
    replacementLength(): number {
        return this.native.replacementLength();
    }
    replacementStart(): number {
        return this.native.replacementStart();
    }
    setCommitString(commitString: string, replaceFrom = 0, replaceLength = 0): void {
        this.native.setCommitString(commitString, replaceFrom, replaceLength);
    }
}
