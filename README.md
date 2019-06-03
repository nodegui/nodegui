# node-native-ui

A cross platform library to build native desktop apps. Based on Qt5.

![mac](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/macosx_nodeqt5.png "Mac OS screenshot")

![win](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/win10_nodeqt5.png "Windows screenshot")

![linux](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/ubuntu_linux_nodeqt5.png "Linux Screenshot")

## Features

- [x] Cross platform. Should work on major Linux flavours, Windows and MacOS
- [x] Low CPU and memory footprint. Current CPU stays at 0% on idle and memory usage is under 20mb for a hello world program.
- [ ] (Partial support is present) Easily exstensible for creating custom native widgets (like react native).
- [x] Support for flex box layouting using Yoga.
- [x] Supports styling using css (includes actual cascading) or atleast useful subset of css properties.
- [x] Complete Nodejs api support (Currently runs on Node v12 - and is easily upgradable).
- [x] Can use all node compatible npm modules.
- [ ] Native widget event listener support.
- [x] Should be usable for commercial applications aswell.
- [ ] (Partial) Should have a decent list of stylable native widgets.
- [ ] Easy build and packaging process.
- [ ] Good Devtools support (hot reload, live reload, debugging etc).
- [ ] Good documentation and website.
- [ ] Good documentation for contributors.

## Development setup and getting started

This guide is for setting up `node-native-ui` for contributors of node-native-ui.
The actual getting started guide for users will be added once we reach a bit of stable level.

Make sure you have setup `qode` and installed it globally.

### MacOSX:

**Requirements**

1. Node version: > 9
2. Python and gcc

**Setting up**

1. Install latest version of Qt (5.12) via homebrew only.

```
brew install qt5
```

### Windows:

**Requirements**

1. Node version: > 9
2. Python and MSVC++

**Setting up**
-- Instructions will be added soon --

### Linux:

**Requirements**

1. Node version: > 9
2. Python, Make, GCC, pkg-config and Qt5 <br/>

On Ubuntu: `$ sudo apt-get install pkg-config build-essentials` should install everything except Qt5.

**Setting up**

1. Make sure you have downloaded and installed Qt5 sdk.
2. Before running `yard build`, do
   `export PKG_CONFIG_PATH="<path to qt installation>/5.11.0/gcc_64/lib/pkgconfig"`

### Common:

1. Once you have setup the platform specific stuff as mentioned above, follow these:

2. `git clone` this repo.

3. Keep note of the install directory of qt. You should probably find it at `/usr/local/Cellar/qt/5.12.1`. Copy this path and
   edit the file `config/common.gypi`. <br/>
   Change the field

   ```
   'qt_home_dir': '<!(echo $QN_QT_HOME_DIR)',
   ```

   to

   ```
   'qt_home_dir': '/usr/local/Cellar/qt/5.12.1',
   ```

4. `yarn install`
5. `yarn build:addon`
6. `yarn dev`

## General Idea for development

1. Create wrappers for each and every Qt class that you will use with N-API (using node-addon-api since it is c++) and export it onto JS side.

## Learning Materials:

1. Beginners guide to NodeJS Addon - https://medium.com/@atulanand94/beginners-guide-to-writing-nodejs-addons-using-c-and-n-api-node-addon-api-9b3b718a9a7f
2. First read this: N-API in nodejs docs
3. https://www.youtube.com/watch?v=-Oniup60Afs&feature=youtu.be
4. See samples at https://github.com/nodejs/abi-stable-node-addon-examples/
   4.1. You can see the readme of https://github.com/nodejs/node-addon-api.git/
5. See node-qt implementation. It is implemented in Nan (explained in video).
6. Now try to match the implementation in node-qt and convert to N-API using examples from samples.
7. Implementations not in node-qt need to be done with effort.

## (OLD README but still helpful) To create a new class:

1. Use the templates given and copy paste.
2. replace the placeholders with the classnames.
3. Implement methods.
4. Add it to binding.gyp, qt.cpp and make sure you add the methods to the init block of the class.

## To make a UI wrapper component that has access to event bridge to sent events to JS.

I am taking example of QPushButton

