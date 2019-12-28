import {
    FlexLayout,
    QMainWindow,
    QWidget,
} from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QSystemTrayIcon } from './lib/QtWidgets/QSystemTrayIcon';
import { QMenu } from './lib/QtWidgets/QMenu';
import { QAction } from './lib/QtWidgets/QAction';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
const label = new QLabel()
const tray = new QSystemTrayIcon()
const menu = new QMenu()
const action = new QAction()

action.setText('action')
action.setFont('Mono', 20)
menu.addAction(action)
tray.setContextMenu(menu)
tray.show();

label.setText("Hello!")
layout.addWidget(label)

win.setCentralWidget(center);
win.resize(400, 400);

win.show();
(global as any).win = win;
(global as any).tray = tray;