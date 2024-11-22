---
sidebar_label: Images
title: Images
---

Images are very important for making your app more interesting.

In NodeGui, QLabel is typically used for displaying text, but it can also display an image.

A very minimal example would look like this:

```js
const { QMainWindow, QPixmap, QLabel } = require('@nodegui/nodegui');

const win = new QMainWindow();
const label = new QLabel();

const absoluteImagePath = '/Users/atulr/Project/nodegui/nodegui/extras/assets/logox200.png';
const image = new QPixmap();
image.load(absoluteImagePath);

label.setPixmap(image);

win.setCentralWidget(label);
win.show();
global.win = win;
```

Here,

-   We first create a label using QLabel.
-   Then we create an instance of QPixmap. `QPixmap` is used to represent the image in memory. QPixmap is not a widget, so it can’t be shown on the screen as it is.
-   Hence, we use QLabel instance and set QPixmap to it.

The result would look like this:

<img src="https://github.com/nodegui/nodegui/releases/download/assets/image-example.png" alt="image example" style={{width: '100%', maxWidth: 400}}/>

## Loading an image using a url

Lets say we want to load an image from a URL on the internet. In this case we can't use the `load()` method of QPixmap since its only reserved for local file system images.

Instead, we’ll download the image using axios as a buffer and use the QPixmap's method loadFromData instead.

So let’s start with the axios installation:

```sh
npm i axios
```

Now let’s create a function that will take a URL as a parameter and will return a configured QMovie instance for the GIF:

```js
const axios = require('axios');

async function getPixmap(url) {
    const { data } = await axios.get(url, { responseType: 'arraybuffer' });
    const pixmap = new QPixmap();
    pixmap.loadFromData(data);
    return pixmap;
}
```

The `getPixmap` function takes in a URL, tells axios to download the image as a buffer, and then uses that buffer to create a QPixmap instance.

Since getPixmap returns a promise, we need to make some changes to the code. After some minor refactoring, we end up with the following.

```js
const { QMainWindow, QPixmap, QLabel } = require('@nodegui/nodegui');
const axios = require('axios');
async function getPixmap(url) {
    const { data } = await axios.get(url, { responseType: 'arraybuffer' });
    const pixmap = new QPixmap();
    pixmap.loadFromData(data);
    return pixmap;
}
async function main() {
    const win = new QMainWindow();
    const label = new QLabel();
    const image = await getPixmap('https://upload.wikimedia.org/wikipedia/commons/9/96/Nature-morocco.jpg');
    label.setPixmap(image);
    win.setCentralWidget(label);
    win.show();
    global.win = win;
}
main().catch(console.error);
```

And the result would look like this:

<img src="https://github.com/nodegui/nodegui/releases/download/assets/image-from-url.png" alt="image url example" style={{width: '100%', maxWidth: 400}}/>

## Some tips

### Showing large images

The above examples wont allow you to show a huge image without either cutting it off or making the widget huge.

In order to do that:

-   You can create the image instance using QPixmap
-   Set the image instance to a QLabel
-   And finally set the QLabel to a QScrollArea that allows you to scroll the image if the size of the image is too big.

### Animated images

In order to use animated images

-   Instead of QPixmap use QMovie
-   And instead of a label's `setPixmap` method use `setMovie`

More details on it can be seen on this blog post : [https://www.sitepoint.com/build-native-desktop-gif-searcher-app-using-nodegui/](https://www.sitepoint.com/build-native-desktop-gif-searcher-app-using-nodegui/)
