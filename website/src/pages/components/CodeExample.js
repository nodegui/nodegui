import React from "react";
import { SplitView } from "./SplitView";

export const CodeExample = () => {
  const ColumnTwo = () => {
    return <img style={{ maxHeight: 230 }} src="img/demo.png" />;
  };
  const ColumnOne = () => {
    return (
      <div>
        <h3>Written in JavaScript. Rendered with native code by Qt</h3>
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
      columnOne={<ColumnOne />}
      columnTwo={<ColumnTwo />}
    />
  );
};
