import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton } from './QAbstractButton';
import { ToolButtonStyle } from '../QtEnums/ToolButtonStyle';
import { ArrowType } from '../QtEnums/ArrowType';
import { QAction } from '../QtWidgets/QAction';
import { QMenu } from './QMenu';

export enum ToolButtonPopupMode {
    DelayedPopup,
    MenuButtonPopup,
    InstantPopup,
}

export interface QToolButtonSignals {
    clicked: (checked: boolean) => void;
    pressed: () => void;
    released: () => void;
    toggled: (checked: boolean) => void;
    triggered: (nativeAction: NativeElement) => void;
}
export class QToolButton extends QAbstractButton<QToolButtonSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QToolButton(parent.native);
        } else {
            native = new addon.QToolButton();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
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
