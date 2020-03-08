#include "QtWidgets/QListWidget/qlistwidget_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtWidgets/QListWidgetItem/qlistwidgetitem_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QListWidgetWrap::constructor;

Napi::Object QListWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QListWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addItem", &QListWidgetWrap::addItem),
       InstanceMethod("addItems", &QListWidgetWrap::addItems),
       InstanceMethod("closePersistentEditor",
                      &QListWidgetWrap::closePersistentEditor),
       InstanceMethod("currentItem", &QListWidgetWrap::currentItem),
       InstanceMethod("editItem", &QListWidgetWrap::editItem),
       InstanceMethod("insertItem", &QListWidgetWrap::insertItem),
       InstanceMethod("insertItems", &QListWidgetWrap::insertItems),
       InstanceMethod("isPersistentEditorOpen",
                      &QListWidgetWrap::isPersistentEditorOpen),
       InstanceMethod("item", &QListWidgetWrap::item),
       InstanceMethod("itemAt", &QListWidgetWrap::itemAt),
       InstanceMethod("itemWidget", &QListWidgetWrap::itemWidget),
       InstanceMethod("openPersistentEditor",
                      &QListWidgetWrap::openPersistentEditor),
       InstanceMethod("removeItemWidget", &QListWidgetWrap::removeItemWidget),
       InstanceMethod("row", &QListWidgetWrap::row),
       InstanceMethod("setCurrentItem", &QListWidgetWrap::setCurrentItem),
       InstanceMethod("setItemWidget", &QListWidgetWrap::setItemWidget),
       InstanceMethod("sortItems", &QListWidgetWrap::sortItems),
       InstanceMethod("takeItem", &QListWidgetWrap::takeItem),
       InstanceMethod("visualItemRect", &QListWidgetWrap::visualItemRect),
       InstanceMethod("clear", &QListWidgetWrap::clear),
       InstanceMethod("scrollToItem", &QListWidgetWrap::scrollToItem),
       QListView_WRAPPED_METHODS_EXPORT_DEFINE(QListWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NListWidget* QListWidgetWrap::getInternalInstance() { return this->instance; }

QListWidgetWrap::~QListWidgetWrap() { extrautils::safeDelete(this->instance); }

QListWidgetWrap::QListWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QListWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NListWidget(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NListWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QListWidgetWrap::addItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->addItem(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::addItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Array labelsNapi = info[0].As<Napi::Array>();
  QStringList labels;
  for (int i = 0; i < labelsNapi.Length(); i++) {
    Napi::Value labelNapi = labelsNapi[i];
    labels.append(
        QString::fromUtf8(labelNapi.As<Napi::String>().Utf8Value().c_str()));
  }
  this->instance->addItems(labels);
  return env.Null();
}

Napi::Value QListWidgetWrap::closePersistentEditor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->closePersistentEditor(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::currentItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QListWidgetItem* item = this->instance->currentItem();
  auto instance = QListWidgetItemWrap::constructor.New(
      {Napi::External<QListWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QListWidgetWrap::editItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->editItem(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::insertItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  Napi::Object itemObject = info[1].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->insertItem(row, itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::insertItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  Napi::Array labelsNapi = info[1].As<Napi::Array>();
  QStringList labels;
  for (int i = 0; i < labelsNapi.Length(); i++) {
    Napi::Value labelNapi = labelsNapi[i];
    labels.append(
        QString::fromUtf8(labelNapi.As<Napi::String>().Utf8Value().c_str()));
  }
  this->instance->insertItems(row, labels);
  return env.Null();
}

Napi::Value QListWidgetWrap::isPersistentEditorOpen(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  bool open =
      this->instance->isPersistentEditorOpen(itemWrap->getInternalInstance());
  return Napi::Value::From(env, open);
}

Napi::Value QListWidgetWrap::item(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  QListWidgetItem* item = this->instance->item(row);
  auto instance = QListWidgetItemWrap::constructor.New(
      {Napi::External<QListWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QListWidgetWrap::itemAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  QListWidgetItem* item = this->instance->itemAt(x, y);
  auto instance = QListWidgetItemWrap::constructor.New(
      {Napi::External<QListWidgetItem>::New(env, item),
       Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QListWidgetWrap::itemWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  QWidget* widget = this->instance->itemWidget(itemWrap->getInternalInstance());
  auto instance =
      QWidgetWrap::constructor.New({Napi::External<QWidget>::New(env, widget),
                                    Napi::Boolean::New(env, true)});
  return instance;
}

Napi::Value QListWidgetWrap::openPersistentEditor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->openPersistentEditor(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::removeItemWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->removeItemWidget(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::row(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  int row = this->instance->row(itemWrap->getInternalInstance());
  return Napi::Value::From(env, row);
}

Napi::Value QListWidgetWrap::setCurrentItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  this->instance->setCurrentItem(itemWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::setItemWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  Napi::Object widgetObject = info[1].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);
  this->instance->setItemWidget(itemWrap->getInternalInstance(),
                                widgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetWrap::sortItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int order = info[0].As<Napi::Number>().Int32Value();
  this->instance->sortItems(static_cast<Qt::SortOrder>(order));
  return env.Null();
}

Napi::Value QListWidgetWrap::takeItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  this->instance->takeItem(row);
  return env.Null();
}

Napi::Value QListWidgetWrap::visualItemRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  QRect rect = this->instance->visualItemRect(itemWrap->getInternalInstance());
  auto rectWrap = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return rectWrap;
}

Napi::Value QListWidgetWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->clear();
  return env.Null();
}

Napi::Value QListWidgetWrap::scrollToItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QListWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QListWidgetItemWrap>::Unwrap(itemObject);
  int hint = info[1].As<Napi::Number>().Int32Value();
  this->instance->scrollToItem(
      itemWrap->getInternalInstance(),
      static_cast<QAbstractItemView::ScrollHint>(hint));
  return env.Null();
}
