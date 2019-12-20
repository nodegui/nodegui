import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { QMenu } from './QMenu';
import { NodeObject } from '../QtCore/QObject';

interface QSystemTrayIconSignals {
    activated: (reason: QSystemTrayIconActivationReason) => void;
    messageClicked: () => void;
}

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
