import { QTableView } from './lib/QtWidgets/QTableView';
import { QWidget } from './lib/QtWidgets/QWidget';
import { FlexLayout } from './lib/core/FlexLayout';
import { QTableWidget } from './lib/QtWidgets/QTableWidget';
import { QFrame, Shape } from './lib/QtWidgets/QFrame';

const widget = new QWidget();
const layout = new FlexLayout();
const view = new QTableView();
const table = new QTableWidget(5, 5);
const frame = new QFrame();

frame.setFrameShape(Shape.HLine);

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

frame.setStyleSheet(`
    QFrame{
        background: blue;
        border: none;
        height:15px;
    }
    `);

widget.setLayout(layout);
layout.addWidget(view);
layout.addWidget(frame);
layout.addWidget(table);

widget.setInlineStyle('flex:1;');
widget.resize(600, 400);
widget.show();

(global as any).main = widget;
