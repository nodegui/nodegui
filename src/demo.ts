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

const win = new QOpenGLWidget();
win.show();
const context = QOpenGLContext.currentContext();
const functions = context.functions();
(global as any).win = win;
