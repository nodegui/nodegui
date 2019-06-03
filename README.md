# node-native-ui

A cross platform library to build native desktop apps. Based on Qt5.

![mac](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/macosx_nodeqt5.png "Mac OS screenshot")

![win](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/win10_nodeqt5.png "Windows screenshot")

![linux](https://github.com/master-atul/qtnode-ui/raw/master/assets/screenshots/ubuntu_linux_nodeqt5.png "Linux Screenshot")

## Development setup and getting started

This guide is for setting up `qtnode-ui` for contributors of qtnode-ui.
The actual getting started guide for users will be added once we reach a bit of stable level.

### MacOSX:

**Requirements**

1. Node version: > 9
2. Python and gcc

**Setting up**

1. Install qt from official qt website. (Recommended version: 5.11.0)
   or alternatively you can download it from : [http://download.qt.io/official_releases/qt/5.11/5.11.0/](http://download.qt.io/official_releases/qt/5.11/5.11.0/)
2. Keep note of the install directory of qt. Lets say you installed it at `/Users/username/Desktop/qt/`.<br/>
   Setup the environment variable: <br/>
   `export NQ_QT_HOME_DIR="/Users/username/Desktop/qt/5.11.0/clang_64"` <br/>
   You can even add it to you `.bashrc` or `.zshrc` file.
3. `git clone` this repo.
4. `yarn install` -- (if this fails on build part - dont worry about it)
5. `node ./scripts/darwin/setup.js` - (if this fails: check the previous steps to see if you missed something or try running next step for hints on what went wrong).
6. `npx jest ./scripts/darwin/check.test.js` - (This runs the basic setup checks to ensure your setup is as expected)
7. `yarn start`

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

## General Idea

1. Create wrappers for each and every Qt class that you will use with N-API (using node-addon-api since it is c++) and export it onto JS side.
2. Just like the implementation of node-qt

## Learning Materials:

1. First read this: N-API in nodejs docs
2. https://www.youtube.com/watch?v=-Oniup60Afs&feature=youtu.be
3. See samples at https://github.com/nodejs/abi-stable-node-addon-examples/
   3.1. You can see the readme of https://github.com/nodejs/node-addon-api.git/
4. See node-qt implementation. It is implemented in Nan (explained in video).
5. Now try to match the implementation in node-qt and convert to N-API using examples from samples.
6. Implementations not in node-qt need to be done with effort.

## To create a new class:

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

# For DOCS

We are using Hugo for static site generation (docs).

To run docs locally,

- 1. Install Hugo on your computer.
- 2. The docs src files are present in `assets/docsrc`. To make changes edit the files there.
- 3. `docs` folder contains the built assets - DO NOT MODIFY those.
- 4. `npm run docs:serve` runs docs in development mode.
- 5. `npm run docs:build` to build the docs for publishing in `/docs` folder.

## RUNNING MOC

To run moc:

```sh
moc headername.h -o headername_moc.h
```

#DEBUGGING

https://medium.com/cameron-nokes/how-to-debug-native-node-addons-in-mac-osx-66f69f81afcb

- Atul R
