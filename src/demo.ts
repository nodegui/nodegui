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

// const win = new QMainWindow();
const view = new QWidget();
view.setLayout(new FlexLayout());
view.setObjectName('view');
const left = new QWidget();
left.setObjectName('left');
const right = new QWidget();
right.setObjectName('right');
view.layout?.addWidget(left);
view.layout?.addWidget(right);
view.show();

view.setStyleSheet(`
    #view {
        border: 1px solid yellow;
    }

    #left {
        flex: 1;
       background-color: 'red';
    }

    #right {
        flex: 1;
       background-color: 'green';
    }
`);
center.layout?.addWidget(view);
// win.setCentralWidget(view);
// win.show();
// win.resize(300, 300);
// (global as any).win = win;
