import { QMessageBox } from './index';

const msgBox = new QMessageBox();
const msgBoxButton = msgBox.addButton('Another button');
console.log(msgBoxButton);
msgBox.exec();
