import { EventEmitter } from 'events';
import { NativeElement, Component, NativeRawPointer } from './Component';

/**
 
> Abstract class that adds event handling support to all widgets.

**This class implements an event emitter and merges it with Qt's event and signal system. It allows us to register and unregister event and signal listener at will from javascript**

`EventWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add event handling functionalities to all widget's easily. This is an internal class.

### Example

```javascript
const { QWidget, QWidgetSignals, WidgetEventTypes } = require("@nodegui/nodegui");

const view = new QWidget();
// You either listen for a widget's signal
view.addEventListener('windowTitleChanged', () => {
  console.log("window title changed");
});

// or you can listen for an event

view.addEventListener(WidgetEventTypes.MouseMove, () => {
  console.log("mouse moved");
});
```
 */
export abstract class EventWidget<Signals extends {}> extends Component {
    private emitter: EventEmitter;
    constructor(native: NativeElement) {
        super();
        if (native.initNodeEventEmitter) {
            this.emitter = new EventEmitter();
            native.initNodeEventEmitter(this.emitter.emit.bind(this.emitter));
        } else {
            throw new Error('initNodeEventEmitter not implemented on native side');
        }
    }

    /**
     *
    @param signalType SignalType is a signal from the widgets signals interface.
    @param callback Corresponding callback for the signal as mentioned in the widget's signal interface
    @returns void
         
    For example in the case of QPushButton:
    ```js
    const button = new QPushButton();
    button.addEventListener('clicked',(checked)=>console.log("clicked"));
    // here clicked is a value from QPushButtonSignals interface
    ```
     */
    addEventListener<SignalType extends keyof Signals>(signalType: SignalType, callback: Signals[SignalType]): void;
<<<<<<< HEAD

    /**
    
     @param eventType
     @param callback
    
     For example in the case of QPushButton:
     ```js
     const button = new QPushButton();
     button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
     ```
     */
    addEventListener(eventType: WidgetEventTypes, callback: (event?: NativeElement) => void): void;
=======
    addEventListener(eventType: WidgetEventTypes, callback: (event?: NativeRawPointer<'QEvent'>) => void): void;
>>>>>>> Fixes inheritance and adds pointer based event listener
    addEventListener(eventOrSignalType: string, callback: (...payloads: any[]) => void): void {
        this.native.subscribeToQtEvent(eventOrSignalType);
        this.emitter.addListener(eventOrSignalType, callback);
    }

    removeEventListener<SignalType extends keyof Signals>(signalType: SignalType, callback: Signals[SignalType]): void;
    removeEventListener(eventType: WidgetEventTypes, callback: (event?: NativeRawPointer<'QEvent'>) => void): void;
    removeEventListener(eventOrSignalType: string, callback?: (...payloads: any[]) => void): void {
        if (callback) {
            this.emitter.removeListener(eventOrSignalType, callback);
        } else {
            this.emitter.removeAllListeners(eventOrSignalType);
        }
        if (this.emitter.listenerCount(eventOrSignalType) < 1) {
            this.native.unSubscribeToQtEvent(eventOrSignalType);
        }
    }
}

