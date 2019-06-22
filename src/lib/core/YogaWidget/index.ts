import { Component } from "../Component";

export type FlexNode = {};
export abstract class YogaWidget extends Component {
  getFlexNode = (): FlexNode => {
    return this.native.getFlexNode();
  };
}
