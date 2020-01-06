import { QWidget, QMainWindow, FlexLayout, QRadioButton, QButtonGroup } from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const group = new QButtonGroup(center);
const radio1 = new QRadioButton();
radio1.setText('Hello1');
win.layout?.addWidget(radio1);
group.addButton(radio1);
const radio2 = new QRadioButton();
radio2.setText('Hello2');
win.layout?.addWidget(radio2);
group.addButton(radio2);
const radio3 = new QRadioButton();
radio3.setText('Hello3');
win.layout?.addWidget(radio3);
group.addButton(radio3);
win.show();
group.addEventListener('buttonClicked', () => {
    console.log(group.checkedId());
});
(global as any).win = win;
