import {
    PenStyle,
    WidgetEventTypes,
    QColor,
    QPainter,
    QPoint,
    QOpenGLWidget,
    RenderHint,
    GlobalColor,
    QPaintEvent,
    QOpenGLContext,
} from './index';
import { QRect } from './lib/QtCore/QRect';
import { NativeElement } from './lib/core/Component';
import { QOpenGLFunctions } from './lib/QtWidgets/QOpenGLFunctions';
import { QWidget } from './lib/QtWidgets/QWidget';

export class GLWindow extends QOpenGLWidget {
    constructor() {
        super();
        this.initializeGL();
        const context = QOpenGLContext.currentContext();
        const functions = context.functions();
    }
}
const win = new GLWindow();
win.show();
(global as any).win = win;
