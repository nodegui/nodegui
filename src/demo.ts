import {
    QMainWindow,
    QPushButton,
    QLabel,
    QWidget,
    FlexLayout,
    QFileDialog,
    QFileDialogEvents,
    FileMode,
    DialogLabel,
} from './index';

const win = new QMainWindow();
const center = new QWidget();

const button = new QPushButton();
button.setText('Open File Dialog');

const hello = new QLabel();
hello.setText('hello text');

const file = new QFileDialog(center, 'Select File', `${process.env.HOME}`);
file.setFileMode(FileMode.ExistingFiles);
file.setLabelText(DialogLabel.Accept, 'New Accept Label!');
file.addEventListener(QFileDialogEvents.filesSelected, (selected: string[]) => console.log('text', selected));
button.addEventListener('clicked', () => file.open());

center.setLayout(new FlexLayout());
center.layout?.addWidget(button);
center.layout?.addWidget(hello);

win.setCentralWidget(center);
win.show();

(global as any).win = win;
