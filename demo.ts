import { QMainWindow } from "./src/lib/QtWidgets/QMainWindow";
import { QWidget } from "./src/lib/QtGui/QWidget";
import { QGridLayout } from "./src/lib/QtWidgets/QGridLayout";
import { QLabel } from "./src/lib/QtWidgets/QLabel";
import { QPushButton } from "./src/lib/QtWidgets/QPushButton";
import { QCheckBox } from "./src/lib/QtWidgets/QCheckBox";
import { QProgressBar } from "./src/lib/QtWidgets/QProgressBar";
import { QRadioButton } from "./src/lib/QtWidgets/QRadioButton";
import { QLineEdit } from "./src/lib/QtWidgets/QLineEdit";
import { FlexLayout } from "./src/lib/QtWidgets/FlexLayout";

const win = new QMainWindow();
const view = new QWidget();
win.setCentralWidget(view);

const gridLayout = new QGridLayout();
const label = new QLabel();
label.setText("Testing1234");

const label2 = new QLabel();
label2.setText("Hello12321");
label2.setStyleSheet("background-color:blue; color:white;");
const label2FlexNode = label2.getFlexNode();
label2FlexNode.debugValue();
const flayout = new FlexLayout();
flayout.addWidget(label2, label2FlexNode);

const button1 = new QPushButton();
button1.setText("Yolo");

const checkbox = new QCheckBox();
checkbox.setText("Pumpkeen");

const progressbar = new QProgressBar();

const radiobutton = new QRadioButton();

const lineedit = new QLineEdit();

gridLayout.addWidget(label);
gridLayout.addWidget(label2);
gridLayout.addWidget(button1);
gridLayout.addWidget(checkbox);
gridLayout.addWidget(progressbar);
gridLayout.addWidget(radiobutton);
gridLayout.addWidget(lineedit);

view.setLayout(gridLayout);

win.show();
// app.exec();

(global as any).win = win; //to keep gc from collecting
