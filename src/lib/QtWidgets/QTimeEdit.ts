import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDateTimeEdit } from './QDateTimeEdit';

export class QTimeEdit extends QDateTimeEdit {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTimeEdit(parent.native);
        } else {
            native = new addon.QTimeEdit();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
}
