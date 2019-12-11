#include "QtWidgets/QTableWidget/qtablewidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "QtWidgets/QTableWidgetItem/qtablewidgetitem_wrap.h"

Napi::FunctionReference QTableWidgetWrap::constructor;

Napi::Object QTableWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTableWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("selectedRanges", &QTableWidgetWrap::selectedRanges),
       InstanceMethod("closePersistentEditor",
                      &QTableWidgetWrap::closePersistentEditor),
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
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTableWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTableWidget* QTableWidgetWrap::getInternalInstance() { return this->instance; }
QTableWidgetWrap::~QTableWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

QTableWidgetWrap::QTableWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2 || info.Length() == 3) {
    int rows = info[0].As<Napi::Number>().Int32Value();
    int columns = info[1].As<Napi::Number>().Int32Value();

    if (info.Length() == 3) {
      Napi::Object parentObject = info[2].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      QWidget* parent = parentWidgetWrap->getInternalInstance();
      this->instance = new NTableWidget(rows, columns, parent);
    } else {
      this->instance = new NTableWidget(rows, columns);
    }

  } else if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    QWidget* parent = parentWidgetWrap->getInternalInstance();
    this->instance = new NTableWidget(parent);
  } else if (info.Length() == 0) {
    this->instance = new NTableWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}
Napi::Value QTableWidgetWrap::selectedRanges(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QList<QTableWidgetSelectionRange> range = this->instance->selectedRanges();
  Napi::Array napiRange = Napi::Array::New(env, range.size());

  for (int i = 0; i < range.size(); i++) {
    int top = range[0].topRow();
    int left = range[0].leftColumn();
    int bottom = range[0].bottomRow();
    int right = range[0].rightColumn();
    Napi::Object newRange = Napi::Object::New(env);
    newRange.Set("top", Napi::Number::New(env, top));
    newRange.Set("left", Napi::Number::New(env, left));
    newRange.Set("bottom", Napi::Number::New(env, bottom));
    newRange.Set("right", Napi::Number::New(env, right));
    napiRange[i] = newRange;
  }
  return napiRange;
  return env.Null();
}
Napi::Value QTableWidgetWrap::closePersistentEditor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();

  this->instance->closePersistentEditor(item);
  return env.Null();
}

Napi::Value QTableWidgetWrap::editItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();

  this->instance->editItem(item);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setCellWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  Napi::Object widgetObject = info[2].As<Napi::Object>();
  QWidgetWrap* widgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(widgetObject);
  QWidget* widget = widgetWrap->getInternalInstance();

  this->instance->setCellWidget(row, column, widget);
  return env.Null();
}
Napi::Value QTableWidgetWrap::setItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[2].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();

  this->instance->setItem(row, column, item);
  return env.Null();
}
Napi::Value QTableWidgetWrap::setHorizontalHeaderItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();

  this->instance->setHorizontalHeaderItem(column, item);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setHorizontalHeaderLabels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

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
Napi::Value QTableWidgetWrap::setVerticalHeaderItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();

  this->instance->setVerticalHeaderItem(row, item);
  return env.Null();
}

Napi::Value QTableWidgetWrap::setVerticalHeaderLabels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

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
  Napi::HandleScope scope(env);
  this->instance->clear();
  return env.Null();
}
Napi::Value QTableWidgetWrap::clearContents(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->clearContents();
  return env.Null();
}
Napi::Value QTableWidgetWrap::insertColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  this->instance->insertColumn(column);
  return env.Null();
}
Napi::Value QTableWidgetWrap::removeColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  this->instance->removeColumn(column);
  return env.Null();
}
Napi::Value QTableWidgetWrap::insertRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  this->instance->insertRow(row);
  return env.Null();
}
Napi::Value QTableWidgetWrap::removeRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  this->instance->removeRow(row);
  return env.Null();
}
Napi::Value QTableWidgetWrap::scrollToItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTableWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTableWidgetItemWrap>::Unwrap(itemObject);
  QTableWidgetItem* item = itemWrap->getInternalInstance();
  int hintInt = info[1].As<Napi::Number>().Int32Value();
  QAbstractItemView::ScrollHint hint =
      static_cast<QAbstractItemView::ScrollHint>(hintInt);
  this->instance->scrollToItem(item, hint);
  return env.Null();
}