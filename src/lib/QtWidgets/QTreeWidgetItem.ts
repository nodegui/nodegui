import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QTreeWidget } from '../..';

export class QTreeWidgetItem extends Component {
    native: NativeElement;
    items: Set<NativeElement | Component>;

    constructor(arg?: QTreeWidgetItem | QTreeWidget | string[], strings?: string[]) {
        super();
        this.items = new Set();
        if (arg instanceof QTreeWidgetItem || arg instanceof QTreeWidget) {
            this.nodeParent = arg;
            let parentType;
            if (arg instanceof QTreeWidgetItem) {
                parentType = 'item';
            } else {
                parentType = 'tree';
            }
            if (strings) {
                this.native = new addon.QTreeWidgetItem(arg.native, strings, parentType);
            } else {
                this.native = new addon.QTreeWidgetItem(arg.native, parentType);
            }
            arg.items.add(this);
        } else if (Array.isArray(arg)) {
            this.native = new addon.QTreeWidgetItem(arg);
        } else {
            this.native = new addon.QTreeWidgetItem();
        }
    }

    setText(column: number, text: string): void {
        this.native.setText(column, text);
    }
}
