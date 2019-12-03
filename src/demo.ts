import { QWidget, QMainWindow, FlexLayout, QGridLayout, QLabel } from './index';
import { QScrollArea } from './lib/QtWidgets/QScrollArea';

const scrollArea = new QScrollArea();
scrollArea.setObjectName('scrollArea');
scrollArea.setWidgetResizable(true);
// scrollArea.resize(500, 500);
const center = new QWidget();
center.setObjectName('center');
const label = new QLabel();
label.setObjectName('label');

label.setText(`
Hellloooooo123
Hellloooooo
`);

center.setInlineStyle(`border: 3px solid blue;`);
label.setInlineStyle(`border: 2px solid green;padding: 10;flex:1;font-family: "Sans serif";`);
// center.setLayout(new QGridLayout());
center.setLayout(new FlexLayout());
center.layout?.addWidget(label);
scrollArea.setWidget(center);
console.log('SHOW scrollArea');
scrollArea.show();
console.log('SET TEXT');
setTimeout(() => {
    label.setText(`Heloo
    Heloo
    Jello
    Hoell
    jaksjd
    asjdkajdk
    aksjdkajsdkja
    ajksjdakjsd
    jkasjdkajd
    ajksdjakjs`);
}, 3000);

(global as any).scrollArea = scrollArea;
