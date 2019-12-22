import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QOpenGLFunctions } from './QOpenGLFunctions';

export class QOpenGLContext extends Component {
    native: NativeElement;
    constructor();
    constructor(context: QOpenGLContext);
    constructor(context?: QOpenGLContext) {
        let native;
        if (context) {
            native = new addon.QOpenGLContext(context.native);
        } else {
            native = new addon.QOpenGLContext();
        }
        super();
        this.native = native;
    }
    functions(): void {
        const functions = this.native.functions();
    }
    static currentContext(): QOpenGLContext {
        return addon.QOpenGLContext.currentContext();
    }
}
