import {
    FlexLayout,
    PenStyle,
    WidgetEventTypes,
    QColor,
    QMainWindow,
    QPainter,
    QPoint,
    QWidget,
    RenderHint,
} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
const hourHand = [new QPoint(7, 8), new QPoint(-7, 8), new QPoint(0, -40)];
const minuteHand = [new QPoint(7, 8), new QPoint(-7, 8), new QPoint(0, -70)];
const secondHand = [new QPoint(4, 8), new QPoint(-4, 8), new QPoint(0, -70)];
const hourColor = new QColor(127, 0, 127);
const minuteColor = new QColor(0, 127, 127, 191);
const secondColor = new QColor(0, 0, 0);

center.setLayout(layout);
win.setWindowTitle('Analog Clock');

const side = Math.min(win.geometry().width(), win.geometry().height());

function repaint(): void {
    win.repaint();
    setTimeout(repaint, 1000);
}

setTimeout(repaint, 1000);
win.addEventListener(WidgetEventTypes.Paint, () => {
    const time = new Date();

    const painter = new QPainter(win);
    painter.setRenderHint(RenderHint.Antialiasing);
    painter.translate(win.geometry().width() / 2, win.geometry().height() / 2);
    painter.scale(side / 200.0, side / 200.0);

    painter.setPen(PenStyle.NoPen);
    painter.setBrush(hourColor);

    painter.save();
    painter.rotate(30.0 * (time.getHours() + time.getMinutes() / 60.0));
    painter.drawConvexPolygon(hourHand);
    painter.restore();

    painter.setPen(hourColor);

    for (let i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }

    painter.setPen(PenStyle.NoPen);
    painter.setBrush(minuteColor);

    painter.save();
    painter.rotate(6.0 * (time.getMinutes() + time.getSeconds() / 60.0));
    painter.drawConvexPolygon(minuteHand);
    painter.restore();

    painter.setBrush(secondColor);
    painter.setPen(PenStyle.NoPen);

    painter.save();
    painter.rotate(360 * (time.getSeconds() / 60.0));
    painter.drawConvexPolygon(secondHand);
    painter.restore();

    painter.setPen(minuteColor);
    for (let j = 0; j < 60; ++j) {
        if (j % 5 != 0) {
            painter.drawLine(92, 0, 96, 0);
        }
        painter.rotate(6.0);
    }
    painter.end();
});

win.setCentralWidget(center);
win.resize(400, 400);

win.show();
(global as any).win = win;
