import {
    PenStyle,
    WidgetEventTypes,
    QColor,
    QPainter,
    QPoint,
    QWidget,
    RenderHint,
    GlobalColor,
    QPaintEvent,
} from './index';

const win = new QWidget();
win.addEventListener(WidgetEventTypes.Paint, function(event: any) {
    const paintEvent = new QPaintEvent(event);
    console.log(paintEvent.rect());
});
win.show();
(global as any).win = win;
