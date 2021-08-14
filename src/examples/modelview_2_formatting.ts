import {
    AlignmentFlag,
    CheckState,
    GlobalColor,
    ItemDataRole,
    QAbstractTableModel,
    QBrush,
    QFont,
    QModelIndex,
    QTableView,
    QVariant,
} from '..';

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
        const row = index.row();
        const col = index.column();
        // generate a log message when this method gets called
        console.log(`row ${row}, col ${col}, role ${role}`);

        switch (role) {
            case ItemDataRole.DisplayRole:
                if (row == 0 && col == 1) {
                    return new QVariant('<--left');
                }
                if (row == 1 && col == 1) {
                    return new QVariant('right-->');
                }
                return new QVariant(`Row${row + 1}, Column${col + 1}`);

            case ItemDataRole.FontRole:
                if (row == 0 && col == 0) {
                    // change font only for cell(0,0)
                    const boldFont = new QFont();
                    boldFont.setBold(true);
                    return new QVariant(boldFont.native);
                }
                break;

            case ItemDataRole.BackgroundRole:
                if (row == 1 && col == 2) {
                    //change background only for cell(1,2)
                    return new QVariant(new QBrush(GlobalColor.red).native);
                }
                break;

            case ItemDataRole.TextAlignmentRole:
                if (row == 1 && col == 1) {
                    // change text alignment only for cell(1,1)
                    return new QVariant(AlignmentFlag.AlignRight | AlignmentFlag.AlignVCenter);
                }
                break;

            case ItemDataRole.CheckStateRole:
                if (row == 1 && col == 0) {
                    // add a checkbox to cell(1,0)
                    return new QVariant(CheckState.Checked);
                }
                break;
        }
        return new QVariant();
    }
}

main();
