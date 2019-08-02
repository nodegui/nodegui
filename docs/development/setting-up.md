# Setup project for development

## Development setup and getting started

### MacOSX:

**Requirements**

1. Node version: > 9
2. Python and gcc
3. Make sure you dont have spaces inside your home path. NodeGYP has issues with spaces in the path. https://github.com/nodejs/node-gyp/issues/209

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
