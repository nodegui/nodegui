import { Component } from "../Component";
import { FlexNode } from "../FlexLayout/FlexNode";

export abstract class YogaWidget extends Component {
  getFlexNode(): FlexNode {
    const nativeFlexNode = this.native.getFlexNode();
    return new FlexNode(nativeFlexNode);
  }
}
