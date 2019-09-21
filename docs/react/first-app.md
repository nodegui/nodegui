# Writing Your First React NodeGUI App

React NodeGUI enables you to create desktop applications with JavaScript (React). React NodeGUI is a react renderer for NodeGui. This makes it extremely memory and CPU efficient as compared to other popular Javascript Desktop GUI solutions.

## Hello World

Clone and run the code in this tutorial by using the
[`nodegui/react-nodegui-starter`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh
# Clone the repository
$ git clone https://github.com/nodegui/react-nodegui-starter
# Go into the repository
$ cd react-nodegui-starter
# Install dependencies
$ npm install
# Run the app
$ npm start
```

As far as development is concerned, an React NodeGUI application is essentially a
Node.js application. The starting point is a `package.json` that is identical
to that of a Node.js module. A most basic React NodeGUI app would have the following
folder structure:

```text
your-app/
├── package.json
├── index.js
```

## React NodeGUI Development in a Nutshell

React NodeGUI apps are developed in JavaScript using the same principles and methods
found in React Native development. React NodeGUI exposes native widgets in the form of React components. Also, since we are now not running inside a browser, there is no DOM. Hence browser based APIs are NOT available. But you do have access to complete NodeJs APIs along with some exported Qt Apis.All APIs related to React NodeGUI are found in `@nodegui/react-nodegui` module. Additionally you can also access APIs and features from NodeGui via
the `@nodegui/nodegui` module. These can be required like any other Node.js module:

```javascript
require("@nodegui/nodegui");
require("@nodegui/react-nodegui");
```

A simple `main.js`.

```javascript
import { Renderer, View, Text, Button, Window } from "@nodegui/react-nodegui";
import React, { useState } from "react";

const App = () => {
  const [time, setTime] = useState(new Date());
  return (
    <Window minSize={{ width: 500, height: 200 }} styleSheet={styleSheet}>
      <View id="container">
        <Button
          text="Update Time"
          on={{
            clicked: () => setTime(new Date())
          }}
        />
        <Text id="result">{`${time}`}</Text>
        <Text id="result">{`Time in epoc: ${time.getTime()}`}</Text>
      </View>
    </Window>
  );
};

const styleSheet = `
  #container {
    qproperty-flex: 1;
    qproperty-flexDirection: column;
    qproperty-minHeight: '100%';
    qproperty-alignItems: 'center';
    qproperty-justifyContent: 'center';
  }
  #opBtn {
    font-size: 20px;
  }
  #result {
    font-size: 12px;
    qproperty-flex: 1;
    color: cyan;
  }
`;

Renderer.render(<App />, () => {});
```

The `index.js` should create windows and handle all the system events your
application might encounter.

## Running Your App

You can try your app by running `npm start` from your application's
directory.

## Trying this Example

Clone and run the code in this tutorial by using the
[`nodegui/react-nodegui-starter`][quick-start] repository.

**Note**: Running this requires [Git](https://git-scm.com) and [npm](https://www.npmjs.com/).

```sh
# Clone the repository
$ git clone https://github.com/nodegui/react-nodegui-starter
# Go into the repository
$ cd react-nodegui-starter
# Install dependencies
$ npm install
# Run the app
$ npm start
```

[quick-start]: https://github.com/nodegui/react-nodegui-starter
