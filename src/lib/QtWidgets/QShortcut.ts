import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QKeySequence } from '../QtGui/QKeySequence';
import { ShortcutContext } from '../QtEnums';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

/**
 
> The QShortcut class is used to create keyboard shortcuts.

* **This class is a JS wrapper around Qt's [QShortcut class](https://doc.qt.io/qt-5/qshortcut.html)**

### Example

```javascript
const { QShortcut, QKeySequence, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();
const shortcut = new QShortcut(win);
shortcut.setKey(new QKeySequence("Ctrl+M"));
shortcut.setEnabled(true);
shortcut.addEventListener(QShortcutEvents.activated, () => {
  console.log("Shortcut Activated");
});

win.show();
global.win = win;
global.shortcut = shortcut;
```
 */

export class QShortcut extends NodeObject<QShortcutSignals> {
    native: NativeElement;
    constructor(parent: NodeWidget<any>) {
        const native = new addon.QShortcut(parent.native);
        super(native);
        this.native = native;
    }
    setEnabled(enabled: boolean): void {
        this.native.setEnabled(enabled);
    }
    setAutoRepeat(on: boolean): void {
        this.native.setAutoRepeat(on);
    }
    setKey(keysequence: QKeySequence): void {
        this.native.setKey(keysequence.native);
    }
    setContext(shortcutContext: ShortcutContext): void {
        this.native.setContext(shortcutContext);
    }
}

export interface QShortcutSignals extends QObjectSignals {
    activated: () => void;
    activatedAmbiguously: () => void;
}
