import { QObject } from '../../QtCore/QObject';

export type FlexNode = {};
export abstract class YogaWidget extends QObject {
    getFlexNode = (): FlexNode => {
        return this.native.getFlexNode();
    };
}
