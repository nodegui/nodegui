# Setup project for development

## Development setup and getting started

Make sure you follow the setup guide of [Qode][qode_setup] so that you have a build environment ready for Qode.

### MacOSX:

**Requirements**

1. Node version: > 11
2. CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
3. Make, GCC v7
4. Qt (_Optional_): Make sure you followed the setup instructions from [Qode][qode_setup]


__*Only for M1 Macs*__

**_Setting up Qt:_**

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

Now just set `export QT_INSTALL_DIR=/usr/local/Qt-5.15.3` in either your .zshrc or .bashrc

Further steps would now use this custom Qt installation.

### Windows:

**Requirements**

1. Node version: > 11
2. CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
3. Visual Studio Community 2017
4. Powershell
5. Qt (_Optional_): Make sure you followed the setup instructions from [Qode][qode_setup]

### Linux:

Supported versions: Ubuntu 17.10 and up

**Requirements**

1. Node version: > 11
2. CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
3. Make, GCC v7, pkg-config
4. Qt (_Optional_): Make sure you followed the setup instructions from [Qode][qode_setup]

On Ubuntu: `$ sudo apt-get install pkg-config build-essential` should install everything except Qt5.

Note: If you are using your own version of Qt make sure to

`export PKG_CONFIG_PATH="<path to qt installation>/5.13.0/gcc_64/lib/pkgconfig"`

### Common:

1. Once you have setup the platform specific stuff as mentioned above, follow these:
2. `git clone` this repo.
3. `yarn install`
4. `yarn build:addon`
5. `yarn dev`

If you want to run with your own version of Qt make sure to pass qt_home_dir variable when building addon.

`npm run rebuild:addon [--qt_home_dir=/path/to/qt]`

[qode_setup]: https://github.com/nodegui/qode
