import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Display SVG files in a widget.

* **This class is a JS wrapper around Qt's [QSvgWidget class](https://doc.qt.io/qt-5/qsvgwidget.html)**

The `QSvgWidget` class provides a widget that is used to display the contents of Scalable Vector Graphics (SVG) files.

### Example

```javascript
const fs = require("fs");
const { QSvgWidget } = require("@nodegui/nodegui");

const svg = new QSvgWidget();
svg.load("icon.svg");
// or
fs.readFile("icon.svg", (err, buffer) => {
  if (!err) svg.load(buffer);
})

```

 */
export class QSvgWidget extends QWidget<QWidgetSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QSvgWidget(parent.native);
        } else {
            native = new addon.QSvgWidget();
        }
        super(native);
    }
    load(file: string | Buffer): void {
        if (file instanceof Buffer) {
            this.native.load('data:image/svg+xml;base64,' + file.toString('base64'));
        } else {
            this.native.load(file);
        }
    }
}
wrapperCache.registerWrapper('QSvgWidgetWrap', QSvgWidget);
