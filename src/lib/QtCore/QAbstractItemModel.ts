import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QModelIndex } from './QModelIndex';
import { QVariant } from './QVariant';
import { ItemDataRole, ItemFlag } from '../QtEnums';

export interface QAbstractItemSignals extends QObjectSignals {
    // itemChanged: (item: QStandardItem) => void;
}

export class QAbstractItemModel extends NodeObject<any> {
    native: NativeElement;
    constructor() {
        const native = new addon.QAbstractItemModel();
        super(native);
        this.native = native;
        const dispatcher = (methodName: string, ...args: any[]): any => {
            switch (methodName) {
                case 'index':
                    try {
                        return this.index(args[0], args[1], new QModelIndex(args[2])).native;
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'index':`);
                        console.log(e);
                    }
                    return new QModelIndex().native;

                case 'parent':
                    try {
                        return this.parent(new QModelIndex(args[0])).native;
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'parent':`);
                        console.log(e);
                    }
                    return new QModelIndex().native;

                case 'rowCount':
                    try {
                        return this.columnCount(new QModelIndex(args[0]));
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'rowCount':`);
                        console.log(e);
                    }
                    return 0;

                case 'columnCount':
                    try {
                        return this.columnCount(new QModelIndex(args[0]));
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'columnCount':`);
                        console.log(e);
                    }
                    return 0;

                case 'data':
                    try {
                        return this.data(new QModelIndex(args[0]), args[1]).native;
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'data':`);
                        console.log(e);
                    }
                    return new QVariant().native;

                case 'flags':
                    try {
                        return this.flags(new QModelIndex(args[0]));
                    } catch (e) {
                        console.log(`An exception was thrown while dispatching to method 'flags':`);
                        console.log(e);
                    }
                    return ItemFlag.NoItemFlags;

                default:
                    return null;
            }
        };
        this.native.initNodeDispatcher(dispatcher);
    }

    index(row: number, column: number, parent = new QModelIndex()): QModelIndex {
        return new QModelIndex();
    }

    parent(child: QModelIndex): QModelIndex {
        return new QModelIndex();
    }

    rowCount(parent = new QModelIndex()): number {
        return 0;
    }

    columnCount(parent = new QModelIndex()): number {
        return 0;
    }

    data(index: QModelIndex, role = ItemDataRole.DisplayRole): QVariant {
        return new QVariant();
    }

    hasIndex(row: number, column: number, parent = new QModelIndex()): boolean {
        return this.native.hasIndex(row, column, parent.native);
    }

    createIndex(row: number, column: number): QModelIndex {
        const result = this.native.createIndex(row, column);
        return new QModelIndex(result);
    }

    flags(index: QModelIndex): ItemFlag {
        return this.native._super_flags(index.native);
    }

    emitDataChanged(topLeft: QModelIndex, bottomRight: QModelIndex, roles: ItemDataRole[]): void {
        this.native.emitDataChanged(topLeft.native, bottomRight.native, roles);
    }
}
