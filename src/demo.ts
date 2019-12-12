import { QMainWindow, QPushButton, QLabel, QWidget, FlexLayout } from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('World');

const hello = new QLabel();
hello.setText('Hello');

center.setLayout(new FlexLayout());
center.layout?.addWidget(button);
center.layout?.addWidget(hello);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
