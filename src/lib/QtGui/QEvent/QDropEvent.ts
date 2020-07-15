import addon from '../../utils/addon';
import { NativeElement, NativeRawPointer } from '../../core/Component';
import { DropAction } from '../../QtEnums';
import { QMimeData } from '../../QtCore/QMimeData';

export class QDropEvent {
    native: NativeElement;
    constructor(event: NativeRawPointer<'QEvent'>) {
        this.native = new addon.QDropEvent(event);
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

    //Methods from QEvent ---------------------------
    /**
     * Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
     * Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget
     */
    accept(): void {
        return this.native.accept();
    }
    /**
     * Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
     * Clearing the accept parameter indicates that the event receiver does not want the event.
     * Unwanted events might be propagated to the parent widget.
     */
    ignore(): void {
        return this.native.ignore();
    }
    isAccepted(): boolean {
        return this.native.isAccepted();
    }
    /**
     * Sets the accept flag of the event object
     */
    setAccepted(accepted: boolean): void {
        return this.native.setAccepted(accepted);
    }
    /**
     * Returns true if the event originated outside the application (a system event); otherwise returns false.
     *
     * The return value of this function is not defined for paint events.
     */
    spontaneous(): boolean {
        return this.native.spontaneous();
    }
    /**
     * Returns the event type
     * @returns {Number} This is QEvent::Type
     */
    type(): number {
        return this.native._type();
    }
}
