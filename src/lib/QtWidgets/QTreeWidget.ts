import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QTreeWidgetItem } from '../..';

export const QTreeWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
});

export class QTreeWidget extends NodeWidget {
    native: NativeElement;

    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QTreeWidget(parent.native);
        } else {
            native = new addon.QTreeWidget();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    addTopLevelItem(item: QTreeWidgetItem): void {
        this.native.addTopLevelItem(item.native);
    }
}
