import { QWidget, QScrollArea, QMainWindow, FlexLayout, QLabel } from './index';

const win = new QMainWindow();
const scrollArea = new QScrollArea();
const center = new QWidget();
const label = new QLabel();
label.setText(`
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    `);

scrollArea.setInlineStyle('border: 1px solid yellow;');
center.setInlineStyle(`border: 3px solid blue;`);
label.setInlineStyle(`border: 2px solid green;padding: 10;`);

center.setLayout(new FlexLayout());
center.layout?.addWidget(label);
center.layout?.setProperty('sizeConstraint', 3);
scrollArea.setWidget(center);
win.setCentralWidget(scrollArea);
win.show();

(global as any).win = win;
