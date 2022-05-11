import addon from '../utils/addon';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { QStandardItem } from './QStandardItem';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

export interface QStandardItemModelSignals extends QObjectSignals {
    itemChanged: (item: QStandardItem) => void;
}

export class QStandardItemModel extends QObject {
    constructor(arg?: QObject | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QObject;
            native = new addon.QStandardItemModel(parent.native);
        } else {
            native = new addon.QStandardItemModel();
        }
        super(native);
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
wrapperCache.registerWrapper('QStandardItemModelWrap', QStandardItemModel);
