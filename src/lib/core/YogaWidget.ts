import { NodeObject } from '../QtCore/QObject';

export type FlexNode = {};
export abstract class YogaWidget extends NodeObject {
    getFlexNode(): FlexNode {
        return this.native.getFlexNode();
    }
    setFlexNodeSizeControlled(isSizeControlled: boolean): void {
        this.native.setFlexNodeSizeControlled(isSizeControlled);
    }
}
