import addon from '../../utils/addon';
import { NativeRawPointer } from '../../core/Component';
import { QInputEvent } from './QInputEvent';

enum PointerType {
    /** An unknown device */
    Idle = 0,
    /** Tip end of a stylus-like device (the narrow end of the pen). */
    Loading = 1,
    /** Any puck-like device. */
    Ready = 2,
    /** Eraser end of a stylus-like device (the broad end of the pen). */
    Error = 3,
}
enum TabletDevice {
    /** No device, or an unknown device. */
    NoDevice = 0,
    /** A Puck (a device that is similar to a flat mouse with a transparent circle with cross-hairs). */
    Puck = 1,
    /** A Stylus */
    Stylus = 2,
    /** An airbrush */
    Airbrush = 3,
    /** A 4D Mouse. */
    FourDMouse = 4,
    /** A special stylus that also knows about rotation (a 6D stylus). */
    RotationStylus = 6,
}
/**
 * The QTabletEvent class contains parameters that describe a Tablet event
 */
export class QTabletEvent extends QInputEvent {
    static readonly PointerType = PointerType;
    static readonly TabletDevice = TabletDevice;
    readonly PointerType = PointerType;
    readonly TabletDevice = TabletDevice;

    constructor(event: NativeRawPointer<'QEvent'>) {
        super(new addon.QTabletEvent(event));
    }
    /**
     * Returns the button that caused the event.
     * Note that the returned value is always Qt::NoButton for TabletMove,
     * TabletEnterProximity and TabletLeaveProximity events
     */
    button(): number {
        return this.native.button();
    }
    /**
     * Returns the button state when the event was generated.
     * The button state is a combination of buttons from the Qt::MouseButton enum using the OR operator.
     * For TabletMove events, this is all buttons that are pressed down.
     * For TabletPress events this includes the button that caused the event.
     * For TabletRelease events this excludes the button that caused the event.
     */
    buttons(): number {
        return this.native.buttons();
    }
    /*
     * Returns the type of device that generated the event
     * (see enum QTabletEvent::TabletDevice)
     *
     * Somehow the build couldn't find this method; may enable in the future
     */
    // deviceType(): TabletDevice {
    //     return this.native.deviceType();
    // }
    /**
     * Returns the global position of the device at the time of the event.
     *
     * This is important on asynchronous windows systems like X11;
     * whenever you move your widgets around in response to mouse events,
     * globalPos() can differ significantly from the current position QCursor::pos().
     *
     * use globalPosF for Floating point (more precise)
     */
    globalPos(): { x: number; y: number } {
        return this.native.globalPos();
    }
    /**
     * Returns the global position of the device at the time of the event.
     *
     * This is important on asynchronous windows systems like X11;
     * whenever you move your widgets around in response to mouse events,
     * globalPosF() can differ significantly from the current position QCursor::pos().
     */
    globalPosF(): { x: number; y: number } {
        return this.native.globalPosF();
    }
    /**
     * Returns the global x position of the mouse pointer at the time of the event
     */
    globalX(): number {
        return this.native.globalX();
    }
    /**
     * Returns the global y position of the mouse pointer at the time of the event
     */
    globalY(): number {
        return this.native.globalY();
    }
    /**
     * Returns the type of point that generated the event.
     * (See QTabletEvent::PointerType)
     */
    pointerType(): PointerType {
        return this.native.pointerType();
    }
    /**
     * Returns the position of the device, relative to the widget that received the event.
     *
     * If you move widgets around in response to mouse events, use globalPos() instead of this function.
     */
    pos(): { x: number; y: number } {
        return this.native.pos();
    }
    /**
     * Returns the position of the device, relative to the widget that received the event.
     *
     * If you move widgets around in response to mouse events, use globalPosF() instead of this function.
     */
    posF(): { x: number; y: number } {
        return this.native.posF();
    }
    /**
     * Returns the pressure for the device. 0.0 indicates that the stylus is not on the tablet,
     * 1.0 indicates the maximum amount of pressure for the stylus
     */
    pressure(): number {
        return this.native.pressure();
    }
    /**
     * Returns the rotation of the current tool in degrees, where zero means the
     * tip of the stylus is pointing towards the top of the tablet,
     * a positive value means it's turned to the right, and a negative value means it's turned to the left.
     *
     * This can be given by a 4D Mouse or a rotation-capable stylus (such as the Wacom Art Pen or the Apple Pencil).
     *
     * If the device does not support rotation, this value is always 0.0.
     */
    rotation(): number {
        return this.native.rotation();
    }
    /**
     * Returns the tangential pressure for the device.
     * This is typically given by a finger wheel on an airbrush tool.
     * The range is from -1.0 to 1.0. 0.0 indicates a neutral position.
     * Current airbrushes can only move in the positive direction from the neutrual position.
     * If the device does not support tangential pressure, this value is always 0.0.
     */
    tangentialPressure(): number {
        return this.native.tangentialPressure();
    }
    /**
     * Returns a unique ID for the current device,
     * making it possible to differentiate between multiple devices being used at the same time on the tablet.
     *
     * Support of this feature is dependent on the tablet.
     *
     * Values for the same device may vary from OS to OS.
     */
    uniqueId(): number {
        return this.native.uniqueId();
    }
    /**
     * Returns the x position of the device, relative to the widget that received the event
     */
    x(): number {
        return this.native.x();
    }
    /**
     * Returns the angle between the device (a pen, for example) and the
     * perpendicular in the direction of the x axis.
     * Positive values are towards the tablet's physical right.
     * The angle is in the range -60 to +60 degrees.
     */
    xTilt(): number {
        return this.native.xTilt();
    }
    /**
     * Returns the y position of the device, relative to the widget that received the event.
     */
    y(): number {
        return this.native.y();
    }
    /**
     * Returns the angle between the device (a pen, for example) and
     * the perpendicular in the direction of the y axis.
     * Positive values are towards the bottom of the tablet.
     * The angle is within the range -60 to +60 degrees.
     */
    yTilt(): number {
        return this.native.yTilt();
    }
    /**
     * Returns the z position of the device.
     * Typically this is represented by a wheel on a 4D Mouse. If the device does not support a Z-axis, this value is always zero.
     * This is not the same as pressure.
     */
    z(): number {
        return this.native.z();
    }
}
