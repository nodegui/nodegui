"use strict";(self.webpackChunknodegui=self.webpackChunknodegui||[]).push([[2186],{86629:(e,s,n)=>{n.r(s),n.d(s,{assets:()=>c,contentTitle:()=>d,default:()=>x,frontMatter:()=>t,metadata:()=>l,toc:()=>h});var r=n(74848),i=n(28453);const t={id:"qtablewidgetitem",title:"QTableWidgetItem",sidebar_label:"QTableWidgetItem"},d=void 0,l={id:"api/generated/classes/qtablewidgetitem",title:"QTableWidgetItem",description:"Creates an item for QTableWidget.",source:"@site/docs/api/generated/classes/qtablewidgetitem.md",sourceDirName:"api/generated/classes",slug:"/api/generated/classes/qtablewidgetitem",permalink:"/docs/api/generated/classes/qtablewidgetitem",draft:!1,unlisted:!1,editUrl:"https://github.com/nodegui/nodegui/edit/master/website/docs/api/generated/classes/qtablewidgetitem.md",tags:[],version:"current",frontMatter:{id:"qtablewidgetitem",title:"QTableWidgetItem",sidebar_label:"QTableWidgetItem"},sidebar:"api",previous:{title:"QTableWidget",permalink:"/docs/api/generated/classes/qtablewidget"},next:{title:"QTabletEvent",permalink:"/docs/api/generated/classes/qtabletevent"}},c={},h=[{value:"Example",id:"example",level:3},{value:"Hierarchy",id:"hierarchy",level:2},{value:"Index",id:"index",level:2},{value:"Constructors",id:"constructors",level:3},{value:"Properties",id:"properties",level:3},{value:"Methods",id:"methods",level:3},{value:"Constructors",id:"constructors-1",level:2},{value:"constructor",id:"constructor",level:3},{value:"Properties",id:"properties-1",level:2},{value:"native",id:"native",level:3},{value:"Methods",id:"methods-1",level:2},{value:"background",id:"background",level:3},{value:"checkState",id:"checkstate",level:3},{value:"column",id:"column",level:3},{value:"data",id:"data",level:3},{value:"flags",id:"flags",level:3},{value:"font",id:"font",level:3},{value:"foreground",id:"foreground",level:3},{value:"icon",id:"icon",level:3},{value:"isSelected",id:"isselected",level:3},{value:"row",id:"row",level:3},{value:"setBackground",id:"setbackground",level:3},{value:"setCheckState",id:"setcheckstate",level:3},{value:"setData",id:"setdata",level:3},{value:"setFlags",id:"setflags",level:3},{value:"setFont",id:"setfont",level:3},{value:"setForeground",id:"setforeground",level:3},{value:"setIcon",id:"seticon",level:3},{value:"setSelected",id:"setselected",level:3},{value:"setSizeHint",id:"setsizehint",level:3},{value:"setStatusTip",id:"setstatustip",level:3},{value:"setText",id:"settext",level:3},{value:"setTextAlignment",id:"settextalignment",level:3},{value:"setToolTip",id:"settooltip",level:3},{value:"setWhatsThis",id:"setwhatsthis",level:3},{value:"sizeHint",id:"sizehint",level:3},{value:"statusTip",id:"statustip",level:3},{value:"text",id:"text",level:3},{value:"textAlignment",id:"textalignment",level:3},{value:"toolTip",id:"tooltip",level:3},{value:"type",id:"type",level:3},{value:"whatsThis",id:"whatsthis",level:3}];function a(e){const s={a:"a",blockquote:"blockquote",code:"code",em:"em",h2:"h2",h3:"h3",hr:"hr",li:"li",p:"p",pre:"pre",strong:"strong",table:"table",tbody:"tbody",td:"td",th:"th",thead:"thead",tr:"tr",ul:"ul",...(0,i.R)(),...e.components};return(0,r.jsxs)(r.Fragment,{children:[(0,r.jsxs)(s.blockquote,{children:["\n",(0,r.jsx)(s.p,{children:"Creates an item for QTableWidget."}),"\n"]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.strong,{children:["This class is a JS wrapper around Qt's ",(0,r.jsx)(s.a,{href:"https://doc.qt.io/qt-5/qtablewidgetitem.html",children:"QTableWidgetItem class"})]})}),"\n",(0,r.jsx)(s.h3,{id:"example",children:"Example"}),"\n",(0,r.jsx)(s.pre,{children:(0,r.jsx)(s.code,{className:"language-javascript",children:"const { QTableWidget, QMainWindow, QTableWidgetItem } = require(\"@nodegui/nodegui\");\n\nconst win = new QMainWindow();\nconst table = new QTableWidget(2, 3);\ntable.setHorizontalHeaderLabels(['first', 'second', 'third']);\n\nconst cell00 = new QTableWidgetItem('C00');\nconst cell01 = new QTableWidgetItem('C01');\nconst cell10 = new QTableWidgetItem('C10');\nconst cell11 = new QTableWidgetItem('C11');\n\ntable.setItem(0, 0, cell00);\ntable.setItem(0, 1, cell01);\ntable.setItem(1, 0, cell10);\ntable.setItem(1, 1, cell11);\n\nwin.setCentralWidget(table);\nwin.show();\n(global as any).win = win;\n\n"})}),"\n",(0,r.jsx)(s.h2,{id:"hierarchy",children:"Hierarchy"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsxs)(s.li,{children:["\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"})}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.strong,{children:"QTableWidgetItem"})]}),"\n"]}),"\n"]}),"\n",(0,r.jsx)(s.h2,{id:"index",children:"Index"}),"\n",(0,r.jsx)(s.h3,{id:"constructors",children:"Constructors"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#constructor",children:"constructor"})}),"\n"]}),"\n",(0,r.jsx)(s.h3,{id:"properties",children:"Properties"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#native",children:"native"})}),"\n"]}),"\n",(0,r.jsx)(s.h3,{id:"methods",children:"Methods"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#background",children:"background"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#checkstate",children:"checkState"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#column",children:"column"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#data",children:"data"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#flags",children:"flags"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#font",children:"font"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#foreground",children:"foreground"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#icon",children:"icon"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#isselected",children:"isSelected"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#row",children:"row"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setbackground",children:"setBackground"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setcheckstate",children:"setCheckState"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setdata",children:"setData"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setflags",children:"setFlags"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setfont",children:"setFont"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setforeground",children:"setForeground"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#seticon",children:"setIcon"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setselected",children:"setSelected"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setsizehint",children:"setSizeHint"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setstatustip",children:"setStatusTip"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#settext",children:"setText"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#settextalignment",children:"setTextAlignment"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#settooltip",children:"setToolTip"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#setwhatsthis",children:"setWhatsThis"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#sizehint",children:"sizeHint"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#statustip",children:"statusTip"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#text",children:"text"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#textalignment",children:"textAlignment"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#tooltip",children:"toolTip"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#type",children:"type"})}),"\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem#whatsthis",children:"whatsThis"})}),"\n"]}),"\n",(0,r.jsx)(s.h2,{id:"constructors-1",children:"Constructors"}),"\n",(0,r.jsx)(s.h3,{id:"constructor",children:"constructor"}),"\n",(0,r.jsxs)(s.p,{children:["+ ",(0,r.jsx)(s.strong,{children:"new QTableWidgetItem"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.em,{children:["Overrides ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"}),".",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#constructor",children:"constructor"})]})}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsxs)(s.p,{children:["+ ",(0,r.jsx)(s.strong,{children:"new QTableWidgetItem"}),"(",(0,r.jsx)(s.code,{children:"other"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"}),"): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.em,{children:["Overrides ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"}),".",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#constructor",children:"constructor"})]})}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"other"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsxs)(s.p,{children:["+ ",(0,r.jsx)(s.strong,{children:"new QTableWidgetItem"}),"(",(0,r.jsx)(s.code,{children:"native"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"}),"): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.em,{children:["Overrides ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"}),".",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#constructor",children:"constructor"})]})}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"native"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsxs)(s.p,{children:["+ ",(0,r.jsx)(s.strong,{children:"new QTableWidgetItem"}),"(",(0,r.jsx)(s.code,{children:"text"}),": string): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.em,{children:["Overrides ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"}),".",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#constructor",children:"constructor"})]})}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"text"})}),(0,r.jsx)(s.td,{children:"string"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})})]}),"\n",(0,r.jsx)(s.h2,{id:"properties-1",children:"Properties"}),"\n",(0,r.jsx)(s.h3,{id:"native",children:"native"}),"\n",(0,r.jsxs)(s.p,{children:["\u2022 ",(0,r.jsx)(s.strong,{children:"native"}),": ",(0,r.jsxs)(s.em,{children:[(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"})," | null"]})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsxs)(s.em,{children:["Inherited from ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"}),".",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#native",children:"native"})]})}),"\n",(0,r.jsx)(s.h2,{id:"methods-1",children:"Methods"}),"\n",(0,r.jsx)(s.h3,{id:"background",children:"background"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"background"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"checkstate",children:"checkState"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"checkState"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/checkstate",children:"CheckState"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/checkstate",children:"CheckState"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"column",children:"column"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"column"}),"(): ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"data",children:"data"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"data"}),"(",(0,r.jsx)(s.code,{children:"role"}),": number): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qvariant",children:"QVariant"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"role"})}),(0,r.jsx)(s.td,{children:"number"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qvariant",children:"QVariant"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"flags",children:"flags"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"flags"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/itemflag",children:"ItemFlag"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/itemflag",children:"ItemFlag"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"font",children:"font"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"font"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfont",children:"QFont"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfont",children:"QFont"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"foreground",children:"foreground"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"foreground"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"icon",children:"icon"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"icon"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qicon",children:"QIcon"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qicon",children:"QIcon"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"isselected",children:"isSelected"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"isSelected"}),"(): ",(0,r.jsx)(s.em,{children:"boolean"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"boolean"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"row",children:"row"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"row"}),"(): ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setbackground",children:"setBackground"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setBackground"}),"(",(0,r.jsx)(s.code,{children:"brush"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"brush"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setcheckstate",children:"setCheckState"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setCheckState"}),"(",(0,r.jsx)(s.code,{children:"state"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/checkstate",children:"CheckState"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"state"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/checkstate",children:"CheckState"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setdata",children:"setData"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setData"}),"(",(0,r.jsx)(s.code,{children:"role"}),": number, ",(0,r.jsx)(s.code,{children:"value"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qvariant",children:"QVariant"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsxs)(s.tbody,{children:[(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"role"})}),(0,r.jsx)(s.td,{children:"number"})]}),(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"value"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qvariant",children:"QVariant"})})]})]})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setflags",children:"setFlags"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setFlags"}),"(",(0,r.jsx)(s.code,{children:"flags"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/itemflag",children:"ItemFlag"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"flags"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/itemflag",children:"ItemFlag"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setfont",children:"setFont"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setFont"}),"(",(0,r.jsx)(s.code,{children:"font"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfont",children:"QFont"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"font"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfont",children:"QFont"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setforeground",children:"setForeground"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setForeground"}),"(",(0,r.jsx)(s.code,{children:"brush"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"brush"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"seticon",children:"setIcon"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setIcon"}),"(",(0,r.jsx)(s.code,{children:"icon"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qicon",children:"QIcon"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"icon"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qicon",children:"QIcon"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setselected",children:"setSelected"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setSelected"}),"(",(0,r.jsx)(s.code,{children:"select"}),": boolean): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"select"})}),(0,r.jsx)(s.td,{children:"boolean"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setsizehint",children:"setSizeHint"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setSizeHint"}),"(",(0,r.jsx)(s.code,{children:"size"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsize",children:"QSize"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"size"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsize",children:"QSize"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setstatustip",children:"setStatusTip"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setStatusTip"}),"(",(0,r.jsx)(s.code,{children:"statusTip"}),": string): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"statusTip"})}),(0,r.jsx)(s.td,{children:"string"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"settext",children:"setText"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setText"}),"(",(0,r.jsx)(s.code,{children:"text"}),": string): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"text"})}),(0,r.jsx)(s.td,{children:"string"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"settextalignment",children:"setTextAlignment"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setTextAlignment"}),"(",(0,r.jsx)(s.code,{children:"alignment"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/alignmentflag",children:"AlignmentFlag"}),"): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"alignment"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/alignmentflag",children:"AlignmentFlag"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"settooltip",children:"setToolTip"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setToolTip"}),"(",(0,r.jsx)(s.code,{children:"toolTip"}),": string): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"toolTip"})}),(0,r.jsx)(s.td,{children:"string"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"setwhatsthis",children:"setWhatsThis"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"setWhatsThis"}),"(",(0,r.jsx)(s.code,{children:"whatsThis"}),": string): ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"whatsThis"})}),(0,r.jsx)(s.td,{children:"string"})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"void"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"sizehint",children:"sizeHint"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"sizeHint"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsize",children:"QSize"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsize",children:"QSize"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"statustip",children:"statusTip"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"statusTip"}),"(): ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"text",children:"text"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"text"}),"(): ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"textalignment",children:"textAlignment"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"textAlignment"}),"(): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/alignmentflag",children:"AlignmentFlag"})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/enums/alignmentflag",children:"AlignmentFlag"})})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"tooltip",children:"toolTip"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"toolTip"}),"(): ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"type",children:"type"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"type"}),"(): ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"number"})]}),"\n",(0,r.jsx)(s.hr,{}),"\n",(0,r.jsx)(s.h3,{id:"whatsthis",children:"whatsThis"}),"\n",(0,r.jsxs)(s.p,{children:["\u25b8 ",(0,r.jsx)(s.strong,{children:"whatsThis"}),"(): ",(0,r.jsx)(s.em,{children:"string"})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:"string"})]})]})}function x(e={}){const{wrapper:s}={...(0,i.R)(),...e.components};return s?(0,r.jsx)(s,{...e,children:(0,r.jsx)(a,{...e})}):a(e)}},28453:(e,s,n)=>{n.d(s,{R:()=>d,x:()=>l});var r=n(96540);const i={},t=r.createContext(i);function d(e){const s=r.useContext(t);return r.useMemo((function(){return"function"==typeof e?e(s):{...s,...e}}),[s,e])}function l(e){let s;return s=e.disableParentContext?"function"==typeof e.components?e.components(i):e.components||i:d(e.components),r.createElement(t.Provider,{value:s},e.children)}}}]);