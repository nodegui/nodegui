# NodeGui Application Architecture

Before we can dive into NodeGui's APIs, we need to discuss how NodeGui works internally. This would give a clear picture on why the APIs are the way they are.

## Qode

NodeGui uses Qt for creating Windows and other UI element. Hence it exports thin wrappers of native C++ widgets from Qt into Javascript world. Now, every Qt application needs to initialize an instance of `QApplication` before creating widgets. The way we do it in C++ Qt application is (dont worry if it doesnt make sense right now):

```cpp
 #include <QApplication>
 #include <QPushButton>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv); // Important

     QPushButton hello("Hello world!");
     hello.resize(100, 30);
     hello.show();

     return app.exec(); // Important
 }
```

Like many Gui libraries Qt uses an event/message loop to handle events from widgets. Hence, when we call `app.exec()` Qt starts its message loop and blocks on that line. This is all good when there is only one message loop in the entire app. But since we want to use Qt with NodeJS and NodeJs has its own event loop, we cannot run both Qt and NodeJs on the same thread easily.

Then following questions arise:

- **What if we run Qt on a separate thread?** : No this is not possible since Qt has a requirement that it needs to run on the main thread.
- **What if we run Node on a separate thread?** : This would mean we need to build a complex bridge between Node and Qt threads to make them communicate. A strict no no.

So in order to make both NodeJs and Qt work together we need to find a way to merge these two event loop into one. This is achieved by a custom NodeJs binary we call as `Qode`.

Qode is a lightly modified fork of Node.js that merges Node's event loop with Qt's event loop. The idea of merging event loops is inspired by Electron and [other](https://github.com/yue) Gui libraries developed by [zcbenz (Cheng Zhao)](https://github.com/zcbenz). It has been detailed in a post here: [Electron internals](https://electronjs.org/blog/electron-internals-node-integration). Hence, we reused the logic from electron to achieve smooth integration between Qt and NodeJs.

The idea is to release a corresponding Qode binary for every NodeJs version that comes out after Node v12.6.
The source code of Qode can be found [here](https://github.com/nodegui/qode).

_\*PS: Qode is a fork of [Yode](https://github.com/yue/yode)_

## Using NodeGui APIs

NodeGui offers a number of APIs that support the development of a desktop
application. You'd access NodeGui's APIs by requiring its included module:

```javascript
require("@nodegui/nodegui");
```

A window in NodeGui is for instance created using the `QMainWindow`
class.

```javascript
const { QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();
```

## Using Nodejs APIs

NodeGui exposes full access to Node.js. This has two important implications:

1. All APIs available in Node.js are available in NodeGui. Calling the
   following code from an NodeGui app works:

```javascript
const fs = require("fs");

const root = fs.readdirSync("/");

// This will print all files at the root-level of the disk,
// either '/' or 'C:\'.
console.log(root);
```

2. You can use Node.js modules in your application. Pick your favorite npm
   module. npm offers currently the world's biggest repository of open-source
   code – the ability to use well-maintained and tested code that used to be
   reserved for server applications is one of the key features of NodeGui.

As an example, to use the official AWS SDK in your application, you'd first
install it as a dependency:

```sh
npm install --save aws-sdk
```

Then, in your NodeGui app, require and use the module as if you were
building a Node.js application:

```javascript
// A ready-to-use S3 Client
const S3 = require("aws-sdk/clients/s3");
```

There is one important caveat: Native Node.js modules (that is, modules that
require compilation of native code before they can be used) will need to be
compiled with Qode or a compatible Node version to be used with NodeGui.

The vast majority of Node.js modules are _not_ native. Only 400 out of the
~650.000 modules are native. However, if you do need native modules, please
consult [this guide on how to recompile them for NodeGui][native-node].

[native-node]: tutorial/using-native-node-modules.md
