import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { ScrollPhase } from '../../QtEnums';
import { QSinglePointEvent } from './QSinglePointEvent';

export class QWheelEvent extends QSinglePointEvent {
    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QWheelEvent(event));
    }
    /**
     * Returns the relative amount that the wheel was rotated, in eighths of a degree.
     * A positive value indicates that the wheel was rotated forwards away from the user;
     * a negative value indicates that the wheel was rotated backwards toward the user.
     *
     * angleDelta().y() provides the angle through which the common vertical mouse wheel was
     * rotated since the previous event.
     * angleDelta().x() provides the angle through which the horizontal mouse wheel was
     * rotated, if the mouse has a horizontal wheel; otherwise it stays at zero.
     *
     * Some mice allow the user to tilt the wheel to perform horizontal scrolling,
     * and some touchpads support a horizontal scrolling gesture;
     * that will also appear in angleDelta().x().
     *
     * Most mouse types work in steps of 15 degrees,
     * in which case the delta value is a multiple of 120; i.e.,
     * 120 units * 1/8 = 15 degrees.
     *
     * However, some mice have finer-resolution wheels and
     * send delta values that are less than 120 units (less than 15 degrees).
     * To support this possibility, you can either cumulatively add the delta
     * values from events until the value of 120 is reached,
     * then scroll the widget, or you can partially scroll the widget in
     * response to each wheel event.
     *
     * But to provide a more native feel, you should prefer pixelDelta()
     * on platforms where it's available.
     */
    angleDelta(): { x: number; y: number } {
        return this.native.angleDelta();
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
    /**Returns whether the delta values delivered with the event are inverted*/
    inverted(): boolean {
        return this.native.inverted();
    }
    /*
     * Returns the scrolling phase of this wheel event
     * Note: The Qt::ScrollBegin and Qt::ScrollEnd phases are currently supported only on macOS
     */
    phase(): ScrollPhase {
        return this.native.phase();
    }

    /**
     * Returns the scrolling distance in pixels on screen.
     * This value is provided on platforms that support
     * high-resolution pixel-based delta values, such as macOS.
     * The value should be used directly to scroll content on screen
     *
     * Note:On X11 this value is driver specific and unreliable, use angleDelta() instead
     */
    pixelDelta(): { x: number; y: number } {
        return this.native.pixelDelta();
    }
}
