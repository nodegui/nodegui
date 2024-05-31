#include "QtWidgets/QTableWidget/qtablewidget_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtWidgets/QTableWidgetItem/qtablewidgetitem_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTableWidgetWrap::constructor;

Napi::Object QTableWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTableWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("selectedRanges", &QTableWidgetWrap::selectedRanges),
       InstanceMethod(
           "closePersistentEditor_qtablewidgetitem",
           &QTableWidgetWrap::closePersistentEditor_qtablewidgetitem),
       InstanceMethod("editItem", &QTableWidgetWrap::editItem),
       InstanceMethod("setCellWidget", &QTableWidgetWrap::setCellWidget),
       InstanceMethod("setItem", &QTableWidgetWrap::setItem),
       InstanceMethod("setHorizontalHeaderItem",
                      &QTableWidgetWrap::setHorizontalHeaderItem),
       InstanceMethod("setHorizontalHeaderLabels",
                      &QTableWidgetWrap::setHorizontalHeaderLabels),
       InstanceMethod("setVerticalHeaderItem",
                      &QTableWidgetWrap::setVerticalHeaderItem),
       InstanceMethod("setVerticalHeaderLabels",
                      &QTableWidgetWrap::setVerticalHeaderLabels),
       InstanceMethod("clear", &QTableWidgetWrap::clear),
       InstanceMethod("clearContents", &QTableWidgetWrap::clearContents),
       InstanceMethod("insertColumn", &QTableWidgetWrap::insertColumn),
       InstanceMethod("removeColumn", &QTableWidgetWrap::removeColumn),
       InstanceMethod("insertRow", &QTableWidgetWrap::insertRow),
       InstanceMethod("removeRow", &QTableWidgetWrap::removeRow),
       InstanceMethod("scrollToItem", &QTableWidgetWrap::scrollToItem),
       InstanceMethod("cellWidget", &QTableWidgetWrap::cellWidget),
       InstanceMethod("column", &QTableWidgetWrap::column),
       InstanceMethod("row", &QTableWidgetWrap::row),
       InstanceMethod("currentColumn", &QTableWidgetWrap::currentColumn),
       InstanceMethod("currentItem", &QTableWidgetWrap::currentItem),
       InstanceMethod("currentRow", &QTableWidgetWrap::currentRow),
       InstanceMethod("findItems", &QTableWidgetWrap::findItems),
       InstanceMethod("item", &QTableWidgetWrap::item),
       InstanceMethod("itemAt", &QTableWidgetWrap::itemAt),
       InstanceMethod("removeCellWidget", &QTableWidgetWrap::removeCellWidget),
       InstanceMethod("setCurrentCell", &QTableWidgetWrap::setCurrentCell),
       InstanceMethod("setCurrentItem", &QTableWidgetWrap::setCurrentItem),
       InstanceMethod("sortItems", &QTableWidgetWrap::sortItems),
       InstanceMethod("takeItem", &QTableWidgetWrap::takeItem),
       InstanceMethod("visualColumn", &QTableWidgetWrap::visualColumn),
       InstanceMethod("visualItemRect", &QTableWidgetWrap::visualItemRect),
       InstanceMethod("visualRow", &QTableWidgetWrap::visualRow),
       InstanceMethod("columnCount", &QTableWidgetWrap::columnCount),
       InstanceMethod("rowCount", &QTableWidgetWrap::rowCount),
       InstanceMethod("setColumnCount", &QTableWidgetWrap::setColumnCount),
       InstanceMethod("setRowCount", &QTableWidgetWrap::setRowCount),
       InstanceMethod(
           "isPersistentEditorOpen_qtablewidgetitem",
           &QTableWidgetWrap::isPersistentEditorOpen_qtablewidgetitem),
       InstanceMethod("openPersistentEditor_qtablewidgetitem",
                      &QTableWidgetWrap::openPersistentEditor_qtablewidgetitem),
       QTABLEVIEW_WRAPPED_METHODS_EXPORT_DEFINE(QTableWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QTableWidget, QTableWidgetWrap);
  return exports;
}

QTableWidget* QTableWidgetWrap::getInternalInstance() { return this->instance; }

QTableWidgetWrap::~QTableWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

