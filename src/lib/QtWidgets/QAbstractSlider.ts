import { QWidget, QWidgetSignals } from './QWidget';
import { Orientation } from '../QtEnums';

/**

> Abstract class to add functionalities common to all slider based widgets.

**This class implements all methods, properties of Qt's [QAbstractSlider class](https://doc.qt.io/qt-6/qabstractslider.html) so that it can be inherited by all slider based widgets**

`QAbstractSlider` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all slider widget's easily. If you wish to create a slider use QDial instead.

**QAbstractSlider is the base class for all slider widgets.**

QAbstractSlider will list all methods and properties that are common to all slider widgets in the NodeGui world.

 */
export abstract class QAbstractSlider<Signals extends QAbstractSliderSignals> extends QWidget<Signals> {
    triggerAction(action: SliderAction): void {
        this.native.triggerAction(action);
    }
    setRange(min: number, max: number): void {
        this.native.setRange(min, max);
    }
    setInvertedAppearance(inverted: boolean): void {
        this.setProperty('invertedAppearance', inverted);
    }
    invertedAppearance(): boolean {
        return this.property('invertedAppearance').toBool();
    }
    setInvertedControls(inverted: boolean): void {
        this.setProperty('invertedControls', inverted);
    }
    invertedControls(): boolean {
        return this.property('invertedControls').toBool();
    }
    setMaximum(maximum: number): void {
        this.setProperty('maximum', maximum);
    }
    maximum(): number {
        return this.property('maximum').toInt();
    }
    setMinimum(minimum: number): void {
        this.setProperty('minimum', minimum);
    }
    minimum(): number {
        return this.property('minimum').toInt();
    }
    setOrientation(orientation: Orientation): void {
        this.setProperty('orientation', orientation);
    }
    orientation(): Orientation {
        return this.property('orientation').toInt();
    }
    setPageStep(step: number): void {
        this.setProperty('pageStep', step);
    }
    pageStep(): number {
        return this.property('pageStep').toInt();
    }
    setSingleStep(step: number): void {
        this.setProperty('singleStep', step);
    }
    singleStep(): number {
        return this.property('singleStep').toInt();
    }
    setSliderDown(down: boolean): void {
        this.setProperty('sliderDown', down);
    }
    isSliderDown(): boolean {
        return this.property('sliderDown').toBool();
    }
    setSliderPosition(position: number): void {
        this.setProperty('sliderPosition', position);
    }
    sliderPosition(): number {
        return this.property('sliderPosition').toInt();
    }
    setTracking(enable: boolean): void {
        this.setProperty('tracking', enable);
    }
    hasTracking(): boolean {
        return this.property('tracking').toBool();
    }
    setValue(value: number): void {
        this.setProperty('value', value);
    }
    value(): number {
        return this.property('value').toInt();
    }
}

export enum SliderAction {
    SliderNoAction,
    SliderSingleStepAdd,
    SliderSingleStepSub,
    SliderPageStepAdd,
    SliderPageStepSub,
    SliderToMinimum,
    SliderToMaximum,
    SliderMove,
}

export interface QAbstractSliderSignals extends QWidgetSignals {
    actionTriggered: (action: number) => void;
    rangeChanged: (min: number, max: number) => void;
    sliderMoved: (value: number) => void;
    sliderPressed: () => void;
    sliderReleased: () => void;
    valueChanged: (value: number) => void;
}
