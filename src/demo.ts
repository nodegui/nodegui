import { QMainWindow, QTableWidget, QTableWidgetItem, QWidget, QBoxLayout } from '.';
import { QPushButton } from './lib/QtWidgets/QPushButton';

const win = new QMainWindow();
win.resize(500, 500);
const table = new QTableWidget(0, 0);

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

table.setColumnCount(2);
table.setRowCount(dates.length);
table.setHorizontalHeaderLabels(['Date', 'Time']);

const buildDateStrings = (date: string) => {
    const dateString = date.split(' ')[0];
    const timeString = date.split(' ')[1] + ' ' + date.split(' ')[2];
    return [dateString, timeString];
};

dates.forEach((date, row) => {
    const [dateString, timeString] = buildDateStrings(date);
    table.setItem(row, 0, new QTableWidgetItem(dateString));
    table.setItem(row, 1, new QTableWidgetItem(timeString));
});

const centralWidget = new QWidget();
const boxLayout = new QBoxLayout(0);

const button = new QPushButton();
button.setText('Add row');
button.addEventListener('clicked', () => {
    const rowCount = table.rowCount();
    table.setRowCount(rowCount + 1);

    const date = new Date().toDateString();
    const [dateString, timeString] = buildDateStrings(date);
    table.setItem(rowCount, 0, new QTableWidgetItem(dateString));
    table.setItem(rowCount, 1, new QTableWidgetItem(timeString));
});
boxLayout.addWidget(table);
boxLayout.addWidget(button);
centralWidget.setLayout(boxLayout);

win.setCentralWidget(centralWidget);
win.show();
(global as any).win = win;
