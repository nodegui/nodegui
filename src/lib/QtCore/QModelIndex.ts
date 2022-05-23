import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { QVariant } from './QVariant';
import { checkIfNativeElement } from '../utils/helpers';
import { ItemDataRole } from '../QtEnums/ItemDataRole';
import { ItemFlag } from '../QtEnums/ItemFlag';

export class QModelIndex extends Component {
    constructor(arg?: NativeElement) {
        let native: NativeElement;
        if (!arg) {
            native = new addon.QModelIndex();
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            throw new Error('QModelIndex cannot be initialised this way.');
        }
        super(native);
    }
    column(): number {
        return this.native.column();
    }
    data(role: ItemDataRole = ItemDataRole.DisplayRole): QVariant {
        return new QVariant(this.native.data(role));
    }
    flags(): ItemFlag {
        return this.native.flags();
    }
    isValid(): boolean {
        return this.native.isValid();
    }
    parent(): QModelIndex {
        return new QModelIndex(this.native.parent());
    }
    row(): number {
        return this.native.row();
    }
    sibling(row: number, column: number): QModelIndex {
        return new QModelIndex(this.native.sibling(row, column));
    }
    siblingAtColumn(column: number): QModelIndex {
        return new QModelIndex(this.native.siblingAtColumn(column));
    }
    siblingAtRow(row: number): QModelIndex {
        return new QModelIndex(this.native.siblingAtRow(row));
    }
    static fromQVariant(variant: QVariant): QModelIndex {
        return new QModelIndex(addon.QModelIndex.fromQVariant(variant.native));
    }
}
