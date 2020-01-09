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

// someone should put a sample code here
```
 */
export class QToolButton extends QAbstractButton<QToolButtonSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(rawPointer: NativeRawPointer<any>, disableNativeDeletion?: boolean);
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
        } else {
            native = new addon.QToolButton();
        }
        super(native);
        this.native = native;
        parent && this.setNodeParent(parent);
    }
    setArrowType(type: ArrowType): void {
        this.native.setArrowType(type);
    }
    arrowType(): ArrowType {
        return this.property('arrowType').toInt();
    }
    setAutoRaise(enable: boolean): void {
        this.native.setAutoRaise(enable);
    }
    autoRaise(): boolean {
        return this.property('autoRaise').toBool();
    }
    setPopupMode(mode: ToolButtonPopupMode): void {
        this.native.setPopupMode(mode);
    }
    popupMode(): ToolButtonPopupMode {
        return this.property('popupMode').toInt();
    }
    setToolButtonStyle(style: ToolButtonStyle): void {
        this.native.setToolButtonStyle(style);
    }
    toolButtonStyle(): ToolButtonStyle {
        return this.native.toolButtonStyle();
    }
    setMenu(menu: QMenu): void {
        this.native.setMenu(menu.native);
    }
    setDefaultAction(action: QAction): void {
        this.native.setDefaultAction(action.native);
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
