import { QWidget, QMainWindow, FlexLayout, QTreeWidget, QTreeWidgetItem } from './index';
import { ItemFlag, CheckState } from './lib/QtEnums';
import { QSpinBox } from './lib/QtWidgets/QSpinBox';
import { QLineEdit } from './lib/QtWidgets/QLineEdit';
import { QStatusBar } from './lib/QtWidgets/QStatusBar';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const statusBar = new QStatusBar();
const spinBox = new QSpinBox();
statusBar.addPermanentWidget(spinBox);
statusBar.addEventListener('messageChanged', message => console.log(`Status bar message changed to: ${message}`));

win.setStatusBar(statusBar);
win.show();

statusBar.showMessage('Hello World', 3000);

setTimeout(_ => {
    statusBar.removeWidget(spinBox);
    statusBar.showMessage("Removed spinBox");
}, 3000);

(global as any).win = win;

setInterval(() => null, 1000);
