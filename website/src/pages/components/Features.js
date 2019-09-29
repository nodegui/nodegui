import React from "react";
import withBaseUrl from "@docusaurus/withBaseUrl";
import styles from "../styles.module.css";
import classnames from "classnames";

const features = [
  {
    title: <>Easy to Use</>,
    imageUrl: "img/undraw_docusaurus_mountain.svg",
    description: (
      <>
        Docusaurus was designed from the ground up to be easily installed and
        used to get your website up and running quickly.
      </>
    )
  },
  {
    title: <>Focus on What Matters</>,
    imageUrl: "img/undraw_docusaurus_tree.svg",
    description: (
      <>
        Docusaurus lets you focus on your docs, and we&apos;ll do the chores. Go
        ahead and move your docs into the <code>docs</code> directory.
      </>
    )
  },
  {
    title: <>Powered by React</>,
    imageUrl: "img/undraw_docusaurus_react.svg",
    description: (
      <>
        Extend or customize your website layout by reusing React. Docusaurus can
        be extended while reusing the same header and footer.
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
              <h3>{title}</h3>
              <p>{description}</p>
            </div>
          ))}
        </div>
      </div>
    </section>
  );
};
