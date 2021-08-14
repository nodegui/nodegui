import { ItemDataRole, QAbstractTableModel, QModelIndex, QTableView, QVariant } from '..';

function main(): void {
    const tableView = new QTableView();
    const model = new MyModel();
    tableView.setModel(model);

    tableView.show();

    setInterval(() => {
        model.timerHit();
    }, 1000);

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
        const row = index.row();
        const col = index.column();

        if (role == ItemDataRole.DisplayRole && row == 0 && col == 0) {
            return new QVariant('' + new Date().toTimeString());
        }
        return new QVariant();
    }

    timerHit(): void {
        const topLeft = this.createIndex(0, 0);
        this.emitDataChanged(topLeft, topLeft, [ItemDataRole.DisplayRole]);
    }
}

main();
