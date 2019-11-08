# Event handling

In Qt you can respond to an external event like a key press via event handling. Events always are processed by the event loop. Alongside events Qt also has a concept of Signals/Slots. Signals and slots are used to primarily communicate between widgets (more precisely QObjects). So the most common way of interacting between Qt Widgets is done through signals/slots. (More details here: https://doc.qt.io/qt-5/signalsandslots.html). Hence we would be implementing support for both events and signals.

**Technicals:**

> An event is a message encapsulated in a class (QEvent) which is processed in an event loop and dispatched to a recipient that can either accept the message or pass it along to others to process. They are usually created in response to external system events like mouse clicks.
> Signals and Slots are a convenient way for QObjects to communicate with one another and are more similar to callback functions. In most circumstances, when a "signal" is emitted, any slot function connected to it is called directly. The exception is when signals and slots cross thread boundaries. In this case, the signal will essentially be converted into an event.

# Implementing Signal handling

In Qt signals and slots are used to communicate between different qt widgets. So they can be used to implement things like
onClick, onHover etc.

The way Qt Signals work is explained here:

https://doc.qt.io/qt-5/signalsandslots.html

The way you use them in Qt for a PushButton is explained here:
https://wiki.qt.io/How_to_Use_QPushButton#Signals

# Adding signal/event handling support to a NodeWidget

We will take the example of PushButton

**Javascript**

Steps:

The widget should inherit from `NodeWidget`. NodeWidget inherits from EventWidget internally. EventWidget constructor needs native object while initialising. So arrange your code such that native object gets initialised before calling `super(native)`.

EventWidget adds `addEventListener` method to the widget which can be called
like this:

```js
button.addEventListener('clicked', () => {
    console.log('clicked');
});
```

To help the user know what all signals/events are supported, export an enum like `QPushButtonEvents` as shown below.

So the user can then use it as below:

```js
button.addEventListener(QPushButtonEvents.clicked, () => {
    console.log('clicked');
});
```

Example:

```js
import addon from '../../core/addon';
import { NodeWidget } from '../../QtGui/QWidget';
import { BaseWidgetEvents } from '../../core/EventWidget';

export const QPushButtonEvents = Object.freeze({
    ...BaseWidgetEvents,
    clicked: 'clicked',
    pressed: 'pressed',
    released: 'released',
    toggled: 'toggled',
});

export class QPushButton extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QPushButton(parent.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        this.parent = parent;
        this.native = native;
    }

    setText(text: string | number) {
        this.native.setText(`${text}`);
    }
}
```

**C++**

Steps:

1. `NPushButton`

Inherit from both QPushButton and NodeWidget. Make sure you have added NODEWIDGET_IMPLEMENTATIONS macro. This adds a crucial method for events support. It will override `event(QEvent *)` method of QPushbutton so that nodejs can listen to the events of this widget. This makes sure we convert all the QEvent's of this widget to an event for the nodejs event emitter.

Also make sure to connect all the signals of the widgets to the event emitter instance from NodeJS. This way we kindof convert the signal to a simple nodejs event.

```cpp
#pragma once

#include <QPushButton>
#include "src/cpp/core/NodeWidget/nodewidget.h"
#include "napi.h"

class NPushButton: public QPushButton, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS(QPushButton)
public:
    using QPushButton::QPushButton; //inherit all constructors of QPushButton

    // override this method and implement all signals here
    void connectWidgetSignalsToEventEmitter() {
        // Qt Connects: Implement all signal connects here
        QObject::connect(this, &QPushButton::clicked, [=](bool checked) {
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "clicked"), Napi::Value::From(env, checked) });
        });
        QObject::connect(this, &QPushButton::released, [=]() {
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "released") });
        });
        QObject::connect(this, &QPushButton::pressed, [=]() {
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "pressed") });
        });
        QObject::connect(this, &QPushButton::toggled, [=](bool checked) {
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "toggled"), Napi::Value::From(env, checked) });
        });
    }
};

```

**Additional**

Make sure `npushbutton.h` is added to `config/moc.json`.
And run `npm run automoc` before running `npm run build:addon`

We need to run Qt's MOC (Meta Object Compiler) on the file whenever we use Q_OBJECT in a class or use QObject::connect. This is so that Qt can expand the macros and add necessary implementations to our class.

# How does it work ?

1. On JS side for each widget instance we create an instance of NodeJS's Event Emitter. This is done by the class `EventWidget` from which `NodeWidget` inherits
2. We send this event emiiter's `emit` function to the C++ side by calling `initNodeEventEmitter` method and store a pointer to the event emitter's emit function using `emitOnNode`. initNodeEventEmitter function is added by a macro from EventWidget (c++). You can find the initNodeEventEmitter method with the event widget macros.
3. We setup Qt's connect method for all the signals that we want to listen to and call the emitOnNode (which is actually emit from Event emitter) whenever a signal arrives. This is done manually on every widget by overriding the method `connectWidgetSignalsToEventEmitter`. Check `npushbutton.h` for details. This takes care of all the signals of the widgets. Now to export all qt events of the widget, we had overriden the widgets `event(Event*)` method to listen to events received by the widget and send it to the event emitter. This is done inside the EVENTWIDGET_IMPLEMENTATIONS macro
