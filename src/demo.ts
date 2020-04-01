import { QMainWindow, QLabel, WidgetEventTypes, QMouseEvent } from './index';
import { QPoint } from './lib/QtCore/QPoint';
import { ContextMenuPolicy } from './lib/QtEnums';
import { QMenu } from './lib/QtWidgets/QMenu';
import { QAction } from './lib/QtWidgets/QAction';

const win = new QMainWindow();

const label = new QLabel();
label.setText('Move your mouse here');
label.setMouseTracking(true);
label.setContextMenuPolicy(ContextMenuPolicy.CustomContextMenu);

label.addEventListener(WidgetEventTypes.MouseMove, (nativeEvt) => {
    const mouseEvt = new QMouseEvent(nativeEvt as any);
    console.log('mouseMoved at: ', { x: mouseEvt.x(), y: mouseEvt.y() });
});

label.addEventListener('customContextMenuRequested', (pos: { x: number; y: number }): void => {
    console.log(pos);
    const position = new QPoint(pos.x, pos.y);
    const menu = new QMenu();
    const action = new QAction();

    action.setText(`Hello World`);
    menu.addAction(action);
    const ptGlobal = label.mapToGlobal(position);
    menu.exec(ptGlobal);
});

win.setCentralWidget(label);
win.show();
(global as any).win = win;
