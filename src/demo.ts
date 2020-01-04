import { QMessageBox } from './index';
import { QPushButton } from './lib/QtWidgets/QPushButton';

const msgBox = new QMessageBox();
// const msgBoxButton = msgBox.addButton('Another button');
// console.log(msgBoxButton);
msgBox.setText('hellllooo');

const btn = new QPushButton();
btn.setText('yolo');
msgBox.addButton(btn);
msgBox.addEventListener('buttonClicked', rawButtonPtr => {
    console.log(rawButtonPtr);
    const btn2 = new QPushButton(rawButtonPtr);
    btn2.setText('Helloooo');
    const newMsg = new QMessageBox();
    newMsg.exec();
});
msgBox.exec();

(global as any).msg = msgBox;

setInterval(() => null, 1000);
