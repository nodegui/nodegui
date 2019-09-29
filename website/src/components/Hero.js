import React from "react";
import useDocusaurusContext from "@docusaurus/useDocusaurusContext";
import styled from "styled-components";
import { Header, Container, H1, Center } from "./common";
import styles from "../pages/styles.module.css";
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

const MainHeader = styled(Header)`
  padding-bottom: 40px;
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
    <MainHeader>
      <Container>
        <Center>
          <MainLogo src={"img/logox200.png"} />
          <Title>{siteConfig.title}</Title>
          <Tagline>{siteConfig.tagline}</Tagline>
          <div className={styles.buttons}>
            <ActionContainer />
          </div>
        </Center>
      </Container>
    </MainHeader>
  );
};
