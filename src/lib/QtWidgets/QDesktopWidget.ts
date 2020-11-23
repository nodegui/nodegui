import { QRect } from '../QtCore/QRect';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import addon from '../utils/addon';

export type QDesktopWidgetSignals = QWidgetSignals;
export class QDesktopWidget extends NodeWidget<QDesktopWidgetSignals> {
    native: NativeElement;
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDesktopWidget(parent.native);
        } else {
            native = new addon.QDesktopWidget();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    availableGeometry(screen = -1): QRect {
        return new QRect(this.native.availableGeometry(screen));
    }
    screenGeometry(screen = -1): QRect {
        return new QRect(this.native.screenGeometry(screen));
    }
    screenNumber(): number {
        return this.native.screenNumber();
    }
}
