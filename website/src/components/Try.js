import React from 'react';
import styled from 'styled-components';
import { Section, Container, Center, H2, H4 } from '../components/common';

const Code = styled.code`
    color: white !important;
    background: black;
    font-size: 14px;
    position: relative;
    &::before {
        content: '$';
        position: absolute;
        left: -13px;
        color: gray;
    }
`;
const Terminal = styled.div`
    background: black;
    display: flex;
    flex-direction: column;
    border: 1px solid gray;
    border-bottom: none;
    border-top-left-radius: 10px;
    border-top-right-radius: 10px;
    padding: 50px 30px 30px 30px;
    width: 600px;
    max-width: 100%;
    position: relative;
    margin-bottom: 20px;
    &::before {
        content: '○ ○ ○';
        color: gray;
        font-size: 14px;
        position: absolute;
        left: 15px;
        top: 5px;
    }
`;

const SubTitle = styled.h4`
    font-weight: 400;
`;
const Description = styled.div`
    width: 600px;
    max-width: 100%;
`;

export const Try = () => {
    return (
        <Section id="quick-start">
            <Container>
                <Center>
                    <H2>Give it a try</H2>
                    <Description>
                        <SubTitle>1. Run these commands</SubTitle>
                        <Terminal>
                            <Code>git clone https://github.com/sedwards2009/nodegui-simple-starter.git</Code>
                            <Code>cd nodegui-simple-starter</Code>
                            <Code>npm install</Code>
                            <Code>npm run build</Code>
                            <Code>npm run run</Code>
                        </Terminal>
                        <SubTitle>
                            2.{' '}
                            <a className="LinkBasics" href={'docs/guides/getting-started'}>
                                Learn the basics
                            </a>{' '}
                            or dive deeper and take a{' '}
                            <a className="LinkBasics" href={'docs/api/manual/synopsis'}>
                                look at the APIs.
                            </a>
                        </SubTitle>
                    </Description>
                </Center>
            </Container>
        </Section>
    );
};
