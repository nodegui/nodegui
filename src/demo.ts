import { QMainWindow } from './index';
import { QWidget } from './lib/QtWidgets/QWidget';
import { FlexLayout } from './lib/core/FlexLayout';
import { QLabel } from './lib/QtWidgets/QLabel';
import { AlignmentFlag } from './lib/QtEnums';

const win = new QMainWindow();
const view = new QWidget();
view.setLayout(new FlexLayout());
view.setStyleSheet(`
    flex: 1;
    width: '100%';
    height: '100%';
`);
const hello = new QLabel();
hello.setText('Hello');
hello.setStyleSheet(`
    border: 1px solid blue;
`);
const world = new QLabel();
world.setText('World');
world.setStyleSheet(`
    border: 1px solid blue;
    qproperty-alignment: AlignCenter;
`);

hello.setProperty('alignment', AlignmentFlag.AlignCenter);

if (view.layout) {
    view.layout.addWidget(hello);
    view.layout.addWidget(world);
}
win.setCentralWidget(view);
win.show();

(global as any).win = win; // To prevent win from being garbage collected.
