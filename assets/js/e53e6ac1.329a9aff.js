"use strict";(self.webpackChunknodegui=self.webpackChunknodegui||[]).push([[8554],{77913:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>d,contentTitle:()=>a,default:()=>u,frontMatter:()=>o,metadata:()=>r,toc:()=>l});var i=t(74848),s=t(28453);const o={sidebar_label:"Learn the Basics",title:"Learn the Basics"},a=void 0,r={id:"guides/tutorial",title:"Learn the Basics",description:"NodeGui uses native components instead of web based components as building blocks. So to understand the basic structure of a NodeGui app, you need to be familiar with Javascript or Typescript. This tutorial is aimed at everyone who has some web experience with web development.",source:"@site/docs/guides/tutorial.md",sourceDirName:"guides",slug:"/guides/tutorial",permalink:"/docs/guides/tutorial",draft:!1,unlisted:!1,editUrl:"https://github.com/nodegui/nodegui/edit/master/website/docs/guides/tutorial.md",tags:[],version:"current",frontMatter:{sidebar_label:"Learn the Basics",title:"Learn the Basics"},sidebar:"guides",previous:{title:"Getting started",permalink:"/docs/guides/getting-started"},next:{title:"Styling",permalink:"/docs/guides/styling"}},d={},l=[{value:"NodeGui development in a nutshell",id:"nodegui-development-in-a-nutshell",level:2},{value:"What&#39;s going on here?",id:"whats-going-on-here",level:2},{value:"Trying out the starter project",id:"trying-out-the-starter-project",level:2},{value:"What else other than a basic window?",id:"what-else-other-than-a-basic-window",level:2}];function c(e){const n={a:"a",code:"code",h2:"h2",p:"p",pre:"pre",strong:"strong",...(0,s.R)(),...e.components};return(0,i.jsxs)(i.Fragment,{children:[(0,i.jsx)(n.p,{children:"NodeGui uses native components instead of web based components as building blocks. So to understand the basic structure of a NodeGui app, you need to be familiar with Javascript or Typescript. This tutorial is aimed at everyone who has some web experience with web development."}),"\n",(0,i.jsx)(n.h2,{id:"nodegui-development-in-a-nutshell",children:"NodeGui development in a nutshell"}),"\n",(0,i.jsxs)(n.p,{children:["As far as development is concerned, an NodeGui application is essentially a Node.js application. The starting point is a ",(0,i.jsx)(n.code,{children:"package.json"})," that is identical to that of a Node.js module. A most basic NodeGui app would have the following\nfolder structure:"]}),"\n",(0,i.jsx)(n.pre,{children:(0,i.jsx)(n.code,{className:"language-text",children:"your-app/\n\u251c\u2500\u2500 package.json\n\u251c\u2500\u2500 index.js\n"})}),"\n",(0,i.jsxs)(n.p,{children:["All APIs and features found in NodeGui are accessible through the ",(0,i.jsx)(n.code,{children:"@nodegui/nodegui"})," module, which can be required like any other Node.js module. Additionally you have access to all Node.js apis and node modules."]}),"\n",(0,i.jsx)(n.pre,{children:(0,i.jsx)(n.code,{className:"language-javascript",children:'require("@nodegui/nodegui");\n'})}),"\n",(0,i.jsxs)(n.p,{children:["The ",(0,i.jsx)(n.code,{children:"@nodegui/nodegui"})," module exports features in namespaces. As an example, a window can be created\nusing the ",(0,i.jsx)(n.code,{children:"QMainWindow"})," class. A simple ",(0,i.jsx)(n.code,{children:"main.js"})," file might open a window:"]}),"\n",(0,i.jsx)(n.pre,{children:(0,i.jsx)(n.code,{className:"language-javascript",children:'const { QMainWindow } = require("@nodegui/nodegui");\n\nconst win = new QMainWindow();\nwin.show();\n\nglobal.win = win; // To prevent win from being garbage collected.\n'})}),"\n",(0,i.jsxs)(n.p,{children:["The ",(0,i.jsx)(n.code,{children:"index.js"})," should create windows and handle all the system events your\napplication might encounter."]}),"\n",(0,i.jsx)(n.h2,{id:"whats-going-on-here",children:"What's going on here?"}),"\n",(0,i.jsx)(n.p,{children:"Firstly, we are running a regular Node.js app. This means that we are not running in a browser environment. The window you see is actually a native widget created by Qt. QMainWindow is essentially a lightweight javascript wrapper over Qt's QMainWindow. Hence every method you call on QMainWindow instance is actually affecting a native window widget. This is very light weight as compared to browser based solutions and hence is more closer to the Operating system."}),"\n",(0,i.jsx)(n.h2,{id:"trying-out-the-starter-project",children:"Trying out the starter project"}),"\n",(0,i.jsxs)(n.p,{children:["Clone and run the code by using the\n",(0,i.jsx)(n.a,{href:"https://github.com/sedwards2009/nodegui-simple-starter",children:(0,i.jsx)(n.code,{children:"sedwards2009/nodegui-simple-starter"})})," repository."]}),"\n",(0,i.jsxs)(n.p,{children:[(0,i.jsx)(n.strong,{children:"Note"}),": Running this requires ",(0,i.jsx)(n.a,{href:"https://git-scm.com",children:"Git"})," and ",(0,i.jsx)(n.a,{href:"https://www.npmjs.com/",children:"npm"}),"."]}),"\n",(0,i.jsx)(n.pre,{children:(0,i.jsx)(n.code,{className:"language-sh",children:"\ngit clone https://github.com/sedwards2009/nodegui-simple-starter.git\n\ncd nodegui-simple-starter\n\nnpm install\n\nnpm run build\n\nnpm run start\n"})}),"\n",(0,i.jsx)(n.h2,{id:"what-else-other-than-a-basic-window",children:"What else other than a basic window?"}),"\n",(0,i.jsxs)(n.p,{children:["NodeGui has support for basic widgets like QWidget (similar to div), QCheckBox, QPushButton and many more.\nYou can take a look at the list of native widgets that NodeGui currently supports here : ",(0,i.jsx)(n.a,{href:"/docs/api/generated/classes/qwidget",children:"Native widgets in NodeGui"}),".\nWith time more widgets and APIs will be added to NodeGui. Apart from modules in NodeGui, you also have access to the entire node modules ecosystem. Thus, any node module that you can use with Node.js, can be used with NodeGui. This makes it extremely powerful."]}),"\n",(0,i.jsx)(n.p,{children:"Fine, I want something more custom and beautiful than just native looking widgets. What do I do?"}),"\n",(0,i.jsxs)(n.p,{children:["To make things more beautiful, you will have to ",(0,i.jsx)(n.a,{href:"styling",children:"learn about styling"}),". Lets take a look at that next."]})]})}function u(e={}){const{wrapper:n}={...(0,s.R)(),...e.components};return n?(0,i.jsx)(n,{...e,children:(0,i.jsx)(c,{...e})}):c(e)}},28453:(e,n,t)=>{t.d(n,{R:()=>a,x:()=>r});var i=t(96540);const s={},o=i.createContext(s);function a(e){const n=i.useContext(o);return i.useMemo((function(){return"function"==typeof e?e(n):{...n,...e}}),[n,e])}function r(e){let n;return n=e.disableParentContext?"function"==typeof e.components?e.components(s):e.components||s:a(e.components),i.createElement(o.Provider,{value:n},e.children)}}}]);