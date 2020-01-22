import {
    QWidget,
    QMainWindow,
    FlexLayout,
    QTreeWidget,
    QMenuBar,
    QApplication,
    QMenu,
    QCursor,
    QPushButton,
} from './index';
import { QPoint } from './lib/QtCore/QPoint';
import { QAction } from './lib/QtWidgets/QAction';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const tree = new QTreeWidget();
tree.hide();
tree.setColumnCount(2);
tree.setHeaderLabels(['Properties', 'Value']);
center.layout?.addWidget(tree);

const menubar = new QMenuBar();
win.setMenuBar(menubar);

const fm = menubar.addMenu('&File');
const qaction = fm.addAction('&Quit');
fm.addSeparator();
const showTree = fm.addAction('&ShowTree');
const hideTree = fm.addAction('&HideTree');

const menu = new QMenu();
const sh = menu.addAction('SayHello');

// Button row
const buttonRow = new QWidget();
const buttonRowLayout = new FlexLayout();
buttonRow.setLayout(buttonRowLayout);
buttonRow.setObjectName('buttonRow');

// Buttons
const button = new QPushButton();
button.setText('click me');
button.setObjectName('clickme');
buttonRowLayout.addWidget(button);
layout.addWidget(buttonRow);

qaction.addEventListener('triggered', () => {
    const app = QApplication.instance();
    app.exit(0);
});

showTree.addEventListener('triggered', () => {
    tree.show();
});

hideTree.addEventListener('triggered', () => {
    tree.hide();
});

button.addEventListener('clicked', () => {
    const { x, y } = new QCursor().pos();
    menu.exec(new QPoint(x, y), new QAction());
});

sh.addEventListener('triggered', () => {
    console.log('Hello!');
});

menubar.addSeparator();
menubar.addMenu('Hello');

win.show();

(global as any).win = win;

setInterval(() => null, 1000);
