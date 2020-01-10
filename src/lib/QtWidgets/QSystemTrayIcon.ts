import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { QMenu } from './QMenu';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

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
tray.show();

global.tray = tray; // prevents garbage collection of tray
```
 */

export class QSystemTrayIcon extends NodeObject<QSystemTrayIconSignals> {
    native: NativeElement;
    contextMenu?: QMenu;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QSystemTrayIcon(parent.native);
        } else {
            native = new addon.QSystemTrayIcon();
        }
        super(native);
        this.native = native;
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
        this.contextMenu = menu;
        this.native.setContextMenu(this.contextMenu.native);
    }
}

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
