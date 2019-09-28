---
sidebar_label: Native Node Modules
title: Using native Node Modules
---

Native Node modules are supported by NodeGui, but since NodeGui is very
likely to use a different V8 version from the Node binary installed on your
system, the modules you use will need to be recompiled for NodeGui's node/v8 version. Otherwise,
you will get the following class of error when you try to run your app:

```sh
Error: The module '/path/to/native/module.node'
was compiled against a different Node.js version using
NODE_MODULE_VERSION $XYZ. This version of Node.js requires
NODE_MODULE_VERSION $ABC. Please try re-compiling or re-installing
the module (for instance, using `npm rebuild` or `npm install`).
```

## How to install native modules

To compile native Node modules against a build of NodeGui that doesn't
match a public release, instruct `npm` to use the version of Qode (NodeJs) you have bundled
with your custom build.

```sh
npm rebuild --nodedir=/path/to/nodegui/vendor/qode
```

or

```sh
qode /path/to/npm rebuild
```

## Troubleshooting

If you installed a native module and found it was not working, you need to check
the following things:

- When in doubt, rebuild native modules with qode first.
- Make sure the native module is compatible with the target platform and
  architecture for your NodeGui app.
- After you upgrade NodeGui, you usually need to rebuild the modules.

## Modules that rely on `node-pre-gyp`

The [`node-pre-gyp` tool][node-pre-gyp] provides a way to deploy native Node
modules with prebuilt binaries, and many popular modules are using it.

Usually those modules work fine under NodeGui, but sometimes when NodeGui uses
a newer version of V8 than Node and/or there are ABI changes, bad things may
happen. So in general, it is recommended to always build native modules from
source code.

[node-pre-gyp]: https://github.com/mapbox/node-pre-gyp
