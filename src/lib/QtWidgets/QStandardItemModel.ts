import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QStandardItem } from './QStandardItem';

export interface QStandardItemModelSignals extends QObjectSignals {
    itemChanged: (item: QStandardItem) => void;
}

export class QStandardItemModel extends NodeObject<any> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QStandardItemModel(parent.native);
        } else {
            native = new addon.QStandardItemModel();
        }
        super(native);
        this.native = native;
        parent && parent.nodeChildren.add(this);
    }
    item(row: number, column = 0): QStandardItem | void {
        const item = this.native.item(row, column);
        if (item) {
            return new QStandardItem(item);
        } else {
            return undefined;
        }
    }
}