1. create a `cbutton.h`

```c++
#ifndef NQ_CBUTTON_H
#define NQ_CBUTTON_H
#include <QPushButton>
#include <QObject>
#include <napi.h>
#include "../../Extras/EventBridge/eventwidget.h"


class CButton: public EventWidget, public QPushButton
{
   Q_OBJECT;
   public:
     CButton(QString btnText);
   private slots:
     void handleButtonClick();
};

#endif

```

2. Run qt moc on the file (because it has Q_OBJECT) to get cbutton_moc.h (do not edit anything in this file)

3. create a cbutton.cpp

```c++
#include "cbutton_moc.h"

CButton::CButton(QString btnText): EventWidget(EVT_WIDGET_CBUTTON_ID) //EVT_WIDGET_CBUTTON_ID is unique WIDGET ID For QPUSHBUTTON
{
    this->setText(btnText);
    QObject::connect(this, SIGNAL (released()), this, SLOT (handleButtonClick()));
}


void CButton::handleButtonClick()
 {
    this->addEvent("click","somepayload if needed"); //This addEvent method comes from EventWidget class it takes eventType and payload
 }

```

4. Now create a qpushbutton.h C++ wrapper that will be exported to JS. This should implement getHandlerCreationMetadata and also add it to one of the exported methods.

```c++
#ifndef NQ_QPUSH_BUTTON_H_
#define NQ_QPUSH_BUTTON_H_
#include <napi.h>
#include "cbutton.h"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  CButton* getInternalInstance();
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info);
  Napi::Value getHandlerCreationMetadata(const Napi::CallbackInfo& info);
 private:
  CButton* q_;
  static Napi::FunctionReference constructor;
};

#endif
```

5. In JS Side, after exporting c++ wrapper correctly just wrap QPushButton using connectToEventBridge.
   connectToEventBridge will add methods like setEventHandler, removeEventHandler, removeAllEventHandler to The QPushButton.

```js
const { QPushButton } = require("../../qt");
const { connectToEventBridge } = require("../../Extras/EventBridge");

module.exports = connectToEventBridge(QPushButton);
```

6. Thats it!

## Caveats

1. All files using Q_OBJECT macro needs to be passed through qt moc.
   Qt moc will generate an extra header file that needs to included (check cbutton under QPushButton).
   To run the moc /path/to/clang_64/bin/moc cbutton.h -o cbutton_moc.h
   Now include cbutton_moc.h in the cbutton.cpp file.
   If you dont do this. Then it will give a symbol not found error.

2. For some cases ui doesnt repaint after changes. So, it better to run this->q\_->repaint();
   after calling any member function that is supposed to do a UI change.

## Known issues:

**MacOS - cocoa platform not found !**
To fix this make sure you havent moved the qt folder where you installed it using the installer. If so, I recommend doing a clean install of qt and not to move the folder elsewhere. After installing set the variable QN_QT_HOME_DIR as mentioned above in the setup guide.

or you can also do:
//TODO

```js
const path = require("path");
const os = require("os");
const qt = require("../build/Release/qtnodeui.node");

if (os.platform() === "darwin") {
  // Workaround for macos adding plugin to the path
  const pathForPlugins = path.resolve(
    __dirname,
    "../dep/qt-5.11.0/darwin/x64/"
  );
  qt.PluginLoader.setPluginPath(pathForPlugins);
}
```

## RUNNING MOC

To run moc:

```sh
moc headername.h -o headername_moc.h
```

#DEBUGGING

https://medium.com/cameron-nokes/how-to-debug-native-node-addons-in-mac-osx-66f69f81afcb

### LICENSE

Since we do not in any way modify the code of Qt and only link to it dynamically, I beleive we are in compliance with the LGPL license requirements of QT. And hence this library can be licensed under its own License (for which we have chosen MIT License).
The links to QT source code and appropriate license notices are attached. We try our best to abide by the software licenses and any non compliance is not by will. If there is some discrepancy please let us know in the issues and we will try and fix it up.
If you follow the recommended build steps and do not statically link QT libraries on your own you are safe to use this library for commerical puropses (provided you abide by MIT License).

MIT
