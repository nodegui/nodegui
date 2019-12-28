import { NodeObject, QObjectSignals } from '../QtCore/QObject';

export type FlexNode = {};

/**
 
> Abstract class to add common functionality related to Flex layout to all Widgets.

**This class implements methods related to flex layout required to be present in all widgets**

`YogaWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities related to flex layout to all widget's easily. We implement flex layout using a library called [Yoga](https://github.com/facebook/yoga). As part of yoga every widget needs to store its own flex properties such as alignItems, flexDirection etc. This is done with the help of YogaWidget.


```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
// getFlexNode is a method from YogaWidget
const flexNode = view.getFlexNode();
```

YogaWidget helps in storing all flex properties of a widget.
 */
export abstract class YogaWidget<Signals extends QObjectSignals> extends NodeObject<Signals> {
    getFlexNode(): FlexNode {
        return this.native.getFlexNode();
    }
    /**
     * sets whether the widget's size is controlled by someone else (for example a window's size is controlled by its frame when dragged).
     * @param isSizeControlled
     */
    setFlexNodeSizeControlled(isSizeControlled: boolean): void {
        this.native.setFlexNodeSizeControlled(isSizeControlled);
    }
}
