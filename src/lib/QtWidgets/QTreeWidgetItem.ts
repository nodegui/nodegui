import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QTreeWidget } from './QTreeWidget';
import { ItemFlag } from '../QtEnums/ItemFlag';
import { CheckState, ItemDataRole } from '../QtEnums';
import { QVariantType, QVariant } from '../QtCore/QVariant';

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
    items: Set<NativeElement | Component>;
    constructor();
    constructor(parent: QTreeWidgetItem, strings?: string[]);
    constructor(parent: QTreeWidget, strings?: string[]);
    constructor(native: NativeElement);
    constructor(strings: string[]);
    constructor(parent?: NativeElement | QTreeWidgetItem | QTreeWidget | string[], strings?: string[]) {
        super();
        this.items = new Set();
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

    /**
     * Adds the specified child to this QTreeWidgetItem.
     * @param childItem The child to add.
     */
    addChild(childItem: QTreeWidgetItem): void {
        this.items.add(childItem);
        this.native.addChild(childItem.native);
    }

    /**
     * Sets the flags for the item to the given flags. These determine whether the item can be selected or modified.
     * This is often used to disable an item.
     * @param flags The flags.
     */
    setFlags(flags: ItemFlag): void {
        this.native.setFlags(flags);
    }

    /**
     * Sets the item in the given column check state to be state.
     * @param column The column.
     * @param state The check state.
     */
    setCheckState(column: number, state: CheckState): void {
        this.native.setCheckState(column, state);
    }

    /**
     * Returns the flags used to describe the item. These determine whether the item can be checked, edited, and selected.
     */
    flags(): ItemFlag {
        return this.native.flags();
    }

    /**
     * Sets the value for the item's column and role to the given value.
     * The role describes the type of data specified by value, and is defined by the ItemDataRole enum.
     * @param column The column.
     * @param role The role.
     * @param value The value.
     */
    setData(column: number, role: ItemDataRole, value: QVariantType): void {
        const variant = new QVariant(value);
        this.native.setData(column, role, variant.native);
    }

    /**
     * Returns the value for the item's column and role.
     * @param column The column.
     * @param role The role.
     */
    data(column: number, role: ItemDataRole): QVariant {
        return this.native.data(column, role);
    }
}
