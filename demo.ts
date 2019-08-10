import {
  QMainWindow,
  QWidget,
  QLabel,
  FlexLayout,
  QPushButton
} from "./src/lib/index";
const win = new QMainWindow();
//-------------------------------
const centralWidget = new QWidget();
centralWidget.setObjectName("myroot");
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);
const view = new QWidget();
const viewLayout = new FlexLayout();
view.setInlineStyle(
  `margin-top:20px; background: url(${"/Users/atulr/Downloads/photo.jpeg"});`
);
view.setLayout(viewLayout);
//--------------------------------------
const label = new QLabel();
label.setObjectName("mylabel");
label.setText("Hello World");

const btn = new QPushButton();
btn.setText("Yo button");
btn.setObjectName("btn");
//--------------------------------------
viewLayout.addWidget(label);
viewLayout.addWidget(btn);
rootLayout.addWidget(view);
win.setCentralWidget(centralWidget);
const winStyleSheet = ` 
  #mylabel {
    font-size: 16px;
    font-weight: bold;
    margin-top: 40px;
  }
  #btn {
    margin-top: 30px;
  }
`;
win.setStyleSheet(winStyleSheet);
win.show();
win.resize(400, 500);

(global as any).win = win; // To prevent win from being garbage collected.
