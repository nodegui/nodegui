import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QTreeWidget } from './QTreeWidget';

/**
 
> Creates an item for QTreeWidget.

* **This class is a JS wrapper around Qt's [QTreeWidgetItem class](https://doc.qt.io/qt-5/qtreewidgetitem.html)**

### Example

```javascript

const { QMainWindow, QTreeWidgetItem, QTreeWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();
const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem();
item1.setText(0, `item-1`);
const item2 = new QTreeWidgetItem();
item2.setText(0, `item-2`);
const item3 = new QTreeWidgetItem();
item3.setText(0, `item-3`);

tree.addTopLevelItem(item1);
tree.addTopLevelItem(item2);
tree.addTopLevelItem(item3);

// Add children to item1
const c1item1 = new QTreeWidgetItem(item1);
c1item1.setText(0, `c1item1`);
const c1item2 = new QTreeWidgetItem(item1);
c1item2.setText(0, `c1item1`);

win.setCentralWidget(tree);
win.show();
(global as any).win = win;

```
 */
export class QTreeWidgetItem extends Component {
    native: NativeElement;
    constructor();
    constructor(parent: QTreeWidgetItem, strings?: string[]);
    constructor(parent: QTreeWidget, strings?: string[]);
    constructor(native: NativeElement);
    constructor(strings: string[]);
    constructor(parent?: NativeElement | QTreeWidgetItem | QTreeWidget | string[], strings?: string[]) {
        super();
        if (checkIfNativeElement(parent)) {
            this.native = parent as NativeElement;
        } else {
            if (parent instanceof QTreeWidgetItem || parent instanceof QTreeWidget) {
                this.setNodeParent(parent);
                const type = parent instanceof QTreeWidgetItem ? 'item' : 'tree';
                if (strings) {
                    this.native = new addon.QTreeWidgetItem(parent.native, strings, type);
                } else {
                    this.native = new addon.QTreeWidgetItem(parent.native, type);
                }
            } else if (Array.isArray(parent)) {
                const strings = parent;
                this.native = new addon.QTreeWidgetItem(strings);
            } else {
                this.native = new addon.QTreeWidgetItem();
            }
        }
    }
    setText(column: number, text: string): void {
        this.native.setText(column, text);
    }
    parent(): QTreeWidgetItem | undefined {
        const parent = this.native.parent();
        if (parent) {
            return new QTreeWidgetItem(parent);
        } else {
            return undefined;
        }
    }
    childCount(): number {
        return this.native.childCount();
    }
    child(index: number): QTreeWidgetItem | undefined {
        return this.native.child(index);
    }
    text(column: number): string {
        return this.native.text(column);
    }
    setSelected(selected: boolean): void {
        this.native.setSelected(selected);
    }
    setExpanded(expanded: boolean): void {
        this.native.setExpanded(expanded);
    }
}
