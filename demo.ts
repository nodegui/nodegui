import { QtGui, QtWidgets } from "./src";
const win = new QtWidgets.QMainWindow();
const view = new QtGui.QWidget();
win.setCentralWidget(view);

const gridLayout = new QtWidgets.QGridLayout();

const label = new QtWidgets.QLabel();
label.setText("Testing1234");

const label2 = new QtWidgets.QLabel();
label2.setText("Hello12321");
label2.setStyleSheet("background-color:blue; color:white;");

const button1 = new QtWidgets.QPushButton();
button1.setText("Yolo");
// button1.setEventListener("click", () => {
//   console.log("button clicked");
// });

gridLayout.addWidget(label);
gridLayout.addWidget(label2);
gridLayout.addWidget(button1);

view.setLayout(gridLayout);

win.show();
// app.exec();

(global as any).win = win; //to keep gc from collecting
