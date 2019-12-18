import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';

export const QSpinBoxEvents = Object.freeze({
    ...BaseWidgetEvents,
    valueChanged: 'valueChanged',
});

export class QSpinBox extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
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
