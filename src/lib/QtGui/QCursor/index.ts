import addon from '../../utils/addon';
import { Component, NativeElement } from '../../core/Component';
import { QPixmap } from '../QPixmap';

type arg = NativeElement | number | QPixmap;
export class QCursor extends Component {
    native: NativeElement;
    constructor(arg?: arg) {
        super();
        if (arg) {
            this.native = new addon.QCursor(arg);
        } else {
            this.native = new addon.QCursor();
        }
    }
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    setPos(x: number, y: number): void {
        return this.native.setPos(x, y);
    }
}
