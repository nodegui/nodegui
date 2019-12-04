import { QWidget, QScrollArea, FlexLayout, QPushButton } from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QMainWindow } from './lib/QtWidgets/QMainWindow';

const win = new QMainWindow();
const scroll = new QScrollArea();
const top = new QWidget();
top.setLayout(new FlexLayout());

const center = new QWidget();
center.setLayout(new FlexLayout());

const btn = new QPushButton();
btn.setText('helloo');

const text = new QLabel();
text.setText('1 oncererer');
btn.addEventListener('clicked', () => {
    text.setText(`
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    Yoloooooooooo
    `);
});

center.layout?.addWidget(btn);
center.layout?.addWidget(text);
scroll.setWidgetResizable(true);
center.setInlineStyle(`border: 3px solid blue; align-items:'center'; justify-content:'center';flex:1;`);
scroll.setWidget(top);
top.layout?.addWidget(center);
top.setInlineStyle(`border: 1px solid yellow;`);
win.setCentralWidget(scroll);
win.show();

(global as any).win = win;
