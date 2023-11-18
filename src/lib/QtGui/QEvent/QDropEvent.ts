import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';
import { DropAction } from '../../QtEnums';
import { QMimeData } from '../../QtCore/QMimeData';
import { QEvent } from './QEvent';
import { checkIfNativeElement } from '../../utils/helpers';

export class QDropEvent extends QEvent {
    constructor(arg: NativeRawPointer<'QEvent'> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QDropEvent(arg);
        }
        super(native);
    }

    /** Sets the drop action to be the proposed action */
    acceptProposedAction(): void {
        return this.native.acceptProposedAction();
    }
    /**
     * Returns the action to be performed on the data by the target.
     * This may be different from the action supplied in proposedAction()
     * if you have called setDropAction() to explicitly choose a drop action
     */
    dropAction(): DropAction {
        return this.native.dropAction();
    }
    /**
     * Returns the modifier keys that are pressed
     *
     * see Qt::KeyboardModifier for flags
     */
    keyboardModifiers(): number {
        return this.native.keyboardModifiers();
    }
    /**
     * Returns the data that was dropped on the widget and its associated MIME type information
     */
    mimeData(): QMimeData {
        return new QMimeData(this.native.mimeData());
    }
    /**
     * Returns the mouse buttons that are pressed
     *
     * See Qt::MouseButton for flags
     */
    mouseButtons(): number {
        return this.native.mouseButtons();
    }
    /**
     * Returns the position where the drop was made
     */
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    /**
     * Returns the position where the drop was made
     */
    posF(): { x: number; y: number } {
        return this.native.posF();
    }
    /**
     * Returns an OR-combination of possible drop actions.
     *
     * See Qt::DropAction for flags
     */
    possibleActions(): number {
        return this.native.possibleActions();
    }
    /**
     * Returns the proposed drop action
     *
     */
    proposedAction(): DropAction {
        return this.native.proposedAction();
    }

    setDropAction(action: DropAction): void {
        return this.native.setDropAction(action);
    }
    /*
    If the source of the drag operation is a widget in this application, this function returns that source; otherwise it returns nullptr. The source of the operation is the first parameter to the QDrag object used instantiate the drag.
    This is useful if your widget needs special behavior when dragging to itself.
    Not implemented yet, because I'm unsure about casting pointers and comparisons in Node.JS
    */
    //    source(): QObject {
    //        return this.native.source();
    //    }
}
