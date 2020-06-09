---
sidebar_label: Getting started
title: Getting started
---

NodeGui enables you to create desktop applications with JavaScript. You could see it
as a lightly modified variant of the Node.js runtime that is focused on desktop applications
instead of web servers.

NodeGui is also an efficient JavaScript binding to a cross platform graphical user interface
(GUI) library `Qt`. Qt is one of the most mature and efficient library for building desktop applications.
This enabled NodeGui to be extremely memory and CPU efficient as compared to other popular Javascript Desktop GUI solutions. A hello world app built with NodeGui runs on less than 20Mb of memory.

## Developer environment

To turn your operating system into an environment capable of building desktop apps with NodeGui, you would need Node.js, npm,a code editor of your choice, and a rudimentary understanding of your operating system's command line client.

Along with these, there are a few operating system dependent instructions that are listed below.

### Setting up on macOS

**Requirements:**

- NodeGui supports macOS 10.10 (Yosemite) and up. NodeGui currently only supports 64bit OS.
- CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
- Make, GCC v7
- Currently supported Node.Js versions are 12.x and up.

We strongly suggest you use some kind of version manager for Node.Js. This would allow you to switch to any version of nodejs quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

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

> NodeGui supports Windows 7 and later versions – attempting to develop NodeGui
> applications on earlier versions of Windows might not work. NodeGui currently only supports 64bit OS.

**Requirements:**

- Visual studio 2017 and up.
- CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
- Currently supported Node.Js versions are 12.x and up.

We strongly suggest you use some kind of version manager for Node.Js. This would allow you to switch to any version of nodejs quite easily.

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

- Make, GCC v7
- CMake 3.1 and up (Installation instructions can be found here: https://cmake.org/install/)
- Currently supported Node.Js versions are 12.x and up.
- On Ubuntu and Ubuntu-based distros it is advisable to run `sudo apt-get update`, followed by `sudo apt-get install pkg-config build-essential mesa-common-dev libglu1-mesa-dev`

We strongly suggest you use some kind of version manager for Node.Js. This would allow you to switch to any version of nodejs quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

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

We might suggest two free popular editors:
GitHub's [Atom][atom] and Microsoft's [Visual Studio Code][code]. Both of
them have excellent JavaScript support.

If you are one of the many developers with a strong preference, know that
virtually all code editors and IDEs these days support JavaScript.

[code]: https://code.visualstudio.com/
[atom]: https://atom.io/

### Hello World

Clone and run the code in this tutorial by using the
[`nodegui/nodegui-starter`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh

git clone https://github.com/nodegui/nodegui-starter

cd nodegui-starter

npm install

npm start

```

That's it!

Congratulations! You've successfully run and modified your first NodeGui app.

### Now what?

If you're curious to learn more about NodeGui, continue on to the [tutorial](tutorial.md).

[quick-start]: https://github.com/nodegui/nodegui-starter
