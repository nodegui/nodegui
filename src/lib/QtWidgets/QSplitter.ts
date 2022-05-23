import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QFrame, QFrameSignals } from './QFrame';
import { NativeElement } from '../core/Component';
import { Orientation } from '../QtEnums';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

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
export class QSplitter extends QFrame<QSplitterSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QSplitter(parent.native);
        } else {
            native = new addon.QSplitter();
        }
        super(native);
    }
    addWidget(widget: QWidget): void {
        this.native.addWidget(widget.native);
    }
    childrenCollapsible(): boolean {
        return this.native.childrenCollapsible();
    }
    count(): number {
        return this.native.count();
    }
    indexOf(widget: QWidget): number {
        return this.native.indexOf(widget.native);
    }
    insertWidget(index: number, widget: QWidget): void {
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
wrapperCache.registerWrapper('QSplitterWrap', QSplitter);

export interface QSplitterSignals extends QFrameSignals {
    splitterMoved: (pos: number, index: number) => void;
}
