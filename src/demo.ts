import { QTabWidget } from './lib/QtWidgets/QTabWidget';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QIcon } from './lib/QtGui/QIcon';

const icon = new QIcon('/Users/atulr/Project/nodegui/nodegui/src/lib/QtGui/__tests__/assets/nodegui.png');
const title1 = 'title 1';
const title2 = 'title 2';
const tabContent1 = new QLabel();
const tabContent2 = new QLabel();
const newTabContent = new QLabel();

tabContent1.setText('test text1');
tabContent2.setText('test text2');
newTabContent.setText('new inserted tab');

const tabs = new QTabWidget();

tabs.addTab(tabContent1, icon, title1);
tabs.addTab(tabContent2, icon, title2);

// demo for the tab text change
tabs.setTabText(0, 'new title 1');

tabs.insertTab(0, newTabContent, icon, 'new inserted tab');

tabs.show();

(global as any).tabs = tabs;
