import { Component } from "../../core/Component";

// All Layouts should extend this abstract class.
export abstract class NodeLayout extends Component {
  type: string = "Layout";
}

// export class QLayout extends NodeLayout { //Dont need QLayout for now
//   native: any;
// }
