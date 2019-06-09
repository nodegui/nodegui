import { Component } from "../Component";
import { FlexNode } from "../FlexLayout/FlexNode";

export abstract class YogaWidget extends Component {
  getFlexNode = (): FlexNode => {
    return new FlexNode(this.native.getFlexNode());
  };
}
