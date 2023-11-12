import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QDropEvent } from './QDropEvent';

export class QDragMoveEvent extends QDropEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QDragMoveEvent(event));
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
            this.native.accept_qrect(x, y, width, height);
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
            this.native.ignore_qrect(x, y, width, height);
        } else {
            this.native.ignore();
        }
    }
    answerRect(): { x: number; y: number; width: number; height: number } {
        return this.native.answerRect();
    }
}
