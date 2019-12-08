import { QMainWindow, QPushButton, QLabel, QWidget, FlexLayout, QComboBox, QComboBoxEvents } from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('Hello');

const hello = new QLabel();
hello.setText('hello text');

const combo = new QComboBox();
combo.addItems(['text1', 'text2', 'text3'])
combo.insertItems(1,['insert1', 'insert2', 'insert3'])
combo.addEventListener(QComboBoxEvents.currentTextChanged, (text)=>hello.setText(text))

center.setLayout(new FlexLayout());
center.layout?.addWidget(button);
center.layout?.addWidget(hello);
center.layout?.addWidget(combo);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
