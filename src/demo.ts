import { QWidget, QMainWindow, FlexLayout, QLabel } from './index';
import { QScrollArea } from './lib/QtWidgets/QScrollArea';

const win = new QMainWindow();
const center = new QWidget();
const label = new QLabel();
const scrollArea = new QScrollArea();

label.setText(`
😱😱😱😱😱😱😱😱😱😱😱😱😱😱😱😱😱😱😱
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

center.setInlineStyle(`border: 3px solid blue;`);
label.setInlineStyle(`border: 2px solid green;padding: 10;font-family: "Sans serif";`);
scrollArea.setWidget(label);
center.setLayout(new FlexLayout());
center.layout?.addWidget(scrollArea);
win.setCentralWidget(center);
win.show();
scrollArea.setInlineStyle(`flex: 1;`);

(global as any).win = win;
