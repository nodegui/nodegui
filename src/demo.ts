import { FlexLayout, QMainWindow, QWidget } from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QFont, QFontCapitalization } from './lib/QtGui/QFont';
import { QPushButton } from './lib/QtWidgets/QPushButton';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
const label = new QLabel();
const font = new QFont('Mono', 14);
label.setFont(font);
label.setText('label 1');
const btn = new QPushButton();
btn.setText('Change font');
btn.setFont(new QFont('Helvetica', 20));
btn.addEventListener('clicked', () => {
    const font2 = label.font();
    font2.setCapitalization(QFontCapitalization.AllUppercase);
    font2.setItalic(true);
    font2.setFamily('Times');
    console.log('point', font2.pointSize());
    label.setFont(font2);
});
layout.addWidget(label);
layout.addWidget(btn);

win.setCentralWidget(center);
win.resize(400, 400);

win.show();
(global as any).win = win;
