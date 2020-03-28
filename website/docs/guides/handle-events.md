---
sidebar_label: Handle Events
title: Handle Events
---

NodeGui allows you to listen to various events that might originate from the underlying Qt widgets. These events can either be a simple button click or a text change on a lineedit or even something like window being hidden and shown.

In order to do this we need to attach an event listener to the respective widget.

Technically, the event listener is a NodeJs [EventEmitter](https://nodejs.org/api/events.html#events_class_eventemitter) instance that listens to events from the underlying Qt widget. The native Qt widget would send all the events to the event emitter in NodeGui world and the user can essentially subscribe to it.

Lets see an example to see how this looks in practice.

## Event handling

The following example demonstrates how to add an event listener to a button widget.

<img src="https://github.com/nodegui/nodegui/releases/download/assets/event-example.gif" alt="event example" style={{maxWidth: 700, width:'100%'}}/>

```javascript
const { QMainWindow, QPushButton } = require('@nodegui/nodegui');

const win = new QMainWindow();

const button = new QPushButton();
button.setText('Click me');
button.addEventListener('clicked', () => {
    console.log('the button was clicked');
});

win.setCentralWidget(button);
win.show();
global.win = win;
```

The addEventListener function accepts an event type, followed by a handler for the event. You can register multiple handlers for the same event by calling addEventListener multiple times.

Internally, Qt widgets in nodegui has two types of events.:

-   Signals: In short these are basically different for different widgets. So a button maybe have `clicked`, `pressed` signal, while a linedit may have `textChanged` signal.
-   QEvents: These are common set of events for all the widgets/qobjects in NodeGui world. These are also helpful at times but typically you would end up using signals more than these common events.

In NodeGui you can listen to both Signals and QEvents using the same addEventListener function.

### How do I know which events are supported ?

In order to find all the supported events for a widget you can take a look at

#### All Signals for the widgets:

-   (https://docs.nodegui.org/docs/api/generated/globals/#interfaces)[https://docs.nodegui.org/docs/api/generated/globals/#interfaces]
-   (https://docs.nodegui.org/docs/api/generated/globals/#type-aliases)[https://docs.nodegui.org/docs/api/generated/globals/#type-aliases]

You can subscribe to a signal like so:

```javascript
const { QMainWindow, QCheckBox } = require('@nodegui/nodegui');

const win = new QMainWindow();

const checkbox = new QCheckBox();
checkbox.setText('Check/Uncheck me');
checkbox.addEventListener('clicked', checked => {
    console.log('was checked', checked);
});

win.setCentralWidget(checkbox);
win.show();
global.win = win;
```

The value you receive in the callback depends on the signal. Refer to respective signal docs for more details. All the handlers are also typed. So if you are using typescript you should get correct autocomplete for it.

#### All common QEvents for the widgets

In nodegui all these common QEvents are represented under an enum type: (WidgetEventTypes)[https://docs.nodegui.org/docs/api/generated/enums/widgeteventtypes]

You can subscribe to a QEvent like so:

```javascript
const { QMainWindow, QLabel, WidgetEventTypes, QMouseEvent } = require('@nodegui/nodegui');

const win = new QMainWindow();

const label = new QLabel();
label.setText('Move your move here');
label.setMouseTracking(true);

label.addEventListener(WidgetEventTypes.MouseMove, nativeEvt => {
    const mouseEvt = new QMouseEvent(nativeEvt);
    console.log('mouseMoved at: ', { x: mouseEvt.x(), y: mouseEvt.y() });
});

win.setCentralWidget(label);
win.show();
global.win = win;
```

<img src="https://github.com/nodegui/nodegui/releases/download/assets/mouseevent.gif" alt="mouse event listener" style={{maxWidth: 700, width:'100%'}}/>

Note here that every QEvent handler gives a reference to native QEvent in the handler callback.
Not all native QEvent wrappers are implemented yet and we might need your help regarding those. Feel free to jump in and contribute to the nodegui core.
