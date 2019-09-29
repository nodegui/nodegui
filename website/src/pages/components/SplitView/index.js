import { Section } from "../common";
import "./styles.modules.css";
import React from "react";

export const SplitView = props => {
  return (
    <Section>
      <div className="SplitView">
        <div className={`column first right ${props.columnOneClass}`}>
          {props.columnOne}
        </div>
        <div className={`column last left ${props.columnTwoClass}`}>
          {props.columnTwo}
        </div>
      </div>
    </Section>
  );
};
