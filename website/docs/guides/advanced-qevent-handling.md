---
sidebar_label: Advanced QEvent Handling
title: Advanced QEvent Handling
---

As briefly discussed in [Handle Events](https://docs.nodegui.org/docs/guides/handle-events), Qt and NodeGui have two kinds of event-like things: Signals and QEvents. Most of the time you will just need to listen to signals, but in more advanced situations, such as customizing the behavior of widgets, you may need more control over QEvent processing.

QEvents are often used by Qt to control cross-cutting aspects of the user interface like input, layout, and rendering.


## Preventing Further QEvent Processing

Most widgets in C++ will receive QEvent instances, act on them, and return a boolean indicating if the event is now completely processed or not. If an event is not marked as processed, then Qt may try sending it to another widget such as the parent widget.

NodeGui doesn't allow an event listener function to return a boolean, instead each widget, QObject actually, has a `setEventProcessed()` method which can be used to mark an event as processed.

The example below intercepts the "KeyPress" event on a QLineEdit and cancels the default handling of enter and escapes keys. If first wrap the native event object in the correct JS wrapper class, and then checkes its contents. It accepts the event and cancels further processing via `setEventProcessed(true)`. The QLineEdit itself then never heards about these key presses.

```javascript
const myLineEdit = new QLineEdit();

myLineEdit.addEventListener('KeyPress', (nativeEvent) => {
  const event = new QKeyEvent(nativeEvent);

  const key = event.key();
  if ([Key.Key_Escape, Key.Key_Enter, Key.Key_Return].includes(key)) {
    event.accept();
    myLineEdit.setEventProcessed(true);
  }
});
```

## Listening to QEvents After Default Processing

If an event is not marked as processed by an event listener, then it will be given to the Qt widget for processing. By default, a listener added via `addEventListener()` for a QEvent type, will fire as soon as the event comes in and before the widget has a chance to see it. Sometimes it is desirable to process events *after* the widget has done its processing.

The optional third argument to `addEventListener()`, the options object, has a boolean `afterDefault`. If this is set, then the listener will be called after the widget has processed the event.

This example shows how to perform some extra work immediately after the widget has updated its own layout.

```javascript
const myWidget = new QWidget();

myWidget.addEventListener(WidgetEventTypes.LayoutRequest, () => {
  this.doMyLayout();
}, {afterDefault: true});
```

Note: If you later want to remove an event handler with `removeEventListener()`, you will have to pass the same options as used when calling `addEventListener()` initially.
