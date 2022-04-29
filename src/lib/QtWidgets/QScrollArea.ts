import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { AlignmentFlag } from '../QtEnums';
import { Margins } from '../utils/Margins';

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
export class QScrollArea extends QAbstractScrollArea<QScrollAreaSignals> {
    contentWidget?: QWidget | null;
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QScrollArea(parent.native);
        } else {
            native = new addon.QScrollArea();
        }
        super(native);
        this.setNodeParent(parent);
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
        this.contentWidget = widget;
        this.native.setWidget(widget.native);
    }
    widget(): QWidget | null {
        if (this.contentWidget) {
            return this.contentWidget;
        }
        return null;
    }
    takeWidget(): QWidget | null {
        // react:✓
        const contentWidget = this.contentWidget;
        this.contentWidget = null;
        if (contentWidget) {
            this.native.takeWidget();
            return contentWidget;
        }
        return null;
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

export type QScrollAreaSignals = QAbstractScrollAreaSignals;
