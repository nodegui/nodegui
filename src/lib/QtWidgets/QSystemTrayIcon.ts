import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QIcon } from '../QtGui/QIcon';
import { QMenu } from './QMenu';
import { NodeObject } from '../QtCore/QObject';

export const QSystemTrayIconEvents = Object.freeze({
    ...BaseWidgetEvents,
});
export class QSystemTrayIcon extends NodeObject {
    native: NativeElement;
    contextMenu?: QMenu;
    constructor(parent?: NodeWidget) {
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
