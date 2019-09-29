import React from "react";
import { SplitView } from "./SplitView";

const sourceCode = `
\`\`\`js
const { QLabel, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();

const label = new QLabel(win);
label.setText("Hello world");
label.setInlineStyle("color: green; background-color: white;");

win.show();
global.win = win;

\`\`\`
`;

export const CodeExample = () => {
  const ColumnOne = () => {
    return (
      <div>
        <pre>
          <code>{sourceCode}</code>
        </pre>
      </div>
    );
  };
  const ColumnTwo = () => {
    return (
      <div>
        <h3>Written in JavaScript—rendered with native code by Qt</h3>
        <p>
          Apps can be built completely in JavaScript. This enables native app
          development for whole new teams of developers, and can let existing
          native teams work much faster.
        </p>

        <p>
          With NodeGui you get flexibility of web and perfromance of Native
          desktop apps.
        </p>
      </div>
    );
  };
  return (
    <SplitView
      columnOneClass={"text"}
      columnOne={<ColumnTwo />}
      columnTwo={<ColumnOne />}
    />
  );
};
