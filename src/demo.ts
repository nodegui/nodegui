import { QWidget, QMainWindow, FlexLayout, QFont, QFontCapitalization } from './index';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QPushButton } from './lib/QtWidgets/QPushButton';
import { QDateTimeEdit } from './lib/QtWidgets/QDateTimeEdit';
import { QCalendarWidget } from './lib/QtWidgets/QCalendarWidget';
import { QDate } from './lib/QtCore/QDate';
import { QDateTime } from './lib/QtCore/QDateTime';
import { QTime } from './lib/QtCore/QTime';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
const label = new QLabel();
const font = new QFont('Mono', 14);
label.setFont(font);
label.setText('label 1');
const btn = new QPushButton();
btn.setText('Change font');
btn.setFont(new QFont('Helvetica', 20));
btn.addEventListener('clicked', () => {
    const font2 = label.font();
    font2.setCapitalization(QFontCapitalization.AllUppercase);
    font2.setItalic(true);
    font2.setFamily('Times');
    console.log('point', font2.pointSize());
    label.setFont(font2);
});
const dtEdit = new QDateTimeEdit();
const calendar = new QCalendarWidget();
const date = QDate.currentDate();
const time = QTime.currentTime();
const datetime = QDateTime.currentDateTime();
const strDate = date.toString('dd.MM.yyyy');
const strTime = time.toString('hh:mm:ss.zzz');
const strDt = datetime.toString('dd.MM.yyyy hh:mm:ss.zzz');
console.log(strDate);
console.log(strTime);
console.log(strDt);
dtEdit.setDate(date);
dtEdit.setTime(time);
dtEdit.setCalendarPopup(true);
dtEdit.setCalendarWidget(calendar);

layout.addWidget(label);
layout.addWidget(btn);
layout.addWidget(dtEdit);

win.setCentralWidget(center);
win.resize(400, 400);

win.show();
(global as any).win = win;
