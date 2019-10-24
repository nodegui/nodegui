import { QMainWindow } from "./index";
import { QMenu } from "./lib/QtWidgets/QMenu";
import path from "path";
import { QIcon } from "./lib/QtGui/QIcon";
import { QSystemTrayIcon } from "./lib/QtWidgets/QSystemTrayIcon";
import { QAction } from "./lib/QtWidgets/QAction";
import { QApplication } from "./lib/QtGui/QApplication";
import { QKeySequence } from "./lib/QtGui/QKeySequence";

const win = new QMainWindow();

const trayIcon = new QIcon(
  path.resolve(__dirname, "../extras/assets/nodegui_white.png")
);

const tray = new QSystemTrayIcon();
tray.setIcon(trayIcon);
tray.show();
tray.setToolTip("hello");
const menu = new QMenu();
tray.setContextMenu(menu);

const showHideAction = new QAction();
showHideAction.setText("Hide");
showHideAction.setIcon(trayIcon);
showHideAction.addEventListener("triggered", () => {
  console.log("Hide called");
  if (win.isVisible()) {
    win.hide();
    showHideAction.setText("Show");
  } else {
    win.show();
    showHideAction.setText("Hide");
  }
});
showHideAction.setShortcut(new QKeySequence("Ctrl+L"));
menu.addAction(showHideAction);

const subMenu = new QMenu();
const subMenuAction = new QAction();
subMenuAction.setText("subAction");
subMenu.addAction(subMenuAction);
const actionWithSubmenu = new QAction();
actionWithSubmenu.setMenu(subMenu);
actionWithSubmenu.setText("subMenu");
menu.addAction(actionWithSubmenu);

const quitAction = new QAction();
quitAction.setText("Quit");
quitAction.addEventListener("triggered", () => {
  const app = QApplication.instance();
  app.exit(0);
});
menu.addAction(quitAction);

win.setWindowTitle("NodeGUI Demo");
win.resize(400, 700);
win.show();

const qApp = QApplication.instance();
qApp.setQuitOnLastWindowClosed(false);

(global as any).win = win; // To prevent win from being garbage collected.
(global as any).systemTray = tray; // To prevent system tray from being garbage collected.
