import { ItemDataRole, Orientation, QAbstractTableModel, QModelIndex, QTableView, QVariant } from '..';

function main(): void {
    const tableView = new QTableView();
    const model = new MyModel();
    tableView.setModel(model);

    tableView.show();

    (global as any).win = tableView;
}

class MyModel extends QAbstractTableModel {
    rowCount(parent = new QModelIndex()): number {
        return 2;
    }

    columnCount(parent = new QModelIndex()): number {
        return 3;
    }

    data(index: QModelIndex, role = ItemDataRole.DisplayRole): QVariant {
        if (role === ItemDataRole.DisplayRole) {
            return new QVariant(`Row${index.row() + 1}, Column${index.column() + 1}`);
        }
        return new QVariant();
    }

    headerData(section: number, orientation: Orientation, role: number): QVariant {
        if (role == ItemDataRole.DisplayRole && orientation == Orientation.Horizontal) {
            switch (section) {
                case 0:
                    return new QVariant('first');
                case 1:
                    return new QVariant('second');
                case 2:
                    return new QVariant('third');
            }
        }
        return new QVariant();
    }
}

main();
