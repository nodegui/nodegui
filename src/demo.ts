import { QWidget, QMainWindow, FlexLayout, QRadioButton, QButtonGroup } from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const buttonGroup = new QButtonGroup(center);
for (let i = 0; i < 4; i++) {
    const radioButton = new QRadioButton();
    radioButton.setText('Button #' + (i + 1));
    center.layout?.addWidget(radioButton);
    buttonGroup.addButton(radioButton, i);
}
win.show();
buttonGroup.addEventListener('buttonClicked', (id: number) => {
    console.log('Button #' + (id + 1) + ' clicked!');
});
(global as any).win = win;
