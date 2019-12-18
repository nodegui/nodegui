import { QMainWindow, QTreeWidget, QTreeWidgetItem, QSystemTrayIcon, QIcon, QWidget, FlexLayout } from './index';

const win = new QMainWindow();
const center = new QWidget();

const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem(tree, ['Hello item1!']);
const item2 = new QTreeWidgetItem(item1, ['Hello item2!']);
const item3 = new QTreeWidgetItem(['Hello item3!!']);
tree.addTopLevelItem(item3);
tree.addEventListener('itemSelectionChanged', () => {
    const items = tree.selectedItems();
    items.forEach(function(item) {
        const parent = item.parent();
        if (parent) {
            const child = parent.child(0);
            if (child) {
                console.log(child.text(0));
            }
        }
        console.log(item.childCount());
        (global as any).gc();
    });
});
center.setLayout(new FlexLayout());
center.layout?.addWidget(tree);

win.setCentralWidget(center);
win.show();

const systray = new QSystemTrayIcon();
systray.setIcon(new QIcon());
systray.show();
systray.showMessage('Hello', 'world');

(global as any).win = win;
(global as any).systray = systray;
