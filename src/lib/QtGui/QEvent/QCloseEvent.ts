import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';

export class QCloseEvent {
    native: NativeElement;
    constructor(event: NativeRawPointer<'QEvent'>) {
        this.native = new addon.QCloseEvent(event);
    }
    accept(): void {
        return this.native.accept();
    }
    ignore(): void {
        return this.native.ignore();
    }
}
