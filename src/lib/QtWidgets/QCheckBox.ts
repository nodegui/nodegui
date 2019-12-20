import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';

export type QCheckBoxSignals = QAbstractButtonSignals;

export class QCheckBox extends QAbstractButton<QCheckBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QCheckBox(parent.native);
        } else {
            native = new addon.QCheckBox();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setChecked(check: boolean): void {
        this.native.setChecked(check);
    }
    isChecked(): boolean {
        return this.native.isChecked();
    }
}
