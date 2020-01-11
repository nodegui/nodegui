import { QWidget, QMainWindow, FlexLayout, QTreeWidget, QTreeWidgetItem } from './index';
import { ItemFlag, CheckState } from './lib/QtEnums';
import { QSpinBox } from './lib/QtWidgets/QSpinBox';
import { QLineEdit } from './lib/QtWidgets/QLineEdit';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const tree = new QTreeWidget();
tree.setColumnCount(2);
tree.setHeaderLabels(['Properties', 'Value']);
center.layout?.addWidget(tree);

const root1 = new QTreeWidgetItem(tree);
root1.setText(0, 'Option 1');
root1.setText(1, 'Option 1 Description');

const item1 = new QTreeWidgetItem();
item1.setText(0, 'enabled');
item1.setFlags(ItemFlag.ItemIsUserCheckable | ItemFlag.ItemIsEnabled);
item1.setCheckState(1, CheckState.Checked);
root1.addChild(item1);

const item1_1 = new QTreeWidgetItem();
item1_1.setText(0, 'height');
root1.addChild(item1_1);
tree.setItemWidget(item1_1, 1, new QSpinBox());

const item1_2 = new QTreeWidgetItem();
item1_2.setText(0, 'name');
root1.addChild(item1_2);
tree.setItemWidget(item1_2, 1, new QLineEdit());

const root2 = new QTreeWidgetItem(tree);
root2.setText(0, 'Option 2');
root2.setText(1, 'Option 2 Description');

const item2 = new QTreeWidgetItem();
item2.setText(0, 'width');
item2.setText(1, '300');
root2.addChild(item2);

const item2_1 = new QTreeWidgetItem();
item2_1.setText(0, 'height');
item2_1.setText(1, '200');
root2.addChild(item2_1);

/* const buttonGroup = new QButtonGroup(center);
const t: any[] = [];
for (let i = 0; i < 4; i++) {
    const radioButton = new QRadioButton();
    radioButton.setText('Button #' + (i + 1));
    center.layout?.addWidget(radioButton);
    t.push(radioButton);
    buttonGroup.addButton(radioButton, i);
} */
win.show();
/* buttonGroup.addEventListener('buttonClicked', (id: number) => {
    console.log('Button #' + (id + 1) + ' clicked!');
    buttonGroup.removeButton(t[0]);
}); */
(global as any).win = win;

setInterval(() => null, 1000);
