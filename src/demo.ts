import {
  QMainWindow,
  QLabel,
  QCheckBox,
  QLineEdit,
  QPushButton,
  QProgressBar,
  QRadioButton,
  FlexLayout,
  QWidget,
  QIcon,
  QPlainTextEdit,
  QTabWidget
} from "./index";
import { QScrollArea } from "./lib/QtWidgets/QScrollArea";
import { QPixmap } from "./lib/QtGui/QPixmap";

const path = require("path");

const win = new QMainWindow();

const label = new QLabel();
label.setText("Hello world 🧙");
label.setInlineStyle("font-size: 20px;");

const checkbox = new QCheckBox();
checkbox.setText("Check me out?");
checkbox.setObjectName("check");

const lineEdit = new QLineEdit();
lineEdit.setPlaceholderText("Enter your thoughts here");
lineEdit.setObjectName("editable");

const button = new QPushButton();
button.setText("Push Push Push!");
button.setObjectName("btn");
button.setFlat(true);

const icon = new QIcon(
  path.resolve(__dirname, "../extras/assets/start_icon.png")
);
button.setIcon(icon);

const progressbar = new QProgressBar();
progressbar.setValue(6);
progressbar.setMinimum(1);
progressbar.setMaximum(15);

const radioButton = new QRadioButton();
radioButton.setText("Roger that!");

const rootView = new QWidget();
rootView.setObjectName("root");
rootView.setLayout(new FlexLayout());

const textEdit = new QPlainTextEdit();
textEdit.setPlainText("Hello");

const scrollArea = new QScrollArea();
scrollArea.setInlineStyle("flex: 1; width:'100%';");

const imageLabel = new QLabel();
const pixmap = new QPixmap(
  path.resolve(__dirname, "../extras/assets/kitchen.png")
);
imageLabel.setPixmap(pixmap);
scrollArea.setWidget(imageLabel);

const tabs = new QTabWidget();
tabs.setTabPosition(0);
const tabWidget1 = new QWidget();
tabWidget1.setObjectName("tabsroot");
tabWidget1.setLayout(new FlexLayout());

const tabWidget2 = new QWidget();
const tabWidget3 = new QWidget();

tabs.addTab(tabWidget1, icon, "😀 Tab 1");
tabs.addTab(tabWidget2, icon, "💡 Tab 2");
tabs.addTab(tabWidget3, icon, "🔒 Tab 3");

tabWidget1.setStyleSheet('* { width 500px; height:500px; background-color:red; padding:5px}');
tabWidget2.setStyleSheet('* { width 500px; height:500px; background-color:green;  padding:5px}');
tabWidget3.setStyleSheet('* { width 500px; height:500px; background-color:blue;  padding:5px}');

setInterval(() => {
  //console.log(tabs, tabs.currentIndex());
}, 1000);

if(tabWidget1.layout) {
  tabWidget1.layout.addWidget(label);
}

if (rootView.layout) {
  rootView.layout.addWidget(tabs);
  rootView.layout.addWidget(checkbox);
  rootView.layout.addWidget(radioButton);
  rootView.layout.addWidget(lineEdit);
  rootView.layout.addWidget(button);
  rootView.layout.addWidget(progressbar);
  rootView.layout.addWidget(textEdit);
  rootView.layout.addWidget(scrollArea);
}

win.setCentralWidget(rootView);
win.setStyleSheet(`
#root {
  flex: 1;
  height: '100%';
  align-items: 'center';
  justify-content: 'space-around';
}
#tabsroot {
  flex: 1;
  height: 500px;
  width: 500px,
  align-items: 'center';
  justify-content: 'space-around';
}
`);

win.resize(400, 400);
win.show();

(global as any).win = win; // To prevent win from being garbage collected.
