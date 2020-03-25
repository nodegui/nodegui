import { QMainWindow, QWidget, FlexLayout, QTreeWidgetItem, QTreeWidget, QLineEdit, MatchFlag } from './index';

const win = new QMainWindow();
const center = new QWidget();
center.setLayout(new FlexLayout());

win.setCentralWidget(center);

const fruitTree = new QTreeWidget();
fruitTree.setSortingEnabled(true);

fruitTree.setHeaderLabels(['Fruit', 'Price']);

const fruitObj = [
    {
        fruit: 'Banana',
        price: '2.5',
    },
    {
        fruit: 'Apple',
        price: '1.0',
    },
    {
        fruit: 'Strawberry',
        price: '2.5',
    },
    {
        fruit: 'Orange',
        price: '1.5',
    },
];

const items = [];

for (const element of fruitObj) {
    const fruitItem = new QTreeWidgetItem(fruitTree, [element.fruit, element.price]);
    items.push(fruitItem);
}

fruitTree.addTopLevelItems(items);

const filterLineEdit = new QLineEdit();
filterLineEdit.setPlaceholderText('Filter...');
filterLineEdit.addEventListener('returnPressed', () => {
    const filterText = filterLineEdit.text();
    const foundItems = fruitTree
        .findItems(filterText, MatchFlag.MatchContains, 0)
        .concat(fruitTree.findItems(filterText, MatchFlag.MatchContains, 1));
    fruitTree.topLevelItems.forEach(item => item.setHidden(true));
    foundItems.forEach(item => item.setHidden(false));
});

center.layout?.addWidget(filterLineEdit);
center.layout?.addWidget(fruitTree);

win.show();
(global as any).win = win;
