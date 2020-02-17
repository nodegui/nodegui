import { QDateEdit } from './lib/QtWidgets/QDateEdit';
import { QSettings } from './lib/QtCore/QSettings';

const dateEdit = new QDateEdit();

const settings = new QSettings("test1", "test2");
console.log(settings.native);
console.log(settings.value('heh').toInt());
settings.setValue('heh', 32);
settings.sync();
dateEdit.show();

(global as any).dateEdit = dateEdit;
