import React from "react";
import { SplitView } from "../components/SplitView";
import styled from "styled-components";

const Image = styled.img`
  max-height: 300px;
  padding-bottom: 40px;
`;

export const CodeExample = () => {
  const ColumnOne = () => {
    return (
      <div>
        <Image src="img/code-sample.png" />
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
