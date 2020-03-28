import { QMainWindow, QLabel, WidgetEventTypes, QMouseEvent } from './index';

const win = new QMainWindow();

const label = new QLabel();
label.setText('Move your mouse here');
label.setMouseTracking(true);

label.addEventListener(WidgetEventTypes.MouseMove, (nativeEvt) => {
    const mouseEvt = new QMouseEvent(nativeEvt as any);
    console.log('mouseMoved at: ', { x: mouseEvt.x(), y: mouseEvt.y() });
});

win.setCentralWidget(label);
win.show();
(global as any).win = win;
