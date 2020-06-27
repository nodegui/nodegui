---
sidebar_label: Drag and drop
title: Drag and drop
---

NodeGui supports drag and drop functionality.

In order to enable a widget to accept drops you need call

```js
widget.setAcceptDrops(true);
```

Following this you can then listen to few QEvents like `DragEnter`, `DragMove`, `DragLeave` and `Drop`

The complete code would look something like this:

```js
widget.setAcceptDrops(true);

widget.addEventListener(WidgetEventTypes.DragEnter, (e) => {
    let ev = new QDragMoveEvent(e);
    console.log('dragEnter', ev.proposedAction());
    let mimeData = ev.mimeData();
    mimeData.text(); //Inspection of text works
    console.log('mimeData', {
        hasColor: mimeData.hasColor(),
        hasHtml: mimeData.hasHtml(),
        hasImage: mimeData.hasImage(),
        hasText: mimeData.hasText(),
        hasUrls: mimeData.hasUrls(),
        html: mimeData.html(),
        text: mimeData.text(),
    }); //Inspection of MIME data works
    let urls = mimeData.urls(); //Get QUrls
    for (let url of urls) {
        let str = url.toString();
        console.log('url', str); //Log out Urls in the event
    }
    ev.accept(); //Accept the drop event, which is crucial for accepting further events
});
widget.addEventListener(WidgetEventTypes.DragMove, (e) => {
    let ev = new QDragMoveEvent(e);
    console.log('dragMove');
});
widget.addEventListener(WidgetEventTypes.DragLeave, (e) => {
    console.log('dragLeave', e);
    let ev = new QDragLeaveEvent(e);
    ev.ignore(); //Ignore the event when it leaves
    console.log('ignored', ev);
});
widget.addEventListener(WidgetEventTypes.Drop, (e) => {
    let dropEvent = new QDropEvent(e);
    let mimeData = dropEvent.mimeData();
    console.log('dropped', dropEvent.type());
    let urls = mimeData.urls();
    for (let url of urls) {
        let str = url.toString();
        console.log('url', str); //Example of inspection of dropped data.
    }
});
```
