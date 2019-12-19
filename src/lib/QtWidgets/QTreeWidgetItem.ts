import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QTreeWidget } from './QTreeWidget';

export class QTreeWidgetItem extends Component {
    native: NativeElement;

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
