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
  QPlainTextEditEvents
} from "./index";

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

const lineEditLabel = new QLabel();
lineEditLabel.setInlineStyle("font-size: 12px;");
lineEditLabel.setText("PlainTextEdit's bound Value");
const textEdit = new QPlainTextEdit();
textEdit.setPlainText("Hello");

textEdit.addEventListener(QPlainTextEditEvents.textChanged, (value: string) => {
  lineEditLabel.setText(textEdit.plainText());
});

if (rootView.layout) {
  rootView.layout.addWidget(label);
  rootView.layout.addWidget(checkbox);
  rootView.layout.addWidget(radioButton);
  rootView.layout.addWidget(lineEdit);
  rootView.layout.addWidget(button);
  rootView.layout.addWidget(progressbar);
  rootView.layout.addWidget(textEdit);
  rootView.layout.addWidget(lineEditLabel);
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

win.resize(400, 400);
win.show();

(global as any).win = win; // To prevent win from being garbage collected.
