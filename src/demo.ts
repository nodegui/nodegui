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
  QDial,
  QPlainTextEdit
} from "./index";
import { QScrollArea } from "./lib/QtWidgets/QScrollArea";
import { QPixmap } from "./lib/QtGui/QPixmap";
import { CursorShape, WindowState } from "./lib/QtEnums"

const path = require("path");

const win = new QMainWindow();

const label = new QLabel();
label.setText("Hello world 🧙");
label.setInlineStyle("font-size: 20px;");
label.setCursor(CursorShape.ForbiddenCursor);

const checkbox = new QCheckBox();
checkbox.setText("Check me out?");
checkbox.setObjectName("check");
checkbox.setChecked(true);

const dial = new QDial();
checkbox.setObjectName("dial");

const lineEdit = new QLineEdit();
lineEdit.setPlaceholderText("Enter your thoughts here");
lineEdit.setObjectName("editable");

const button = new QPushButton();
button.setText("Push Push Push!");
button.setObjectName("btn");
button.setFlat(true);

const nodeguiLogo = new QIcon(
  path.resolve(__dirname, "../extras/assets/nodegui.png")
);

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

if (rootView.layout) {
  rootView.layout.addWidget(label);
  rootView.layout.addWidget(checkbox);
  rootView.layout.addWidget(radioButton);
  rootView.layout.addWidget(lineEdit);
  rootView.layout.addWidget(button);
  rootView.layout.addWidget(progressbar);
  rootView.layout.addWidget(textEdit);
  rootView.layout.addWidget(scrollArea);
  rootView.layout.addWidget(dial);
}

win.setCentralWidget(rootView);
win.setStyleSheet(`
  #root {
    flex: 1;
    height: '100%';
    align-items: 'center';
    justify-content: 'space-around';
  }
`);

win.setWindowIcon(nodeguiLogo);
win.setWindowTitle("NodeGUI Demo");

win.resize(400, 400);
win.show();
win.setWindowState(WindowState.WindowActive);

(global as any).win = win; // To prevent win from being garbage collected.
