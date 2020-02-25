// Commenting the demo for the table view
// import { QTableView } from './lib/QtWidgets/QTableView';
// import { QWidget } from './lib/QtWidgets/QWidget';
// import { FlexLayout } from './lib/core/FlexLayout';
// import { QTableWidget } from './lib/QtWidgets/QTableWidget';

// // the code commented below have no problem
// /*const view = new QTableView();
// view.setStyleSheet(`
// QTableView {
//     min-width:300px;
//     min-height:200px;
// }
// `);
// view.show();
// */

// const widget = new QWidget();
// const layout = new FlexLayout();
// const view = new QTableView();
// const table = new QTableWidget(5, 5);

// view.setStyleSheet(`
// QTableView {
//     min-width:300px;
//     min-height:200px;
// }
// `);

// table.setStyleSheet(`
// QTableView {
//     min-width:300px;
//     min-height:200px;
// }
// `);

// widget.setLayout(layout);
// layout.addWidget(view); // app crash when add view to the layout
// layout.addWidget(table); // app run ok when add table to the layout

// widget.setInlineStyle('flex:1;');
// widget.resize(600, 400);
// widget.show();

// //(global as any).main = view;
// (global as any).main = widget;

import { QTabWidget } from './lib/QtWidgets/QTabWidget';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QIcon } from './lib/QtGui/QIcon';

const icon = new QIcon('/Users/atulr/Project/nodegui/nodegui/src/lib/QtGui/__tests__/assets/nodegui.png');
const title1 = 'title 1';
const title2 = 'title 2';
const tabContent1 = new QLabel();
const tabContent2 = new QLabel();

tabContent1.setText('test text1');
tabContent2.setText('test text2');

const tabs = new QTabWidget();

tabs.addTab(tabContent1, icon, title1);
tabs.addTab(tabContent2, icon, title2);

// demo for the tab text change
tabs.setTabText(0, 'new title 1');

tabs.show();

(global as any).tabs = tabs;
