import { FlexLayout, QMainWindow, QWidget } from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QSystemTrayIcon } from './lib/QtWidgets/QSystemTrayIcon';
import { QMenu } from './lib/QtWidgets/QMenu';
import { QAction } from './lib/QtWidgets/QAction';
import { QFont, QFontWeight, QFontCapitalization, QFontStretch } from './lib/QtGui/QFont';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();

const label = new QLabel();
const tray = new QSystemTrayIcon();
const menu = new QMenu();
const action = new QAction();

const font = new QFont('serif', 40, QFontWeight.ExtraLight, true);
font.setCapitalization(QFontCapitalization.AllUppercase);
font.setStretch(QFontStretch.UltraCondensed);

const family = font.family();
const pointSize = font.pointSize();
const weight = font.weight();
const italic = font.italic();
const capitalization = font.capitalization();
const stretch = font.stretch();
console.log({ family, pointSize, weight, italic, capitalization, stretch });

action.setText('action1');
action.setFont(font);
menu.addAction(action);

const font2 = new QFont(font);
font2.setFamily('mono');
font2.setCapitalization(QFontCapitalization.Capitalize);
font2.setStretch(QFontStretch.ExtraExpanded);
font2.setPointSize(20);

const action2 = new QAction();
action2.setText('action2');
action2.setFont(font2);
menu.addAction(action2);

tray.setContextMenu(menu);

tray.show();

label.setText('Hello!');
layout.addWidget(label);

win.setCentralWidget(center);
win.resize(400, 400);

win.show();
(global as any).win = win;
(global as any).tray = tray;
