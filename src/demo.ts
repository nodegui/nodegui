import {
    FlexLayout,
    QMainWindow,
    QPainter,
    QWidget,
    QMainWindowEvents
} from './index';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);

win.addEventListener(QMainWindowEvents.Paint, () => {
    const painter = new QPainter();
    painter.begin(win);
    painter.drawText(30, 30, 'Hello!');
    painter.end();
});
win.show();
(global as any).win = win;
