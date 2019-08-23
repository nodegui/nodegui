import addon from "../../core/addon";
import { NodeLayout } from "../../QtWidgets/QLayout";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { FlexLayout } from "../../core/FlexLayout";
import { WidgetAttribute, WindowType } from "../../QtEnums";
import {
  applyStyleSheet,
  StyleSheet,
  prepareInlineStyleSheet
} from "../../core/Style/StyleSheet";
// All Widgets should extend from NodeWidget
// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends EventWidget {
  layout?: NodeLayout;
  type: string = "widget";
  show = () => {
    this.native.show();
  };
  resize = (width: number, height: number) => {
    this.native.resize(width, height);
  };
  close = () => {
    return this.native.close();
  };
  setLayout = (parentLayout: NodeLayout) => {
    const flexLayout = parentLayout as FlexLayout;
    if (flexLayout.setFlexNode) {
      //if flex layout set the flexnode
      flexLayout.setFlexNode(this.getFlexNode());
    }
    this.native.setLayout(parentLayout.native);
    this.layout = parentLayout;
  };
  setStyleSheet = async (styleSheet: string) => {
    const preparedSheet = await StyleSheet.create(styleSheet);
    await applyStyleSheet(this, preparedSheet);
  };
  setWindowTitle = async (title: string) => {
    return this.native.setWindowTitle(title);
  };
  setInlineStyle = async (style: string) => {
    const preparedSheet = await prepareInlineStyleSheet(this, style);
    await applyStyleSheet(this, preparedSheet);
  };
  styleSheet = (): string => {
    return this.native.styleSheet();
  };
  hide = () => {
    this.native.hide();
  };
  move = (x: number, y: number) => {
    this.native.move(x, y);
  };
  setObjectName = (objectName: string) => {
    this.native.setObjectName(objectName);
  };
  objectName = (): string => {
    return this.native.objectName();
  };
  setMouseTracking = (isMouseTracked: boolean) => {
    this.native.setMouseTracking(isMouseTracked);
  };
  setEnabled = (enabled: boolean) => {
    this.native.setEnabled(enabled);
  };
  setFixedSize = (width: number, height: number) => {
    this.native.setFixedSize(width, height);
  };
  setGeometry = (x: number, y: number, w: number, h: number) => {
    this.native.setGeometry(x, y, w, h);
  };
  setMaximumSize = (maxw: number, maxh: number) => {
    this.native.setMaximumSize(maxw, maxh);
  };
  setMinimumSize = (minw: number, minh: number) => {
    this.native.setMinimumSize(minw, minh);
  };
  repaint = () => {
    this.native.repaint();
  };
  update = () => {
    this.native.update();
  };
  updateGeometry = () => {
    this.native.updateGeometry();
  };
  pos = (): { x: number; y: number } => {
    return this.native.pos();
  };
  size = (): { width: number; height: number } => {
    return this.native.size();
  };
  setAttribute = (attribute: WidgetAttribute, switchOn: boolean) => {
    return this.native.setAttribute(attribute, switchOn);
  };
  testAttribute = (attribute: WidgetAttribute): boolean => {
    return this.native.testAttribute(attribute);
  };
  setWindowOpacity = (opacity: Number) => {
    this.native.setWindowOpacity(opacity);
  };
  setWindowFlag = (windowType: WindowType, switchOn: boolean) => {
    return this.native.setWindowFlag(windowType, switchOn);
  };
}

export class QWidget extends NodeWidget {
  native: NativeElement;
  constructor(parent?: QWidget) {
    let native;
    if (parent) {
      native = new addon.QWidget(parent.native);
    } else {
      native = new addon.QWidget();
    }
    super(native);
    this.parent = parent;
    this.native = native;
  }
}

export const QWidgetEvents = BaseWidgetEvents;
