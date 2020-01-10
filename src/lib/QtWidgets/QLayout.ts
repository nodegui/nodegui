import { NodeWidget } from './QWidget';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

// All Layouts should extend this abstract class.

/**
 
> Abstract class to add functionalities common to all Layout.

**This class implements all methods, properties of Qt's [QLayout class](https://doc.qt.io/qt-5/qlayout.html) so that it can be inherited by all layouts**

`NodeLayout` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all layout's easily. Additionally it helps in typechecking process.

### Example

```javascript
const {
  NodeLayout,
  NodeWidget,
  FlexLayout,
  GridLayout,
  QPushButton,
  QWidget
} = require("@nodegui/nodegui");

// addChildToLayout can accept any layout since it expects NodeLayout
const addChildToLayout = (layout: NodeLayout, widget: NodeWidget) => {
  layout.addWidget(widget);
};

addChildToLayout(new FlexLayout(), new QPushButton());
addChildToLayout(new GridLayout(), new QWidget());
```
 */
export abstract class NodeLayout<Signals extends QLayoutSignals> extends NodeObject<Signals> {
    type = 'layout';
    abstract addWidget(childWidget: NodeWidget<any>, ...args: any[]): void;
    abstract removeWidget(childWidget: NodeWidget<any>): void;
    activate(): boolean {
        return this.native.activate();
    }
    invalidate(): void {
        this.native.invalidate();
    }
    update(): void {
        this.native.update();
    }
}

// export class QLayout extends NodeLayout { //Dont need QLayout for now
//   native: any;
// }

export type QLayoutSignals = QObjectSignals;
