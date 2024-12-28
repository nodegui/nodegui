"use strict";(self.webpackChunknodegui=self.webpackChunknodegui||[]).push([[2634],{30662:(e,i,t)=>{t.r(i),t.d(i,{default:()=>$});var n=t(96540),s=t(44586),r=t(41957),a=t(83724);const o=a.Ay.header``,c=a.Ay.section`
  display: flex;
  align-items: center;
  padding: 2rem 0 0 0;
  width: 100%;
  margin: 0 auto;
`,d=a.Ay.div`
  margin-left: auto;
  margin-right: auto;
  max-width: 1140px;
  max-width: var(--ifm-container-width);
  padding-left: 1rem;
  padding-left: var(--ifm-spacing-horizontal);
  padding-right: 1rem;
  padding-right: var(--ifm-spacing-horizontal);
  width: 100%;
`,l=a.Ay.div`
  flex-direction: column;
  display: flex;
  align-items: center;
`,h=(a.Ay.ol``,a.Ay.li`
  font-size: 20px;
`,a.Ay.h1``),p=a.Ay.h2``;a.Ay.h4`
  font-weight: 600;
`;var m=t(74848);const x=a.Ay.code`
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
`,g=a.Ay.div`
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
`,u=a.Ay.h4`
    font-weight: 400;
`,j=a.Ay.div`
    width: 600px;
    max-width: 100%;
`,f=()=>(0,m.jsx)(c,{id:"quick-start",children:(0,m.jsx)(d,{children:(0,m.jsxs)(l,{children:[(0,m.jsx)(p,{children:"Give it a try"}),(0,m.jsxs)(j,{children:[(0,m.jsx)(u,{children:"1. Run these commands"}),(0,m.jsxs)(g,{children:[(0,m.jsx)(x,{children:"git clone https://github.com/sedwards2009/nodegui-simple-starter.git"}),(0,m.jsx)(x,{children:"cd nodegui-simple-starter"}),(0,m.jsx)(x,{children:"npm install"}),(0,m.jsx)(x,{children:"npm run build"}),(0,m.jsx)(x,{children:"npm run run"})]}),(0,m.jsxs)(u,{children:["2."," ",(0,m.jsx)("a",{className:"LinkBasics",href:"docs/guides/getting-started",children:"Learn the basics"})," ","or dive deeper and take a"," ",(0,m.jsx)("a",{className:"LinkBasics",href:"docs/api/manual/synopsis",children:"look at the APIs."})]})]})]})})}),y={heroBanner:"heroBanner_UJJx",buttons:"buttons_pzbO",features:"features_keug",featureImage:"featureImage_yA8i"};var w=t(86025);const b=a.Ay.a`
    ${e=>{switch(e.type){case"primary":return"\n          color: white; \n          background: var(--ifm-color-primary);\n          &:hover {\n            color: white;\n            text-decoration: none;\n            background: var(--ifm-color-primary-dark);\n          }\n        ";case"secondary":return'\n          &::after {\n            content: "\u203a";\n            font-size: 24px;\n            margin-left: 5px;\n            text-align: center;\n          }\n        '}}}
    padding: 0.7rem 1.1rem;
    font-size: 1.2em;
`,v=(0,a.Ay)(h)`
    font-size: 3em;
    font-weight: 600;
`,k=a.Ay.p`
    font-size: 1.6em;
    text-align: center;
`,A=a.Ay.img`
    max-width: 170px;
`,N=(0,a.Ay)(o)`
    padding-bottom: 40px;
`;function S(){return(0,m.jsxs)("div",{children:[(0,m.jsx)(b,{type:"primary",href:"#quick-start",target:"_self",children:"Quick start"}),(0,m.jsx)(b,{type:"secondary",href:(0,w.Ay)("docs/guides/getting-started"),target:"_self",children:"Learn basics"})]})}const C=()=>{const e=(0,s.A)(),{siteConfig:i={}}=e;return(0,m.jsx)(N,{children:(0,m.jsx)(d,{children:(0,m.jsxs)(l,{children:[(0,m.jsx)(A,{src:"img/logox200.png"}),(0,m.jsx)(v,{children:i.title}),(0,m.jsx)(k,{children:i.tagline}),(0,m.jsx)("div",{className:y.buttons,children:(0,m.jsx)(S,{})})]})})})};var _=t(46942),z=t.n(_);const J=[{title:(0,m.jsx)(m.Fragment,{children:"Web Technologies"}),imageUrl:"img/undraw_website_setup.svg",description:(0,m.jsxs)(m.Fragment,{children:["With NodeGui, you can build your app with familiar web technologies like CSS and JavaScript. There is even a ",(0,m.jsx)("a",{href:"https://react.nodegui.org",children:"React based version"}),"."]})},{title:(0,m.jsx)(m.Fragment,{children:"Open Source"}),imageUrl:"img/undraw_code_review.svg",description:(0,m.jsx)(m.Fragment,{children:"NodeGui is an open source project maintained by an active community of contributors."})},{title:(0,m.jsx)(m.Fragment,{children:" Cross Platform"}),imageUrl:"img/undraw_windows.svg",description:(0,m.jsx)(m.Fragment,{children:"Compatible with Mac, Windows, and Linux, NodeGui apps build and run on three platforms."})}],T=()=>(0,m.jsx)("section",{className:y.features,children:(0,m.jsx)("div",{className:"container",children:(0,m.jsx)("div",{className:"row",children:J.map(((e,i)=>{let{imageUrl:t,title:n,description:s}=e;return(0,m.jsxs)("div",{className:z()("col col--4",y.feature),children:[t&&(0,m.jsx)("div",{className:"text--center",children:(0,m.jsx)("img",{className:y.featureImage,src:(0,w.Ay)(t),alt:n})}),(0,m.jsx)("h3",{className:"text--center",children:n}),(0,m.jsx)("p",{className:"text--center",children:s})]},i)}))})})}),G=e=>(0,m.jsx)(c,{children:(0,m.jsxs)("div",{className:"SplitView",children:[(0,m.jsx)("div",{className:`column first left ${e.columnOneClass}`,children:e.columnOne}),(0,m.jsx)("div",{className:`column last right ${e.columnTwoClass}`,children:e.columnTwo})]})}),O=a.Ay.img`
  max-height: 300px;
  padding-bottom: 40px;
`,L=()=>{const e=()=>(0,m.jsx)(O,{src:"img/demo.png"}),i=()=>(0,m.jsxs)("div",{children:[(0,m.jsx)("h3",{children:"Create native apps for Windows, macOS and Linux using JavaScript and CSS"}),(0,m.jsx)("p",{children:"NodeGui lets you create truly native apps while not compromising on your users' experience, by providing a core set of platform agnostic native widgets that map directly to the platform\u2019s native UI building blocks."}),(0,m.jsxs)("p",{children:["NodeGui widgets are built on top of"," ",(0,m.jsx)("a",{href:"https://www.qt.io/",target:"_blank",children:"Qt"})," ","which is a mature desktop apps framework. NodeGui widgets are extremely customizable just like in the web but does"," ",(0,m.jsx)("strong",{children:"NOT"})," use a Web browser under the hood."]})]});return(0,m.jsx)(G,{columnTwoClass:"text",columnOne:(0,m.jsx)(e,{}),columnTwo:(0,m.jsx)(i,{})})},W=a.Ay.img`
  max-height: 300px;
  padding-bottom: 40px;
`,F=()=>{const e=()=>(0,m.jsx)("div",{children:(0,m.jsx)(W,{src:"img/code-sample.png"})}),i=()=>(0,m.jsxs)("div",{children:[(0,m.jsx)("h3",{children:"Written in JavaScript\u2014rendered with native code by Qt"}),(0,m.jsx)("p",{children:"Apps can be built completely in JavaScript. This enables native app development for whole new teams of developers, and can let existing native teams work much faster."}),(0,m.jsx)("p",{children:"With NodeGui you get flexibility of web and performance of Native desktop apps."})]});return(0,m.jsx)(G,{columnOneClass:"text",columnOne:(0,m.jsx)(i,{}),columnTwo:(0,m.jsx)(e,{})})},U=a.Ay.h2`
  margin-top: 20px;
  margin-bottom: 40px;
`,B=a.Ay.div`
  padding: 40px;
`,I=()=>((0,n.useEffect)((()=>{const e=document.createElement("script");e.src="//cdn.changelog.com/embed.js",e.async=!0,document.body.appendChild(e)}),[]),(0,m.jsx)(c,{id:"quick-start",children:(0,m.jsx)(d,{children:(0,m.jsxs)(l,{children:[(0,m.jsx)(U,{children:"Talks"}),(0,m.jsxs)("ul",{children:[(0,m.jsx)("li",{children:(0,m.jsxs)("div",{children:[(0,m.jsxs)("p",{children:[(0,m.jsx)("a",{href:"https://changelog.com/jsparty/96",children:"JS Party 96: Performant Node desktop apps with NodeGui"})," ","\u2013 Listen on Changelog.com"]}),(0,m.jsx)("audio",{"data-theme":"night","data-src":"https://changelog.com/jsparty/96/embed",src:"https://cdn.changelog.com/uploads/jsparty/96/js-party-96.mp3",preload:"none",class:"changelog-episode",controls:!0})]})}),(0,m.jsx)("li",{children:(0,m.jsxs)("div",{children:[(0,m.jsx)("p",{children:(0,m.jsx)("a",{href:"https://www.meetup.com/KarmaJS/events/265554520/",children:"KarmaJS Nov'19 Stockholm"})}),(0,m.jsx)("iframe",{width:"560",height:"315",src:"https://www.youtube.com/embed/8jH5gaEEDv4",frameborder:"0",allow:"accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture",allowfullscreen:!0})]})})]}),(0,m.jsx)(B,{})]})})}));const $=function(){const e=(0,s.A)(),{siteConfig:i={}}=e;return(0,m.jsxs)(r.A,{title:`Hello from ${i.title}`,description:"Build performant, native and cross-platform desktop applications with JavaScript and CSS \ud83d\ude80",children:[(0,m.jsx)(C,{}),(0,m.jsxs)("main",{children:[(0,m.jsx)(T,{}),(0,m.jsx)(L,{}),(0,m.jsx)(F,{}),(0,m.jsx)(f,{}),(0,m.jsx)(I,{})]})]})}}}]);