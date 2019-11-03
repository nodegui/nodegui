import { QMainWindow } from "./index";
import { QMenu } from "./lib/QtWidgets/QMenu";
import path from "path";
import { QIcon } from "./lib/QtGui/QIcon";
import { QLabel } from "./lib/QtWidgets/QLabel";
import { QSystemTrayIcon } from "./lib/QtWidgets/QSystemTrayIcon";
import { QAction } from "./lib/QtWidgets/QAction";
import { QApplication } from "./lib/QtGui/QApplication";
import { QKeySequence } from "./lib/QtGui/QKeySequence";
import { ShortcutContext } from "./lib/QtEnums";
import { QMenuBar } from "./lib/QtWidgets/QMenuBar";
import { QShortcut, QShortcutEvents } from "./lib/QtWidgets/QShortcut";
import { QPushButton } from "./lib/QtWidgets/QPushButton";
import { FlexLayout } from "./lib/core/FlexLayout";
import { QWidget } from "./lib/QtWidgets/QWidget";

const win = new QMainWindow();
const shortcut = new QShortcut(win);
shortcut.setKey(new QKeySequence("Ctrl+M"));
shortcut.setEnabled(true);
shortcut.addEventListener(QShortcutEvents.activated, () => {
  console.log("Shortcut Activated");
});
(global as any).shortcut = shortcut;
const trayIcon = new QIcon(
  path.resolve(__dirname, "../extras/assets/nodegui_white.png")
);
trayIcon.setIsMask(true);

const tray = new QSystemTrayIcon();
tray.setIcon(trayIcon);
tray.show();
tray.setToolTip("hello");
const menu = new QMenu();
const menuBar = new QMenuBar();
win.setMenuBar(menuBar);

tray.setContextMenu(menu);

const showActionCheckable = new QAction();
showActionCheckable.setCheckable(true);
showActionCheckable.setChecked(true);
showActionCheckable.setText("Show");
showActionCheckable.addEventListener("triggered", () => {
  if (win.isVisible()) {
    win.hide();
    showHideAction.setText("Show");
    showActionCheckable.setChecked(false);
  } else {
    win.show();
    showHideAction.setText("Hide");
    showActionCheckable.setChecked(true);
  }
});
menu.addAction(showActionCheckable);

const showHideAction = new QAction();
showHideAction.setText("Hide");
showHideAction.setIcon(trayIcon);
showHideAction.addEventListener("triggered", () => {
  console.log("Hide called");
  if (win.isVisible()) {
    win.hide();
    showHideAction.setText("Show");
    showActionCheckable.setChecked(false);
  } else {
    win.show();
    showHideAction.setText("Hide");
    showActionCheckable.setChecked(true);
  }
});
showHideAction.setShortcut(new QKeySequence("Ctrl+L"));
showHideAction.setShortcutContext(ShortcutContext.ApplicationShortcut);
menu.addAction(showHideAction);

const subMenu = new QMenu();
const subMenuAction = new QAction();
subMenuAction.setText("subAction");
subMenu.addAction(subMenuAction);
const actionWithSubmenu = new QAction();
actionWithSubmenu.setMenu(subMenu);
actionWithSubmenu.setText("subMenu");
menu.addAction(actionWithSubmenu);

const separatorAction = new QAction();
separatorAction.setSeparator(true);
menu.addAction(separatorAction);

const quitAction = new QAction();
quitAction.setText("Quit");
quitAction.addEventListener("triggered", () => {
  const app = QApplication.instance();
  app.exit(0);
});

menu.addAction(quitAction);

menu.setTitle("TestMenu");
// menuBar.addMenu(menu);

const button = new QPushButton();
button.setText("Center");
button.addEventListener("clicked", () => {
  win.center();
});

const rootView = new QWidget();

rootView.setObjectName("root");
rootView.setLayout(new FlexLayout());
if (rootView.layout) {
  rootView.layout.addWidget(button);
}

win.setCentralWidget(rootView);
win.setStyleSheet(`
  #root {
    flex: 1;
    height: '100%';
    align-items: 'center';
    justify-content: 'center';
  }
`);

win.setWindowTitle("NodeGUI Demo");
win.show();
win.resize(400, 700);

const qApp = QApplication.instance();
qApp.setQuitOnLastWindowClosed(false);

(global as any).win = win; // To prevent win from being garbage collected.
(global as any).systemTray = tray; // To prevent system tray from being garbage collected.
