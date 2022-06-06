import { QObject, QObjectSignals } from '../QtCore/QObject';

export abstract class QAbstractItemDelegate<Signals extends QObjectSignals = QObjectSignals> extends QObject<Signals> {}
