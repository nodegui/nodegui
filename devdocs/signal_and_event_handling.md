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

# Adding signal handling support to a NodeWidget

We will take the example of PushButton

**Javascript**

Steps:

The widget should inherit from `SignalNodeWidget` instead of `NodeWidget`. SignalNodeWidget inherits from NodeWidget internally. SignalNodeWidget constructor needs native object while initialising. So arrange your code such that native object gets initialised before calling `super(native)`.

SignalNodeWidget adds `setSignalListener` method to the widget which can be called
like this:

```js
button.setSignalListener("clicked", () => {
  console.log("clicked");
});
```

To help the user know what all signals are supported, export an enum like `QPushButtonSignal` as shown below.

So the user can then use it as below:

```js
button.setSignalListener(QPushButtonSignal.clicked, () => {
  console.log("clicked");
});
```

Example:

```js
import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { SignalNodeWidget } from "../../core/SignalNodeWidget";

export enum QPushButtonSignal {
  clicked = "clicked",
  pressed = "pressed",
  released = "released",
  toggled = "toggled"
}

export class QPushButton extends SignalNodeWidget {
  native: any;
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

  setText(text: string) {
    this.native.setText(text);
  }
}
```

**C++**

Steps:

1. No changes to `NPushButton`

2. In `qpushbutton_wrap.h`:

   ```cpp

    ...
    ...
    #include <napi-thread-safe-callback.hpp>
    ...
    ...

    class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
    private:
    ...
    // This will store our event emitter from JS
    std::unique_ptr<ThreadSafeCallback> emitOnNode;

    public:
    ...
    ...

    // This will be called internally by SignalNodeWidget class in JS
    Napi::Value setupSignalListeners(const Napi::CallbackInfo& info);

    ...
    ...
    };
   ```

3. In `qpushbutton_wrap.cpp`

```cpp
...
...

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func = DefineClass(env, CLASSNAME, {
   ...
   ...
    InstanceMethod("setupSignalListeners",&QPushButtonWrap::setupSignalListeners),
   ...
   ...
  });
  ...
  ...
}

...
...

QPushButtonWrap::~QPushButtonWrap() {
  this->emitOnNode.release(); //cleanup emitOnNode
  delete this->instance;
}
...
...

Napi::Value QPushButtonWrap::setupSignalListeners(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    this->emitOnNode = std::make_unique<ThreadSafeCallback>(info[0].As<Napi::Function>());
   // Qt Connects: Implement all signal connects here
    QObject::connect(this->instance, &QPushButton::clicked, [=](bool checked) {
        this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "clicked"), Napi::Value::From(env, checked) };
        });
    });
    QObject::connect(this->instance, &QPushButton::released, [=]() {
        this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "released") };
        });
    });
    QObject::connect(this->instance, &QPushButton::pressed, [=]() {
        this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "pressed") };
        });
    });
    QObject::connect(this->instance, &QPushButton::toggled, [=](bool checked) {
        this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "toggled"), Napi::Value::From(env, checked) };
        });
    });
    return env.Null();
}

...
...

```

**Additional**

Make sure `qpushbutton_wrap.h` is added to `config/moc.json`.
And run `npm run automoc` before running `npm run build:addon`

We need to run Qt's MOC (Meta Object Compiler) on the file whenever we use Q_OBJECT in a class or use QObject::connect. This is so that Qt can expand the macros and add necessary implementations to our class.

# How does it work ?

1. On JS side for each widget instance we create an instance of NodeJS's Event Emitter. This is done by the class `SignalNodeWidget`
2. We send this event emiiter's `emit` function to the C++ side by calling `setupSignalListeners` method and store a pointer to it using `emitOnNode`.
3. We setup Qt's connect method for all the signals that we want to listen to and call the emitOnNode (which is actually emit from Event emitter) whenever a signal arrives.

> Note that we **can't** just store Napi::Function emit directly and use it. This is because we would need access to `Napi::Env` while making a call and there is no way to do it asynchronously.
> Since NAPI (node-addon-api) doesnt support asynchronous callbacks properly yet. (Although work in underway) we use this third party library (https://github.com/mika-fischer/napi-thread-safe-callback) to do so. This library provides us a way to access the Napi::Env variable whenever we need it.
