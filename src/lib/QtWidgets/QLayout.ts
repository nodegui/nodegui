import { NodeWidget } from './QWidget';
import { NodeObject } from '../QtCore/QObject';

// All Layouts should extend this abstract class.
export abstract class NodeLayout extends NodeObject {
    type = 'layout';
    abstract addWidget(childWidget: NodeWidget, ...args: any[]): void;
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
