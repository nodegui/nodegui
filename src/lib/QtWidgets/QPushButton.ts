import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';

export type QPushButtonSignals = QAbstractButtonSignals;

export class QPushButton extends QAbstractButton<QPushButtonSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QPushButton(parent.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
    setFlat(isFlat: boolean): void {
        this.native.setFlat(isFlat);
    }
}
