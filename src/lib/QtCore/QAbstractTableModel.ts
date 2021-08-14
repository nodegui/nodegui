import { ItemFlag } from '../QtEnums';
import { QAbstractItemModel } from './QAbstractItemModel';
import { QModelIndex } from './QModelIndex';

export class QAbstractTableModel extends QAbstractItemModel {
    index(row: number, column: number, parent = new QModelIndex()): QModelIndex {
        return this.hasIndex(row, column, parent) ? this.createIndex(row, column) : new QModelIndex();
    }

    parent(child: QModelIndex): QModelIndex {
        return new QModelIndex();
    }

    sibling(row: number, column: number, index: QModelIndex): QModelIndex {
        return this.index(row, column);
    }

    hasChildren(parent: QModelIndex): boolean {
        if (!parent.isValid()) {
            return this.rowCount(parent) > 0 && this.columnCount(parent) > 0;
        }
        return false;
    }

    flags(index: QModelIndex): ItemFlag {
        let f = super.flags(index);
        if (index.isValid()) {
            f |= ItemFlag.ItemNeverHasChildren;
        }
        return f;
    }
}
