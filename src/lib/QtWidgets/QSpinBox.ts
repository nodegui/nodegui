import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';

export interface QSpinBoxSignals {
    valueChanged: (value: number) => void;
}

export class QSpinBox extends NodeWidget<QSpinBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QSpinBox(parent.native);
        } else {
            native = new addon.QSpinBox();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
    setPrefix(prefix: string): void {
        // react:✓
        this.native.setPrefix(prefix);
    }
    setSuffix(suffix: string): void {
        // react:✓
        this.native.setSuffix(suffix);
    }
    cleanText(): string {
        // react:✓
        return this.native.cleanText();
    }
    setSingleStep(val: number): void {
        // react:✓
        this.native.setSingleStep(val);
    }
    setRange(minimum: number, maximum: number): void {
        // react:✓
        this.native.setRange(minimum, maximum);
    }
    maximum(): number {
        // react:✓
        return this.native.maximum();
    }
    minimum(): number {
        // react:✓
        return this.native.minimum();
    }
    setValue(val: number): void {
        // react:✓
        this.native.setValue(val);
    }
    value(): number {
        // react:✓
        return this.native.value();
    }
}
