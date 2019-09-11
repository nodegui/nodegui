import addon from "../../core/addon";
import { NodeLayout } from "../QLayout";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { FlexLayout } from "../../core/FlexLayout";
import { WidgetAttribute, WindowType } from "../../QtEnums";
import { QIcon } from "../../QtGui/QIcon";
import { QCursor } from "../../QtGui/QCursor";
import { CursorShape, WindowState } from "../../QtEnums";
import {
  applyStyleSheet,
  StyleSheet,
  prepareInlineStyleSheet
} from "../../core/Style/StyleSheet";
import { checkIfNativeElement } from "../../utils";
// All Widgets should extend from NodeWidget
// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends EventWidget {
  layout?: NodeLayout;
  type: string = "widget";
  show = () => {
    // react:✓
    this.native.show();
  };
  hide = () => {
    // react:✓
    this.native.hide();
  };
  close = () => {
    // react:⛔️
    return this.native.close();
  };
  setStyleSheet = async (styleSheet: string) => {
    // react:✓
    const preparedSheet = await StyleSheet.create(styleSheet);
    await applyStyleSheet(this, preparedSheet);
  };
  styleSheet = (): string => {
    // react:✓
    return this.native.styleSheet();
  };
  setInlineStyle = async (style: string) => {
    // react:✓
    const preparedSheet = await prepareInlineStyleSheet(this, style);
    await applyStyleSheet(this, preparedSheet);
  };
  setGeometry = (x: number, y: number, w: number, h: number) => {
    // react:✓
    this.native.setGeometry(x, y, w, h);
  };
  geometry = (): Rect => {
    // react:✓
    return this.native.geometry();
  };
  setObjectName = (objectName: string) => {
    // react:✓
    this.native.setObjectName(objectName);
  };
  objectName = (): string => {
    // react:✓
    return this.native.objectName();
  };
  setMouseTracking = (isMouseTracked: boolean) => {
    // react:✓, //TODO:getter
    this.native.setMouseTracking(isMouseTracked);
  };
  setEnabled = (enabled: boolean) => {
    // react:✓, //TODO:getter
    this.native.setEnabled(enabled);
  };
  setWindowOpacity = (opacity: Number) => {
    // react:✓, //TODO:getter
    this.native.setWindowOpacity(opacity);
  };
  setWindowTitle = async (title: string) => {
    // react:✓, //TODO:getter
    return this.native.setWindowTitle(title);
  };
  setWindowState = async (state: WindowState) => {
    // react:✓, //TODO:getter
    return this.native.setWindowState(state);
  };
  setCursor(cursor: CursorShape | QCursor) {
    // react:✓, //TODO:getter
    this.native.setCursor(cursor);
  }
  setWindowIcon(icon: QIcon) {
    // react:✓, //TODO:getter
    this.native.setWindowIcon(icon.native);
  }
  setMinimumSize = (minw: number, minh: number) => {
    // react:✓
    this.native.setMinimumSize(minw, minh);
  };
  setMaximumSize = (maxw: number, maxh: number) => {
    // react:✓
    this.native.setMaximumSize(maxw, maxh);
  };
  setFixedSize = (width: number, height: number) => {
    // react:✓
    this.native.setFixedSize(width, height);
  };
  resize = (width: number, height: number) => {
    // react:✓
    this.native.resize(width, height);
  };
  size = (): { width: number; height: number } => {
    // react:✓
    return this.native.size();
  };
  move = (x: number, y: number) => {
    // react:✓
    this.native.move(x, y);
  };
  pos = (): { x: number; y: number } => {
    // react:✓
    return this.native.pos();
  };
  repaint = () => {
    // react:⛔️
    this.native.repaint();
  };
  update = () => {
    // react:⛔️
    this.native.update();
  };
  updateGeometry = () => {
    // react:⛔️
    this.native.updateGeometry();
  };
  setAttribute = (attribute: WidgetAttribute, switchOn: boolean) => {
    // react:⛔️
    return this.native.setAttribute(attribute, switchOn);
  };
  testAttribute = (attribute: WidgetAttribute): boolean => {
    // react:⛔️
    return this.native.testAttribute(attribute);
  };
  setWindowFlag = (windowType: WindowType, switchOn: boolean) => {
    // react:⛔️
    return this.native.setWindowFlag(windowType, switchOn);
  };
  setLayout = (parentLayout: NodeLayout) => {
    // react:✓
    const flexLayout = parentLayout as FlexLayout;
    if (flexLayout.setFlexNode) {
      //if flex layout set the flexnode
      flexLayout.setFlexNode(this.getFlexNode());
    }
    this.native.setLayout(parentLayout.native);
    this.layout = parentLayout;
  };
}

type Rect = {
  x: number;
  y: number;
  width: number;
  height: number;
};
type arg = NodeWidget | NativeElement;

export class QWidget extends NodeWidget {
  native: NativeElement;
  constructor(arg?: arg) {
    let native;
    let parent;
    if (checkIfNativeElement(arg)) {
      native = arg as NativeElement;
    } else if (arg as NodeWidget) {
      parent = arg as NodeWidget;
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
