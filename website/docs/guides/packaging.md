---
sidebar_label: Packaging
title: Packaging
---

In order to distribute your finished app, you can use [@nodegui/packer](https://github.com/nodegui/packer)

- **Step 1: (Run this command only once)**

  ```sh
  npx nodegui-packer --init MyAppName
  ```

  This will produce the deploy directory containing the template. You can modify this to suite your needs. Like add icons, change the name, description and add other native features or dependencies. Make sure you commit this directory.

- **Step 2: (Run this command every time you want to build a new distributable)**

  Next you can run the pack command:

  ```sh
  npm run build
  ```

  This will produce the js bundle along with assets inside the ./dist directory

  ```sh
  npx nodegui-packer --pack ./dist
  ```

  This will build the distributable using @nodegui/packer based on your template. The output of the command is found under the build directory. You should gitignore the build directory.

  More details about packer can be found here: https://github.com/nodegui/packer
