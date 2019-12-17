import { FlexLayout, QLabel, QMainWindow, QPushButton, QTreeWidget, QTreeWidgetItem, QWidget } from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('World');

const hello = new QLabel();
hello.setText('Hello');

const tree = new QTreeWidget();
const item1 = new QTreeWidgetItem(tree, ['Hello!']);
const item2 = new QTreeWidgetItem(item1, ['Hello again!']);
const item3 = new QTreeWidgetItem(['Hello!!']);
tree.addTopLevelItem(item3);
tree.addEventListener('itemSelectionChanged', () => {
    console.log(tree.selectedItems());
});

center.setLayout(new FlexLayout());
center.layout?.addWidget(button);
center.layout?.addWidget(hello);
center.layout?.addWidget(tree);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
