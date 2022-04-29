import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeFrame, QFrameSignals } from './QFrame';
import { NativeElement } from '../core/Component';
import { Orientation } from '../QtEnums';

/**

> A QSplitter provides ability to let the user control the size between child widgets

* **This class is a JS wrapper around Qt's [QSplitter class](https://doc.qt.io/qt-5/qsplitter.html)**

### Example

```javascript
const { QSplitter, QWidget, QBoxLayout, Direction, Orientation } = require("@nodegui/nodegui");

const rootView = new QWidget();
const rootLayout = new QBoxLayout(Direction.LeftToRight);
rootLayout.setSpacing(0);
rootView.setLayout(rootLayout);
rootView.setObjectName('myroot');

const splitterHorizontal = new QSplitter();
splitterHorizontal.setObjectName("splitterleft");
splitterHorizontal.setOrientation(Orientation.Horizontal);
const left = new QWidget();
left.setInlineStyle('background-color: red;');
const right = new QWidget();
right.setInlineStyle('background-color: yellow;');
rootView.layout!.addWidget(splitterHorizontal);
splitterHorizontal.addWidget(left);
splitterHorizontal.addWidget(right);
```

 */
export class QSplitter extends NodeFrame<QSplitterSignals> {
    constructor(parent?: NodeWidget<any>) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QSplitter(parent.native);
        } else {
            native = new addon.QSplitter();
        }
        super(native);
        this.setNodeParent(parent);
    }
    addWidget(widget: NodeWidget<any>): void {
        this.native.addWidget(widget.native);
    }
    childrenCollapsible(): boolean {
        return this.native.childrenCollapsible();
    }
    count(): number {
        return this.native.count();
    }
    indexOf(widget: NodeWidget<any>): number {
        return this.native.indexOf(widget.native);
    }
    insertWidget(index: number, widget: NodeWidget<any>): void {
        this.native.insertWidget(index, widget.native);
    }
    isCollapsible(index: number): boolean {
        return this.native.isCollapsible(index);
    }
    orientation(): Orientation {
        return this.native.orientation();
    }
    setCollapsible(index: number, collapse: boolean): void {
        this.native.setCollapsible(index, collapse);
    }
    setOrientation(orientation: Orientation): void {
        this.native.setOrientation(orientation);
    }
}

export interface QSplitterSignals extends QFrameSignals {
    splitterMoved: (pos: number, index: number) => void;
}
