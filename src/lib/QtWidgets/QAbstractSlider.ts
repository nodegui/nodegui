import { NodeWidget, QWidgetSignals } from './QWidget';
import { Orientation } from '../QtEnums';

export interface QAbstractSliderSignals extends QWidgetSignals {
    actionTriggered: (action: number) => void;
    rangeChanged: (min: number, max: number) => void;
    sliderMoved: (value: number) => void;
    sliderPressed: () => void;
    sliderReleased: () => void;
    valueChanged: (value: number) => void;
}
export abstract class QAbstractSlider<Signals extends QAbstractSliderSignals> extends NodeWidget<Signals> {
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
