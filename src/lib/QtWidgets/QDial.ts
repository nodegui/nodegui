import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSlider } from './QAbstractSlider';

export interface QDialSignals {
    valueChanged: (value: number) => void;
    rangeChanged: (min: number, max: number) => void;
    sliderMoved: (value: number) => void;
    sliderPressed: () => void;
    sliderReleased: () => void;
}
export class QDial extends QAbstractSlider<QDialSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDial(parent.native);
        } else {
            native = new addon.QDial();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setNotchesVisible(visible: boolean): void {
        this.native.setNotchesVisible(visible);
    }
    notchesVisible(): boolean {
        return this.native.notchesVisible();
    }
    setWrapping(on: boolean): void {
        this.native.setWrapping(on);
    }
    wrapping(): boolean {
        return this.native.wrapping();
    }
    setNotchTarget(target: number): void {
        this.native.setNotchTarget(target);
    }
    notchTarget(): number {
        return this.native.notchTarget();
    }
}
