import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';

export type QRadioButtonSignals = QAbstractButtonSignals;
export class QRadioButton extends QAbstractButton<QRadioButtonSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QRadioButton(parent.native);
        } else {
            native = new addon.QRadioButton();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
}
