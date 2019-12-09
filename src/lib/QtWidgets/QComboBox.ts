import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { SizeAdjustPolicy } from '../QtEnums';

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
        this.nodeParent = parent;
    }
    addItem(value: string): void {
        this.native.addItem(value);
    }
    insertItem(index: number, text: string): void {
        this.native.insertItem(index, text);
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
    itemText(index: number): void {
        this.native.itemText(index);
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
}
