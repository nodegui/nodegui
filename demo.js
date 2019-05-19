const nodeDesktop = require("./index");
const {QWidget,QGridLayout,QLabel,QMainWindow} = nodeDesktop;

const win = new QMainWindow();

const view = new QWidget();
win.setCentralWidget(view);

const gridLayout = new QGridLayout();

const label = new QLabel();
label.setText('Testing1234');

const label2 = new QLabel();
label2.setText('Hello12321');
label2.setStyleSheet('background-color:blue; color:white;');

gridLayout.addWidget(label);
gridLayout.addWidget(label2);

view.setLayout(gridLayout);

win.show();

console.log("THIS RAN");
setInterval(()=>console.log("SHOW OFF"), 1000);