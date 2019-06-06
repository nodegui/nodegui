import { Component } from "../../Component";

export class FlexNode extends Component {
  native: any;
  constructor(nativeNode: any) {
    super();
    this.native = nativeNode;
  }
  debugValue() {
    return this.native.debugValue();
  }
}
