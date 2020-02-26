import { QMainWindow } from './lib/QtWidgets/QMainWindow';
import { QTabWidget } from './lib/QtWidgets/QTabWidget';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QIcon } from './lib/QtGui/QIcon';

const win = new QMainWindow();
const tab = new QTabWidget();
const label = new QLabel();
label.setText('Hello');
const label2 = new QLabel();
label2.setText('LABEL');

tab.addTab(label, new QIcon(), 'I am label tab');
tab.addTab(label2, new QIcon(), 'TAB2');
win.setCentralWidget(tab);
console.log(tab.indexOf(label));
console.log(tab.indexOf(label2));
win.show();
(global as any).win = win;
