import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QPoint extends Component {
    native: NativeElement;
    //eslint-disable-next-line @typescript-eslint/no-inferrable-types
    constructor(arg?: NativeElement | number, y: number = 0) {
        super();
        const count = arguments.length;
        if (count > 1) {
            this.native = new addon.QPoint(arg, y);
        } else if (count == 1 && checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QPoint();
        }
    }
}
