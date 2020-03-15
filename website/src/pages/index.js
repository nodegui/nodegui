import React from 'react';
import useDocusaurusContext from '@docusaurus/useDocusaurusContext';
import Layout from '@theme/Layout';
import { Try } from '../components/Try';
import { Hero } from '../components/Hero';
import { Features } from '../components/Features';
import { CreateNativeApps } from '../components/CreateNativeApps';
import { CodeExample } from '../components/CodeExample';
import { Talks } from '../components/Talks';

import './styles.module.css';

function Home() {
    const context = useDocusaurusContext();
    const { siteConfig = {} } = context;
    return (
        <Layout
            title={`Hello from ${siteConfig.title}`}
            description="Build performant, native and cross-platform desktop applications with JavaScript and CSS 🚀"
        >
            <Hero />
            <main>
                <Features />
                <CreateNativeApps />
                <CodeExample />
                <Try />
                <Talks />
            </main>
        </Layout>
    );
}
export default Home;
