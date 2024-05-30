import { QMainWindow } from './lib/QtWidgets/QMainWindow';
import { QLabel } from './lib/QtWidgets/QLabel';
import { FlexLayout } from './lib/core/FlexLayout';
import { QWidget } from './lib/QtWidgets/QWidget';
import { QBoxLayout } from './lib/QtWidgets/QBoxLayout';
import { Direction } from './lib/QtEnums';
import { QStackedLayout } from './lib/QtWidgets/QStackedLayout';
import { QComboBox } from './lib/QtWidgets/QComboBox';

// Create main window
const win = new QMainWindow();
win.setWindowTitle('QStackedLayout');

// Create central widget and layout
const centralWidget = new QWidget();
centralWidget.setObjectName('myroot');
const rootLayout = new QBoxLayout(Direction.TopToBottom);
centralWidget.setLayout(rootLayout);

// Create stacked layout
const stackedLayout = new QStackedLayout();

// Create pages with labels
const createPage = (text: string) => {
  const page = new QWidget();
  const layout = new FlexLayout();
  page.setLayout(layout);
  const label = new QLabel();
  label.setText(text);
  layout.addWidget(label);
  return page;
};

stackedLayout.addWidget(createPage("This is page 1"));
stackedLayout.addWidget(createPage("This is page 2"));
stackedLayout.addWidget(createPage("This is page 3"));

// Create combo box to switch pages
const combobox = new QComboBox();
combobox.addItems(["Page 1", "Page 2", "Page 3"]);
combobox.addEventListener("currentIndexChanged", (index) => stackedLayout.setCurrentIndex(index));

// Add combo box and stacked layout to root layout
rootLayout.addWidget(combobox);
rootLayout.addLayout(stackedLayout);

// Create and update label for current index
const currentIndexLabel = new QLabel();
currentIndexLabel.setText(`Current Index: ${stackedLayout.currentIndex()}`);
stackedLayout.addEventListener("currentChanged", (index) => {
  currentIndexLabel.setText(`Current Index: ${index}`);
});
rootLayout.addWidget(currentIndexLabel);

// Set up and show main window
win.setCentralWidget(centralWidget);
win.setMinimumSize(300, 100);
win.show();

(global as any).win = win;
