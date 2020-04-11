import {
    QMainWindow,
    QWidget,
    QLabel,
    FlexLayout,
    QPushButton,
    WidgetEventTypes,
    QCloseEvent,
    QMessageBox,
    StandardButton,
} from './index';

const win = new QMainWindow();

win.addEventListener(WidgetEventTypes.Close, (event) => {
    if (event) {
        const closeEvent = new QCloseEvent(event);
        const msg = QMessageBox.question(win, 'Exit confirmation', 'Are you sure you want to exit');
        if (msg === StandardButton.No) {
            closeEvent.ignore();
        }
    }
});

win.setWindowTitle('Hello World');

const centralWidget = new QWidget();
centralWidget.setObjectName('myroot');
const rootLayout = new FlexLayout();
centralWidget.setLayout(rootLayout);
const label = new QLabel();
label.setObjectName('mylabel');
label.setText('Hello');

const button = new QPushButton();

const label2 = new QLabel();
label2.setText('World');
label2.setInlineStyle(`
  color: red;
`);

rootLayout.addWidget(label);
rootLayout.addWidget(button);
rootLayout.addWidget(label2);
win.setCentralWidget(centralWidget);
win.setStyleSheet(
    `
    #myroot {
      background-color: #009688;
      height: '100%';
      align-items: 'center';
      justify-content: 'center';
    }
    #mylabel {
      font-size: 16px;
      font-weight: bold;
      padding: 1;
    }
  `,
);
win.show();

(global as any).win = win;
