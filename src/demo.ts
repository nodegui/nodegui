import { QMainWindow, QWidget, FlexLayout, QStandardItemModel, QComboBox } from './index';
import { CheckState, ItemFlag, ItemDataRole } from './lib/QtEnums';
import { QStandardItem } from './lib/QtWidgets/QStandardItem';

const win = new QMainWindow();
const center = new QWidget();
center.setLayout(new FlexLayout());

win.setCentralWidget(center);

const model = new QStandardItemModel();

const regionSelection = new QComboBox();
regionSelection.setModel(model);
const regions = ['US', 'JP', 'EU', 'ASIA', 'INT'];
regions.forEach((region, index) => {
    regionSelection.addItem(undefined, region);
    const item = model.item(index);
    if (item instanceof QStandardItem) {
        item.setFlags(ItemFlag.ItemIsUserCheckable | ItemFlag.ItemIsEnabled);
        item.setData(CheckState.Checked, ItemDataRole.CheckStateRole);
    }
});
model.addEventListener('itemChanged', (item: QStandardItem) => console.log(item.checkState()));
win.layout?.addWidget(regionSelection);
regionSelection.setEditable(true);
regionSelection.setEditText('US, JP, EU, ASIA, INT');
win.show();
(global as any).win = win;
