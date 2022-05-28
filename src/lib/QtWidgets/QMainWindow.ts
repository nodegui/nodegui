import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QLayout } from './QLayout';
import { QMenuBar } from './QMenuBar';
import { QStatusBar } from './QStatusBar';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Create and control windows.

* **This class is a JS wrapper around Qt's [QMainWindow class](https://doc.qt.io/qt-5/qmainwindow.html)**

A `QMainWindow` provides a main application window. Every widget in NodeGui should be a child/nested child of QMainWindow. QMainWindow in NodeGui is also responsible for FlexLayout calculations of its children.

### Example

```javascript
const { QMainWindow, QWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();

const centralWidget = new QWidget();
win.setCentralWidget(centralWidget);

win.show();

global.win = win; // prevent's gc of win
```

QMainWindow needs to have a central widget set before other widgets can be added as a children/nested children.
Once a central widget is set you can add children/layout to the central widget.
 */
export class QMainWindow extends QWidget<QMainWindowSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QMainWindow(parent.native);
        } else {
            native = new addon.QMainWindow();
        }
        super(native);
    }
    setLayout(parentLayout: QLayout): void {
        const centralWidget = this.centralWidget();
        if (centralWidget) {
            centralWidget.setLayout(parentLayout);
        } else {
            super.setLayout(parentLayout);
        }
    }
    setCentralWidget(widget: QWidget): void {
        this.native.setCentralWidget(widget.native);
        const centralWidget = this.centralWidget();
        if (centralWidget) {
            centralWidget.setFlexNodeSizeControlled(true);
        }
    }
    centralWidget(): QWidget {
        return wrapperCache.getWrapper(this.native.centralWidget()) as QWidget;
    }
    takeCentralWidget(): QWidget | null {
        const centralWidget = this.centralWidget();
        this.centralWidget = null;
        if (centralWidget) {
            centralWidget.setFlexNodeSizeControlled(false);
            return wrapperCache.getWrapper(this.native.takeCentralWidget()) as QWidget;
        }
        return null;
    }
    setMenuBar(menuBar: QMenuBar): void {
        this.native.setMenuBar(menuBar.native);
    }
    menuBar(): QMenuBar | null {
        return wrapperCache.getWrapper(this.native.menuBar()) as QMenuBar;
    }
    setMenuWidget(menuWidget: QWidget): void {
        this.native.setMenuWidget(menuWidget.native);
    }
    layout(): QLayout | null {
        const centralWidget = this.centralWidget();
        if (centralWidget) {
            return centralWidget.layout();
        }
        return super.layout();
    }
    center(): void {
        this.native.center();
    }

    /**
     * Sets the status bar for the main window to statusbar.
     * Note: QMainWindow takes ownership of the statusbar pointer and deletes it at the appropriate time.
     * @param statusBar The status bar.
     */
    setStatusBar(statusBar: QStatusBar): void {
        if (statusBar != null) {
            this.native.setStatusBar(statusBar.native);
        } else {
            this.native.setStatusBar(null);
        }
    }

    /**
     * Returns the status bar for the main window.
     */
    statusBar(): QStatusBar | null {
        return wrapperCache.getWrapper(this.native.statusBar()) as QStatusBar;
    }
}
wrapperCache.registerWrapper('QMainWindowWrap', QMainWindow);

export type QMainWindowSignals = QWidgetSignals;
