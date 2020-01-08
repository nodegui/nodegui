import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { AlignmentFlag } from '../QtEnums';

/**
 
> Creates an item for QTableWidget.

* **This class is a JS wrapper around Qt's [QTableWidgetItem class](https://doc.qt.io/qt-5/qtablewidgetitem.html)**

### Example

```javascript
const { QTableWidget, QTableWidgetItem } = require("@nodegui/nodegui");

// someone should put a sample code here
```
 */
export class QTableWidgetItem extends Component {
    native: NativeElement;
    constructor();
    constructor(text: string);
    constructor(text?: string) {
        let native;
        if (text) {
            native = new addon.QTableWidgetItem(text);
        } else {
            native = new addon.QTableWidgetItem();
        }
        super();
        this.native = native;
    }
    setText(text: string): void {
        this.native.setText(text);
    }
    setToolTip(text: string): void {
        this.native.setToolTip(text);
    }
    setTextAlignment(alignment: AlignmentFlag): void {
        this.native.setTextAlignment(alignment);
    }
    textAlignment(): AlignmentFlag {
        return this.native.textAlignment();
    }
    text(): string {
        return this.native.text();
    }
    toolTip(): string {
        return this.native.toolTip();
    }
}