QTableWidgetWrap::QTableWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableWidgetWrap>(info) {
  Napi::Env env = info.Env();

  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NTableWidget();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QTableWidget>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NTableWidget(parentWidgetWrap->getInternalInstance());
    }
  } else if (argCount == 2) {
    int rows = info[0].As<Napi::Number>().Int32Value();
    int columns = info[1].As<Napi::Number>().Int32Value();
    this->instance = new NTableWidget(rows, columns);
  } else if (argCount == 3) {
    int rows = info[0].As<Napi::Number>().Int32Value();
    int columns = info[1].As<Napi::Number>().Int32Value();
    Napi::Object parentObject = info[2].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTableWidget(rows, columns,
                                      parentWidgetWrap->getInternalInstance());
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QTableWidgetWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QTableWidgetWrap::selectedRanges(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QList<QTableWidgetSelectionRange> range = this->instance->selectedRanges();
  Napi::Array napiRange = Napi::Array::New(env, range.size());

  for (int i = 0; i < range.size(); i++) {
    int topRow = range[i].topRow();
    int leftColumn = range[i].leftColumn();
    int bottomRow = range[i].bottomRow();
    int rightColumn = range[i].rightColumn();
    int columnCount = range[i].columnCount();
    int rowCount = range[i].rowCount();
    Napi::Object newRange = Napi::Object::New(env);
    newRange.Set("topRow", Napi::Number::New(env, topRow));
    newRange.Set("leftColumn", Napi::Number::New(env, leftColumn));
    newRange.Set("bottomRow", Napi::Number::New(env, bottomRow));
    newRange.Set("rightColumn", Napi::Number::New(env, rightColumn));
    newRange.Set("columnCount", Napi::Number::New(env, columnCount));
    newRange.Set("rowCount", Napi::Number::New(env, rowCount));
    napiRange[i] = newRange;
  }
  return napiRange;
  return env.Null();
}

Napi::Value QTableWidgetWrap::closePersistentEditor_qtablewidgetitem(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  this->instance->closePersistentEditor(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::editItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  this->instance->editItem(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::setCellWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  Napi::Object widgetObject = info[2].As<Napi::Object>();
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);

  this->instance->setCellWidget(row, column, widgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::setItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[2].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  this->instance->setItem(row, column, itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::setHorizontalHeaderItem(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[1].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  this->instance->setHorizontalHeaderItem(column,
                                          itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::setHorizontalHeaderLabels(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Array labelsNapi = info[0].As<Napi::Array>();
  QList<QString> list;
  for (int i = 0; i < labelsNapi.Length(); i++) {
    Napi::Value labelNapi = labelsNapi[i];
    list.append(labelNapi.As<Napi::String>().Utf8Value().c_str());
  }
  QStringList labels = QStringList(list);

  this->instance->setHorizontalHeaderLabels(labels);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setVerticalHeaderItem(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  this->instance->setVerticalHeaderItem(row, itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::setVerticalHeaderLabels(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Array labelsNapi = info[0].As<Napi::Array>();
  QList<QString> list;
  for (int i = 0; i < labelsNapi.Length(); i++) {
    Napi::Value labelNapi = labelsNapi[i];
    list.append(labelNapi.As<Napi::String>().Utf8Value().c_str());
  }
  QStringList labels = QStringList(list);

  this->instance->setVerticalHeaderLabels(labels);
  return env.Null();
}

Napi::Value QTableWidgetWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QTableWidgetWrap::clearContents(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clearContents();
  return env.Null();
}

Napi::Value QTableWidgetWrap::insertColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  this->instance->insertColumn(column);
  return env.Null();
}

Napi::Value QTableWidgetWrap::removeColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  this->instance->removeColumn(column);
  return env.Null();
}

Napi::Value QTableWidgetWrap::insertRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  this->instance->insertRow(row);
  return env.Null();
}

Napi::Value QTableWidgetWrap::removeRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  this->instance->removeRow(row);
  return env.Null();
}

Napi::Value QTableWidgetWrap::scrollToItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);

  int hintInt = info[1].As<Napi::Number>().Int32Value();
  QAbstractItemView::ScrollHint hint =
      static_cast<QAbstractItemView::ScrollHint>(hintInt);
  this->instance->scrollToItem(itemWrap->getInternalInstance(), hint);
  return env.Null();
}

Napi::Value QTableWidgetWrap::cellWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();

  QWidget* widget = this->instance->cellWidget(row, column);
  auto instance =
      QWidgetWrap::constructor.New({Napi::External<QWidget>::New(env, widget),
                                    Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QTableWidgetWrap::column(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  int column = this->instance->column(itemWrap->getInternalInstance());
  return Napi::Number::New(env, column);
}

Napi::Value QTableWidgetWrap::currentColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = this->instance->currentColumn();
  return Napi::Number::New(env, column);
}

Napi::Value QTableWidgetWrap::currentItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QTableWidgetItem* item = this->instance->currentItem();
  auto instance = QTableWidgetItemWrap::constructor.New(
      {Napi::External<QTableWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QTableWidgetWrap::currentRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = this->instance->currentRow();
  return Napi::Number::New(env, row);
}

Napi::Value QTableWidgetWrap::findItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string napiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  int flags = info[1].As<Napi::Number>().Int32Value();
  QList<QTableWidgetItem*> items =
      this->instance->findItems(text, static_cast<Qt::MatchFlags>(flags));
  Napi::Array napiItems = Napi::Array::New(env, items.size());
  for (int i = 0; i < items.size(); i++) {
    QTableWidgetItem* item = items[i];
    // disable deletion of the native instance for these by passing true
    auto instance = QTableWidgetItemWrap::constructor.New(
        {Napi::External<QTableWidgetItem>::New(env, item),
         Napi::Boolean::New(env, true)});
    napiItems[i] = instance;
  }
  return napiItems;
}

Napi::Value QTableWidgetWrap::isPersistentEditorOpen_qtablewidgetitem(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  bool open =
      this->instance->isPersistentEditorOpen(itemWrap->getInternalInstance());
  return Napi::Boolean::New(env, open);
}

Napi::Value QTableWidgetWrap::item(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();

  QTableWidgetItem* item = this->instance->item(row, column);
  auto instance = QTableWidgetItemWrap::constructor.New(
      {Napi::External<QTableWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QTableWidgetWrap::itemAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  QTableWidgetItem* item = this->instance->itemAt(x, y);
  auto instance = QTableWidgetItemWrap::constructor.New(
      {Napi::External<QTableWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QTableWidgetWrap::openPersistentEditor_qtablewidgetitem(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  this->instance->openPersistentEditor(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::removeCellWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  this->instance->removeCellWidget(row, column);
  return env.Null();
}

Napi::Value QTableWidgetWrap::row(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  int row = this->instance->row(itemWrap->getInternalInstance());
  return Napi::Number::New(env, row);
}

Napi::Value QTableWidgetWrap::setCurrentCell(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  this->instance->setCurrentCell(row, column);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setCurrentItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  this->instance->setCurrentItem(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetWrap::sortItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  int order = info[1].As<Napi::Number>().Int32Value();
  this->instance->sortItems(column, static_cast<Qt::SortOrder>(order));
  return env.Null();
}

Napi::Value QTableWidgetWrap::takeItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  this->instance->takeItem(row, column);
  return env.Null();
}

Napi::Value QTableWidgetWrap::visualColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalColumn = info[0].As<Napi::Number>().Int32Value();
  int column = this->instance->visualColumn(logicalColumn);
  return Napi::Number::New(env, column);
}

Napi::Value QTableWidgetWrap::visualItemRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QRect rect = this->instance->visualItemRect(itemWrap->getInternalInstance());
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QTableWidgetWrap::visualRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalRow = info[0].As<Napi::Number>().Int32Value();
  int row = this->instance->visualRow(logicalRow);
  return Napi::Number::New(env, row);
}

Napi::Value QTableWidgetWrap::columnCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = static_cast<int>(this->instance->columnCount());
  return Napi::Number::New(env, count);
}

Napi::Value QTableWidgetWrap::rowCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = static_cast<int>(this->instance->rowCount());
  return Napi::Number::New(env, count);
}

Napi::Value QTableWidgetWrap::setColumnCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = info[0].As<Napi::Number>().Int32Value();
  this->instance->setColumnCount(count);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setRowCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = info[0].As<Napi::Number>().Int32Value();
  this->instance->setRowCount(count);
  return env.Null();
}
