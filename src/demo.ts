import { QWidget, QApplication, QMainWindow, FlexLayout, QRadioButton, QButtonGroup, QMenuBar, QMenu, QAction} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const menubar = new QMenuBar();
menubar.show();
const fm = new QMenu();
const qaction = new QAction();
qaction.setText("&Quit");
fm.addAction(qaction);
fm.addSeparator();
const sayhi = new QAction();
sayhi.setText("&SayHi");
fm.addAction(sayhi);
menubar.addMenu(fm);
const faction = new QAction();
faction.setText("&File");
menubar.addAction(faction);
win.setMenuBar(menubar);

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

qaction.addEventListener("triggered", () => {
    const app = QApplication.instance();
    app.exit(0);
});

qaction.addEventListener("triggered", () => {
    console.log("hello friend!");
});


faction.addEventListener("triggered", () => {
    fm.show();
    console.log(fm.pos(), menubar.pos());
});

buttonGroup.addEventListener('buttonClicked', (id: number) => {
    console.log('Button #' + (id + 1) + ' clicked!');
    buttonGroup.removeButton(t[0]);
});



(global as any).win = win;

setInterval(() => null, 1000);
