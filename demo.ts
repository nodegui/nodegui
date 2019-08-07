import {
  QMainWindow,
  QWidget,
  QLabel,
  FlexLayout,
  StyleSheet,
  QPushButton
} from "./src/lib/index";

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

const btn = new QPushButton();
btn.setText("Yo button");
btn.setObjectName("btn");
//--------------------------------------
rootLayout.addWidget(label);
rootLayout.addWidget(btn);
win.setCentralWidget(centralWidget);
const winStyleSheet = StyleSheet.create(`
  #myroot {
    background-color: #009688;
  }
  #mylabel {
    font-size: 16px;
    font-weight: bold;
    margin-top: 30px;
  }
  #btn {
    margin-top: 30px;
  }
`);
win.setStyleSheet(winStyleSheet);
win.show();
win.resize(400, 500);

(global as any).win = win; // To prevent win from being garbage collected.