export enum WidgetEventTypes {
    'None' = 'None',
    'ActionAdded' = 'ActionAdded',
    'ActionChanged' = 'ActionChanged',
    'ActionRemoved' = 'ActionRemoved',
    'ActivationChange' = 'ActivationChange',
    'ApplicationActivate' = 'ApplicationActivate',
    'ApplicationActivated' = 'ApplicationActivated',
    'ApplicationDeactivate' = 'ApplicationDeactivate',
    'ApplicationFontChange' = 'ApplicationFontChange',
    'ApplicationLayoutDirectionChange' = 'ApplicationLayoutDirectionChange',
    'ApplicationPaletteChange' = 'ApplicationPaletteChange',
    'ApplicationStateChange' = 'ApplicationStateChange',
    'ApplicationWindowIconChange' = 'ApplicationWindowIconChange',
    'ChildAdded' = 'ChildAdded',
    'ChildPolished' = 'ChildPolished',
    'ChildRemoved' = 'ChildRemoved',
    'Clipboard' = 'Clipboard',
    'Close' = 'Close',
    'CloseSoftwareInputPanel' = 'CloseSoftwareInputPanel',
    'ContentsRectChange' = 'ContentsRectChange',
    'ContextMenu' = 'ContextMenu',
    'CursorChange' = 'CursorChange',
    'DeferredDelete' = 'DeferredDelete',
    'DragEnter' = 'DragEnter',
    'DragLeave' = 'DragLeave',
    'DragMove' = 'DragMove',
    'Drop' = 'Drop',
    'DynamicPropertyChange' = 'DynamicPropertyChange',
    'EnabledChange' = 'EnabledChange',
    'Enter' = 'Enter',
    'EnterWhatsThisMode' = 'EnterWhatsThisMode',
    'Expose' = 'Expose',
    'FileOpen' = 'FileOpen',
    'FocusIn' = 'FocusIn',
    'FocusOut' = 'FocusOut',
    'FocusAboutToChange' = 'FocusAboutToChange',
    'FontChange' = 'FontChange',
    'Gesture' = 'Gesture',
    'GestureOverride' = 'GestureOverride',
    'GrabKeyboard' = 'GrabKeyboard',
    'GrabMouse' = 'GrabMouse',
    'GraphicsSceneContextMenu' = 'GraphicsSceneContextMenu',
    'GraphicsSceneDragEnter' = 'GraphicsSceneDragEnter',
    'GraphicsSceneDragLeave' = 'GraphicsSceneDragLeave',
    'GraphicsSceneDragMove' = 'GraphicsSceneDragMove',
    'GraphicsSceneDrop' = 'GraphicsSceneDrop',
    'GraphicsSceneHelp' = 'GraphicsSceneHelp',
    'GraphicsSceneHoverEnter' = 'GraphicsSceneHoverEnter',
    'GraphicsSceneHoverLeave' = 'GraphicsSceneHoverLeave',
    'GraphicsSceneHoverMove' = 'GraphicsSceneHoverMove',
    'GraphicsSceneMouseDoubleClick' = 'GraphicsSceneMouseDoubleClick',
    'GraphicsSceneMouseMove' = 'GraphicsSceneMouseMove',
    'GraphicsSceneMousePress' = 'GraphicsSceneMousePress',
    'GraphicsSceneMouseRelease' = 'GraphicsSceneMouseRelease',
    'GraphicsSceneMove' = 'GraphicsSceneMove',
    'GraphicsSceneResize' = 'GraphicsSceneResize',
    'GraphicsSceneWheel' = 'GraphicsSceneWheel',
    'Hide' = 'Hide',
    'HideToParent' = 'HideToParent',
    'HoverEnter' = 'HoverEnter',
    'HoverLeave' = 'HoverLeave',
    'HoverMove' = 'HoverMove',
    'IconDrag' = 'IconDrag',
    'IconTextChange' = 'IconTextChange',
    'InputMethod' = 'InputMethod',
    'InputMethodQuery' = 'InputMethodQuery',
    'KeyboardLayoutChange' = 'KeyboardLayoutChange',
    'KeyPress' = 'KeyPress',
    'KeyRelease' = 'KeyRelease',
    'LanguageChange' = 'LanguageChange',
    'LayoutDirectionChange' = 'LayoutDirectionChange',
    'LayoutRequest' = 'LayoutRequest',
    'Leave' = 'Leave',
    'LeaveWhatsThisMode' = 'LeaveWhatsThisMode',
    'LocaleChange' = 'LocaleChange',
    'NonClientAreaMouseButtonDblClick' = 'NonClientAreaMouseButtonDblClick',
    'NonClientAreaMouseButtonPress' = 'NonClientAreaMouseButtonPress',
    'NonClientAreaMouseButtonRelease' = 'NonClientAreaMouseButtonRelease',
    'NonClientAreaMouseMove' = 'NonClientAreaMouseMove',
    'MacSizeChange' = 'MacSizeChange',
    'MetaCall' = 'MetaCall',
    'ModifiedChange' = 'ModifiedChange',
    'MouseButtonDblClick' = 'MouseButtonDblClick',
    'MouseButtonPress' = 'MouseButtonPress',
    'MouseButtonRelease' = 'MouseButtonRelease',
    'MouseMove' = 'MouseMove',
    'MouseTrackingChange' = 'MouseTrackingChange',
    'Move' = 'Move',
    'NativeGesture' = 'NativeGesture',
    'OrientationChange' = 'OrientationChange',
    'Paint' = 'Paint',
    'PaletteChange' = 'PaletteChange',
    'ParentAboutToChange' = 'ParentAboutToChange',
    'ParentChange' = 'ParentChange',
    'PlatformPanel' = 'PlatformPanel',
    'PlatformSurface' = 'PlatformSurface',
    'Polish' = 'Polish',
    'PolishRequest' = 'PolishRequest',
    'QueryWhatsThis' = 'QueryWhatsThis',
    'ReadOnlyChange' = 'ReadOnlyChange',
    'RequestSoftwareInputPanel' = 'RequestSoftwareInputPanel',
    'Resize' = 'Resize',
    'ScrollPrepare' = 'ScrollPrepare',
    'Scroll' = 'Scroll',
    'Shortcut' = 'Shortcut',
    'ShortcutOverride' = 'ShortcutOverride',
    'Show' = 'Show',
    'ShowToParent' = 'ShowToParent',
    'SockAct' = 'SockAct',
    'StateMachineSignal' = 'StateMachineSignal',
    'StateMachineWrapped' = 'StateMachineWrapped',
    'StatusTip' = 'StatusTip',
    'StyleChange' = 'StyleChange',
    'TabletMove' = 'TabletMove',
    'TabletPress' = 'TabletPress',
    'TabletRelease' = 'TabletRelease',
    'TabletEnterProximity' = 'TabletEnterProximity',
    'TabletLeaveProximity' = 'TabletLeaveProximity',
    'TabletTrackingChange' = 'TabletTrackingChange',
    'ThreadChange' = 'ThreadChange',
    'Timer' = 'Timer',
    'ToolBarChange' = 'ToolBarChange',
    'ToolTip' = 'ToolTip',
    'ToolTipChange' = 'ToolTipChange',
    'TouchBegin' = 'TouchBegin',
    'TouchCancel' = 'TouchCancel',
    'TouchEnd' = 'TouchEnd',
    'TouchUpdate' = 'TouchUpdate',
    'UngrabKeyboard' = 'UngrabKeyboard',
    'UngrabMouse' = 'UngrabMouse',
    'UpdateLater' = 'UpdateLater',
    'UpdateRequest' = 'UpdateRequest',
    'WhatsThis' = 'WhatsThis',
    'WhatsThisClicked' = 'WhatsThisClicked',
    'Wheel' = 'Wheel',
    'WinEventAct' = 'WinEventAct',
    'WindowActivate' = 'WindowActivate',
    'WindowBlocked' = 'WindowBlocked',
    'WindowDeactivate' = 'WindowDeactivate',
    'WindowIconChange' = 'WindowIconChange',
    'WindowStateChange' = 'WindowStateChange',
    'WindowTitleChange' = 'WindowTitleChange',
    'WindowUnblocked' = 'WindowUnblocked',
    'WinIdChange' = 'WinIdChange',
    'ZOrderChange' = 'ZOrderChange',
}
