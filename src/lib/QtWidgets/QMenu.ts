import { NativeElement } from '../core/Component';
import { NodeWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { QAction } from './QAction';

/**
 
> The QMenu class provides a menu widget for use in menu bars, context menus, and other popup menus.

* **This class is a JS wrapper around Qt's [QMenu class](https://doc.qt.io/qt-5/qmenu.html)**

### Example

```javascript
const { QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
```
 */
export type QMenuSignals = QWidgetSignals;

export class QMenu extends NodeWidget<QMenuSignals> {
    native: NativeElement;
    actions: Set<QAction>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QMenu(parent.native);
        } else {
            native = new addon.QMenu();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
        this.actions = new Set();
    }
    setTitle(title: string): void {
        this.native.setTitle(title);
    }
    addAction(action: QAction): QAction {
        this.native.addAction(action.native);
        this.actions.add(action);
        return action;
    }
}
