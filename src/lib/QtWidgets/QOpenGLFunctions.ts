import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, Component } from '../core/Component';
import { QOpenGLContext } from './QOpenGLContext';

export class QOpenGLFunctions extends Component {
    native: NativeElement;
    constructor(parent: QOpenGLContext) {
        let native;
        if (parent) {
            native = new addon.QOpenGLFunctions(parent);
        } else {
            native = new addon.QOpenGLFunctions();
        }
        super();
        this.native = native;
    }
}
