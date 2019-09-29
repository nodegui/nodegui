import React from "react";
import withBaseUrl from "@docusaurus/withBaseUrl";
import styles from "../pages/styles.module.css";
import classnames from "classnames";

const features = [
  {
    title: <>Web Technologies</>,
    imageUrl: "img/undraw_website_setup.svg",
    description: (
      <>
        With NodeGui, you can build your app with familiar web technologies like
        CSS and JavaScript. There is even a{" "}
        <a href="https://react.nodegui.org">React based version</a>.
      </>
    )
  },
  {
    title: <>Open Source</>,
    imageUrl: "img/undraw_code_review.svg",
    description: (
      <>
        NodeGui is an open source project maintained by an active community of
        contributors.
      </>
    )
  },
  {
    title: <> Cross Platform</>,
    imageUrl: "img/undraw_windows.svg",
    description: (
      <>
        Compatible with Mac, Windows, and Linux, NodeGui apps build and run on
        three platforms.
      </>
    )
  }
];
export const Features = () => {
  return (
    <section className={styles.features}>
      <div className="container">
        <div className="row">
          {features.map(({ imageUrl, title, description }, idx) => (
            <div key={idx} className={classnames("col col--4", styles.feature)}>
              {imageUrl && (
                <div className="text--center">
                  <img
                    className={styles.featureImage}
                    src={withBaseUrl(imageUrl)}
                    alt={title}
                  />
                </div>
              )}
              <h3 className="text--center">{title}</h3>
              <p className="text--center">{description}</p>
            </div>
          ))}
        </div>
      </div>
    </section>
  );
};
