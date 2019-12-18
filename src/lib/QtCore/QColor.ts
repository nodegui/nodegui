import {Component, NativeElement} from '../core/Component';
import addon from '../utils/addon';
import {checkIfNativeElement} from '../utils/helpers';

export class QColor extends Component {
    native: NativeElement;

    //eslint-disable-next-line @typescript-eslint/no-inferrable-types
    constructor(arg?: NativeElement | number | string, g: number = 0, b: number = 0, a: number = 0) {
        super();
        const count = arguments.length;
        if (count == 4) {
            this.native = new addon.QColor(arg, g, b, a);
        } else if (count == 3) {
            this.native = new addon.QColor(arg, g, b);
        } else if (count == 1 && checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (count == 1) {
            console.log(typeof arg);
            this.native = new addon.QColor(arg);
        } else {
            this.native = new addon.QColor();
        }
    }
}
