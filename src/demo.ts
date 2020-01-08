import { QWidget, QMainWindow, FlexLayout, QRadioButton, QButtonGroup } from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const buttonGroup = new QButtonGroup(center);
const t: any[] = [];
for (let i = 0; i < 4; i++) {
    const radioButton = new QRadioButton();
    radioButton.setText('Button #' + (i + 1));
    center.layout?.addWidget(radioButton);
    t.push(radioButton);
    buttonGroup.addButton(radioButton, i);
}
win.show();
buttonGroup.addEventListener('buttonClicked', (id: number) => {
    console.log('Button #' + (id + 1) + ' clicked!');
    buttonGroup.removeButton(t[0]);
});
(global as any).win = win;

setInterval(() => null, 1000);
