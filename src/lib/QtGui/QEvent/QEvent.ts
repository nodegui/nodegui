import { NativeElement } from '../../core/Component';

export abstract class QEvent {
    native: NativeElement;

    constructor(native: NativeElement) {
        this.native = native;
    }

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
