import addon from '../../utils/addon';
import { NodeWidget } from '../QWidget';
import { BaseWidgetEvents } from '../../core/EventWidget';
import { NativeElement } from '../../core/Component';
import { NodeLayout } from '../QLayout';
import { QMenuBar } from '../QMenuBar';

export const QMainWindowEvents = Object.freeze({
    ...BaseWidgetEvents,
});
export class QMainWindow extends NodeWidget {
    native: NativeElement;
    public centralWidget?: NodeWidget;
    private _menuBar?: QMenuBar;
    private _menuBarWidget?: NodeWidget;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QMainWindow(parent.native);
        } else {
            native = new addon.QMainWindow();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
        // bind member functions
        this.setCentralWidget.bind(this);
        this.setLayout = (parentLayout: NodeLayout) => {
            if (this.centralWidget) {
                this.centralWidget.setLayout(parentLayout);
            } else {
                this.native.setLayout(parentLayout.native);
                super.layout = parentLayout;
            }
        };
    }
    setCentralWidget(widget: NodeWidget) {
        // react:✓
        this.native.setCentralWidget(widget.native, widget.getFlexNode());
        this.centralWidget = widget;
    }
    setMenuBar(menuBar: QMenuBar) {
        this.native.setMenuBar(menuBar.native);
        this._menuBar = menuBar;
    }
    menuBar(): QMenuBar | undefined {
        return this._menuBar;
    }
    setMenuWidget(menuWidget: NodeWidget) {
        this.native.setMenuWidget(menuWidget.native);
    }
    get layout() {
        if (this.centralWidget) {
            return this.centralWidget.layout;
        } else {
            return super.layout;
        }
    }
    center() {
        this.native.center();
    }
}
