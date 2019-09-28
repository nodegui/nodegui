---
sidebar_label: Debugging
title: Debugging
---

## Application Debugging

Whenever your NodeGui application is not behaving the way you wanted it to,
an array of debugging tools might help you find coding errors, performance
bottlenecks, or optimization opportunities.

Since a NodeGui application runs on Qode. And Qode is essentially Node.Js. We can consider a NodeGui app as a regular NodeJs app. Hence, you can use any debugging tool that you use with Node.Js
One of the most popular way of debugging a Node.Js app is by making use of the [Chromium Developer Tools][node-inspect].

Google offers [excellent documentation for their developer tools][devtools].
We recommend that you make yourself familiar with them - they are usually one
of the most powerful utilities in any NodeGui Developer's tool belt.

## Debugging Qode process

To debug JavaScript that's executed in the Qode/Node process you will need to use an external debugger and
launch Qode with the `--inspect` or `--inspect-brk` switch. Once you run it you can open up Chrome and visit `chrome://inspect` where you should see your app listed.

### Command Line Switches

Use one of the following command line switches to enable debugging of the process:

#### `--inspect=[port]`

Qode will listen for V8 inspector protocol messages on the specified `port`,
an external debugger will need to connect on this port. The default `port` is
`9229`.

```shell
qode --inspect=9229 your/app
```

#### `--inspect-brk=[port]`

Like `--inspect` but pauses execution on the first line of JavaScript.

**Note**

If you are using the official boilerplate `nodegui-starter`, then you can achieve this by running

```
npm run debug
```

### External Debuggers

You will need to use a debugger that supports the V8 inspector protocol.

- Connect Chrome by visiting `chrome://inspect` and selecting to inspect the
  launched NodeGui app present there.
- [Debugging the NodeGui app in VSCode](debugging-in-vscode.md)

[node-inspect]: https://nodejs.org/en/docs/inspector/
[devtools]: https://developer.chrome.com/devtools
