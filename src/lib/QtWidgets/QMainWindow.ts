import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeLayout } from './QLayout';
import { QMenuBar } from './QMenuBar';
import { QStatusBar } from './QStatusBar';

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
export class QMainWindow extends NodeWidget<QMainWindowSignals> {
    native: NativeElement;
    private _centralWidget?: NodeWidget<any> | null;
    public get centralWidget(): NodeWidget<any> | null | undefined {
        return this._centralWidget;
    }
    public set centralWidget(centralWidget: NodeWidget<any> | null | undefined) {
        if (!centralWidget) {
            this.takeCentralWidget();
        } else {
            this.setCentralWidget(centralWidget);
        }
    }
    private _menuBar?: QMenuBar;
    private _statusBar?: QStatusBar | null;
    private _prevLayout?: NodeLayout<QMainWindowSignals>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QMainWindow(parent.native);
        } else {
            native = new addon.QMainWindow();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);

        this.setLayout = (parentLayout: NodeLayout<any>): void => {
            if (this.centralWidget) {
                this.centralWidget.setLayout(parentLayout);
            } else {
                this.native.setLayout(parentLayout.native);
                super.layout = parentLayout;
            }
        };
    }
    setCentralWidget(widget: NodeWidget<any>): void {
        this.native.setCentralWidget(widget.native);
        this._centralWidget = widget;
        this._centralWidget.setFlexNodeSizeControlled(true);
        this._prevLayout = this._prevLayout || this.layout;
        this.layout = this._centralWidget.layout;
    }
    takeCentralWidget(): NodeWidget<any> | null {
        const centralWidget = this._centralWidget;
        this._centralWidget = null;
        if (centralWidget) {
            this.layout = this._prevLayout;
            this.native.takeCentralWidget();
            return centralWidget;
        }
        return null;
    }
    setMenuBar(menuBar: QMenuBar): void {
        this.native.setMenuBar(menuBar.native);
        this._menuBar = menuBar;
    }
    menuBar(): QMenuBar | undefined {
        return this._menuBar;
    }
    setMenuWidget(menuWidget: NodeWidget<any>): void {
        this.native.setMenuWidget(menuWidget.native);
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
        this.native.setStatusBar(statusBar.native);
        this._statusBar = statusBar;
    }

    /**
     * Removes the status bar from the main window.
     */
    removeStatusBar(): void {
        this.native.setStatusBar(null);
        this._statusBar = null;
    }

    /**
     * Returns the status bar for the main window.
     */
    statusBar(): QStatusBar {
        return this.native.statusBar();
    }
}

export type QMainWindowSignals = QWidgetSignals;
