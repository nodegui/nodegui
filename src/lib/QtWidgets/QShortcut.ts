import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QKeySequence } from '../QtGui/QKeySequence';
import { ShortcutContext } from '../QtEnums';
import { NodeObject } from '../QtCore/QObject';

export const QShortcutEvents = Object.freeze({
    activated: 'activated',
    activatedAmbiguously: 'activatedAmbiguously',
});

export class QShortcut extends NodeObject {
    native: NativeElement;
    constructor(parent: NodeWidget) {
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
