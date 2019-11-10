import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QMenu } from './QMenu';
import { QIcon } from '../QtGui/QIcon';
import { QKeySequence } from '../QtGui/QKeySequence';
import { ShortcutContext } from '../QtEnums';
import { NodeObject } from '../QtCore/QObject';

export const QActionEvents = Object.freeze({
    triggered: 'triggered',
    changed: 'changed',
    hovered: 'hovered',
    toggled: 'toggled',
});
export class QAction extends NodeObject {
    native: NativeElement;
    icon?: QIcon;
    menu?: QMenu;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
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
}
