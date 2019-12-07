
#include "QtWidgets/QComboBox/qcombobox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QComboBoxWrap::constructor;

Napi::Object QComboBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QComboBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addItem", &QComboBoxWrap::addItem),
       InstanceMethod("insertItem", &QComboBoxWrap::insertItem),
       InstanceMethod("currentIndex", &QComboBoxWrap::currentIndex),
       InstanceMethod("currentText", &QComboBoxWrap::currentText),
       InstanceMethod("insertSeparator", &QComboBoxWrap::insertSeparator),
       InstanceMethod("itemText", &QComboBoxWrap::itemText),
       InstanceMethod("removeItem", &QComboBoxWrap::removeItem),
       InstanceMethod("sizeAdjustPolicy", &QComboBoxWrap::sizeAdjustPolicy),
       InstanceMethod("setSizeAdjustPolicy",
                      &QComboBoxWrap::setSizeAdjustPolicy),
       InstanceMethod("maxVisibleItems", &QComboBoxWrap::maxVisibleItems),
       InstanceMethod("setMaxVisibleItems", &QComboBoxWrap::setMaxVisibleItems),
       InstanceMethod("isEditable", &QComboBoxWrap::isEditable),
       InstanceMethod("setEditable", &QComboBoxWrap::setEditable),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QComboBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NComboBox* QComboBoxWrap::getInternalInstance() { return this->instance; }
QComboBoxWrap::~QComboBoxWrap() { extrautils::safeDelete(this->instance); }

QComboBoxWrap::QComboBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QComboBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);

    this->instance = new NComboBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NComboBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QComboBoxWrap::addItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string text = info[0].As<Napi::String>().Utf8Value();

  this->instance->addItem(text.c_str());
  return env.Null();
}

Napi::Value QComboBoxWrap::insertItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  std::string text = info[1].As<Napi::String>().Utf8Value();

  this->instance->insertItem(index, text.c_str());
  return env.Null();
}

Napi::Value QComboBoxWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->currentIndex());
}

Napi::Value QComboBoxWrap::currentText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::String::New(env, this->instance->currentText().toStdString());
}

Napi::Value QComboBoxWrap::insertSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  this->instance->insertSeparator(index);
  return env.Null();
}

Napi::Value QComboBoxWrap::itemText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  return Napi::String::New(env, this->instance->itemText(index).toStdString());
}

Napi::Value QComboBoxWrap::removeItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  this->instance->removeItem(index);
  return env.Null();
}

Napi::Value QComboBoxWrap::sizeAdjustPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->sizeAdjustPolicy());
}
Napi::Value QComboBoxWrap::setSizeAdjustPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QComboBox::SizeAdjustPolicy policy = static_cast<QComboBox::SizeAdjustPolicy>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setSizeAdjustPolicy(policy);
  return env.Null();
}

Napi::Value QComboBoxWrap::maxVisibleItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->maxVisibleItems());
}

Napi::Value QComboBoxWrap::setMaxVisibleItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int maxItems = info[0].As<Napi::Number>().Int32Value();

  this->instance->setMaxVisibleItems(maxItems);
  return env.Null();
}

Napi::Value QComboBoxWrap::isEditable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isEditable());
}

Napi::Value QComboBoxWrap::setEditable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool editable = info[0].As<Napi::Boolean>().Value();

  this->instance->setEditable(editable);
  return env.Null();
}
