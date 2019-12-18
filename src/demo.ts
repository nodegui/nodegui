import {FlexLayout, QColor, QMainWindow, QMainWindowEvents, QPainter, QPoint, QWidget} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
const hourHand = [new QPoint(7, 8),
    new QPoint(-7, 8),
    new QPoint(0, -40)];
const minuteHand = [new QPoint(7, 8),
    new QPoint(-7, 8),
    new QPoint(0, -70)
];
const hourColor = new QColor(127, 0, 127);
const minuteColor = new QColor(0, 127, 127, 191);
const time = new Date();
center.setLayout(layout);
win.setWindowTitle('Analog Clock');
win.resize(200, 200);
const side = Math.min(win.geometry().width, win.geometry().height);
win.addEventListener(QMainWindowEvents.Paint, () => {
    const painter = new QPainter(win);
    painter.scale(side / 200.0, side / 200.0);
    painter.translate(win.geometry().width / 2, win.geometry().height / 2);
    painter.setBrush(hourColor);
    painter.save();
    painter.rotate(30.0 * ((time.getHours() + time.getMinutes() / 60.0)));
    painter.drawConvexPolygon(hourHand);
    painter.restore();
    for (let i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }
    painter.setBrush(minuteColor);
    painter.save();
    painter.rotate(6.0 * (time.getMinutes() + time.getSeconds() / 60.0));
    painter.drawConvexPolygon(minuteHand);
    painter.restore();
    for (let j = 0; j < 60; ++j) {
        if ((j % 5) != 0){
            painter.drawLine(92, 0, 96, 0);
        }
        painter.rotate(6.0);
    }
});
win.show();
(global as any).win = win;
