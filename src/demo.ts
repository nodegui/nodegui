import {
    QMainWindow,
    QPushButton,
    QLabel,
    QWidget,
    FlexLayout,
    AlignmentFlag,
    QTableWidget,
    QTableWidgetItem,
    QTableWidgetEvents
} from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('Scroll');
const hello = new QLabel();
hello.setText('hello text');

const layout = new FlexLayout();
const table = new QTableWidget(10, 4);
table.setInlineStyle(`flex:1;`);
table.setHorizontalHeaderLabels(['h1', 'h2', 'h3', 'h4']);
table.setVerticalHeaderLabels(['', '', '', '']);
const item = new QTableWidgetItem();
item.setText('label1');
item.setTextAlignment(AlignmentFlag.AlignBottom | AlignmentFlag.AlignRight);
item.setToolTip('Tooltip!');
table.setItem(8, 1, item);
table.addEventListener(QTableWidgetEvents.cellClicked, console.log);
const tablebutton = new QPushButton();
tablebutton.setText('Toggle');
table.setCellWidget(0, 1, tablebutton);
tablebutton.addEventListener('clicked', () => {
    table.setShowGrid(!table.showGrid());
});
table.resizeColumnsToContents();
table.resizeRowsToContents();
button.addEventListener('clicked', () => {
    table.scrollToItem(item);
});

center.setLayout(layout);
layout.addWidget(button);
layout.addWidget(hello);
layout.addWidget(table);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
