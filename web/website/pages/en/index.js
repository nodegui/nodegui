const React = require("react");
const CompLibrary = require("../../core/CompLibrary.js");

const MarkdownBlock = CompLibrary.MarkdownBlock; /* Used to read markdown */
const Container = CompLibrary.Container;
const GridBlock = CompLibrary.GridBlock;

function ActionButton({ href, type = "primary", target, children }) {
  return (
    <a className={`ActionButton ${type}`} href={href} target={target}>
      {children}
    </a>
  );
}

function HomeCallToAction() {
  return (
    <div>
      <ActionButton type="primary" href={"#quick-start"} target="_self">
        Quick start
      </ActionButton>
      <ActionButton
        type="secondary"
        href={"docs/guides/getting-started"}
        target="_self"
      >
        Learn basics
      </ActionButton>
    </div>
  );
}
class HomeSplash extends React.Component {
  render() {
    const { siteConfig } = this.props;
    const { baseUrl } = siteConfig;

    const SplashContainer = props => (
      <div className="homeContainer">
        <div className="homeSplashFade">
          <div className="wrapper homeWrapper">{props.children}</div>
        </div>
      </div>
    );

    const Logo = props => (
      <div className="home-page-logo">
        <img
          src={props.img_src}
          alt="Project Logo"
          className="home-page-logo-img"
        />
      </div>
    );

    const ProjectTitle = () => (
      <h2 className="projectTitle">
        {siteConfig.title}
        <small style={{ maxWidth: 500, margin: "10px auto", lineHeight: 1.3 }}>
          {siteConfig.tagline}
        </small>
      </h2>
    );

    const PromoSection = props => (
      <div className="section promoSection">
        <div className="promoRow">
          <div className="pluginRowBlock">{props.children}</div>
        </div>
      </div>
    );

    return (
      <SplashContainer>
        <img
          src={`${baseUrl}img/undraw_windows.svg`}
          className="home-page-main-illustration"
        />
        <div className="inner">
          <Logo img_src={`${baseUrl}img/logo.svg`} />
          <ProjectTitle siteConfig={siteConfig} />
          <PromoSection>
            <HomeCallToAction />
          </PromoSection>
        </div>
      </SplashContainer>
    );
  }
}

function Heading({ text }) {
  return <h2 className="Heading">{text}</h2>;
}

function TextColumn({ title, text, moreContent }) {
  return (
    <React.Fragment>
      <Heading text={title} />
      <MarkdownBlock>{text}</MarkdownBlock>
      {moreContent}
    </React.Fragment>
  );
}

