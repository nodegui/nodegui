import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QIcon } from '../QtGui/QIcon';
import { QMenu } from './QMenu';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Create and control system tray icon.

* **This class is a JS wrapper around Qt's [QSystemTrayIcon class](https://doc.qt.io/qt-5/qsystemtrayicon.html)**

A `QSystemTrayIcon` provides ability to add and manipulate native system tray icon.


### Example

```javascript
const { QSystemTrayIcon, QIcon } = require("@nodegui/nodegui");
const trayIcon = new QIcon(
  resolve(__dirname, "some/image/file.png");
);
const tray = new QSystemTrayIcon();
tray.setIcon(trayIcon);
tray.show();

global.tray = tray; // prevents garbage collection of tray
```
 */
export class QSystemTrayIcon extends QObject<QSystemTrayIconSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QSystemTrayIcon(parent.native);
        } else {
            native = new addon.QSystemTrayIcon();
        }
        super(native);
    }
    show(): void {
        this.native.show();
    }
    hide(): void {
        this.native.hide();
    }
    showMessage(title = '', message = '', icon: QIcon = new QIcon(), millisecondsTimeoutHint = 10000): void {
        this.native.showMessage(title, message, icon.native, millisecondsTimeoutHint);
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon.native);
    }
    isVisible(): boolean {
        return this.native.isVisible();
    }
    setToolTip(tooltip: string): void {
        this.native.setToolTip(tooltip);
    }
    setContextMenu(menu: QMenu): void {
        this.native.setContextMenu(menu.native);
    }
}
wrapperCache.registerWrapper('QSystemTrayIconWrap', QSystemTrayIcon);

export enum QSystemTrayIconActivationReason {
    Unknown = 0,
    Context = 1,
    DoubleClick = 2,
    Trigger = 3,
    MiddleClick = 4,
}

export interface QSystemTrayIconSignals extends QObjectSignals {
    activated: (reason: QSystemTrayIconActivationReason) => void;
    messageClicked: () => void;
}
