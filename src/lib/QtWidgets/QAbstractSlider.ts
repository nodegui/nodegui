import { NodeWidget, QWidgetSignals } from './QWidget';
import { Orientation } from '../QtEnums';

/**
 
> Abstract class to add functionalities common to all slider based widgets.

**This class implements all methods, properties of Qt's [QAbstractSlider class](https://doc.qt.io/qt-5/qabstractslider.html) so that it can be inherited by all slider based widgets**

`QAbstractSlider` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all slider widget's easily. If you wish to create a slider use [QDial](api/QDial.md) instead.

**QAbstractSlider is the base class for all slider widgets.**

QAbstractSlider will list all methods and properties that are common to all slider widgets in the NodeGui world.

 */
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

export interface QAbstractSliderSignals extends QWidgetSignals {
    actionTriggered: (action: number) => void;
    rangeChanged: (min: number, max: number) => void;
    sliderMoved: (value: number) => void;
    sliderPressed: () => void;
    sliderReleased: () => void;
    valueChanged: (value: number) => void;
}
