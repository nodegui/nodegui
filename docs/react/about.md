# About React Desktop

[React Desktop](https://github.com/master-atul/react-desktop) is an open source library for building cross-platform desktop applications with React and CSS like styling. React Desktop is a custom react renderer for [NodeGui](https://github.com/master-atul/nodegui). React Desktop combines the power and flexibility of React with ease of NodeJs and maturity of Qt5. With React desktop you can build native desktop applications which are underneath Qt applications. This means you could in theory use all of Qt's Gui APIs in Javascript.

As React Native was an improvement over Cordova based applications in Mobile app development with web technologies, React Desktop aims to achieve the same with respect to Electron and other chromium based cross platform Gui solutions. React Desktop wants to incorporate everything that is good about Electron: The ease of development, freedom of styling, Native APIs, great documentation, etc. At the same time it aims to be memory and CPU efficient.

Also, React Desktop (like NodeGui) is built with Typescript which means you get autocomplete and strong typechecking support from the IDE even when used in a Javascript project.

Get started building with React Desktop in the [First React Desktop app](react/first-app.md).

### Updating Dependencies

As soon as a new version of NodeGui is released a corresponding version of React Desktop will be released simultaneously. This makes sure that both NodeGui and React Desktop releases go out in sync. NodeGui an React Desktop will be released as separate packages in order keep everything easily maintainable.

### Versioning

NodeGui/React Desktop follows [`semver`](https://semver.org).
For most applications, and using any recent version of npm,
running `$ npm install @nodegui/react-desktop` will do the right thing.

## Core Philosophy

[See core philosophy of NodeGui](tutorial/about?id=core-philosophy)
