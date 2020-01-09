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
       InstanceMethod("setColumnCount", &QTreeWidgetWrap::setColumnCount),
       InstanceMethod("setHeaderLabel", &QTreeWidgetWrap::setHeaderLabel),
       InstanceMethod("setHeaderLabels", &QTreeWidgetWrap::setHeaderLabels),
       InstanceMethod("setItemWidget", &QTreeWidgetWrap::setItemWidget),
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
    // disable deletion of the native instance for these by passing true
    Napi::Object val = QTreeWidgetItemWrap::constructor.New(
        {Napi::External<QTreeWidgetItem>::New(env, item),
         Napi::Boolean::New(env, true)});
    napiItems[i] = val;
  }

  return napiItems;
}

Napi::Value QTreeWidgetWrap::setColumnCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int columns = info[0].As<Napi::Number>().Int32Value();
  this->instance->setColumnCount(columns);

  return Napi::Value();
}

Napi::Value QTreeWidgetWrap::setHeaderLabel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiLabel = info[0].As<Napi::String>();
  if (napiLabel.IsEmpty()) {
    Napi::TypeError::New(env, "Label must be specified")
        .ThrowAsJavaScriptException();
  }

  std::string label = napiLabel.Utf8Value();
  if (QTreeWidgetItem* header = this->instance->headerItem()) {
    header->setText(0, QString::fromUtf8(label.c_str()));
  } else {
    this->instance->setHeaderLabel(QString::fromUtf8(label.c_str()));
  }

  return Napi::Value();
}

Napi::Value QTreeWidgetWrap::setHeaderLabels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Array napiLabelArray = info[0].As<Napi::Array>();
  QStringList headerLabels;
  for (int i = 0; i < napiLabelArray.Length(); i++) {
    Napi::Value label = napiLabelArray[i];
    headerLabels.push_back(label.As<Napi::String>().Utf8Value().c_str());
  }

  this->instance->setHeaderLabels(headerLabels);

  return Napi::Value();
}

Napi::Value QTreeWidgetWrap::setItemWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTreeWidgetItemWrap* itemWidgetWrap =
      Napi::ObjectWrap<QTreeWidgetItemWrap>::Unwrap(itemObject);
  QTreeWidgetItem* item = itemWidgetWrap->getInternalInstance();

  int column = info[1].As<Napi::Number>().Int32Value();

  Napi::Object widgetObject = info[2].As<Napi::Object>();
  QWidgetWrap* widgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(widgetObject);
  QWidget* widget = widgetWrap->getInternalInstance();

  this->instance->setItemWidget(item, column, widget);

  return env.Null();
}