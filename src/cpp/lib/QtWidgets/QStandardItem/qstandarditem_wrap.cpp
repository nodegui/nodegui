#include "QtWidgets/QStandardItem/qstandarditem_wrap.h"

#include <QDebug>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QStandardItem/qstandarditem_wrap.h"
#include "QtWidgets/QTreeWidget/qtreewidget_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QStandardItemWrap::constructor;

Napi::Object QStandardItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStandardItem";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setCheckState", &QStandardItemWrap::setCheckState),
       InstanceMethod("setData", &QStandardItemWrap::setData),
       InstanceMethod("setFlags", &QStandardItemWrap::setFlags),
       InstanceMethod("checkState", &QStandardItemWrap::checkState),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QStandardItemWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QStandardItem* QStandardItemWrap::getInternalInstance() {
  return this->instance;
}

QStandardItemWrap::~QStandardItemWrap() {
  if (!this->disableDeletion) {
    delete this->instance;
  }
}
QStandardItemWrap::QStandardItemWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStandardItemWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() > 0 && info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QStandardItem>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      QString text =
          QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
      this->instance = new QStandardItem(text);
    } else if (info.Length() == 0) {
      this->instance = new QStandardItem();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

Napi::Value QStandardItemWrap::setCheckState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int state = info[0].As<Napi::Number>().Int32Value();

  this->instance->setCheckState(Qt::CheckState(state));
  return env.Null();
}
Napi::Value QStandardItemWrap::setData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int value = info[0].As<Napi::Number>().Int32Value();
  int role = info[1].As<Napi::Number>().Int32Value();

  this->instance->setData(value, role);
  return env.Null();
}
Napi::Value QStandardItemWrap::setFlags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int flags = info[0].As<Napi::Number>().Int32Value();

  this->instance->setFlags(Qt::ItemFlag(flags));
  return env.Null();
}
Napi::Value QStandardItemWrap::checkState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int state = static_cast<int>(this->instance->checkState());
  return Napi::Number::From(env, state);
}
