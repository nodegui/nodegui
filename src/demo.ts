import { QTime } from '.';
import { DateFormat } from './lib/QtEnums';

//const date = QDate.fromString('04132020', 'MMddyyyy');
const { QMainWindow, QTreeWidgetItem, QTreeWidget, QDate, ItemDataRole, QDateTime } = require('./index');

const win = new QMainWindow();
win.resize(500, 500);
const tree = new QTreeWidget();
tree.setSortingEnabled(true);
tree.setHeaderLabels(['Date', 'Time', 'Test Column']);
tree.setColumnWidth(1, 15); //Sets the size of the selected column (index, size).

const dates = [
    '11/22/1973 02:55:43 AM',
    '02/10/1949 08:44:35 AM',
    '02/06/1970 02:45:24 PM',
    '02/15/1984 04:04:01 AM',
    '03/02/1981 01:14:37 PM',
    '12/24/1937 11:51:14 AM',
    '01/01/2003 08:44:47 PM',
    '08/10/1961 12:21:59 PM',
    '07/14/1977 04:02:20 AM',
    '11/23/1980 11:58:03 PM',
    '03/01/1965 12:35:36 AM',
    '03/04/1996 05:32:37 AM',
    '07/11/1986 10:16:10 AM',
    '04/13/1933 02:14:08 PM',
    '03/28/1972 08:50:09 PM',
    '06/18/1925 07:06:51 AM',
    '04/22/2017 08:29:33 PM',
    '01/12/1932 04:01:28 AM',
    '10/07/2019 08:14:44 PM',
    '10/27/1987 11:51:41 AM',
    '06/09/2002 06:04:50 AM',
    '12/31/1980 01:33:19 PM',
    '11/07/1964 04:43:42 PM',
    '03/26/1957 06:40:36 AM',
];
for (const date of dates) {
    const item = new QTreeWidgetItem();
    const dateObject = QDate.fromString(date.split(' ')[0], 'MM/dd/yyyy');
    const timeObject = QTime.fromString(date.split(' ')[1] + ' ' + date.split(' ')[2], 'hh:mm:ss AP');
    item.setData(0, ItemDataRole.DisplayRole, dateObject.native);
    item.setData(1, ItemDataRole.DisplayRole, timeObject.native);
    tree.addTopLevelItem(item);
}
win.setCentralWidget(tree);
win.show();
(global as any).win = win;
