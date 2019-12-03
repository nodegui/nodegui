import { QWidget, QMainWindow, FlexLayout, QLabel, QBoxLayout, QPushButton } from './index';
import { QScrollArea } from './lib/QtWidgets/QScrollArea';
import { Direction } from './lib/QtEnums';

const win = new QMainWindow();
const center = new QWidget();
const btn1 = new QPushButton();
const btn2 = new QPushButton();
const boxLayout = new QBoxLayout(Direction.LeftToRight)
btn1.setText(`
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
    `);
btn2.setText(`
    Helllo2
`);

center.setInlineStyle(`border: 3px solid blue`);
btn1.setInlineStyle(`padding: 10;font-family: "Sans serif";`);
btn2.setInlineStyle(`padding: 10;font-family: "Sans serif";`);
center.setLayout(boxLayout);
boxLayout.addWidget(btn1);
boxLayout.addWidget(btn2);
const box2 = new QBoxLayout(Direction.BottomToTop)
const lbl1 = new QLabel();
const lbl2 = new QLabel();
lbl1.setText("lbl1")
lbl2.setText("lbl2")
lbl1.setInlineStyle(`border: 2px solid blue;`);
lbl2.setInlineStyle(`border: 2px solid green;`);
box2.addWidget(lbl1);
box2.addWidget(lbl2);
btn1.addEventListener('clicked', ()=>{
    console.log('direction',boxLayout.direction())
    boxLayout.addLayout(box2, 2)
})
btn2.addEventListener('clicked', ()=>{
    boxLayout.addSpacing(20);
} )
win.setCentralWidget(center);
win.show();

(global as any).win = win;
