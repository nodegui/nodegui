import { QMainWindow } from './index';

const win = new QMainWindow();

win.show();

(global as any).win = win;
