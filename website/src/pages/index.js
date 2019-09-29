import React from "react";
import Layout from "@theme/Layout";
import useDocusaurusContext from "@docusaurus/useDocusaurusContext";

import { Try } from "./components/Try";
import { Hero } from "./components/Hero";
import { Features } from "./components/Features";
import { CreateNativeApps } from "./components/CreateNativeApps";
import { CodeExample } from "./components/CodeExample";

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
        <CreateNativeApps />
        <CodeExample />
        <Features />
        <Try />
      </main>
    </Layout>
  );
}

export default Home;
