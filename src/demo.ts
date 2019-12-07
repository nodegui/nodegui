import { QWidget, QScrollArea, FlexLayout, QPushButton } from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QMainWindow } from './lib/QtWidgets/QMainWindow';
import { QComboBox, QComboBoxEvents } from './lib/QtWidgets/QComboBox';

import { SizeAdjustPolicy } from './lib/QtEnums';

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
const combo = new QComboBox()
combo.addItem('test')
combo.addItem('test2')
combo.addEventListener(QComboBoxEvents.currentTextChanged, (e)=>{
    console.log('text changed', e)
})
combo.addEventListener(QComboBoxEvents.currentIndexChanged, (e)=>{
    console.log('index changed', e)
})
combo.addEventListener(QComboBoxEvents.editTextChanged, (e)=>{
    console.log('edit changed', e)
})
const btn1 = new QPushButton();
const btn2 = new QPushButton();
const btn3 = new QPushButton();
const btn4 = new QPushButton();
const btn5 = new QPushButton();

btn1.setText('add to index 1')
btn1.addEventListener('clicked', ()=>{
    combo.insertItem(1, 'inserted')
})
btn2.setText('remove index 1')
btn2.addEventListener('clicked', ()=>{
    combo.removeItem(1)
})
btn3.setText('editable')
btn3.addEventListener('clicked', ()=>{
    combo.setEditable(!combo.isEditable())
})
btn4.setText('max 4')
btn4.addEventListener('clicked', ()=>{
    combo.setMaxVisibleItems(4)
})
btn5.setText('Adjust Size')
btn5.addEventListener('clicked', ()=>{
    combo.setSizeAdjustPolicy(SizeAdjustPolicy.AdjustToContents)
})
center.layout?.addWidget(combo);
center.layout?.addWidget(btn1);
center.layout?.addWidget(btn2);
center.layout?.addWidget(btn3);
center.layout?.addWidget(btn4);
center.layout?.addWidget(btn5);
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
