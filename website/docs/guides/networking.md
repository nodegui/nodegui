---
sidebar_label: Networking
title: Networking
---

Many apps need to load resources from a remote URL. You may want to make a POST request to a REST API, or you may need to fetch a chunk of static content from another server.

Remember that NodeGui apps do not run in a browser and hence do not have access to browser apis. NodeGui app is essentially a Node.js app.

And in a typical Node.js application you would use a third party library like [axios](https://github.com/axios/axios), [node-fetch](https://github.com/node-fetch/node-fetch) or [frisbee](https://github.com/niftylettuce/frisbee) for achieving this functionality.

## Using Node Fetch

[Node Fetch](https://github.com/node-fetch/node-fetch) is a light-weight module that brings window.fetch to Node.js.

An example usage would look like this:

```js
const fetch = require('node-fetch');
async function getData() {
    try {
        let response = await fetch('https://somewebsite.com/some.json');
        let responseJson = await response.json();
        return responseJson.somecontent;
    } catch (error) {
        console.error(error);
    }
}
```

Take a look at the [Node Fetch docs](https://github.com/node-fetch/node-fetch) for a full list of properties.
