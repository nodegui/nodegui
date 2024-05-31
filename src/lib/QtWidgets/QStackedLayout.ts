import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QLayout, QLayoutSignals } from './QLayout';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';
import { StackingMode } from '../QtEnums/StackingMode';

/**

> The QStackedLayout class provides a stack of widgets where only one widget is visible at a time

* **This class is a JS wrapper around Qt's [QStackedLayout](https://doc.qt.io/qt-5/qstackedlayout.html)**

### Example

```javascript
const { QStackedLayout, QWidget, QLabel, QBoxLayout, QCombobox } = require("@nodegui/nodegui");

const centralWidget = new QWidget();
centralWidget.setObjectName('myroot');
const rootLayout = new QBoxLayout(Direction.TopToBottom);
centralWidget.setLayout(rootLayout);

const stackedLayout = new QStackedLayout()

const page1 = new QWidget();
const page1_layout = new FlexLayout();
page1.setLayout(page1_layout)
const label1 = new QLabel();
label1.setText("This is page 1")
page1_layout.addWidget(label1);

const page2 = new QWidget();
const page2_layout = new FlexLayout();
page2.setLayout(page2_layout)
const label2 = new QLabel();
label2.setText("This is page 2")
page2_layout.addWidget(label2);

const page3 = new QWidget();
const page3_layout = new FlexLayout();
page3.setLayout(page3_layout)
const label3 = new QLabel();
label3.setText("This is page 3")
page3_layout.addWidget(label3);

stackedLayout.addWidget(page1)
stackedLayout.addWidget(page2)
stackedLayout.addWidget(page3)

const combobox = new QComboBox()
combobox.addItems(["Page 1", "Page 2", "Page 3"])

combobox.addEventListener("currentIndexChanged", (index) => stackedLayout.setCurrentIndex(index));

rootLayout.addWidget(combobox);

const currentIndexLabel = new QLabel()
currentIndexLabel.setText(`Current Index: ${stackedLayout.currentIndex()}`)

stackedLayout.addEventListener("currentChanged", (index) => {
  currentIndexLabel.setText(`Current Index: ${index}`)
});

rootLayout.addWidget(currentIndexLabel);

rootLayout.addLayout(stackedLayout);

*/
export class QStackedLayout extends QLayout<QStackedLayoutSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QStackedLayout(parent.native);
        } else {
            native = new addon.QStackedLayout();
        }
        super(native);
    }

    addWidget(widget: QWidget): void {
        this.native.addWidget(widget.native);
    }
    removeWidget(widget: QWidget): void {
        this.native.removeWidget(widget.native);
    }
    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }
    insertWidget(index: number, widget: QWidget): void {
        this.native.insertWidget(index, widget.native);
    }
    setCurrentWidget(widget: QWidget): void {
        this.native.setCurrentWidget(widget.native);
    }
    currentIndex(): number {
        return this.native.currentIndex();
    }
    currentWidget(): QWidget {
        return wrapperCache.getWrapper(this.native.currentWidget()) as QWidget;
    }
    widget(index: number): QWidget {
        return wrapperCache.getWrapper(this.native.widget(index)) as QWidget;
    }
    count(): number {
        return this.native.count();
    }
    indexOf(widget: QWidget): number {
        return this.native.indexOf(widget.native);
    }
    setStackingMode(stackingMode: StackingMode): void {
        this.native.setStackingMode(stackingMode);
    }
    stackingMode(): StackingMode {
        return this.native.stackingMode();
    }
}

wrapperCache.registerWrapper('QStackedLayoutWrap', QStackedLayout);

export interface QStackedLayoutSignals extends QLayoutSignals {
    currentChanged: (index: number) => void;
    widgetRemoved: (index: number) => void;
}
