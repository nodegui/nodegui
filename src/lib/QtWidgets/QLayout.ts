import { QWidget } from './QWidget';
import { QObject, QObjectSignals } from '../QtCore/QObject';

// All Layouts should extend this abstract class.

/**

> Abstract class to add functionalities common to all Layout.

**This class implements all methods, properties of Qt's [QLayout class](https://doc.qt.io/qt-5/qlayout.html) so that it can be inherited by all layouts**

`NodeLayout` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all layout's easily. Additionally it helps in typechecking process.

### Example

```javascript
const {
  NodeLayout,
  FlexLayout,
  GridLayout,
  QPushButton,
  QWidget
} = require("@nodegui/nodegui");

// addChildToLayout can accept any layout since it expects NodeLayout
const addChildToLayout = (layout: NodeLayout, widget: QWidget) => {
  layout.addWidget(widget);
};

addChildToLayout(new FlexLayout(), new QPushButton());
addChildToLayout(new GridLayout(), new QWidget());
```
 */
export abstract class NodeLayout<Signals extends QLayoutSignals> extends QObject<Signals> {
    type = 'layout';
    abstract addWidget(childWidget: QWidget, ...args: any[]): void;
    abstract removeWidget(childWidget: QWidget): void;
    setSizeConstraint(constraint: SizeConstraint): void {
        this.setProperty('sizeConstraint', constraint);
    }
    sizeConstraint(): SizeConstraint {
        return this.property('sizeConstraint').toInt();
    }
    setSpacing(spacing: number): void {
        this.setProperty('spacing', spacing);
    }
    spacing(): number {
        return this.property('spacing').toInt();
    }
    activate(): boolean {
        return this.native.activate();
    }
    setEnabled(enable: boolean): void {
        this.native.setEnabled(enable);
    }
    isEnabled(): boolean {
        return this.native.isEnabled();
    }
    setContentsMargins(left: number, top: number, right: number, bottom: number): void {
        this.native.setContentsMargins(left, top, right, bottom);
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

export enum SizeConstraint {
    SetDefaultConstraint = 0,
    SetNoConstraint = 1,
    SetMinimumSize = 2,
    SetFixedSize = 3,
    SetMaximumSize = 4,
    SetMinAndMaxSize = 5,
}

export type QLayoutSignals = QObjectSignals;
