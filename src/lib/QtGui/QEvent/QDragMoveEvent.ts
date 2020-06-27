import addon from '../../utils/addon';
import { NativeElement } from '../../core/Component';
import { DropAction } from '../../QtEnums';
<<<<<<< HEAD
import { QMimeData } from '../../QtCore/QMimeData';
=======
>>>>>>> f4d656d8ef9635da890a990a13be300c4b1456d8

export class QDragMoveEvent {
    native: NativeElement;
    constructor(event: NativeElement) {
        this.native = new addon.QDragMoveEvent(event);
    }

    /**
     * Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
     * Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget
     *
     * If the rectangle is provided, also notifies that future moves will also be acceptable if they remain within the rectangle given on the widget.
     * This can improve performance, but may also be ignored by the underlying system.
     * If the rectangle is empty, drag move events will be sent continuously. This is useful if the source is scrolling in a timer event.
     */
    accept(x?: number, y?: number, width?: number, height?: number): void {
        if (arguments.length == 4) {
            this.native.accept(x, y, width, height);
        } else {
            this.native.accept();
        }
    }
    /**
     * Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
     * Clearing the accept parameter indicates that the event receiver does not want the event.
     * Unwanted events might be propagated to the parent widget.
     */
    ignore(x?: number, y?: number, width?: number, height?: number): void {
        if (arguments.length == 4) {
            this.native.ignore(x, y, width, height);
        } else {
            this.native.ignore();
        }
    }
    answerRect(): { x: number; y: number; width: number; height: number } {
        return this.native.answerRect();
    }
    //Below : Methods inherited from QDropEvent ---------------------------------------

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
<<<<<<< HEAD
    /**
     * Returns the data that was dropped on the widget and its associated MIME type information
     */
    mimeData(): QMimeData {
        return new QMimeData(this.native.mimeData());
    }
=======
    /*
     * Cannot implement yet; need to implement QMimeData first
     * Returns the data that was dropped on the widget and its associated MIME type information
     */
    // mimeData(): QMimeData  {
    //     return this.native.pos();
    // }
>>>>>>> f4d656d8ef9635da890a990a13be300c4b1456d8
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
