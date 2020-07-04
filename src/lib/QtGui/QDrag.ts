import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject } from '../QtCore/QObject';
import { DropAction } from '../QtEnums';
import { QPixmap } from './QPixmap';
import { QPoint } from '../QtCore/QPoint';
import { QMimeData } from '../QtCore/QMimeData';

/**
 * description
 */
export class QDrag extends Component {
    native: NativeElement;
    constructor(arg?: NativeElement | QObject) {
        super();
        if (!arg) {
            this.native = new addon.QDrag();
        } else {
            const isNative = checkIfNativeElement(arg);
            if (isNative) {
                this.native = arg as NativeElement;
            } else if (arg.native) {
                this.native = new addon.QDrag(arg.native);
            } else {
                this.native = new addon.QDrag();
            }
        }
    }

    /**
    Returns the default proposed drop action for this drag operation.
    */
    defaultAction(): DropAction {
        return this.native.defaultAction();
    }

    /**
    Returns the drag cursor for the action.
    */
    dragCursor(action: DropAction): QPixmap {
        return new QPixmap(this.native.dragCursor(action));
    }

    /**
    Starts the drag and drop operation and returns a value indicating the requested drop action when it is completed. The drop actions that the user can choose from are specified in supportedActions. The default proposed action will be selected among the allowed actions in the following order: Move, Copy and Link.
    */
    exec(supportedActions: number = DropAction.MoveAction, defaultDropAction?: DropAction): DropAction {
        if (defaultDropAction) {
            return this.native.exec(supportedActions, defaultDropAction);
        } else {
            return this.native.exec(supportedActions);
        }
    }

    /**
    Returns the position of the hot spot relative to the top-left corner of the cursor.
    */
    hotSpot(): QPoint {
        return new QPoint(this.native.hotSpot());
    }

    /**
    Returns the pixmap used to represent the data in a drag and drop operation.
    */
    pixmap(): QPixmap {
        return new QPixmap(this.native.pixmap());
    }

    /**
    Sets the drag cursor for the action. This allows you to override the default native cursors. To revert to using the native cursor for action pass in a null QPixmap as cursor.
    */
    setDragCursor(cursor: QPixmap, action: DropAction): void {
        return this.native.setDragCursor(cursor.native, action);
    }

    /**
    Sets the position of the hot spot relative to the top-left corner of the pixmap used to the point specified by hotspot.
    */
    setHotSpot(hotspot: QPoint): void {
        return this.native.setHotSpot(hotspot.native);
    }

    /**
    Sets pixmap as the pixmap used to represent the data in a drag and drop operation. You can only set a pixmap before the drag is started.
    */
    setPixmap(pixmap: QPixmap): void {
        return this.native.setPixmap(pixmap.native);
    }

    /**
    Returns the set of possible drop actions for this drag operation.
    */
    supportedActions(): number {
        return this.native.supportedActions();
    }

    /**
    Cancels a drag operation initiated by Qt.
    */
    static cancel(): void {
        return addon.QDrag.cancel();
    }

    //Manaully implemented methods
    /**
     * Returns the MIME data that is encapsulated by the drag object.
     */
    mimeData(): QMimeData {
        return new QMimeData(this.native.mimeData());
    }
    /**
     * Sets the data to be sent to the given MIME data.
     * Ownership of the data is transferred to the QDrag object.
     */
    setMimeData(data: QMimeData): void {
        return this.native.setMimeData(data.native);
    }

    /*
     * Returns the source of the drag object. This is the widget where the drag and drop operation originated.

     THIS FUNCTION CRASHES THE APPLICATION, NEEDS REIMPLEMENTATION
     */
    // source(): QObject {
    //     return new QObject(this.native.source());
    // }

    /*
     * Returns the target of the drag and drop operation. This is the widget where the drag object was dropped.
     
    THIS FUNCTION CRASHES THE APPLICATION, NEEDS REIMPLEMENTATION
     */
    // target(): QObject {
    //     return new QObject(this.native.target());
    // }
}
