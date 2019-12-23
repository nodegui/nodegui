import { QOpenGLWidget, QOpenGLContext, WidgetEventTypes } from './index';

const win = new QOpenGLWidget();
win.addEventListener(WidgetEventTypes.Paint, () => {
    const context = QOpenGLContext.currentContext();
    const functions = context.functions();
    console.log(functions);
});
win.show();
(global as any).win = win;
