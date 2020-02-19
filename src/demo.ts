import { QTableView } from './lib/QtWidgets/QTableView';
import { QWidget } from './lib/QtWidgets/QWidget';
import { FlexLayout } from './lib/core/FlexLayout';
import { QTableWidget } from './lib/QtWidgets/QTableWidget';

// the code commented below have no problem
/*const view = new QTableView();

view.setStyleSheet(`
QTableView {
    min-width:300px;
    min-height:200px;
}
`);
view.show();
*/

const widget = new QWidget();
const layout = new FlexLayout();
const view = new QTableView();
const table = new QTableWidget(5, 5);

view.setStyleSheet(`
QTableView {
    min-width:300px;
    min-height:200px;
}
`);

table.setStyleSheet(`
QTableView {
    min-width:300px;
    min-height:200px;
}
`);

widget.setLayout(layout);
layout.addWidget(view); // app crash when add view to the layout
layout.addWidget(table); // app run ok when add table to the layout

widget.setInlineStyle('flex:1;');
widget.resize(600, 400);
widget.show();

//(global as any).main = view;
(global as any).main = widget;
