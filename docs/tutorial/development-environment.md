# Developer Environment

NodeGui development is essentially Node.js development. To turn your operating
system into an environment capable of building desktop apps with NodeGui,
you will merely need Node.js, npm, a code editor of your choice, and a
rudimentary understanding of your operating system's command line client.

## Setting up macOS

**Requirements:**

- NodeGui supports macOS 10.10 (Yosemite) and up. NodeGui currently only supports 64bit OS.
- Python 2.x , Make, GCC v7
- Currently supported Node.Js versions are 12.x and up.
- Make sure you dont have spaces inside your home path. NodeGYP has issues with spaces in the path. https://github.com/nodejs/node-gyp/issues/209

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

## Setting up Windows

> NodeGui supports Windows 7 and later versions – attempting to develop NodeGui
> applications on earlier versions of Windows might not work. NodeGui currently only supports 64bit OS.


**Requirements:**

- Python 2.x, Visual studio 2017
- Currently supported Node.Js versions are 12.x and up.
- Make sure you dont have spaces inside your home path. NodeGYP has issues with spaces in the path. https://github.com/nodejs/node-gyp/issues/209


We strongly suggest you use some kind of version manager for Node.Js. This would allow you to switch to any version of nodejs quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

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

## Setting up Linux

> NodeGui currently supports Ubuntu 17.10 and Debian 10 and up. Although other linux distributions can also be easily supported. NodeGui currently only supports 64bit OS. NodeGui can technically support lower versions of linux that what is mentioned here provided gcc >= v7 and libc version >= GLIBC_2.25

**Requirements:**

- Python 2.x , Make, GCC v7
- Currently supported Node.Js versions are 12.x and up.
- Make sure you dont have spaces inside your home path. NodeGYP has issues with spaces in the path. https://github.com/nodejs/node-gyp/issues/209
- It is advisable to do: `On Ubuntu: $ sudo apt-get install pkg-config build-essentials`

We strongly suggest you use some kind of version manager for Node.Js. This would allow you to switch to any version of nodejs quite easily. We recommend `nvm`: https://github.com/nvm-sh/nvm

We strongly recommend Powershell as preferred terminal in Windows.

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

## A Good Editor

We might suggest two free popular editors:
GitHub's [Atom][atom] and Microsoft's [Visual Studio Code][code]. Both of
them have excellent JavaScript support.

If you are one of the many developers with a strong preference, know that
virtually all code editors and IDEs these days support JavaScript.

[code]: https://code.visualstudio.com/
[atom]: https://atom.io/
