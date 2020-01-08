import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';

/**
 
> Create and control a group of checkboxes including a title.

* **This class is a JS wrapper around Qt's [QGroupBox class](https://doc.qt.io/qt-5/qgroupbox.html)**

A `QGroupBox` widget provides a group box frame with a title.

### Example

```javascript
const { QGroupBox } = require("@nodegui/nodegui");

// someone should put a sample code here
```
 */
export interface QGroupBoxSignals extends QWidgetSignals {
    clicked: (checked: boolean) => void;
    toggled: (on: boolean) => void;
}
export class QGroupBox extends NodeWidget<QGroupBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QGroupBox(parent.native);
        } else {
            native = new addon.QGroupBox();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    alignment(): AlignmentFlag {
        return this.native.alignment();
    }
    isCheckable(): boolean {
        return this.native.isCheckable();
    }
    isChecked(): boolean {
        return this.native.isChecked();
    }
    isFlat(): boolean {
        return this.native.isFlat();
    }
    setAlignment(alignment: number): void {
        this.native.setAlignment(alignment);
    }
    setCheckable(checkable: boolean): void {
        this.native.setCheckable(checkable);
    }
    setFlat(flat: boolean): void {
        this.native.setFlat(flat);
    }
    setTitle(title: string): void {
        this.native.setTitle(title);
    }
    title(): string {
        return this.native.title();
    }
    setChecked(checked: boolean): void {
        this.native.setChecked(checked);
    }
}
