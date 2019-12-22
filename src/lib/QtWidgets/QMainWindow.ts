import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeLayout } from './QLayout';
import { QMenuBar } from './QMenuBar';

export type QMainWindowSignals = QWidgetSignals;
export class QMainWindow extends NodeWidget<QMainWindowSignals> {
    native: NativeElement;
    public centralWidget?: NodeWidget<any> | null;
    private _menuBar?: QMenuBar;
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
        this.centralWidget = widget;
        this.centralWidget.setFlexNodeSizeControlled(true);
    }
    takeCentralWidget(): NodeWidget<any> | null {
        const centralWidget = this.centralWidget;
        this.centralWidget = null;
        if (centralWidget) {
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
    get layout(): NodeLayout<any> | undefined {
        if (this.centralWidget) {
            return this.centralWidget.layout;
        }
        return super.layout;
    }
    center(): void {
        this.native.center();
    }
}
