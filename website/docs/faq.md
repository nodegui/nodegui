---
title: FAQ
sidebar_label: FAQ
---

## Why am I having trouble installing Qode?

When running `npm install @nodegui/qode`, some users occasionally encounter
installation errors.

In almost all cases, these errors are the result of network problems and not
actual issues with the `@nodegui/qode` npm package. Errors like `ELIFECYCLE`,
`EAI_AGAIN`, `ECONNRESET`, and `ETIMEDOUT` are all indications of such
network problems. The best resolution is to try switching networks, or
wait a bit and try installing again.

You can also attempt to download Qode directly from
[nodegui/qode/releases](https://github.com/nodegui/qode/releases)
if installing via `npm` is failing.

### My program fails to execute in Linux

Although in most Linux desktop distributions it shouldn't be necessary, on lightweight distributions it might happen that basic xorg libraries are missing and if so the application will fails with an error like `qt.qpa.plugin: Could not load the Qt platform plugin "xcb" in`. If so, you could try installing `qt` package or making sure [Qt dependencies are present](https://doc.qt.io/qt-5/linux-requirements.html).


## Javascript widgets are missing methods and properties as compared to QT widget?

As you would have noticed, the list of methods and properties are less compared to what is present in the Qt's corresponding widget class. This is because we havent written wrappers for them yet. You can help add more methods by following the development guide for contributors. Overtime this gap would reduce.

## When will Qode upgrade to latest Node.js / Qt version?

When a new version of Node.js/Qt gets released, we usually wait for about a month
before upgrading the one in Qode. So we can avoid getting affected by bugs
introduced in new Node.js/Qt versions, which happens very often.

## My app's window/widgets/tray disappeared after a few minutes.

This happens when the variable which is used to store the window/tray gets
garbage collected.

If you encounter this problem, the following articles may prove helpful:

- [Memory Management][memory-management]
- [Variable Scope][variable-scope]

If you want a quick fix, you can make the variables global by changing your
code from this:

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("container");
view.setLayout(new FlexLayout());
```

to this:

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("container");
view.setLayout(new FlexLayout());

global.view = view; //prevent GC
```

[memory-management]: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Memory_Management
[variable-scope]: https://msdn.microsoft.com/library/bzt2dkta(v=vs.94).aspx
