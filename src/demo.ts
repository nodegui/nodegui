import { QMessageBox } from './index';
import { QPushButton } from './lib/QtWidgets/QPushButton';

const msgBox = new QMessageBox();
// const msgBoxButton = msgBox.addButton('Another button');
// console.log(msgBoxButton);
msgBox.setText('hellllooo');

const btn = new QPushButton();
btn.setText('yolo');
msgBox.addButton(btn);
msgBox.addEventListener('buttonClicked', button => {
    console.log(button);
});
msgBox.exec();

(global as any).msg = msgBox;
