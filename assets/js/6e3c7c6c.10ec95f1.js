"use strict";(self.webpackChunknodegui=self.webpackChunknodegui||[]).push([[2877],{16676:(e,s,n)=>{n.r(s),n.d(s,{assets:()=>d,contentTitle:()=>a,default:()=>h,frontMatter:()=>i,metadata:()=>c,toc:()=>l});var r=n(74848),t=n(28453);const i={id:"component",title:"Component",sidebar_label:"Component"},a=void 0,c={id:"api/generated/classes/component",title:"Component",description:"Abstract class that is root most base class for all widgets and layouts in the NodeGui World.",source:"@site/docs/api/generated/classes/component.md",sourceDirName:"api/generated/classes",slug:"/api/generated/classes/component",permalink:"/docs/api/generated/classes/component",draft:!1,unlisted:!1,editUrl:"https://github.com/nodegui/nodegui/edit/master/website/docs/api/generated/classes/component.md",tags:[],version:"current",frontMatter:{id:"component",title:"Component",sidebar_label:"Component"},sidebar:"api",previous:{title:"CacheTestQObject",permalink:"/docs/api/generated/classes/cachetestqobject"},next:{title:"EventWidget",permalink:"/docs/api/generated/classes/eventwidget"}},d={},l=[{value:"Hierarchy",id:"hierarchy",level:2},{value:"Index",id:"index",level:2},{value:"Constructors",id:"constructors",level:3},{value:"Properties",id:"properties",level:3},{value:"Constructors",id:"constructors-1",level:2},{value:"constructor",id:"constructor",level:3},{value:"Properties",id:"properties-1",level:2},{value:"native",id:"native",level:3}];function o(e){const s={a:"a",blockquote:"blockquote",code:"code",em:"em",h2:"h2",h3:"h3",li:"li",p:"p",strong:"strong",table:"table",tbody:"tbody",td:"td",th:"th",thead:"thead",tr:"tr",ul:"ul",...(0,t.R)(),...e.components};return(0,r.jsxs)(r.Fragment,{children:[(0,r.jsxs)(s.blockquote,{children:["\n",(0,r.jsx)(s.p,{children:"Abstract class that is root most base class for all widgets and layouts in the NodeGui World."}),"\n"]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.em,{children:"This class is used to add core properties to all widgets, layouts etc in NodeGui world.\nCurrently it helps us maintain references to the native C++ instance of the widget or layout.\nIt also helps in preventing gc of child elements of a layout or widget"}),"*"]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.code,{children:"Component"})," is an abstract class and hence no instances of the same should be created.\nIt exists so that we can add core functionalities to all widgets and layouts easily. This is an internal class."]}),"\n",(0,r.jsx)(s.p,{children:"Its the root base class in NodeGui world."}),"\n",(0,r.jsx)(s.h2,{id:"hierarchy",children:"Hierarchy"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsxs)(s.li,{children:["\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Component"})}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/eventwidget",children:"EventWidget"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qrect",children:"QRect"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qvariant",children:"QVariant"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsize",children:"QSize"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpoint",children:"QPoint"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qcolor",children:"QColor"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qimage",children:"QImage"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpixmap",children:"QPixmap"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfont",children:"QFont"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpainterpath",children:"QPainterPath"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qbrush",children:"QBrush"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpen",children:"QPen"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpointf",children:"QPointF"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qrectf",children:"QRectF"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpainter",children:"QPainter"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qicon",children:"QIcon"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qcursor",children:"QCursor"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qkeysequence",children:"QKeySequence"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qurl",children:"QUrl"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qmimedata",children:"QMimeData"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpalette",children:"QPalette"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsizef",children:"QSizeF"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qpicture",children:"QPicture"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfontdatabase",children:"QFontDatabase"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfontmetrics",children:"QFontMetrics"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qfontmetricsf",children:"QFontMetricsF"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qdrag",children:"QDrag"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qmodelindex",children:"QModelIndex"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qdate",children:"QDate"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtime",children:"QTime"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qdatetime",children:"QDateTime"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qstandarditem",children:"QStandardItem"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qlistwidgetitem",children:"QListWidgetItem"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtablewidgetitem",children:"QTableWidgetItem"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qtreewidgetitem",children:"QTreeWidgetItem"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qsettings",children:"QSettings"})]}),"\n",(0,r.jsxs)(s.p,{children:["\u21b3 ",(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/qstyle",children:"QStyle"})]}),"\n"]}),"\n"]}),"\n",(0,r.jsx)(s.h2,{id:"index",children:"Index"}),"\n",(0,r.jsx)(s.h3,{id:"constructors",children:"Constructors"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#constructor",children:"constructor"})}),"\n"]}),"\n",(0,r.jsx)(s.h3,{id:"properties",children:"Properties"}),"\n",(0,r.jsxs)(s.ul,{children:["\n",(0,r.jsx)(s.li,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component#native",children:"native"})}),"\n"]}),"\n",(0,r.jsx)(s.h2,{id:"constructors-1",children:"Constructors"}),"\n",(0,r.jsx)(s.h3,{id:"constructor",children:"constructor"}),"\n",(0,r.jsxs)(s.p,{children:["+ ",(0,r.jsx)(s.strong,{children:"new Component"}),"(",(0,r.jsx)(s.code,{children:"native"}),": ",(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"}),"): ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"})})]}),"\n",(0,r.jsx)(s.p,{children:(0,r.jsx)(s.strong,{children:"Parameters:"})}),"\n",(0,r.jsxs)(s.table,{children:[(0,r.jsx)(s.thead,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.th,{children:"Name"}),(0,r.jsx)(s.th,{children:"Type"})]})}),(0,r.jsx)(s.tbody,{children:(0,r.jsxs)(s.tr,{children:[(0,r.jsx)(s.td,{children:(0,r.jsx)(s.code,{children:"native"})}),(0,r.jsx)(s.td,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"})})]})})]}),"\n",(0,r.jsxs)(s.p,{children:[(0,r.jsx)(s.strong,{children:"Returns:"})," ",(0,r.jsx)(s.em,{children:(0,r.jsx)(s.a,{href:"/docs/api/generated/classes/component",children:"Component"})})]}),"\n",(0,r.jsx)(s.h2,{id:"properties-1",children:"Properties"}),"\n",(0,r.jsx)(s.h3,{id:"native",children:"native"}),"\n",(0,r.jsxs)(s.p,{children:["\u2022 ",(0,r.jsx)(s.strong,{children:"native"}),": ",(0,r.jsxs)(s.em,{children:[(0,r.jsx)(s.a,{href:"/docs/api/generated/globals#nativeelement",children:"NativeElement"})," | null"]})]})]})}function h(e={}){const{wrapper:s}={...(0,t.R)(),...e.components};return s?(0,r.jsx)(s,{...e,children:(0,r.jsx)(o,{...e})}):o(e)}},28453:(e,s,n)=>{n.d(s,{R:()=>a,x:()=>c});var r=n(96540);const t={},i=r.createContext(t);function a(e){const s=r.useContext(i);return r.useMemo((function(){return"function"==typeof e?e(s):{...s,...e}}),[s,e])}function c(e){let s;return s=e.disableParentContext?"function"==typeof e.components?e.components(t):e.components||t:a(e.components),r.createElement(i.Provider,{value:s},e.children)}}}]);