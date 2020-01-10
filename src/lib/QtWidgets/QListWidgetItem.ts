import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';
import { QVariant } from '../QtCore/QVariant';
import { checkIfNativeElement } from '../utils/helpers';
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
    native: NativeElement;
    constructor(arg?: arg) {
        let native;
        if (typeof arg === 'string') {
            native = new addon.QListWidgetItem(arg);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QListWidgetItem();
        }
        super();
        this.native = native;
    }
    setCheckState(state: CheckState): void {
        this.native.setCheckState(state);
    }
    checkState(): CheckState {
        return this.native.checkState();
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
        return this.native.setTextAlignment(alignment);
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
}

type arg = string | NativeElement;
