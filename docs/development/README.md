# Contributor's guide

This guide is for everyone who want's to contribute to the development of NodeGui.

Please make sure you have read the [User's guides](/) before reading this guide.

- [Setting up the NodeGui Contributor's Environment](development/setting-up.md)
  - [Setting up macOS](development/setting-up.md#macosx)
  - [Setting up Windows](development/setting-up.md#windows)
  - [Setting up Linux](development/setting-up.md#linux)
- [Getting started](development/getting-started.md)
  - [Code Structure](development/getting-started.md#Code-Structure)
  - [Wrapping a widget: TLDR version](development/getting-started.md#Wrapping-a-widget)
  - [Learning Materials](development/getting-started.md#Learning-Materials)
- [Styling](development/styling.md)
  - [Painting](development/styling.md#painting)
  - [Layout](development/styling.md#layout)
- [Signal and Event Handling](development/signal_and_event_handling.md)
- [Debugging](development/debugging.md)
- [Common Errors](development/common_errors.md)
- [Wrapping a Widget: Detailed](development/wrapping_widgets.md)
- [Getting Support](tutorial/support.md)


# Where to start or How can you help?

 You can follow the contributors guide above to get a gist.

 It is fairly straightforward to get started. I would start with a project of my own and start adding missing functionalities.
 
 Or simply put I would recommend you start by adding an unexported method to an existing widget.
 
 **For example:**
 
 You could add the corresponding Qt method to QProgressbar
 https://doc.qt.io/qt-5/qprogressbar.html#textVisible-prop to get a grip on it.

 This PR can be used as a guide
 
 https://github.com/nodegui/nodegui/issues/36
 
 https://github.com/nodegui/nodegui/pull/39

 You can also take a look at few bugs or the issue board here to know what you can pick up if you are out of ideas.
 
 https://github.com/nodegui/nodegui/projects/
 
 https://github.com/nodegui/react-nodegui/projects/
