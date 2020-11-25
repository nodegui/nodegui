import { QMainWindow, QWidget } from '.';
import { QGridLayout } from './lib/QtWidgets/QGridLayout';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QTreeWidget } from './lib/QtWidgets/QTreeWidget';
import { QTreeWidgetItem } from './lib/QtWidgets/QTreeWidgetItem';
import { QIcon } from './lib/QtGui/QIcon';
import { QDesktopWidget } from './lib/QtWidgets/QDesktopWidget';
import { QApplication } from './lib/QtGui/QApplication';
import { QTextToSpeech } from './lib/QtWidgets/QTextToSpeech';

const win = new QMainWindow();
win.resize(500, 500);

// ex 1
const desktop = new QDesktopWidget();
const availableGeometry = desktop.availableGeometry();
const screenGeometry = desktop.screenGeometry();
console.log(availableGeometry.width() + 'x' + availableGeometry.height());
console.log(screenGeometry.width() + 'x' + screenGeometry.height());
console.log(desktop.screenNumber());
// ex 2
const qApp = QApplication.desktop();
const availableGeometry2 = qApp.availableGeometry();
const screenGeometry2 = qApp.screenGeometry();
console.log(availableGeometry2.width() + 'x' + availableGeometry2.height());
console.log(screenGeometry2.width() + 'x' + screenGeometry2.height());
console.log(qApp.screenNumber());

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

const tree = new QTreeWidget();
tree.setColumnCount(2);
tree.setHeaderLabels(['First Column', 'Second Column']);
tree.setSortingEnabled(true);
tree.setInlineStyle('font-size: 24px');
outerLayout.addWidget(tree, 2, 0, 2, 0);

console.log(outerLayout.rowCount(), outerLayout.columnCount());

const myImage = './website/static/img/logo.png';
const icon = new QIcon(myImage);

const item1 = new QTreeWidgetItem();
item1.setText(0, `item-1`);
item1.setText(1, `1-item-1`);
item1.setIcon(1, icon);
const item2 = new QTreeWidgetItem();
item2.setText(0, `item-2`);
item2.setText(1, `1-item-2`);
item2.setIcon(1, icon);
const item3 = new QTreeWidgetItem();
item3.setText(0, `item-3`);
item3.setText(1, `1-item-3`);
item3.setIcon(1, icon);
const item4 = new QTreeWidgetItem();
item4.setText(0, `item-4`);
item4.setText(1, `1-item-4`);
item4.setIcon(1, icon);
const item5 = new QTreeWidgetItem();
item5.setText(0, `item-5`);
item5.setText(1, `1-item-5`);
item5.setIcon(1, icon);
const item6 = new QTreeWidgetItem();
item6.setText(0, `item-6`);
item6.setText(1, `1-item-6`);
item6.setIcon(1, icon);

console.info('item6.icon()=', item6.icon(1));

tree.addTopLevelItem(item1);
tree.insertTopLevelItems(0, [item2, item3]);
tree.addTopLevelItems([item4, item5]);
tree.insertTopLevelItem(2, item6);

// Add children to item1
const c1item1 = new QTreeWidgetItem(item1);
c1item1.setText(0, `c1item1`);
c1item1.setText(1, `c1item2`);
const c1item2 = new QTreeWidgetItem(item1);
c1item2.setText(0, `c1item1`);
c1item2.setText(1, `c1item2`);

win.setCentralWidget(outer);
win.show();

const tts = new QTextToSpeech();
console.log('Pitch Before setting ', tts.pitch());
tts.setPitch(5);
console.log('Pitch After setting ', tts.pitch());

console.log('Rate Before setting ', tts.rate());
tts.setRate(2);
console.log('Rate After setting ', tts.rate());

setInterval(() => {
    console.log('saying');
    tts.say('hey you');
}, 5000);

(global as any).win = win;
