import {QMainWindow, QPushButton, QLabel, QWidget, FlexLayout, QTreeWidgetItem, QTreeWidget} from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('World');

const hello = new QLabel();
hello.setText('Hello');

const tree = new QTreeWidget();
const tree_item = new QTreeWidgetItem(tree);
tree_item.setText(0, 'Hello!');

center.setLayout(new FlexLayout());
center.layout?.addWidget(button);
center.layout?.addWidget(hello);
center.layout?.addWidget(tree);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
