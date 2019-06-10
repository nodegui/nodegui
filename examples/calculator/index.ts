import { QMainWindow } from "../../src/lib/QtWidgets/QMainWindow";
import { QWidget } from "../../src/lib/QtGui/QWidget";
import { FlexLayout } from "../../src/lib/core/FlexLayout";
import { QPushButton } from "../../src/lib/QtWidgets/QPushButton";
import { QLabel } from "../../src/lib/QtWidgets/QLabel";

const globals = global as any;

const getButton = (
  label: string,
  value: number | string,
  type: "value" | "command"
) => {
  const button = new QPushButton();
  button.setText(label);
  return {
    ui: button,
    value,
    type
  };
};

// Main Window
const win = new QMainWindow();

// Root view
const rootView = new QWidget();
win.setCentralWidget(rootView);
rootView.setStyleSheet(
  `
    qproperty-flex: 1;
    qproperty-flexDirection: column;
  `
);
const rootViewFlexLayout = new FlexLayout();
rootViewFlexLayout.setFlexNode(rootView.getFlexNode());
rootView.setLayout(rootViewFlexLayout);

// Top Row
const btnClear = getButton("AC", "AC", "command");
btnClear.ui.setStyleSheet(`
  qproperty-flex: 0.3;
`);
const resultText = new QLabel();
resultText.setText(0);
resultText.setStyleSheet(`
qproperty-flex: 0.7;
qproperty-alignment: AlignCenter;
`);
const row0 = new QWidget();
row0.setStyleSheet(`
  qproperty-flex: 1;
  qproperty-flexDirection: row;
`);
const row0Layout = new FlexLayout();
row0Layout.setFlexNode(row0.getFlexNode());
row0.setLayout(row0Layout);
row0Layout.addWidget(btnClear.ui, btnClear.ui.getFlexNode());
row0Layout.addWidget(resultText, resultText.getFlexNode());

// First Row
const btn7 = getButton("7", 7, "value");
const btn8 = getButton("8", 8, "value");
const btn9 = getButton("9", 9, "value");
const btnDivide = getButton("/", "/", "command");
const row1 = new QWidget();
row1.setStyleSheet(`
  qproperty-flex: 1;
  qproperty-flexDirection: row;
`);
const row1Layout = new FlexLayout();
row1Layout.setFlexNode(row1.getFlexNode());
row1Layout.addWidget(btn7.ui, btn7.ui.getFlexNode());
row1Layout.addWidget(btn8.ui, btn8.ui.getFlexNode());
row1Layout.addWidget(btn9.ui, btn9.ui.getFlexNode());
row1Layout.addWidget(btnDivide.ui, btnDivide.ui.getFlexNode());
row1.setLayout(row1Layout);

// Second Row
const btn4 = getButton("4", 4, "value");
const btn5 = getButton("5", 5, "value");
const btn6 = getButton("6", 6, "value");
const btnMultiply = getButton("x", "*", "command");
const row2 = new QWidget();
row2.setStyleSheet(`
  qproperty-flex: 1;
  qproperty-flexDirection: row;
`);
const row2Layout = new FlexLayout();
row2Layout.setFlexNode(row2.getFlexNode());
row2Layout.addWidget(btn4.ui, btn4.ui.getFlexNode());
row2Layout.addWidget(btn5.ui, btn5.ui.getFlexNode());
row2Layout.addWidget(btn6.ui, btn6.ui.getFlexNode());
row2Layout.addWidget(btnMultiply.ui, btnMultiply.ui.getFlexNode());
row2.setLayout(row2Layout);

// Third Row
const btn1 = getButton("1", 1, "value");
const btn2 = getButton("2", 2, "value");
const btn3 = getButton("3", 3, "value");
const btnMinus = getButton("-", "-", "command");
const row3 = new QWidget();
row3.setStyleSheet(`
  qproperty-flex: 1;
  qproperty-flexDirection: row;
`);
const row3Layout = new FlexLayout();
row3Layout.setFlexNode(row3.getFlexNode());
row3Layout.addWidget(btn1.ui, btn1.ui.getFlexNode());
row3Layout.addWidget(btn2.ui, btn2.ui.getFlexNode());
row3Layout.addWidget(btn3.ui, btn3.ui.getFlexNode());
row3Layout.addWidget(btnMinus.ui, btnMinus.ui.getFlexNode());
row3.setLayout(row3Layout);

// Fourth Row
const btn0 = getButton("0", 0, "value");
const btnDot = getButton(".", ".", "command");
const btnEquals = getButton("=", "=", "command");
const btnPlus = getButton("+", "+", "command");
const row4 = new QWidget();
row4.setStyleSheet(`
  qproperty-flex: 1;
  qproperty-flexDirection: row;
`);
const row4Layout = new FlexLayout();
row4Layout.setFlexNode(row4.getFlexNode());
row4Layout.addWidget(btn0.ui, btn0.ui.getFlexNode());
row4Layout.addWidget(btnDot.ui, btnDot.ui.getFlexNode());
row4Layout.addWidget(btnEquals.ui, btnEquals.ui.getFlexNode());
row4Layout.addWidget(btnPlus.ui, btnPlus.ui.getFlexNode());
row4.setLayout(row4Layout);

// Add to root view
rootViewFlexLayout.addWidget(row0, row0.getFlexNode());
rootViewFlexLayout.addWidget(row1, row1.getFlexNode());
rootViewFlexLayout.addWidget(row2, row2.getFlexNode());
rootViewFlexLayout.addWidget(row3, row3.getFlexNode());
rootViewFlexLayout.addWidget(row4, row4.getFlexNode());

win.show();

setTimeout(() => {
  win.resize(210, 150); // This is a hack to solve layout issues on initial render. Will need to fix this.
}, 10);
globals.win = win; //to keep gc from collecting ui widgets
