import { QWidget, QMainWindow, FlexLayout, QLabel } from './index';

const win = new QMainWindow();
const center = new QWidget();
center.setInlineStyle(`
  border: 4px solid pink;
`);
center.setLayout(new FlexLayout());

const label = new QLabel();
label.setInlineStyle(`
  height: 400px;
  border: 3px solid green;
`);
label.setText(`Helloooo`);

center.layout?.addWidget(label);
win.setCentralWidget(center);
win.show();
(global as any).win = win;