class Index extends React.Component {
  render() {
    const { config: siteConfig, language = "" } = this.props;
    const { baseUrl } = siteConfig;

    const Block = props => (
      <Container
        padding={["bottom", "top"]}
        id={props.id}
        background={props.background}
      >
        <GridBlock
          align="center"
          contents={props.children}
          layout={props.layout}
        />
      </Container>
    );

    const FeatureCallout = () => (
      <div
        className="productShowcaseSection paddingBottom"
        style={{ textAlign: "center" }}
      >
        <h2>Feature Callout</h2>
        <MarkdownBlock>These are features of this project</MarkdownBlock>
      </div>
    );

    function Heading({ text }) {
      return <h2 className="Heading">{text}</h2>;
    }

    function Section({
      element = "section",
      children,
      id,
      className,
      background = "light"
    }) {
      const El = element;
      return (
        <El id={id} className={`Section ${className} ${background}`}>
          {children}
        </El>
      );
    }

    function TwoColumns({ columnOne, columnTwo, reverse }) {
      return (
        <div className={`TwoColumns ${reverse ? "reverse" : ""}`}>
          <div className={`column first ${reverse ? "right" : "left"}`}>
            {columnOne}
          </div>
          <div className={`column last ${reverse ? "left" : "right"}`}>
            {columnTwo}
          </div>
        </div>
      );
    }

    function NativeCode() {
      return (
        <Section className="NativeCode" background="tint">
          <TwoColumns
            columnOne={
              <TextColumn
                title="Written in JavaScript—rendered with native code"
                text={`React primitives render to native platform UI, meaning your app uses the same native platform APIs other apps do. Many platforms, one React. Create platform-specific versions of components so a single codebase can share code across platforms. With React Native, one team can maintain two platforms and share a common technology—React.`}
              />
            }
            columnTwo={
              <MarkdownBlock>{`
                import React from 'react';
                import {Text, View} from 'react-native';
                import {Header} from './Header';

                const WelcomeScreen = () => 
                  <View>
                    <Header title="Welcome to React Native"/>
                    <Text style={header}>Step One</Text>
                    <Text>
                      Edit App.js to change this screen and turn it
                      into your app.
                    </Text>
                    <Text style={header}>See Your Changes</Text>
                    <Text>
                      Press Cmd + R inside the simulator to reload
                      your app’s code.
                    </Text>
                    <Text style={header}>Debug</Text>
                    <Text>
                      Press Cmd + M or Shake your device to open the
                      React Native Debug Menu.
                    </Text>
                    <Text style={header}>Learn</Text>
                    <Text>
                      Read the docs to discover what to do next:
                    </Text>
                  </View>
                 `}</MarkdownBlock>
            }
          />
        </Section>
      );
    }

    function QuickStart() {
      return (
        <Section id="quick-start" className="GetStarted" background="dark">
          <div className="content">
            <Heading text="Give it a try" />
            <ol className="steps">
              <li>
                <p>Run these commands</p>
                <div class="terminal">
                  <code>
                    git clone https://github.com/nodegui/nodegui-starter
                  </code>
                  <code>cd nodegui-starter</code>
                  <code>npm install</code>
                  <code>npm start</code>
                </div>
              </li>
              <li>
                <p>
                  <a
                    className="LinkBasics"
                    href={"docs/guides/getting-started"}
                  >
                    Learn the basics
                  </a>{" "}
                  or dive deeper and take a{" "}
                  <a className="LinkBasics" href={"docs/api/QApplication"}>
                    look at the APIs.
                  </a>
                </p>
              </li>
            </ol>
          </div>
        </Section>
      );
    }

    const Description = () => (
      <Block background="dark">
        {[
          {
            content:
              "This is another description of how this project is useful",
            image: `${baseUrl}img/undraw_note_list.svg`,
            imageAlign: "right",
            title: "Description"
          }
        ]}
      </Block>
    );

    const LearnHow = () => (
      <Block background="light">
        {[
          {
            content:
              "Each new Docusaurus project has **randomly-generated** theme colors.",
            image: `${baseUrl}img/undraw_youtube_tutorial.svg`,
            imageAlign: "right",
            title: "Randomly Generated Theme Colors"
          }
        ]}
      </Block>
    );

    const Features = () => (
      <Block layout="fourColumn">
        {[
          {
            content: "This is the content of my feature",
            image: `${baseUrl}img/undraw_react.svg`,
            imageAlign: "top",
            title: "Feature One"
          },
          {
            content: "The content of my second feature",
            image: `${baseUrl}img/undraw_operating_system.svg`,
            imageAlign: "top",
            title: "Feature Two"
          }
        ]}
      </Block>
    );

    const Showcase = () => {
      if ((siteConfig.users || []).length === 0) {
        return null;
      }

      const showcase = siteConfig.users
        .filter(user => user.pinned)
        .map(user => (
          <a href={user.infoLink} key={user.infoLink}>
            <img src={user.image} alt={user.caption} title={user.caption} />
          </a>
        ));

      const pageUrl = page => baseUrl + (language ? `${language}/` : "") + page;

      return (
        <div className="productShowcaseSection paddingBottom">
          <h2>Who is Using This?</h2>
          <p>This project is used by all these people</p>
          <div className="logos">{showcase}</div>
          <div className="more-users">
            <a className="button" href={pageUrl("users.html")}>
              More {siteConfig.title} Users
            </a>
          </div>
        </div>
      );
    };

    return (
      <div>
        <HomeSplash siteConfig={siteConfig} language={language} />
        <div className="mainContainer">
          <Features />
          <NativeCode />
          <LearnHow />
          <FeatureCallout />
          <Description />
          <QuickStart />
          <Showcase />
        </div>
      </div>
    );
  }
}

module.exports = Index;
