import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { ToolButtonStyle } from '../QtEnums/ToolButtonStyle';
import { ArrowType } from '../QtEnums/ArrowType';
import { QAction } from '../QtWidgets/QAction';
import { QMenu } from './QMenu';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

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
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QToolButton(parent.native);
        } else {
            native = new addon.QToolButton();
        }
        super(native);
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
        this.native.setMenu(menu.native);
    }
    menu(): QMenu | null {
        return wrapperCache.getWrapper(this.native.menu()) as QMenu;
    }
    setDefaultAction(action: QAction): void {
        this.native.setDefaultAction(action.native);
    }
    defaultAction(): QAction | null {
        return wrapperCache.getWrapper(this.native.defaultAction()) as QAction;
    }
    showMenu(): void {
        this.native.showMenu();
    }
}
wrapperCache.registerWrapper('QToolButtonWrap', QToolButton);

export enum ToolButtonPopupMode {
    DelayedPopup,
    MenuButtonPopup,
    InstantPopup,
}

export interface QToolButtonSignals extends QAbstractButtonSignals {
    triggered: (nativeAction: NativeElement) => void;
}
