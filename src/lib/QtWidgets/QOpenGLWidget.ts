import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QOpenGLContext } from './QOpenGLContext';

// eslint-disable-next-line @typescript-eslint/no-empty-interface
export interface QOpenGLWidgetSignals {}

export class QOpenGLWidget extends NodeWidget<QOpenGLWidgetSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QOpenGLWidget(parent.native);
        } else {
            native = new addon.QOpenGLWidget();
        }
        super(native);
        this.native = native;
    }
    context(): QOpenGLContext {
        return new QOpenGLContext(this.native.context());
    }
    makeCurrent(): void {
        this.native.makeCurrent();
    }
}
