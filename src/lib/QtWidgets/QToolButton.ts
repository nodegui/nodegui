import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer, Component } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { ToolButtonStyle } from '../QtEnums/ToolButtonStyle';
import { ArrowType } from '../QtEnums/ArrowType';
import { QAction } from '../QtWidgets/QAction';
import { QMenu } from './QMenu';
import { checkIfNativeElement, checkIfNapiExternal } from '../utils/helpers';

/**

> Create and control buttons to use inside a QToolBar.

* **This class is a JS wrapper around Qt's [QToolButton class](https://doc.qt.io/qt-5/qtoolbutton.html)**

A QToolButton is a special button that provides quick-access to specific commands or options.

### Example

```javascript
const { QToolButton } = require("@nodegui/nodegui");

const tool = new QToolButton();
tool.setText('Help');
```
 */
export class QToolButton extends QAbstractButton<QToolButtonSignals> {
    private _defaultAction?: QAction | null;
    private _menu?: QMenu | null;

    constructor(arg?: NodeWidget<any> | NativeRawPointer<any> | NativeElement, disableNativeDeletion = true) {
        let native;
        let parent: Component | undefined;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (checkIfNapiExternal(arg)) {
            native = new addon.QToolButton(arg, disableNativeDeletion);
        } else if (arg) {
            const parentWidget = arg as NodeWidget<any>;
            native = new addon.QToolButton(parentWidget.native);
            parent = parentWidget;
        } else {
            native = new addon.QToolButton();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    setArrowType(type: ArrowType): void {
        this.setProperty('arrowType', type);
    }
    arrowType(): ArrowType {
        return this.property('arrowType').toInt();
    }
    setAutoRaise(enable: boolean): void {
        this.setProperty('autoRaise', enable);
    }
    autoRaise(): boolean {
        return this.property('autoRaise').toBool();
    }
    setPopupMode(mode: ToolButtonPopupMode): void {
        this.setProperty('popupMode', mode);
    }
    popupMode(): ToolButtonPopupMode {
        return this.property('popupMode').toInt();
    }
    setToolButtonStyle(style: ToolButtonStyle): void {
        this.setProperty('toolButtonStyle', style);
    }
    toolButtonStyle(): ToolButtonStyle {
        return this.property('toolButtonStyle').toInt();
    }
    setMenu(menu: QMenu): void {
        this._menu = menu;
        this.native.setMenu(menu.native);
    }
    menu(): QMenu | null {
        if (this._menu) {
            return this._menu;
        }
        return null;
    }
    setDefaultAction(action: QAction): void {
        this._defaultAction = action;
        this.native.setDefaultAction(action.native);
    }
    defaultAction(): QAction | null {
        if (this._defaultAction) {
            return this._defaultAction;
        }
        return null;
    }
    showMenu(): void {
        this.native.showMenu();
    }
}

export enum ToolButtonPopupMode {
    DelayedPopup,
    MenuButtonPopup,
    InstantPopup,
}

export interface QToolButtonSignals extends QAbstractButtonSignals {
    triggered: (nativeAction: NativeElement) => void;
}
