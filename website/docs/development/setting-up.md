# Setup project for development

## Development setup and getting started

Make sure you follow the setup guide of [Qode][qode_setup] so that you have a build environment ready for Qode.

### MacOSX:

**Requirements**

1. Node version: > 11
2. CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
3. Make, GCC v7
4. Qt (_Optional_): Make sure you followed the setup instructions from [Qode][qode_setup]

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

On Ubuntu: `$ sudo apt-get install pkg-config build-essentials` should install everything except Qt5.

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
