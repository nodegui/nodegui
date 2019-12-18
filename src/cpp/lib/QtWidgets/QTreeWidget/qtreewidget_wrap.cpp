#include "QtWidgets/QTreeWidget/qtreewidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTreeWidgetWrap::constructor;

Napi::Object QTreeWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTreeWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addTopLevelItem", &QTreeWidgetWrap::addTopLevelItem),
       InstanceMethod("selectedItems", &QTreeWidgetWrap::selectedItems),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTreeWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTreeWidget* QTreeWidgetWrap::getInternalInstance() { return this->instance; }

QTreeWidgetWrap::QTreeWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTreeWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTreeWidget(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NTreeWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QTreeWidgetWrap::~QTreeWidgetWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QTreeWidgetWrap::addTopLevelItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTreeWidgetItemWrap* itemWrap =
      Napi::ObjectWrap<QTreeWidgetItemWrap>::Unwrap(itemObject);
  QTreeWidgetItem* item = itemWrap->getInternalInstance();
  this->instance->addTopLevelItem(item);
  return env.Null();
}
Napi::Value QTreeWidgetWrap::selectedItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QList<QTreeWidgetItem*> items = this->instance->selectedItems();
  Napi::Array napiItems = Napi::Array::New(env, items.size());
  for (int i = 0; i < items.size(); i++) {
    QTreeWidgetItem* item = items[i];
    Napi::Object val = QTreeWidgetItemWrap::constructor.New(
        {Napi::External<QTreeWidgetItem>::New(env, item)});
    napiItems[i] = val;
  }

  return napiItems;
  return env.Null();
}
