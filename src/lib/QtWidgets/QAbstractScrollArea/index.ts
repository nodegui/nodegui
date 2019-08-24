import { NodeWidget, QWidget } from "../QWidget";

export abstract class QAbstractScrollArea extends NodeWidget {
  setViewport = (widget: NodeWidget) => {
    this.native.setViewport(widget.native);
  };
  viewport = (): QWidget => {
    const nativeWidget = this.native.viewport();
    return new QWidget(nativeWidget);
  };
}
