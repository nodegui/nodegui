import { QMainWindow, QWidget } from '.';
import { QGridLayout } from './lib/QtWidgets/QGridLayout';
import { QLabel } from './lib/QtWidgets/QLabel';

const win = new QMainWindow();
win.resize(500, 500);

const outer = new QWidget();
const outerLayout = new QGridLayout();
outer.setLayout(outerLayout);
outer.setInlineStyle('background-color: red');
console.log(outerLayout.rowCount(), outerLayout.columnCount());
outerLayout.setColumnStretch(0, 2);
outerLayout.setRowStretch(1, 2);
outerLayout.setColumnMinimumWidth(1, 200);
outerLayout.setRowMinimumHeight(0, 100);
outerLayout.setHorizontalSpacing(20);
outerLayout.setVerticalSpacing(50);

console.log(outerLayout.columnStretch(0), outerLayout.columnStretch(1));
console.log(outerLayout.rowMinimumHeight(0), outerLayout.rowMinimumHeight(1));
console.log(outerLayout.verticalSpacing(), outerLayout.horizontalSpacing());

const columnOne = new QLabel();
columnOne.setText('One');
columnOne.setInlineStyle('background-color: blue');
outerLayout.addWidget(columnOne, 0, 0);

const columnTwo = new QLabel();
columnTwo.setText('Two');
columnTwo.setInlineStyle('background-color: green');
outerLayout.addWidget(columnTwo, 0, 1);

const columnThree = new QLabel();
columnThree.setText('Three');
columnThree.setInlineStyle('background-color: yellow');
outerLayout.addWidget(columnThree, 1, 0);

const columnFour = new QLabel();
columnFour.setText('Four');
columnFour.setInlineStyle('background-color: orange');
outerLayout.addWidget(columnFour, 1, 1);

console.log(outerLayout.rowCount(), outerLayout.columnCount());

win.setCentralWidget(outer);
win.show();
(global as any).win = win;
