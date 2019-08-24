import { Component } from "../../core/Component";
import { NodeWidget } from "../QWidget";

// All Layouts should extend this abstract class.
export abstract class NodeLayout extends Component {
  type: string = "layout";
  abstract addWidget: (childWidget: NodeWidget, ...args: any[]) => void;
  activate = (): boolean => {
    return this.native.activate();
  };
  invalidate = () => {
    this.native.invalidate();
  };
  update = () => {
    this.native.update();
  };
}

// export class QLayout extends NodeLayout { //Dont need QLayout for now
//   native: any;
// }
