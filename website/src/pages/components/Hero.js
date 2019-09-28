import React from "react";
import useDocusaurusContext from "@docusaurus/useDocusaurusContext";
import styled from "styled-components";
import { Header, Container, H1, Center } from "./common";
import styles from "../styles.module.css";
import withBaseUrl from "@docusaurus/withBaseUrl";

const ActionButton = styled.a`
  ${props => {
    switch (props.type) {
      case "primary":
        return `
          color: white; 
          background: var(--ifm-color-primary);
          &:hover {
            color: white;
            text-decoration: none;
            background: var(--ifm-color-primary-dark);
          }
        `;
      case "secondary":
        return `
          &::after {
            content: "›";
            font-size: 24px;
            margin-left: 5px;
            text-align: center;
          }
        `;
    }
  }}
  padding: 0.7rem 1.1rem;
  font-size: 1.2em;
`;
const Title = styled(H1)`
  font-size: 3em;
  font-weight: 600;
`;
const Tagline = styled.p`
  font-size: 1.6em;
  text-align: center;
`;
const MainLogo = styled.img`
  max-width: 170px;
`;

function ActionContainer() {
  return (
    <div>
      <ActionButton type="primary" href={"#quick-start"} target="_self">
        Quick start
      </ActionButton>
      <ActionButton
        type="secondary"
        href={withBaseUrl("docs/guides/getting-started")}
        target="_self"
      >
        Learn basics
      </ActionButton>
    </div>
  );
}

export const Hero = () => {
  const context = useDocusaurusContext();
  const { siteConfig = {} } = context;
  return (
    <Header>
      <Container>
        <Center>
          <MainLogo src={"img/logox200.png"} />
          <Title>{siteConfig.title}</Title>
          <Tagline>{siteConfig.tagline}</Tagline>
          <div className={styles.buttons}>
            {/* <Link
              className={classnames(
                "button button--outline button--secondary button--lg",
                styles.getStarted
              )}
              to={withBaseUrl("docs/guides/getting-started")}
            >
              Get Started
            </Link> */}
            <ActionContainer />
          </div>
        </Center>
      </Container>
    </Header>
  );
};
