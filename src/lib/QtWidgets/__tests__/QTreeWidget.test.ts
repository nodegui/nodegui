import { QTreeWidget } from '../QTreeWidget';
import { QTreeWidgetItem } from '../QTreeWidgetItem';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';

function createTreeWidget(): QTreeWidget {
    const tree = new QTreeWidget();
    tree.setColumnCount(2);
    tree.setHeaderLabels(['First Column', 'Second Column']);
    return tree;
}

describe('QTreeWidget', () => {
    it('instantiate a tree widget', () => {
        const tree = createTreeWidget();
        expect(tree.inherits('QTreeWidget')).toBe(true);
    });
    it('setText', () => {
        const tree = createTreeWidget();
        const item = new QTreeWidgetItem();
        item.setText(0, 'row0, column0');
        expect(item.text(0)).toEqual('row0, column0');
        tree.addTopLevelItem(item);
    });
    it('setIcon', () => {
        const item = new QTreeWidgetItem();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        item.setText(0, 'row0, column0');
        item.setIcon(0, icon);
        // TODO: figure out a way to check this. They are not equivalent.
        // expect(item.icon(0).cacheKey()).toEqual(icon.cacheKey());
    });
});
