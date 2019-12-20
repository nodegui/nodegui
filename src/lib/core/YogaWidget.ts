import { NodeObject } from '../QtCore/QObject';

export type FlexNode = {};
export abstract class YogaWidget<Signals> extends NodeObject<Signals> {
    getFlexNode(): FlexNode {
        return this.native.getFlexNode();
    }
    setFlexNodeSizeControlled(isSizeControlled: boolean): void {
        this.native.setFlexNodeSizeControlled(isSizeControlled);
    }
}
