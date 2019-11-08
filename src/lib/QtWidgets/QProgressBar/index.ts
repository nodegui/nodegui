import addon from '../../utils/addon';
import { NodeWidget } from '../QWidget';
import { BaseWidgetEvents } from '../../core/EventWidget';
import { NativeElement } from '../../core/Component';
import { Orientation } from '../../QtEnums';

export const QProgressBarEvents = Object.freeze({
    ...BaseWidgetEvents,
});
export class QProgressBar extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QProgressBar(parent.native);
        } else {
            native = new addon.QProgressBar();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    setValue(value: number): void {
        // react:✓
        this.native.setValue(value);
    }
    value(): number {
        // react:✓
        return this.native.value();
    }
    setMinimum(min: number): void {
        // react:✓ TODO://getter
        this.native.setMinimum(min);
    }
    setMaximum(max: number): void {
        // react:✓ TODO://getter
        this.native.setMaximum(max);
    }
    setOrientation(orientation: Orientation): void {
        // react:✓ TODO://getter
        this.native.setOrientation(orientation);
    }
}
