---
sidebar_label: Debugging in VSCode
title: Debugging in VSCode
---

- **Open a NodeGui project in VSCode.**

  ```sh
  $ git clone https://github.com/sedwards2009/nodegui-simple-starter.git
  $ code nodegui-simple-starter
  ```

- **Add a file `.vscode/launch.json` with the following configuration:**

  ```json
  {
    "version": "0.2.0",
    "configurations": [
      {
        "name": "Debug Qode Process",
        "type": "node",
        "request": "launch",
        "cwd": "${workspaceRoot}",
        "runtimeExecutable": "${workspaceRoot}/node_modules/.bin/qode",
        "windows": {
          "runtimeExecutable": "${workspaceRoot}/node_modules/.bin/qode.exe"
        },
        "args": ["./dist/index.js"],
        "outputCapture": "std"
      },
      {
        "command": "npx webpack --devtool source-map && npx qode --inspect ./dist/index.js",
        "name": "Debug for Cmd",
        "request": "launch",
        "type": "node-terminal"
      },
      {
        "command": "npx webpack --devtool source-map; npx qode --inspect ./dist/index.js",
        "name": "Debug for PowerShell",
        "request": "launch",
        "type": "node-terminal"
      },
    ]
  }
  ```

  **Tip**:
    1. You could also configure a preLaunchTask for building typescript before launching the debugger everytime.
    2. enable source-map feature for debugging.

- **Debugging**

  Set some breakpoints in `index.js`, and start debugging in the [Debug View](https://code.visualstudio.com/docs/editor/debugging). You should be able to hit the breakpoints.
