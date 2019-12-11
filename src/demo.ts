import { QMainWindow, QPushButton, QLabel, QWidget, FlexLayout } from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('World');

const hello = new QLabel();
hello.setText('Hello');

center.setLayout(layout);
layout.addWidget(button);
layout.addWidget(hello);
layout.addWidget(table);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
