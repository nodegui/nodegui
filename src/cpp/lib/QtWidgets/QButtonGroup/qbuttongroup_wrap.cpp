#include "QtWidgets/QButtonGroup/qbuttongroup_wrap.h"

#include <QDebug>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QButtonGroupWrap::constructor;

Napi::Object QButtonGroupWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QButtonGroup";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addButton", &QButtonGroupWrap::addButton),
       InstanceMethod("checkedId", &QButtonGroupWrap::checkedId),
       InstanceMethod("setId", &QButtonGroupWrap::setId),
       InstanceMethod("removeButton", &QButtonGroupWrap::removeButton),
       InstanceMethod("id", &QButtonGroupWrap::id),
       InstanceMethod("checkedButton", &QButtonGroupWrap::checkedButton),
       InstanceMethod("buttons", &QButtonGroupWrap::buttons),
       InstanceMethod("button", &QButtonGroupWrap::button),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QButtonGroupWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NButtonGroup* QButtonGroupWrap::getInternalInstance() { return this->instance; }

QButtonGroupWrap::QButtonGroupWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QButtonGroupWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NButtonGroup(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NButtonGroup();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QButtonGroupWrap::~QButtonGroupWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QButtonGroupWrap::addButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QObjectWrap* objectWrap = Napi::ObjectWrap<QObjectWrap>::Unwrap(buttonObject);
  QAbstractButton* button =
      qobject_cast<QAbstractButton*>(objectWrap->getInternalInstance());
  Napi::Number id = info[1].As<Napi::Number>();

  this->instance->addButton(button, id.Int32Value());
  return env.Null();
}
Napi::Value QButtonGroupWrap::removeButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QObjectWrap* objectWrap = Napi::ObjectWrap<QObjectWrap>::Unwrap(buttonObject);
  QAbstractButton* button =
      qobject_cast<QAbstractButton*>(objectWrap->getInternalInstance());
  this->instance->removeButton(button);
  return env.Null();
}
Napi::Value QButtonGroupWrap::checkedId(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int value = static_cast<int>(this->instance->checkedId());
  return Napi::Number::From(env, value);
}
Napi::Value QButtonGroupWrap::checkedButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  auto value = Napi::External<QAbstractButton>::New(
      env, this->instance->checkedButton());
  return Napi::Value::From(env, value);
}
Napi::Value QButtonGroupWrap::id(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QObjectWrap* objectWrap = Napi::ObjectWrap<QObjectWrap>::Unwrap(buttonObject);
  QAbstractButton* button =
      qobject_cast<QAbstractButton*>(objectWrap->getInternalInstance());
  int value = static_cast<int>(this->instance->id(button));
  return Napi::Number::From(env, value);
}
Napi::Value QButtonGroupWrap::setId(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QObjectWrap* objectWrap = Napi::ObjectWrap<QObjectWrap>::Unwrap(buttonObject);
  QAbstractButton* button =
      qobject_cast<QAbstractButton*>(objectWrap->getInternalInstance());
  Napi::Number id = info[1].As<Napi::Number>();

  this->instance->setId(button, id.Int32Value());
  return env.Null();
}
Napi::Value QButtonGroupWrap::buttons(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QList<QAbstractButton*> items = this->instance->buttons();
  Napi::Array napiItems = Napi::Array::New(env, items.size());
  for (int i = 0; i < items.size(); i++) {
    QAbstractButton* item = items[i];
    auto value = Napi::External<QAbstractButton>::New(env, item);
    napiItems[i] = value;
  }

  return napiItems;
}
Napi::Value QButtonGroupWrap::button(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number id = info[0].As<Napi::Number>();

  auto value =
      Napi::External<QAbstractButton>::New(env, this->instance->button(id));
  return Napi::Value::From(env, value);
}