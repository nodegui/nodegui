import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QOpenGLFunctions } from './QOpenGLFunctions';
import { checkIfNativeElement } from '../..';

export class QOpenGLContext extends Component {
    native: NativeElement;

    constructor(parent?: Component | NativeElement) {
        super();
        if (checkIfNativeElement(parent)) {
            this.native = parent as NativeElement;
        } else {
            if (parent) {
                this.native = new addon.QOpenGLContext(parent.native);
            } else {
                this.native = new addon.QOpenGLContext();
            }
        }
    }

    functions(): QOpenGLFunctions {
        return new QOpenGLFunctions(this.native.functions());
    }
    static currentContext(): QOpenGLContext {
        return new QOpenGLContext(addon.QOpenGLContext.currentContext());
    }
}
