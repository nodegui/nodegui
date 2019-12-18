import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QTreeWidgetItem } from '../..';

export const QTreeWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
    itemSelectionChanged: 'itemSelectionChanged',
});

export class QTreeWidget extends QAbstractScrollArea {
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
        this.setNodeParent(parent);
    }

    addTopLevelItem(item: QTreeWidgetItem): void {
        this.native.addTopLevelItem(item.native);
    }

    setHeaderHidden(hide: boolean): void {
        this.native.setProperty('headerHidden', hide);
    }

    selectedItems(): QTreeWidgetItem[] {
        const nativeItems = this.native.selectedItems();
        return nativeItems.map(function(eachItem: QTreeWidgetItem) {
            return new QTreeWidgetItem(eachItem);
        });
    }
}
