import { NodeWidget, QWidgetSignals } from './QWidget';
import { AlignmentFlag } from '../QtEnums';

/**
 
> This is the abstract base class of button widgets, providing their functionality.

* **This class is a JS wrapper around Qt's [QAbstractSpinBox class](https://doc.qt.io/qt-5/qabstractspinbox.html)**

The QAbstractSpinBox class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QDateTimeEdit and QSpinBox. (n/a QDoubleSpinBox)

 */
export abstract class QAbstractSpinBox<Signals extends QAbstractSpinBoxSignals> extends NodeWidget<Signals> {
    selectAll(): void {
        this.native.selectAll();
    }
    stepDown(): void {
        this.native.stepDown();
    }
    stepUp(): void {
        this.native.stepUp();
    }
    setAccelerated(on: boolean): void {
        this.setProperty('accelerated', on);
    }
    isAccelerated(): boolean {
        return this.property('accelerated').toBool();
    }
    hasAcceptableInput(): boolean {
        return this.property('acceptableInput').toBool();
    }
    setAlignment(alignment: AlignmentFlag): void {
        this.setProperty('alignment', alignment);
    }
    alignment(): AlignmentFlag {
        return this.property('alignment').toInt();
    }
    setButtonSymbols(bs: ButtonSymbols): void {
        this.setProperty('buttonSymbols', bs);
    }
    buttonSymbols(): ButtonSymbols {
        return this.property('buttonSymbols').toInt();
    }
    setCorrectionMode(cm: CorrectionMode): void {
        this.setProperty('correctionMode', cm);
    }
    correctionMode(): CorrectionMode {
        return this.property('correctionMode').toInt();
    }
    setFrame(enable: boolean): void {
        this.setProperty('frame', enable);
    }
    hasFrame(): boolean {
        return this.property('frame').toBool();
    }
    setKeyboardTracking(kt: boolean): void {
        this.setProperty('keyboardTracking', kt);
    }
    keyboardTracking(): boolean {
        return this.property('keyboardTracking').toBool();
    }
    setReadOnly(r: boolean): void {
        this.setProperty('readOnly', r);
    }
    isReadOnly(): boolean {
        return this.property('readOnly').toBool();
    }
    setGroupSeparatorShown(shown: boolean): void {
        this.setProperty('showGroupSeparator', shown);
    }
    isGroupSeparatorShown(): boolean {
        return this.property('showGroupSeparator').toBool();
    }
    setSpecialValueText(txt: string): void {
        this.setProperty('specialValueText', txt);
    }
    specialValueText(): string {
        return this.property('specialValueText').toString();
    }
    text(): string {
        return this.property('text').toString();
    }
    setWrapping(w: boolean): void {
        this.setProperty('wrapping', w);
    }
    wrapping(): boolean {
        return this.property('wrapping').toBool();
    }
}

export enum ButtonSymbols {
    UpDownArrows,
    PlusMinus,
    NoButtons,
}

export enum CorrectionMode {
    CorrectToPreviousValue,
    CorrectToNearestValue,
}

export enum StepType {
    DefaultStepType,
    AdaptiveDecimalStepType,
}

export interface QAbstractSpinBoxSignals extends QWidgetSignals {
    editingFinished: () => void;
}
