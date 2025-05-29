import { QInputEvent } from './QInputEvent';

export abstract class QSinglePointEvent extends QInputEvent {
    button(): number {
        return this.native.button();
    }
    buttons(): number {
        return this.native.buttons();
    }
    /**
     * Returns the position of the mouse cursor relative to the widget that received the event.
     * If you move your widgets around in response to mouse events, use globalPosition() instead of this function.
     * This function was introduced in Qt 5.14
     */
    position(): { x: number; y: number } {
        return this.native.position();
    }
    /**
     * Returns the global position of the mouse pointer at the time of
     * the event. This is important on asynchronous window systems such
     * as X11; whenever you move your widgets around in response to mouse
     * events, globalPosition() can differ a lot from the current cursor
     * position returned by QCursor::pos().
     */
    globalPosition(): { x: number; y: number } {
        return this.native.globalPosition();
    }
    scenePosition(): { x: number; y: number } {
        return this.native.scenePosition();
    }
}
