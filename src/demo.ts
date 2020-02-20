import { QTabWidget } from './lib/QtWidgets/QTabWidget';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QIcon } from './lib/QtGui/QIcon';

const icon = new QIcon('/Users/atulr/Project/nodegui/nodegui/src/lib/QtGui/__tests__/assets/nodegui.png');
const title1 = 'title 1';
const title2 = 'title 2';
const tabContent1 = new QLabel();
const tabContent2 = new QLabel();

tabContent1.setText('blaaahhhhh');
tabContent2.setText('blaaahhhhh');

const tabs = new QTabWidget();

tabs.addTab(tabContent1, icon, title1);
tabs.addTab(tabContent2, icon, title2);

tabs.show();

(global as any).tabs = tabs;
