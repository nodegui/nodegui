import { NObject } from '../QtCore/QObject';

export type FlexNode = {};
export abstract class YogaWidget extends NObject {
    getFlexNode = (): FlexNode => {
        return this.native.getFlexNode();
    };
}
