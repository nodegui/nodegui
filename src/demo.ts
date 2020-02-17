import { QDateEdit } from './lib/QtWidgets/QDateEdit';

const dateEdit = new QDateEdit();

dateEdit.show();

(global as any).dateEdit = dateEdit;
