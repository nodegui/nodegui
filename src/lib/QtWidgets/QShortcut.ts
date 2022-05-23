import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QKeySequence } from '../QtGui/QKeySequence';
import { ShortcutContext } from '../QtEnums';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

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
export class QShortcut extends QObject<QShortcutSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QShortcut(parent.native);
        } else {
            native = new addon.QShortcut();
        }
        super(native);
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
wrapperCache.registerWrapper('QShortcutWrap', QShortcut);

export interface QShortcutSignals extends QObjectSignals {
    activated: () => void;
    activatedAmbiguously: () => void;
}
