---
sidebar_label: Debugging in VSCode
title: Debugging in VSCode
---

- **Open a NodeGui project in VSCode.**

  ```sh
  $ git clone git@github.com:nodegui/nodegui-starter.git
  $ code nodegui-starter
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
      }
    ]
  }
  ```

  **Tip**: You could also configure a preLaunchTask for building typescript before launching the debugger everytime.

- **Debugging**

  Set some breakpoints in `index.js`, and start debugging in the [Debug View](https://code.visualstudio.com/docs/editor/debugging). You should be able to hit the breakpoints.
