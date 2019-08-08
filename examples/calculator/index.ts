import { QMainWindow } from "../../src/lib/QtWidgets/QMainWindow";
import { QWidget } from "../../src/lib/QtGui/QWidget";
import { FlexLayout } from "../../src/lib/core/FlexLayout";
import {
  QPushButton,
  QPushButtonEvents
} from "../../src/lib/QtWidgets/QPushButton";
import { QLabel } from "../../src/lib/QtWidgets/QLabel";
import { BaseWidgetEvents } from "../../src/lib/core/EventWidget";
import { QKeyEvent } from "../../src/lib/QtGui/QEvent/QKeyEvent";
import { StyleSheet } from "../../src/lib";

const globals = global as any;

// ===============
//  UI AND DESIGN
// ===============
const getButton = (
  label: string,
  value: number | string,
  type: "value" | "command"
) => {
  const button = new QPushButton();
  button.setText(label);
  button.setObjectName(`btn${value}`);
  button.addEventListener(QPushButtonEvents.clicked, () => {
    onBtnClick(value, type);
  });
  return {
    ui: button,
    value,
    type
  };
};

// Main Window
const win = new QMainWindow();
win.resize(230, 300);

// Root view
const rootView = new QWidget();
win.addEventListener(BaseWidgetEvents.KeyRelease, nativeEvent => {
  const keyEvt = new QKeyEvent(nativeEvent);
  const text = keyEvt.text();
  const isNotNumber = isNaN(parseInt(text));
  onBtnClick(text, isNotNumber ? "command" : "value");
});
rootView.setObjectName("rootView"); //This is like ids in web world
win.setCentralWidget(rootView);
const rootStyleSheet = StyleSheet.create(
  `
* {
  font-size: 20px;
  color: white;
}

QPushButton {
  min-width: '25%';
  border: 1px solid black;
}

QPushButton:pressed {
  background: grey;
}

#rootView {
  flex: 1;
  flex-direction: column;
}

#btnAC {
  min-width: '25%';
  border-right: 2px solid black;
}

#resultText {
  flex: 1;
  qproperty-alignment: 'AlignRight|AlignVCenter';
  padding-right: 5px;
  font-size: 40px;
}

#row0,#row1,#row2,#row3,#row4 {
  flex: 1;
  align-items: stretch;
  justify-content: space-between;
  flex-direction: row;
}

#row0 * {
  background: #1E1E1E;
}

#row0 QPushButton:pressed {
  background: grey;
}

#row1 QPushButton  {
  background: #2E2E2E;
}

#row1 QPushButton:pressed {
  background: grey;
}


#row2 QPushButton, #row2 QPushButton, #row3 QPushButton, #row4 QPushButton  {
    background: #4B4B4B;
}

#row2 QPushButton:pressed, #row2 QPushButton:pressed, #row3 QPushButton:pressed, #row4 QPushButton:pressed  {
  background: grey;
}
`
);

const operatorStyleSheet = StyleSheet.create(`
QPushButton {
  background: #FD8D0E;
}

QPushButton:pressed {
  background: grey;
}
`);

rootView.setStyleSheet(rootStyleSheet);
const rootViewFlexLayout = new FlexLayout();
rootViewFlexLayout.setFlexNode(rootView.getFlexNode());
rootView.setLayout(rootViewFlexLayout);

// Top Row
const btnClear = getButton("AC", "AC", "command");
const resultText = new QLabel();
resultText.setObjectName("resultText");
resultText.setText(0);
const row0 = new QWidget();
row0.setObjectName("row0");

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
btnDivide.ui.setStyleSheet(operatorStyleSheet);
const row1 = new QWidget();
row1.setObjectName("row1");
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
btnMultiply.ui.setStyleSheet(operatorStyleSheet);
const row2 = new QWidget();
row2.setObjectName("row2");
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
btnMinus.ui.setStyleSheet(operatorStyleSheet);

const row3 = new QWidget();
row3.setObjectName("row3");

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
btnPlus.ui.setStyleSheet(operatorStyleSheet);

const row4 = new QWidget();
row4.setObjectName("row4");
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

globals.win = win; //to keep gc from collecting ui widgets

// ========================
//  CALC APP LOGIC - LOGIC
// ========================
// This is probably the worst calculator logic ever but the purpose of demo is to showcase the UI and not the js logic.
// Read ahead of this line at your own risk.

let displayText = "0";
let currentInputString = "";
let total = 0;
let previousOperator = "+";

var onBtnClick = (value: number | string, type: "value" | "command") => {
  if (
    ![
      "0",
      "1",
      "2",
      "3",
      "4",
      "5",
      "6",
      "7",
      "8",
      "9",
      "+",
      "-",
      "/",
      "*",
      "=",
      "AC"
    ].includes(`${value}`)
  ) {
    return;
  }
  if (type === "value" || value === ".") {
    currentInputString += value;
    displayText = currentInputString;
  } else {
    const currentInput = parseFloat(currentInputString || "0");
    if (!previousOperator) {
      if (currentInputString) {
        total = currentInput;
      }
    }
    if (!currentInputString && value === "=") {
      previousOperator = "+";
    }
    switch (previousOperator) {
      case "+": {
        total += currentInput;
        break;
      }
      case "-": {
        total -= currentInput;
        break;
      }
      case "*": {
        total *= currentInput;
        break;
      }
      case "/": {
        total /= currentInput;
        break;
      }
    }
    currentInputString = "";

    if (value === "=") {
      displayText = String(total);
      previousOperator = "";
    } else {
      previousOperator = String(value);
      displayText = previousOperator;
    }
  }

  if (value === "AC") {
    displayText = "0";
    currentInputString = "";
    total = 0;
    previousOperator = "+";
  }

  if (Number.isNaN(total)) {
    total = 0;
    displayText = "Error";
  }

  // SET THE FINAL TEXT
  resultText.setText(displayText);
};
