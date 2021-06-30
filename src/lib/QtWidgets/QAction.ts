import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QMenu } from './QMenu';
import { QIcon } from '../QtGui/QIcon';
import { QFont } from '../QtGui/QFont';
import { QKeySequence } from '../QtGui/QKeySequence';
import { ShortcutContext } from '../QtEnums';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from '../QtCore/QVariant';

/**

> The QAction class provides an abstract user interface action that can be inserted into widgets.

* **This class is a JS wrapper around Qt's [QAction class](https://doc.qt.io/qt-5/qaction.html)**

### Example

```javascript
const { QAction, QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
const menuAction = new QAction();
menuAction.setText("subAction");
menuAction.addEventListener("triggered", () => {
  console.log("Action clicked");
});
menu.addAction(menuAction);
```
 */
export class QAction extends NodeObject<QActionSignals> {
    native: NativeElement;
    icon?: QIcon;
    menu?: QMenu;
    constructor();
    constructor(native: NativeElement);
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NativeElement | NodeWidget<any>) {
        let native;
        if (checkIfNativeElement(parent)) {
            native = parent as NativeElement;
        } else if (parent) {
            native = new addon.QAction(parent.native);
        } else {
            native = new addon.QAction();
        }
        super(native);
        this.native = native;
    }
    setText(text: string): void {
        this.native.setText(text);
    }
    setEnabled(enabled: boolean): void {
        this.native.setEnabled(enabled);
    }
    setIcon(icon: QIcon): void {
        this.icon = icon;
        this.native.setIcon(icon.native);
    }
    setMenu(menu: QMenu): void {
        this.menu = menu;
        this.native.setMenu(menu.native);
    }
    setShortcut(keysequence: QKeySequence): void {
        this.native.setShortcut(keysequence.native);
    }
    setShortcutContext(shortcutContext: ShortcutContext): void {
        this.native.setShortcutContext(shortcutContext);
    }
    isCheckable(): boolean {
        return this.native.isCheckable();
    }
    setCheckable(isCheckable: boolean): void {
        this.native.setCheckable(isCheckable);
    }
    isChecked(): boolean {
        return this.native.isChecked();
    }
    setChecked(isChecked: boolean): void {
        this.native.setChecked(isChecked);
    }
    isSeparator(): boolean {
        return this.native.isSeparator();
    }
    setSeparator(isSeparator: boolean): void {
        this.native.setSeparator(isSeparator);
    }
    setFont(font: QFont): void {
        this.native.setFont(font.native);
    }
    font(): QFont {
        return QFont.fromQVariant(this.property('font'));
    }
    setData(value: QVariant): void {
        this.native.setData(value.native);
    }
    data(): QVariant {
        return new QVariant(this.native.data());
    }
}

export interface QActionSignals extends QObjectSignals {
    triggered: (checked: boolean) => void;
    changed: () => void;
    hovered: () => void;
    toggled: (checked: boolean) => void;
}
