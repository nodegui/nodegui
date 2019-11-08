import { NodeWidget } from './QWidget';
import { Orientation } from '../QtEnums';

export abstract class QAbstractSlider extends NodeWidget {
    setSingleStep(step: number): void {
        this.native.setSingleStep(step);
    }
    setMaximum(maximum: number): void {
        this.native.setMaximum(maximum);
    }
    maximum(): number {
        return this.native.maximum();
    }
    setMinimum(minimum: number): void {
        this.native.setMinimum(minimum);
    }
    minimum(): number {
        return this.native.minimum();
    }
    setValue(value: number): void {
        this.native.setValue(value);
    }
    value(): number {
        return this.native.value();
    }
    setOrientation(orientation: Orientation): void {
        this.native.setOrientation(orientation);
    }
}
