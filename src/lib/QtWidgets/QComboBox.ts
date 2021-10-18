import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { SizeAdjustPolicy } from '../QtEnums';
import { QIcon } from '../QtGui/QIcon';
import { QVariant } from '../QtCore/QVariant';
import { QStandardItemModel } from './QStandardItemModel';
import { QSize } from '../QtCore/QSize';
import { QModelIndex } from '../QtCore/QModelIndex';

/**

> Create and control a selectable drop down menu.

* **This class is a JS wrapper around Qt's [QComboBox class](https://doc.qt.io/qt-5/qcombobox.html)**

A `QComboBox` provides a means of presenting a list of options to the user.

### Example

```javascript
const { QComboBox } = require("@nodegui/nodegui");

const comboBox = new QComboBox();
comboBox.addItem(undefined, 'comboBox item 0');
comboBox.addItem(undefined, 'comboBox item 1');
comboBox.addItem(undefined, 'comboBox item 2');
comboBox.addItem(undefined, 'comboBox item 3');

comboBox.addEventListener('currentTextChanged', (text) => {
    console.log('currentTextChanged: ' + text);
});

comboBox.addEventListener('currentIndexChanged', (index) => {
    console.log('currentIndexChanged: ' + index);
});
```
 */
export class QComboBox extends NodeWidget<QComboBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
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
    // *** Public Functions ***
    addItem(icon: QIcon | undefined, text: string, userData: QVariant = new QVariant()): void {
        if (icon) {
            this.native.addItem(icon.native, text, userData.native);
        } else {
            this.native.addItem(text, userData.native);
        }
    }
    addItems(texts: string[]): void {
        this.native.addItems(texts);
    }
    // TODO: QCompleter *	completer() const
    count(): number {
        return this.native.count();
    }
    // TODO: QVariant 	currentData(int role = Qt::UserRole) const
    currentIndex(): number {
        return this.native.currentIndex();
    }
    currentText(): string {
        return this.native.currentText();
    }
    duplicatesEnabled(): boolean {
        return this.native.duplicatesEnabled();
    }
    // TODO: int 	findData(const QVariant &data, int role = Qt::UserRole, Qt::MatchFlags flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const
    // TODO: int 	findText(const QString &text, Qt::MatchFlags flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const
    hasFrame(): boolean {
        return this.native.hasFrame();
    }
    hidePopup(): void {
        this.native.hidePopup();
    }
    iconSize(): QSize {
        return new QSize(this.native.iconSize());
    }
    insertItem(index: number, icon: QIcon | undefined, text: string, userData: QVariant = new QVariant()): void {
        if (icon) {
            this.native.insertItem(index, icon.native, text, userData.native);
        } else {
            this.native.insertItem(index, text, userData.native);
        }
    }
    insertItems(index: number, texts: string[]): void {
        this.native.insertItems(index, texts);
    }
    insertPolicy(): InsertPolicy {
        return this.native.insertPolicy();
    }
    insertSeparator(index: number): void {
        this.native.insertSeparator(index);
    }
    isEditable(): boolean {
        return this.native.isEditable();
    }
    itemData(index: number): QVariant {
        return new QVariant(this.native.itemData(index));
    }
    // TODO: QAbstractItemDelegate *	itemDelegate() const
    // TODO: QIcon 	itemIcon(int index) const
    itemText(index: number): string {
        return this.native.itemText(index);
    }
    // TODO: QLineEdit *	lineEdit() const
    maxCount(): number {
        return this.native.maxCount();
    }
    maxVisibleItems(): number {
        return this.native.maxVisibleItems();
    }
    minimumContentsLength(): number {
        return this.native.minimumContentsLength();
    }
    // TODO: QAbstractItemModel *	model() const
    modelColumn(): number {
        return this.native.modelColumn();
    }
    removeItem(index: number): void {
        this.native.removeItem(index);
    }
    rootModelIndex(): QModelIndex {
        return new QModelIndex(this.native.rootModelIndex());
    }
    // TODO: void 	setCompleter(QCompleter *completer)
    setDuplicatesEnabled(enable: boolean): void {
        this.native.setDuplicatesEnabled(enable);
    }
    setEditable(editable: boolean): void {
        this.native.setEditable(editable);
    }
    setFrame(showFrame: boolean): void {
        this.native.setFrame(showFrame);
    }
    setIconSize(size: QSize): void {
        this.native.setIconSize(size);
    }
    setInsertPolicy(policy: InsertPolicy): void {
        this.native.setInsertPolicy(policy);
    }
    // TODO: void 	setItemData(int index, const QVariant &value, int role = Qt::UserRole)
    // TODO: void 	setItemDelegate(QAbstractItemDelegate *delegate)
    // TODO: void 	setItemIcon(int index, const QIcon &icon)
    setItemText(index: number, text: string): void {
        this.native.setItemText(index, text);
    }
    // TODO: void 	setLineEdit(QLineEdit *edit)
    setMaxCount(max: number): void {
        this.native.setMaxCount(max);
    }
    setMaxVisibleItems(index: number): void {
        this.native.setMaxVisibleItems(index);
    }
    setMinimumContentsLength(characters: number): void {
        this.native.setMinimumContentsLength(characters);
    }
    setModel(model: QStandardItemModel): void {
        this.native.setModel(model.native);
    }
    setModelColumn(visibleColumn: number): void {
        this.native.setModelColumn(visibleColumn);
    }
    setRootModelIndex(index: QModelIndex): void {
        this.native.setRootModelIndex(index.native);
    }
    setSizeAdjustPolicy(policy: SizeAdjustPolicy): void {
        this.native.setSizeAdjustPolicy(policy);
    }
    sizeAdjustPolicy(): number {
        return this.native.sizeAdjustPolicy();
    }
    // TODO: void 	setValidator(const QValidator *validator)
    // TODO: void 	setView(QAbstractItemView *itemView)
    showPopup(): void {
        this.native.showPopup();
    }
    // TODO: const QValidator *	validator() const
    // TODO: QAbstractItemView *	view() const

    // *** Public Slots ***
    clear(): void {
        this.native.clear();
    }
    clearEditText(): void {
        this.native.clearEditText();
    }
    setCurrentIndex(index: number): void {
        this.setProperty('currentIndex', index);
    }
    setCurrentText(text: string): void {
        this.setProperty('currentText', text);
    }
    setEditText(text: string): void {
        this.native.setEditText(text);
    }
}

export enum InsertPolicy {
    NoInsert = 0,
    InsertAtTop = 1,
    InsertAtCurrent = 2,
    InsertAtBottom = 3,
    InsertAfterCurrent = 4,
    InsertBeforeCurrent = 5,
    InsertAlphabetically = 6,
}

export interface QComboBoxSignals extends QWidgetSignals {
    activated: (index: number) => void;
    currentIndexChanged: (index: number) => void;
    currentTextChanged: (text: string) => void;
    editTextChanged: (text: string) => void;
    highlighted: (index: number) => void;
    textActivated: (text: string) => void;
    textHighlighted: (text: string) => void;
}
