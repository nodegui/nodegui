import { QMainWindow } from "./src/lib/QtWidgets/QMainWindow";
import { QWidget } from "./src/lib/QtGui/QWidget";
import { QGridLayout } from "./src/lib/QtWidgets/QGridLayout";
import { QLabel } from "./src/lib/QtWidgets/QLabel";
import {
  QPushButton,
  QPushButtonSignal
} from "./src/lib/QtWidgets/QPushButton";
import { QCheckBox } from "./src/lib/QtWidgets/QCheckBox";
import { QProgressBar } from "./src/lib/QtWidgets/QProgressBar";
import { QRadioButton } from "./src/lib/QtWidgets/QRadioButton";
import { QLineEdit } from "./src/lib/QtWidgets/QLineEdit";
import { FlexLayout } from "./src/lib/core/FlexLayout";

// Test all widgets in this one. This works as of now!
const testGridLayout = () => {
  const win = new QMainWindow();
  const view = new QWidget();
  win.setCentralWidget(view);

  const gridLayout = new QGridLayout();

  const label = new QLabel();
  label.setText("Testing1234");
  label.setStyleSheet("background-color:blue; color:white;");

  const button1 = new QPushButton();
  button1.setSignalListener(QPushButtonSignal.clicked, isChecked => {
    console.log("clicked", isChecked);
  });
  button1.setSignalListener(QPushButtonSignal.pressed, (...args) => {
    console.log("pressed", ...args);
  });
  button1.setSignalListener(QPushButtonSignal.released, (...args) => {
    console.log("released", ...args);
  });
  button1.setSignalListener(QPushButtonSignal.toggled, isToggled => {
    console.log("toggled", isToggled);
  });

  button1.setText(`Button for Label with text: ${label.text()}`);

  const checkbox = new QCheckBox();
  checkbox.setText("Checkbox text");

  const progressbar = new QProgressBar();

  const radiobutton = new QRadioButton();

  const lineedit = new QLineEdit();

  gridLayout.addWidget(label);
  gridLayout.addWidget(button1);
  gridLayout.addWidget(checkbox);
  gridLayout.addWidget(progressbar);
  gridLayout.addWidget(radiobutton);
  gridLayout.addWidget(lineedit);

  view.setLayout(gridLayout);

  win.show();
  return win;
};

// -----------------------------------------------

// Doesnt work as of now. Testing flex here.
const testFlexLayout = () => {
  const win = new QMainWindow();
  const view = new QWidget();
  win.setCentralWidget(view);
  view.setStyleSheet(
    `
      background-color: green;
      qproperty-flex: 1;
    `
  );

  const flayout = new FlexLayout();
  flayout.setFlexNode(view.getFlexNode());

  const label = new QLabel();
  label.setText("Hello12321");
  label.setStyleSheet(`
    background-color:blue; 
    color:white;
    qproperty-alignSelf: 'center';
    qproperty-minWidth: '50%';
  `);

  const label2 = new QLabel();
  label2.setText("SECOND LABEL");
  label2.setStyleSheet(`
    background-color:green; 
    color:white;
    qproperty-alignSelf: 'stretch';
  `);

  flayout.addWidget(label2, label2.getFlexNode());
  flayout.addWidget(label, label.getFlexNode());

  view.setLayout(flayout);

  win.show();
  return win;
};

(global as any).win1 = testGridLayout(); //to keep gc from collecting
(global as any).win2 = testFlexLayout(); //to keep gc from collecting
