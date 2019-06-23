import { QMainWindow } from "./src/lib/QtWidgets/QMainWindow";
import { QWidget } from "./src/lib/QtGui/QWidget";
import { QGridLayout } from "./src/lib/QtWidgets/QGridLayout";
import { QLabel } from "./src/lib/QtWidgets/QLabel";
import {
  QPushButton,
  QPushButtonEvents
} from "./src/lib/QtWidgets/QPushButton";
import { QCheckBox } from "./src/lib/QtWidgets/QCheckBox";
import { QProgressBar } from "./src/lib/QtWidgets/QProgressBar";
import { QRadioButton } from "./src/lib/QtWidgets/QRadioButton";
import { QLineEdit } from "./src/lib/QtWidgets/QLineEdit";
import { FlexLayout } from "./src/lib/core/FlexLayout";
import { KeyEvent } from "./src/lib/QtGui/QKeyEvent";

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
  button1.addEventListener(QPushButtonEvents.clicked, isChecked => {
    console.log("clicked", isChecked);
  });
  button1.addEventListener(QPushButtonEvents.pressed, (...args) => {
    console.log("pressed", ...args);
  });
  button1.addEventListener(QPushButtonEvents.released, (...args) => {
    console.log("released", ...args);
  });
  button1.addEventListener(QPushButtonEvents.toggled, isToggled => {
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

const testFlexLayout = () => {
  // rootView -> view  -> label
  //                   -> label2
  //          -> view2 -> button

  const win = new QMainWindow();
  win.addEventListener("KeyPress", nativeEvent => {
    const evt = new KeyEvent(nativeEvent);
    console.log(evt.text());
    console.log("KeyPress", evt);
  });
  win.setObjectName("win");
  win.resize(300, 300);
  const rootView = new QWidget();
  rootView.setStyleSheet(`
   * {
     position:relative;
   }
  `);
  rootView.setObjectName("rootView");
  const rootLayout = new FlexLayout();
  rootLayout.setFlexNode(rootView.getFlexNode());
  rootView.setLayout(rootLayout);
  win.setCentralWidget(rootView);

  const view = new QWidget(rootView);
  view.setObjectName("view");
  view.setStyleSheet(
    `
      qproperty-flex: 1;
    `
  );

  const flayout = new FlexLayout();
  flayout.setFlexNode(view.getFlexNode());

  const label = new QLabel(view);
  label.setObjectName("label");
  label.setText("Hello12321");
  label.setStyleSheet(`
    background-color:blue; 
    color:white;
    qproperty-alignSelf: 'center';
    qproperty-minWidth: '50%';
  `);

  const label2 = new QLabel(view);
  label2.setObjectName("label2");
  label2.setText("SECOND LABEL");
  label2.setStyleSheet(`
    background-color:green; 
    color:white;
    qproperty-alignSelf: 'stretch';
  `);

  flayout.addWidget(label2, label2.getFlexNode());
  flayout.addWidget(label, label.getFlexNode());
  view.setLayout(flayout);

  const view2 = new QWidget(rootView);
  view2.setObjectName("view2");
  const flayout2 = new FlexLayout();
  flayout2.setFlexNode(view2.getFlexNode());
  view2.setLayout(flayout2);

  const button = new QPushButton(view2);
  button.setObjectName("button");
  button.setText("Hululu");
  button.addEventListener("pressed", () => {
    console.log("pressed");
  });
  flayout2.addWidget(button, button.getFlexNode());

  rootLayout.addWidget(view, view.getFlexNode());
  rootLayout.addWidget(view2, view2.getFlexNode());

  win.show();
  return win;
};

(global as any).win1 = testGridLayout(); //to keep gc from collecting
(global as any).win2 = testFlexLayout(); //to keep gc from collecting
