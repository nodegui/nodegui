import { EventEmitter } from "events";
import { NativeElement, Component } from "../Component";

export type NativeEvent = {};
export abstract class EventWidget extends Component {
  private emitter: EventEmitter;
  constructor(native: NativeElement) {
    super();
    if (native.initNodeEventEmitter) {
      this.emitter = new EventEmitter();
      native.initNodeEventEmitter(this.emitter.emit.bind(this.emitter));
    } else {
      throw new Error("initNodeEventEmitter not implemented on native side");
    }
  }

  addEventListener = (
    eventType: string,
    callback: (payload?: NativeEvent | any) => void
  ) => {
    this.native.subscribeToQtEvent(eventType);
    this.emitter.addListener(eventType, callback);
  };

  removeEventListener = (
    eventType: string,
    callback?: (payload?: NativeEvent | any) => void
  ) => {
    if (callback) {
      this.emitter.removeListener(eventType, callback);
    } else {
      this.emitter.removeAllListeners(eventType);
    }
    if (this.emitter.listenerCount(eventType) < 1) {
      this.native.unSubscribeToQtEvent(eventType);
    }
  };
}

export const BaseWidgetEvents = Object.freeze({
  None: "None",
  ActionAdded: "ActionAdded",
  ActionChanged: "ActionChanged",
  ActionRemoved: "ActionRemoved",
  ActivationChange: "ActivationChange",
  ApplicationActivate: "ApplicationActivate",
  ApplicationActivated: "ApplicationActivated",
  ApplicationDeactivate: "ApplicationDeactivate",
  ApplicationFontChange: "ApplicationFontChange",
  ApplicationLayoutDirectionChange: "ApplicationLayoutDirectionChange",
  ApplicationPaletteChange: "ApplicationPaletteChange",
  ApplicationStateChange: "ApplicationStateChange",
  ApplicationWindowIconChange: "ApplicationWindowIconChange",
  ChildAdded: "ChildAdded",
  ChildPolished: "ChildPolished",
  ChildRemoved: "ChildRemoved",
  Clipboard: "Clipboard",
  Close: "Close",
  CloseSoftwareInputPanel: "CloseSoftwareInputPanel",
  ContentsRectChange: "ContentsRectChange",
  ContextMenu: "ContextMenu",
  CursorChange: "CursorChange",
  DeferredDelete: "DeferredDelete",
  DragEnter: "DragEnter",
  DragLeave: "DragLeave",
  DragMove: "DragMove",
  Drop: "Drop",
  DynamicPropertyChange: "DynamicPropertyChange",
  EnabledChange: "EnabledChange",
  Enter: "Enter",
  EnterWhatsThisMode: "EnterWhatsThisMode",
  Expose: "Expose",
  FileOpen: "FileOpen",
  FocusIn: "FocusIn",
  FocusOut: "FocusOut",
  FocusAboutToChange: "FocusAboutToChange",
  FontChange: "FontChange",
  Gesture: "Gesture",
  GestureOverride: "GestureOverride",
  GrabKeyboard: "GrabKeyboard",
  GrabMouse: "GrabMouse",
  GraphicsSceneContextMenu: "GraphicsSceneContextMenu",
  GraphicsSceneDragEnter: "GraphicsSceneDragEnter",
  GraphicsSceneDragLeave: "GraphicsSceneDragLeave",
  GraphicsSceneDragMove: "GraphicsSceneDragMove",
  GraphicsSceneDrop: "GraphicsSceneDrop",
  GraphicsSceneHelp: "GraphicsSceneHelp",
  GraphicsSceneHoverEnter: "GraphicsSceneHoverEnter",
  GraphicsSceneHoverLeave: "GraphicsSceneHoverLeave",
  GraphicsSceneHoverMove: "GraphicsSceneHoverMove",
  GraphicsSceneMouseDoubleClick: "GraphicsSceneMouseDoubleClick",
  GraphicsSceneMouseMove: "GraphicsSceneMouseMove",
  GraphicsSceneMousePress: "GraphicsSceneMousePress",
  GraphicsSceneMouseRelease: "GraphicsSceneMouseRelease",
  GraphicsSceneMove: "GraphicsSceneMove",
  GraphicsSceneResize: "GraphicsSceneResize",
  GraphicsSceneWheel: "GraphicsSceneWheel",
  Hide: "Hide",
  HideToParent: "HideToParent",
  HoverEnter: "HoverEnter",
  HoverLeave: "HoverLeave",
  HoverMove: "HoverMove",
  IconDrag: "IconDrag",
  IconTextChange: "IconTextChange",
  InputMethod: "InputMethod",
  InputMethodQuery: "InputMethodQuery",
  KeyboardLayoutChange: "KeyboardLayoutChange",
  KeyPress: "KeyPress",
  KeyRelease: "KeyRelease",
  LanguageChange: "LanguageChange",
  LayoutDirectionChange: "LayoutDirectionChange",
  LayoutRequest: "LayoutRequest",
  Leave: "Leave",
  LeaveWhatsThisMode: "LeaveWhatsThisMode",
  LocaleChange: "LocaleChange",
  NonClientAreaMouseButtonDblClick: "NonClientAreaMouseButtonDblClick",
  NonClientAreaMouseButtonPress: "NonClientAreaMouseButtonPress",
  NonClientAreaMouseButtonRelease: "NonClientAreaMouseButtonRelease",
  NonClientAreaMouseMove: "NonClientAreaMouseMove",
  MacSizeChange: "MacSizeChange",
  MetaCall: "MetaCall",
  ModifiedChange: "ModifiedChange",
  MouseButtonDblClick: "MouseButtonDblClick",
  MouseButtonPress: "MouseButtonPress",
  MouseButtonRelease: "MouseButtonRelease",
  MouseMove: "MouseMove",
  MouseTrackingChange: "MouseTrackingChange",
  Move: "Move",
  NativeGesture: "NativeGesture",
  OrientationChange: "OrientationChange",
  Paint: "Paint",
  PaletteChange: "PaletteChange",
  ParentAboutToChange: "ParentAboutToChange",
  ParentChange: "ParentChange",
  PlatformPanel: "PlatformPanel",
  PlatformSurface: "PlatformSurface",
  Polish: "Polish",
  PolishRequest: "PolishRequest",
  QueryWhatsThis: "QueryWhatsThis",
  ReadOnlyChange: "ReadOnlyChange",
  RequestSoftwareInputPanel: "RequestSoftwareInputPanel",
  Resize: "Resize",
  ScrollPrepare: "ScrollPrepare",
  Scroll: "Scroll",
  Shortcut: "Shortcut",
  ShortcutOverride: "ShortcutOverride",
  Show: "Show",
  ShowToParent: "ShowToParent",
  SockAct: "SockAct",
  StateMachineSignal: "StateMachineSignal",
  StateMachineWrapped: "StateMachineWrapped",
  StatusTip: "StatusTip",
  StyleChange: "StyleChange",
  TabletMove: "TabletMove",
  TabletPress: "TabletPress",
  TabletRelease: "TabletRelease",
  TabletEnterProximity: "TabletEnterProximity",
  TabletLeaveProximity: "TabletLeaveProximity",
  TabletTrackingChange: "TabletTrackingChange",
  ThreadChange: "ThreadChange",
  Timer: "Timer",
  ToolBarChange: "ToolBarChange",
  ToolTip: "ToolTip",
  ToolTipChange: "ToolTipChange",
  TouchBegin: "TouchBegin",
  TouchCancel: "TouchCancel",
  TouchEnd: "TouchEnd",
  TouchUpdate: "TouchUpdate",
  UngrabKeyboard: "UngrabKeyboard",
  UngrabMouse: "UngrabMouse",
  UpdateLater: "UpdateLater",
  UpdateRequest: "UpdateRequest",
  WhatsThis: "WhatsThis",
  WhatsThisClicked: "WhatsThisClicked",
  Wheel: "Wheel",
  WinEventAct: "WinEventAct",
  WindowActivate: "WindowActivate",
  WindowBlocked: "WindowBlocked",
  WindowDeactivate: "WindowDeactivate",
  WindowIconChange: "WindowIconChange",
  WindowStateChange: "WindowStateChange",
  WindowTitleChange: "WindowTitleChange",
  WindowUnblocked: "WindowUnblocked",
  WinIdChange: "WinIdChange",
  ZOrderChange: "ZOrderChange"
});
