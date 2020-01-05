import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDateTimeEdit } from './QDateTimeEdit';

export class QDateEdit extends QDateTimeEdit {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDateEdit(parent.native);
        } else {
            native = new addon.QDateEdit();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
}
