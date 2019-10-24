import { QMainWindow } from "./index";
import { QMenu } from "./lib/QtWidgets/QMenu";
import path from "path";
import { QIcon } from "./lib/QtGui/QIcon";
import { QSystemTrayIcon } from "./lib/QtWidgets/QSystemTrayIcon";
import { QAction } from "./lib/QtWidgets/QAction";

const win = new QMainWindow();

const trayIcon = new QIcon(
  path.resolve(__dirname, "../extras/assets/nodegui_white.png")
);

const menu = new QMenu();
menu.setTitle("hello");

const tray = new QSystemTrayIcon();
tray.setIcon(trayIcon);
tray.show();
tray.setToolTip("hello");
tray.setContextMenu(menu);

const action1 = new QAction();
action1.setText("action1");
menu.addAction(action1);

win.setWindowTitle("NodeGUI Demo");
win.resize(400, 700);
win.show();

(global as any).win = win; // To prevent win from being garbage collected.
(global as any).systemTray = tray; // To prevent system tray from being garbage collected.
