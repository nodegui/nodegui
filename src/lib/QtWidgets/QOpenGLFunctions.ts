import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { checkIfNativeElement } from '../..';

export class QOpenGLFunctions extends Component {
    native: NativeElement;
    constructor(parent?: Component | NativeElement) {
        super();
        if (checkIfNativeElement(parent)) {
            this.native = parent as NativeElement;
        } else {
            if (parent) {
                this.native = new addon.QOpenGLFunctions(parent.native);
            } else {
                this.native = new addon.QOpenGLFunctions();
            }
        }
    }
}
