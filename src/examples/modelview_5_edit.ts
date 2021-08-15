import { ItemDataRole, ItemFlag, QAbstractTableModel, QModelIndex, QTableView, QVariant } from '..';

function main(): void {
    const tableView = new QTableView();
    const model = new MyModel();
    tableView.setModel(model);

    tableView.show();

    (global as any).win = tableView;
}

const ROWS = 2;
const COLS = 3;

class MyModel extends QAbstractTableModel {
    private _data: string[][] = [];

    constructor() {
        super();

        for (let row = 0; row < ROWS; row++) {
            this._data[row] = [];
            for (let col = 0; col < COLS; col++) {
                this._data[row][col] = '';
            }
        }
    }

    rowCount(parent = new QModelIndex()): number {
        return ROWS;
    }

    columnCount(parent = new QModelIndex()): number {
        return COLS;
    }

    data(index: QModelIndex, role = ItemDataRole.DisplayRole): QVariant {
        if (role == ItemDataRole.DisplayRole && this.checkIndex(index)) {
            return new QVariant(this._data[index.row()][index.column()]);
        }
        return new QVariant();
    }

    flags(index: QModelIndex): ItemFlag {
        return ItemFlag.ItemIsEditable | super.flags(index);
    }

    setData(index: QModelIndex, value: QVariant, role: number): boolean {
        if (role == ItemDataRole.EditRole) {
            if (!this.checkIndex(index)) {
                return false;
            }
            //save value from editor to member m_gridData
            this._data[index.row()][index.column()] = value.toString();

            //for presentation purposes only: build and emit a joined string
            let result = '';
            for (let row = 0; row < ROWS; row++) {
                for (let col = 0; col < COLS; col++) {
                    result += this._data[row][col] + ' ';
                }
            }
            console.log(result);

            return true;
        }
        return false;
    }
}

main();
