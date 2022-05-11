import addon from '../utils/addon';
import { QWidgetSignals, QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

export interface QStatusBarSignals extends QWidgetSignals {
    messageChanged: (message: string) => void;
}

/**

> Create and control progress bar widgets.

* **This class is a JS wrapper around Qt's [QStatusBar class](https://doc.qt.io/qt-5/qstatusbar.html)**

A `QStatusBar` provides ability to add and manipulate the status bar of a window.

### Example

```javascript
const { QStatusBar } = require("@nodegui/nodegui");

const progressBar = new QStatusBar();
```
 */
export class QStatusBar extends QWidget<QStatusBarSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QStatusBar(parent.native);
        } else {
            native = new addon.QStatusBar();
        }
        super(native);
    }
    /**
     * Adds the given widget permanently to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     * Permanently means that the widget may not be obscured by temporary messages. It is is located at the far right of the status bar.
     * @param widget The widget to permanently add to this status bar.
     * @param stretch Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     */
    addPermanentWidget(widget: QWidget, stretch = 0): void {
        this.native.addPermanentWidget(widget.native, stretch);
    }

    /**
     * Adds the given widget to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     * The widget is located to the far left of the first permanent widget (see addPermanentWidget()) and may be obscured by temporary messages.
     * @param widget The widget to add to this status bar.
     * @param stretch Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     */
    addWidget(widget: QWidget, stretch = 0): void {
        this.native.addWidget(widget.native, stretch);
    }

    /**
     * Removes any temporary message being shown.
     */
    clearMessage(): void {
        this.native.clearMessage();
    }

    /**
     * Returns the temporary message currently shown, or an empty string if there is no such message.
     */
    currentMessage(): string {
        return this.native.currentMessage();
    }

    /**
     * Inserts the given widget at the given index permanently to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. If index is out of range, the widget is appended (in which case it is the actual index of the widget that is returned).
     * The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     * Permanently means that the widget may not be obscured by temporary messages. It is is located at the far right of the status bar.
     * @param index The index at which to insert the given widget permanently.
     * @param widget The widget to insert into this status bar permanently.
     * @param stretch Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     */
    insertPermanentWidget(index: number, widget: QWidget, stretch = 0): number {
        return this.native.insertPermanentWidget(index, widget.native, stretch);
    }

    /**
     * Inserts the given widget at the given index to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. If index is out of range, the widget is appended (in which case it is the actual index of the widget that is returned).
     * The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     * The widget is located to the far left of the first permanent widget (see addPermanentWidget()) and may be obscured by temporary messages.
     * @param index The index at which to insert the given widget.
     * @param widget The widget to insert into this status bar.
     * @param stretch Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
     */
    insertWidget(index: number, widget: QWidget, stretch = 0): number {
        return this.native.insertWidget(index, widget.native, stretch);
    }

    /**
     * Determines whether the QSizeGrip in the bottom-right corner of the status bar is enabled
     */
    isSizeGripEnabled(): boolean {
        return this.native.isSizeGripEnabled();
    }

    /**
     * Removes the specified widget from the status bar.
     * Note: This function does not delete the widget but hides it. To add the widget again, you must call both the addWidget() and show() functions.
     * @param widget The widget to remove from this status bar.
     */
    removeWidget(widget: QWidget): void {
        this.native.removeWidget(widget.native);
    }

    /**
     * Hides the normal status indications and displays the given message for the specified number of milli-seconds (timeout). If timeout is 0 (default), the message remains displayed until the clearMessage() slot is called or until the showMessage() slot is called again to change the message.
     * Note that showMessage() is called to show temporary explanations of tool tip texts, so passing a timeout of 0 is not sufficient to display a permanent message.
     * @param message The message to display.
     * @param timeout The number of milliseconds to display the message.
     */
    showMessage(message: string, timeout = 0): void {
        this.native.showMessage(message, timeout);
    }

    /**
     * Enables or disables the QSizeGrip in the bottom-right corner of this status bar.
     * @param enabled Determines if the QSizeGrip should be enabled or disabled.
     */
    setSizeGripEnabled(enabled: boolean): void {
        this.native.setSizeGripEnabled(enabled);
    }
}
wrapperCache.registerWrapper('QStatusBarWrap', QStatusBar);
