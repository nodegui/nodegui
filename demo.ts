import { QMainWindow, QWidget, QLabel, FlexLayout } from "./src/lib/index";

const win = new QMainWindow();
//-------------------------------
const centralWidget = new QWidget();
centralWidget.setObjectName("myroot");
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);
//--------------------------------------
const label = new QLabel();
label.setObjectName("mylabel");
label.setText("Hello World");
//--------------------------------------
rootLayout.addWidget(label);
win.setCentralWidget(centralWidget);
win.setStyleSheet(
  `
    #myroot {
      background-color: #009688;
    }
    #mylabel {
      font-size: 16px;
      font-weight: bold;
    }
  `
);
win.show();

(global as any).win = win; // To prevent win from being garbage collected.
