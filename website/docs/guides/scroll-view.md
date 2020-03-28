---
sidebar_label: ScrollArea
title: Scroll Area
---

ScrollArea allows you to display a large content (image, list or even plain text) in an area of predefined size. A scroll area is used to display the contents of a child widget within a frame. If the widget exceeds the size of the frame, the view can provide scroll bars so that the entire area of the child widget can be viewed.

## Example

```js
const { QMainWindow, QLabel, QScrollArea } = require('@nodegui/nodegui');

const win = new QMainWindow();
const label = new QLabel();
const scrollArea = new QScrollArea();

scrollArea.setWidget(label);
win.setCentralWidget(scrollArea);
win.show();

global.win = win;

label.setText(`
Contrary to popular belief, 
Lorem Ipsum is not simply random text. 
It has roots in a piece of classical Latin literature from 45 BC, 
making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, 
looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, 
and going through the cites of the word in classical literature, 
discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 
and 1.10.33 of "de Finibus Bonorum et Malorum" (The Extremes of Good and Evil) by Cicero, written in 45 BC. 
This book is a treatise on the theory of ethics, very popular during the Renaissance. 
The first line of Lorem Ipsum, "Lorem ipsum dolor sit amet..", comes from a line in section 1.10.32.

The standard chunk of Lorem Ipsum used since the 1500s
is reproduced below for those interested. 
Sections 1.10.32 and 1.10.33 from "de Finibus Bonorum et Malorum" by Cicero are also 
reproduced in their exact original form, accompanied 
by English versions from the 1914 translation by H. Rackham.


Why do we use it?

It is a long established 
fact that a reader will be distracted by 
the readable content of a page when looking at its layout. 
The point of using Lorem Ipsum is that it has 
a more-or-less normal distribution of letters, 
as opposed to using 'Content here, content here', 
making it look like readable English. 
Many desktop publishing packages and web page 
editors now use Lorem Ipsum as their default model text, 
and a search for 'lorem ipsum' will uncover many web 
sites still in their infancy. Various versions 
have evolved over the years, sometimes by accident, 
sometimes on purpose (injected humour and the like).

`);
```

**TLDR;**

We create a QScrollArea instance and use the setWidget method to insert a widget as its child.
QScrollArea can take any widget as its child.

The result would look like this:

<img src="https://github.com/nodegui/nodegui/releases/download/assets/scrollarea.gif" alt="scroll area" style={{width: '100%', maxWidth: 400}}/>
