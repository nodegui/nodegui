import { FlexLayout, QMainWindow, QTreeWidget, QTreeWidgetItem, QWidget } from './index';

const win = new QMainWindow();
const center = new QWidget();

const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem(tree, ['Hello!']);
const item2 = new QTreeWidgetItem(item1, ['Hello again!']);
const item3 = new QTreeWidgetItem(['Hello!!']);
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

(global as any).win = win;
