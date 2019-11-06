import React, { useEffect } from "react";
import { Section, Container, Center, H2 } from "../components/common";
import styled from "styled-components";

const Heading = styled.h2`
  margin-top: 20px;
  margin-bottom: 40px;
`;

const Spacing = styled.div`
  padding: 40px;
`;

export const Talks = () => {
  useEffect(() => {
    const script = document.createElement("script");
    script.src = "//cdn.changelog.com/embed.js";
    script.async = true;
    document.body.appendChild(script);
  }, []);
  return (
    <Section id="quick-start">
      <Container>
        <Center>
          <Heading>Talks</Heading>
          <ul>
            <li>
              <div>
                <p>
                  <a href="https://changelog.com/jsparty/96">
                    JS Party 96: Performant Node desktop apps with NodeGui
                  </a>{" "}
                  – Listen on Changelog.com
                </p>
                <audio
                  data-theme="night"
                  data-src="https://changelog.com/jsparty/96/embed"
                  src="https://cdn.changelog.com/uploads/jsparty/96/js-party-96.mp3"
                  preload="none"
                  class="changelog-episode"
                  controls
                ></audio>
              </div>
            </li>
            <li>
              <div>
                <p>
                  <a href="https://www.meetup.com/KarmaJS/events/265554520/">
                    KarmaJS Nov'19 Stockholm
                  </a>
                </p>
                <iframe
                  width="560"
                  height="315"
                  src="https://www.youtube.com/embed/8jH5gaEEDv4"
                  frameborder="0"
                  allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"
                  allowfullscreen
                ></iframe>
              </div>
            </li>
          </ul>
          <Spacing />
        </Center>
      </Container>
    </Section>
  );
};
