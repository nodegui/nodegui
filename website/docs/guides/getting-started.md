---
sidebar_label: Getting started
title: Getting started
---

NodeGui enables you to create desktop applications with JavaScript. You could see it
as a lightly modified variant of the Node.js runtime that is focused on desktop applications
instead of web servers.

NodeGui is also an efficient JavaScript binding to the cross platform graphical user interface
(GUI) library `Qt`. Qt is one of the most mature and efficient libraries for building desktop applications.
This enables NodeGui to be extremely memory and CPU efficient compared to other popular Javascript desktop GUI solutions. A hello world app built with NodeGui runs on less than 20MB of memory.

## Developer environment

To turn your operating system into an environment capable of building desktop apps with NodeGui, you would need Node.js, npm, a code editor of your choice, and a rudimentary understanding of your operating system's command line.

Along with these, there are a few operating system dependent instructions that are listed below.

### Setting up on macOS

**Requirements:**

- NodeGui supports macOS 10.10 (Yosemite) and up. NodeGui currently only supports 64bit OS.
- Currently supported Node.Js versions are 16.x.

We strongly suggest you use some kind of version manager for Node.js. This would allow you to switch to any version of Node.js quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

Confirm that both `node` and `npm` are available by running:

```sh
# This command should print the version of Node.js
node -v

# This command should print the version of npm
npm -v
```

If both commands printed a version number, you are all set! Before you get
started, you might want to install a [code editor](#a-good-editor) suited
for JavaScript development.

### Setting up on Windows

**Requirements:**

- NodeGui supports Windows 7 and later on 64bit operating systems.
- Currently supported Node.js versions are 16.x and up.

We strongly suggest you use some kind of version manager for Node.js. This would allow you to switch to any version of Node.js quite easily.

We strongly recommend Powershell as preferred terminal in Windows.

Confirm that both `node` and `npm` are available by running:

```powershell
# This command should print the version of Node.js
node -v

# This command should print the version of npm
npm -v
```

If both commands printed a version number, you are all set! Before you get
started, you might want to install a [code editor](#a-good-editor) suited
for JavaScript development.

### Setting up on Linux

> NodeGui currently supports Ubuntu 16.04 and Debian 10 and up. Although other Linux distributions can also be easily supported. NodeGui currently only supports 64bit OS.

**Requirements:**

- Currently supported Node.js versions are 16.x and up.

We strongly suggest you use some kind of version manager for Node.js. This would allow you to switch to any version of Node.js quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

Confirm that both `node` and `npm` are available by running:

```sh
# This command should print the version of Node.js
node -v

# This command should print the version of npm
npm -v
```

If both commands printed a version number, you are all set! Before you get
started, you might want to install a [code editor](#a-good-editor) suited
for JavaScript development.

### A Good Editor

We might suggest Microsoft's [Visual Studio Code][code], a popular free editor with excellent JavaScript support.

If you are one of the many developers with a strong preference, know that virtually all code editors and IDEs these days support JavaScript.

[code]: https://code.visualstudio.com/

#### Using your own custom Qt installation (Optional)

**Compiling Qt from source**

You will need to download and install Qt from source since there are no binaries from Qt for M1 yet.

(https://www.reddit.com/r/QtFramework/comments/ll58wg/how_to_build_qt_creator_for_macos_arm64_a_guide/)

```
git clone git://code.qt.io/qt/qt5.git
cd qt5
git checkout 5.15

./init-repository --module-subset=essential -f
git submodule init qtsvg
git submodule update qtsvg

cd ..
mkdir qt5-5.15-macOS-release
cd qt5-5.15-macOS-release

../qt5/configure -release QMAKE_APPLE_DEVICE_ARCHS=arm64 -opensource -confirm-license -nomake examples -nomake tests -skip qt3d -skip webengine -skip qtactiveqt -skip qtcanvas3d  -skip qtdeclarative -skip qtdatavis3d -skip qtdoc -skip qtgamepad -skip qtcharts -skip qtgraphicaleffects -skip qtlocation  -skip qtpurchasing -skip qtquickcontrols -skip qtquickcontrols2 -skip qtremoteobjects -skip qtscxml -skip qtsensors -skip qtserialbus -skip qtserialport -skip qtspeech -skip qtvirtualkeyboard -skip qtscript

make -j15

make install
```

This should install Qt into something like this `/usr/local/Qt-5.15.3` (your directory can change. This will be displayed when running make)

**Pointing nodegui to use your custom Qt installation**

Now just set `export QT_INSTALL_DIR=<your qt path>` . In the above example it would look something like this `export QT_INSTALL_DIR=/usr/local/Qt-5.15.3`. Add this in your .zshrc or .bashrc so that you dont need to repeat this process again.

Now just `rm -rf node_modules` and do `npm install` again.

The logs should say something like `CustomQt detected at <your qt path>. Hence, skipping Mini Qt installation`.


### Hello World

Clone and run the code in this tutorial by using the
[`sedwards2009/nodegui-simple-starter`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh

git clone https://github.com/sedwards2009/nodegui-simple-starter.git

cd nodegui-simple-starter

npm install

npm run build

npm run run
```

**Note**: If you encounter errors installing `nodegui`, please check the [FAQs](../faq.md#why-does-installation-fail-at-minimal-qt-setup) for additional help.

That's it!

Congratulations! You've successfully run and modified your first NodeGui app.

### Now what?

If you're curious to learn more about NodeGui, continue on to the [tutorial](tutorial.md).

[quick-start]: https://github.com/sedwards2009/nodegui-simple-starter
