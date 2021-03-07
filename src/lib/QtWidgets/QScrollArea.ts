import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { AlignmentFlag } from '../QtEnums';

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
    native: NativeElement;
    contentWidget?: NodeWidget<any> | null;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QScrollArea(parent.native);
        } else {
            native = new addon.QScrollArea();
        }
        super(native);
        this.native = native;
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
    ensureWidgetVisible(childWidget: NodeWidget<any>, xmargin = 50, ymargin = 50): void {
        this.native.ensureWidgetVisible(childWidget.native, xmargin, ymargin);
    }
    setWidget(widget: NodeWidget<any>): void {
        this.contentWidget = widget;
        this.native.setWidget(widget.native);
    }
    widget(): NodeWidget<any> | null {
        if (this.contentWidget) {
            return this.contentWidget;
        }
        return null;
    }
    takeWidget(): NodeWidget<any> | null {
        // react:✓
        const contentWidget = this.contentWidget;
        this.contentWidget = null;
        if (contentWidget) {
            this.native.takeWidget();
            return contentWidget;
        }
        return null;
    }
}

export type QScrollAreaSignals = QAbstractScrollAreaSignals;
