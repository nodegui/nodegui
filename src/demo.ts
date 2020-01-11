import { QBoxLayout, QWidget, QApplication, QMainWindow, FlexLayout, QRadioButton, QButtonGroup, QMenuBar, QMenu, QAction} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.setCentralWidget(center);

const menubar = new QMenuBar();
win.setMenuBar(menubar);

/* This approach creates the menubar and menu on click, but menu will pop up in wrong location.
Might need to add a layout to hold it, or its because we need the qmenu returned from addMenu call.
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
qaction.addEventListener("triggered", () => {
    const app = QApplication.instance();
    app.exit(0);
});
faction.addEventListener("triggered", () => {
    fm.show();
    console.log(fm.pos(), menubar.pos());
});
*/ 

// Some simpler syntax would be nice to have.
const fileMenu = menubar.addMenuWithName("&file");
// const quitAction: QAction = fileMenu.addActionWithName("&Quit");

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

buttonGroup.addEventListener('buttonClicked', (id: number) => {
    console.log('Button #' + (id + 1) + ' clicked!');
    buttonGroup.removeButton(t[0]);
});

(global as any).win = win;

setInterval(() => null, 1000);
