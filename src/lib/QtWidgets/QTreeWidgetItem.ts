import addon from '../utils/addon';
import {Component, NativeElement} from '../core/Component';
import {QTreeWidget} from '../..';

export class QTreeWidgetItem extends Component {
    native: NativeElement;
    items: Set<NativeElement | Component>;

    constructor(parent?: QTreeWidgetItem | QTreeWidget, strings?: string[]) {
        super();
        this.items = new Set();
        if (parent) {
            this.nodeParent = parent;
            if (strings) {
                this.native = new addon.QTreeWidgetItem(parent.native, strings);
            } else {
                this.native = new addon.QTreeWidgetItem(parent.native);
            }
            parent.items.add(this);
        } else if (strings) {
            this.native = new addon.QTreeWidgetItem(strings);
        } else {
            this.native = new addon.QTreeWidgetItem();
        }
    }

    setText(column: number, text: string): void {
        this.native.setText(column, text);
    }
}
