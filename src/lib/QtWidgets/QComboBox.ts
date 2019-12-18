import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { SizeAdjustPolicy } from '../QtEnums';
import { QIcon } from '../QtGui/QIcon';
import { QVariant } from '../QtCore/QVariant';

export const QComboBoxEvents = Object.freeze({
    currentIndexChanged: 'currentIndexChanged',
    currentTextChanged: 'currentTextChanged',
    editTextChanged: 'editTextChanged',
    ...BaseWidgetEvents,
});
export class QComboBox extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QComboBox(parent.native);
        } else {
            native = new addon.QComboBox();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    addItem(icon: QIcon | undefined, text: string, userData: QVariant = new QVariant()): void {
        if (icon) {
            this.native.addItem(icon.native, text, userData.native);
        } else {
            this.native.addItem(text, userData.native);
        }
    }
    insertItem(index: number, icon: QIcon | undefined, text: string, userData: QVariant = new QVariant()): void {
        if (icon) {
            this.native.insertItem(index, icon.native, text, userData.native);
        } else {
            this.native.insertItem(index, text, userData.native);
        }
    }
    addItems(texts: string[]): void {
        this.native.addItems(texts);
    }
    insertItems(index: number, texts: string[]): void {
        this.native.insertItems(index, texts);
    }
    currentIndex(): number {
        return this.native.currentIndex();
    }
    currentText(): string {
        return this.native.currentText();
    }
    insertSeparator(index: number): void {
        this.native.insertSeparator(index);
    }
    itemText(index: number): string {
        return this.native.itemText(index);
    }
    itemData(index: number): QVariant {
        return new QVariant(this.native.itemData(index));
    }
    removeItem(index: number): void {
        this.native.removeItem(index);
    }
    sizeAdjustPolicy(): number {
        return this.native.sizeAdjustPolicy();
    }
    setSizeAdjustPolicy(policy: SizeAdjustPolicy): void {
        this.native.setSizeAdjustPolicy(policy);
    }
    maxVisibleItems(): number {
        return this.native.maxVisibleItems();
    }
    setMaxVisibleItems(index: number): void {
        this.native.setMaxVisibleItems(index);
    }
    isEditable(): boolean {
        return this.native.isEditable();
    }
    setEditable(editable: boolean): void {
        this.native.setEditable(editable);
    }
    clear(): void {
        this.native.clear();
    }
}

export enum InsertPolicy {
    NoInsert,
    InsertAtTop,
    InsertAtCurrent,
    InsertAtBottom,
    InsertAfterCurrent,
    InsertBeforeCurrent,
    InsertAlphabetically,
}
