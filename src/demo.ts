import { Direction, QMainWindow, QBoxLayout, QWidget, QLabel } from './index';

const win = new QMainWindow();
const center = new QWidget();
const box = new QBoxLayout(Direction.TopToBottom);
center.setLayout(box);

[1, 2, 3, 4].forEach(num => {
    const label = new QLabel();
    label.setText(`Hello Label ${num}`);
    const color = `#${(2 * num).toString().repeat(6)}`;
    label.setInlineStyle(`border: 2px solid ${color}`);
    box.addWidget(label, num);
    return label;
});
const label = new QLabel();
label.setText('Inserted label');
box.insertWidget(2, label, 5);
win.setCentralWidget(center);
win.resize(200, 400);
win.setWindowTitle('box stretch');

win.show();
(global as any).win = win;
