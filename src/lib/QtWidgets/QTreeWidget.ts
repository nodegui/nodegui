import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { QTreeWidgetItem } from './QTreeWidgetItem';

export interface QTreeWidgetSignals extends QAbstractScrollAreaSignals {
    itemSelectionChanged: () => void;
}

export class QTreeWidget extends QAbstractScrollArea<QTreeWidgetSignals> {
    native: NativeElement;
    topLevelItems: Set<QTreeWidgetItem>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QTreeWidget(parent.native);
        } else {
            native = new addon.QTreeWidget();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
        this.topLevelItems = new Set<QTreeWidgetItem>();
    }

    addTopLevelItem(item: QTreeWidgetItem): void {
        this.topLevelItems.add(item);
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
