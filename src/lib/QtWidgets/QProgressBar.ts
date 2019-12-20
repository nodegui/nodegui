import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { Orientation } from '../QtEnums';

export type QProgressBarSignals = {};
export class QProgressBar extends NodeWidget<QProgressBarSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QProgressBar(parent.native);
        } else {
            native = new addon.QProgressBar();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
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
