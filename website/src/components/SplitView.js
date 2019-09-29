import { Section } from "./common";
import "./styles.css";
import React from "react";

export const SplitView = props => {
  return (
    <Section>
      <div className="SplitView">
        <div className={`column first left ${props.columnOneClass}`}>
          {props.columnOne}
        </div>
        <div className={`column last right ${props.columnTwoClass}`}>
          {props.columnTwo}
        </div>
      </div>
    </Section>
  );
};
