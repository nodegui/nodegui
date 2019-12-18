import {FlexLayout, QMainWindow, QPainter, QTreeWidget, QTreeWidgetItem, QWidget} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);

win.setCentralWidget(center);


const painter = new QPainter();
painter.begin(win);
painter.drawText(30, 30, "Hello!");
painter.end();
win.show();

(global as any).win = win;
