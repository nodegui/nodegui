import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { AlignmentFlag } from '../QtEnums';
import { Margins } from '../utils/Margins';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

/**

> A `QScrollArea` provides a scrolling view onto another widget.

* **This class is a JS wrapper around Qt's [QScrollArea class](https://doc.qt.io/qt-5/qscrollarea.html)**

### Example

```javascript
const { QScrollArea } = require("@nodegui/nodegui");

const scrollArea = new QScrollArea();
scrollArea.setInlineStyle("flex: 1; width:'100%';");

const imageLabel = new QLabel();
const pixmap = new QPixmap(
  path.resolve(__dirname, "../extras/assets/kitchen.png")
);
imageLabel.setPixmap(pixmap);

scrollArea.setWidget(imageLabel);
```
 */
export class QScrollArea<Signals extends QScrollAreaSignals = QScrollAreaSignals> extends QAbstractScrollArea<Signals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QScrollArea(parent.native);
        } else {
            native = new addon.QScrollArea();
        }
        super(native);
    }
    setAlignment(alignment: AlignmentFlag): void {
        this.setProperty('alignment', alignment);
    }
    alignment(): AlignmentFlag {
        return this.property('alignment').toInt();
    }
    setWidgetResizable(resizable: boolean): void {
        this.setProperty('widgetResizable', resizable);
    }
    widgetResizable(): boolean {
        return this.property('widgetResizable').toBool();
    }
    ensureVisible(x: number, y: number, xmargin = 50, ymargin = 50): void {
        this.native.ensureVisible(x, y, xmargin, ymargin);
    }
    ensureWidgetVisible(childWidget: QWidget, xmargin = 50, ymargin = 50): void {
        this.native.ensureWidgetVisible(childWidget.native, xmargin, ymargin);
    }
    setWidget(widget: QWidget): void {
        this.native.setWidget(widget.native);
    }
    widget(): QWidget | null {
        return wrapperCache.getWrapper(this.native.widget()) as QWidget;
    }
    takeWidget(): QWidget | null {
        return wrapperCache.getWrapper(this.native.takeWidget()) as QWidget;
    }
    setViewportMargins(left: number, top: number, right: number, bottom: number): void {
        // Technically part of QAbstractScrollArea, but the C++ side has subclass specific
        // code needed, and setViewportMargins() isn't implemented yet for all of the
        // subclasses.
        this.native.setViewportMargins(left, top, right, bottom);
    }
    viewportMargins(): Margins {
        const marginsArray = this.native.viewportMargins();
        return {
            left: marginsArray[0],
            top: marginsArray[1],
            right: marginsArray[2],
            bottom: marginsArray[3],
        };
    }
}
wrapperCache.registerWrapper('QScrollAreaWrap', QScrollArea);

export type QScrollAreaSignals = QAbstractScrollAreaSignals;
