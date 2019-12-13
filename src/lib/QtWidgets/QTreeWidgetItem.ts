import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QTreeWidget } from '../..';

export class QTreeWidgetItem extends Component {
    native: NativeElement;

    constructor();
    constructor(strings?: string[]); // 1
    constructor(parent?: QTreeWidget); // 2
    constructor(parent?: QTreeWidget, strings?: string[]); // 3
    constructor(parent?: QTreeWidget, preceding?: QTreeWidgetItem); // 3
    constructor(parent?: QTreeWidgetItem); // 4
    constructor(parent?: QTreeWidgetItem, strings?: string[]); // 5
    constructor(parent?: QTreeWidgetItem, preceding?: QTreeWidgetItem); // 6
    constructor(other?: QTreeWidgetItem); // 9
    // The last parameter below corresponds to the constructor above.
    constructor(arg: any = null) {
        super();
        /* eslint-disable */
        if (arguments[0] instanceof Array && arguments.length == 1) {
            this.native = new addon.QTreeWidgetItem(arguments[0], 1);
        } else if (arguments[0] instanceof QTreeWidget && arguments.length == 1) {
            arguments[0].items.add(this);
            this.native = new addon.QTreeWidgetItem(arguments[0].native, 2);
        } else if (arguments[0] instanceof QTreeWidget && arguments[1] instanceof Array && arguments.length == 2) {
            arguments[0].items.add(this);
            this.native = new addon.QTreeWidgetItem(arguments[0].native, arguments[1], 3);
        } else {
            this.native = new addon.QTreeWidgetItem();
        }
        /* eslint-enable */
    }

    setText(column: number, text: string): void {
        this.native.setText(column, text);
    }
}
