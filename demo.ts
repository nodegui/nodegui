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
import { QKeyEvent } from "./src/lib/QtGui/QEvent/QKeyEvent";

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

// BROKEN STUFF IN WINDOWS:
// FLEX DIRECTION ROW
// JUSTIFY CONTENT: SPACE-EVENLY, SPACE-AROUND 
// ALIGNSELF: STRETCH

const testFlexLayout = () => {
  // rootView -> view1 -> label1
  //                   -> label2
  //          -> view2 -> button

 const win = new QMainWindow();
 win.setStyleSheet(`
  #root {
    background-color: grey;
    qproperty-qWidth: '100%';
    qproperty-qHeight: '100%';
    qproperty-alignItems: 'center';
    qproperty-justifyContent: 'center';
    qproperty-flex: 1;
  }
  #view1 {
    background-color: green;
    qproperty-flex: 1;
    qproperty-alignItems: 'center';
    qproperty-justifyContent: 'center';
    qproperty-qWidth: '100%';
  }
  #view2 {
    background-color: orange;
    qproperty-flex: 1;
    qproperty-alignItems: 'center';
    qproperty-justifyContent: 'center';
    qproperty-qWidth: '100%';
  }
 
 `);
 const rootView = new QWidget();
 rootView.setObjectName("root");
 const rootLayout = new FlexLayout();
 rootLayout.setFlexNode(rootView.getFlexNode());
 rootView.setLayout(rootLayout);
 //-----------------------
 const view1 = new QWidget();
 view1.setObjectName(`view1`);
 const viewLayout = new FlexLayout();
 viewLayout.setFlexNode(view1.getFlexNode());
 view1.setLayout(viewLayout);
 const label = new QLabel();
 label.setText("LABEL 1");
 label.setObjectName("label1");
 const label2 = new QLabel();
 label2.setObjectName("label2");
 label2.setText("LABEL 2");
 viewLayout.addWidget(label);
 viewLayout.addWidget(label2);
//----------------------------
 const view2 = new QWidget();
 view2.setObjectName("view2");
 const view2Layout = new FlexLayout();
 view2Layout.setFlexNode(view2.getFlexNode());
 view2.setLayout(view2Layout);
 const button = new QPushButton();
 button.setObjectName("button");
 button.setText("BUTTON");
 view2Layout.addWidget(button);
//-----------------------------
 rootLayout.addWidget(view1);
 rootLayout.addWidget(view2);
 win.setCentralWidget(rootView);
 win.show();
 return win;
};

// (global as any).win1 = testGridLayout(); //to keep gc from collecting
(global as any).win2 = testFlexLayout(); //to keep gc from collecting
