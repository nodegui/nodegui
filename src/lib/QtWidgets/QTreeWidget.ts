import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { Component, NativeElement } from '../core/Component';
import { QTreeWidgetItem, ScrollBarPolicy } from '../..';

export const QTreeWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
    itemSelectionChanged: 'itemSelectionChanged',
});

export class QTreeWidget extends NodeWidget {
    native: NativeElement;
    items: Set<NativeElement | Component>;

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
        this.items = new Set();
    }

    addTopLevelItem(item: QTreeWidgetItem): void {
        this.items.add(item);
        this.native.addTopLevelItem(item.native);
    }

    setHeaderHidden(hide: boolean) {
        this.native.setProperty('headerHidden', hide);
    }
    setHorizontalScrollBarPolicy(policy: ScrollBarPolicy) {
        this.native.setProperty('horizontalScrollBarPolicy', policy);
    }
    setVerticalScrollBarPolicy(policy: ScrollBarPolicy) {
        this.native.setProperty('verticalScrollBarPolicy', policy);
    }
    selectedItems(): QTreeWidgetItem[] {
        return this.native.selectedItems();
    }
}
