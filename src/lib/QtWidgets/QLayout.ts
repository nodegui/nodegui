import { NodeWidget } from './QWidget';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

// All Layouts should extend this abstract class.
export type QLayoutSignals = QObjectSignals;

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
