import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { NativeElement, Component } from '../core/Component';
import { QBrush } from '../QtGui/QBrush';
import { QFont } from '../QtGui/QFont';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';
import { QVariant } from '../QtCore/QVariant';
import { CheckState } from '../QtEnums';
import { ItemFlag } from '../QtEnums/ItemFlag';

/**

> Creates an item for QListWidget.

* **This class is a JS wrapper around Qt's [QListWidgetItem class](https://doc.qt.io/qt-5/qlistwidgetitem.html)**

### Example

```javascript
const { QListWidget, QListWidgetItem } = require("@nodegui/nodegui");

const listWidget = new QListWidget();

for (let i = 0; i < 30; i++) {
  let listWidgetItem = new QListWidgetItem();
  listWidgetItem.setText('listWidgetItem ' + i);
  if (i===3) {
    listWidgetItem.setCheckState(2);
  } else {
    listWidgetItem.setCheckState(0);
  }
  listWidget.addItem(listWidgetItem);
}
```
 */
export class QListWidgetItem extends Component {
    constructor(arg?: QListWidgetItem | NativeElement | string) {
        let native;
        if (typeof arg === 'string') {
            native = new addon.QListWidgetItem(arg);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QListWidgetItem();
        }
        super(native);
    }
    setBackground(brush: QBrush): void {
        this.native.setBackground(brush.native);
    }
    background(): QBrush {
        return new QBrush(this.native.background());
    }
    setCheckState(state: CheckState): void {
        this.native.setCheckState(state);
    }
    checkState(): CheckState {
        return this.native.checkState();
    }
    setData(role: number, value: QVariant): void {
        this.native.setData(role, value.native);
    }
    data(role: number): QVariant {
        return new QVariant(this.native.data(role));
    }
    setFlags(flags: ItemFlag): void {
        this.native.setFlags(flags);
    }
    flags(): ItemFlag {
        return this.native.flags();
    }
    setFont(font: QFont): void {
        this.native.setFont(font.native);
    }
    font(): QFont {
        return new QFont(this.native.font());
    }
    setForeground(brush: QBrush): void {
        this.native.setForeground(brush.native);
    }
    foreground(): QBrush {
        return new QBrush(this.native.foreground());
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon.native);
    }
    icon(): QIcon {
        return new QIcon(this.native.icon());
    }
    setHidden(hide: boolean): void {
        this.native.setHidden(hide);
    }
    isHidden(): boolean {
        return this.native.isHidden();
    }
    setSelected(select: boolean): void {
        this.native.setSelected(select);
    }
    isSelected(): boolean {
        return this.native.isSelected();
    }
    setSizeHint(size: QSize): void {
        this.native.setSizeHint(size.native);
    }
    sizeHint(): QSize {
        return new QSize(this.native.sizeHint());
    }
    setStatusTip(statusTip: string): void {
        this.native.setStatusTip(statusTip);
    }
    statusTip(): string {
        return this.native.statusTip();
    }
    setText(text: string): void {
        this.native.setText(text);
    }
    text(): string {
        return this.native.text();
    }
    setTextAlignment(alignment: number): void {
        this.native.setTextAlignment(alignment);
    }
    textAlignment(): number {
        return this.native.textAlignment();
    }
    setToolTip(toolTip: string): void {
        this.native.setToolTip(toolTip);
    }
    toolTip(): string {
        return this.native.toolTip();
    }
    setWhatsThis(whatsThis: string): void {
        this.native.setWhatsThis(whatsThis);
    }
    whatsThis(): string {
        return this.native.whatsThis();
    }
    type(): number {
        return this.native.type$();
    }
}
