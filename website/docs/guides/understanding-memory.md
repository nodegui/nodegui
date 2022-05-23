---
sidebar_label: Understanding Memory
title: Understanding Memory
---

NodeGui allows you to use a library designed for C++ (Qt) from the JavaScript language. C++ and JavaScript have very different approaches for managing the memory of objects. C++ expects the programmer to manually create objects and later destroy them to free up their memory. It is the job of the programmer to destroy objects at the right time and when it is safe. JavaScript uses a Garbage Collector which detects when an object is longer being used and then automatically destroys it, freeing up its memory. Most of the time NodeGui can coordinate these two systems in a way which is mostly transparent to the JavaScript developer. However, there are situations where it is necessary to have some understanding of what is happening being in the scenes.

## Qt's QObject Memory Management

Much of Qt is based around the `QObject` class. It is the base class of many Qt classes including most of the widgets exposed by NodeGui. `QObject` provides many useful features on top of C++ for working with objects. It has support for easier memory management. This system is built around the idea of object ownership and trees of objects which can be freed as a group. Each `QObject` can participate in a tree of objects. Each `QObject` has a list of child objects, and may also have a parent `QObject`. When a `QObject` is destroyed, all of its attached child objects are destroyed with it.

Trees of objects is a good model for user interfaces which are also structured in hierarchies. Qt's widgets are built on top of `QObject` and its object trees. The same object tree is used by widgets for memory management and UI layout / structuring.

`QObject` contains a number of methods for examining this tree of objects:

* `parent()` - Get the parent of an object, or `null`.
* `setParent()` - Set the parent of an object.
* `children()` - Get a list of the child objects belonging to this object.


## JavaScript Wrappers

Node runs on the V8 JavaScript engine. It can't directly work with C++ object like those from Qt. To bridge the gap between V8 and Qt, NodeGui creates "wrapper" C++ and JavaScript objects which can translate between the two worlds. A JavaScript object "wrapper" will wrap a corresponding Qt object in C++. As a JavaScript developer you don't have to pay much attention to this. It happens automatically in the background.

## QObject End of Life

There are two ways in which a `QObject` can be destroyed, starting from either the C++ side or JavaScript side.

The JavaScript side is the most common. If the Garbage Collector discovers that a wrapper is no longer being referenced, then it will destroy the wrapper. When the C++ side of the wrapper is destroyed, it will also destroy its corresponding Qt object *if that object is not part of an object tree*. In other words, if the `QObject` has a parent object set, then it will not be destroyed and NodeGui assumes that the responsibility for destroying and cleaning up that object belongs to the parent object and the Qt `QObject` memory system.

When a `QObject` is destroyed from the C++ side, then NodeGui detects this and sets the reference to the object itside the JavaScript wrapper object, to `null`. If any attempt is made to use the JS wrapper object, then it will hit the `null` and throw an exception.

## Problems with Unexpected Object Destruction

A NodeGui object suddenly throws an exception regarding a `null` if you try to use a method on it.  This situation can happen if underlying C++ Qt object is destroyed and afterwards you still try to use it via its wrapper.

The most common way this can happen is if a `QObject` is part of an object tree and one of its parent objects is destroyed which then also destroys the rest of the tree. If you don't want an object to be destroyed with its parent object, then you need to remove it from the tree before the parent is destroyed. Calling `setParent(null)` on the object is enough to disconnect it from its parent.

## Debugging

NodeGui provides some tools to help track the lifecycle of objects and figure out why your application isn't running the way you expect.

Each `QObject` instance, and subclass also, has an ID to identify it. The method `QObject._id()` can be used to fetch the ID for an object. The ID is valid for the lifetime of the object, although it could be reused once this object is destroyed.

NodeGui manages the lifecycle of objects and it is possible to turn on logging regarding the creation and destruction of objects. The following functions take a boolean to turn this logging on or off:

* `setLogDestroyQObject()` - Turn logging of object destruction on/off.
* `setLogCreateQObject()` - Turn logging of object creation on/off.

These log messages contain the ID of the object as returned from `QObject._id()`.

A typical usage of this logging would be to narrow down the exact place where an object is being unexpectedly destroyed:

```js
const { setLogDestroyQObject, setLogCreateQObject } = require('@nodegui/nodegui');

setLogCreateQObject(true);
setLogDestroyQObject(true);

const myWidget = new QWidget();
console.log(`myWidget has ID: ${myWidget._id()}.`);

// ...
// ... Code which somehow triggers the destruction of myWidget.
// ...
console.log(`Reached crash point.`);
const size = myWidget.size();
// ^ line which triggers an exception because the object is destroyed.
```

The logging output from the application might be:

```
NodeGui: Created C++ object with ID: 17533348349032.
myWidget has ID: 17533348349032.
NodeGui: Destroyed C++ object with ID: 17533348349032.
Reached crash point.
Uncaught TypeError: Cannot read property 'size' of null
```

More logging could be added to narrow down which section of code triggers the destruction of the object.
