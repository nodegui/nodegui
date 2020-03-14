import {
    QMainWindow,
    QWidget,
    QPushButton,
    QLineEdit,
    FlexLayout,
    QApplication,
    QClipboardMode,
    QLabel,
    QPixmap,
} from './index';

const win = new QMainWindow();
const center = new QWidget();
const label = new QLabel();
const textInput = new QLineEdit();
const getBtn = new QPushButton();
const setBtn = new QPushButton();

//----------
label.setText('Copy any image onto the clipboard and click `Get clipbard image button`');
getBtn.setText('Get clipboard image');
getBtn.addEventListener('clicked', () => {
    const clip = QApplication.clipboard();
    const pixmap = clip.pixmap(QClipboardMode.Clipboard);
    label.setPixmap(pixmap);
});

//--------------
textInput.setPlaceholderText('Enter absolute image path to load into clipboard');
setBtn.setText('Set clipboard image');
setBtn.addEventListener('clicked', () => {
    const clip = QApplication.clipboard();
    const pixmap = new QPixmap();
    pixmap.load(textInput.text());
    clip.setPixmap(pixmap, QClipboardMode.Clipboard);
    label.setText(`Loaded image at ${textInput.text()} to global clipboard`);
});

center.setLayout(new FlexLayout());
center.layout?.addWidget(textInput);
center.layout?.addWidget(setBtn);
center.layout?.addWidget(getBtn);
center.layout?.addWidget(label);
center.setInlineStyle(`width: 400; height: 400;`);
win.setCentralWidget(center);
win.show();
win.setFixedSize(400, 400);
(global as any).win = win;
