#include "QtGui/QEvent/QInputMethodQueryEvent/qinputmethodqueryevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QInputMethodQueryEventWrap::constructor;

Napi::Object QInputMethodQueryEventWrap::init(Napi::Env env,
                                              Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QInputMethodQueryEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("queries", &QInputMethodQueryEventWrap::queries),
       InstanceMethod("setValue", &QInputMethodQueryEventWrap::setValue),
       InstanceMethod("value", &QInputMethodQueryEventWrap::value),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QInputMethodQueryEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QInputMethodQueryEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QInputMethodQueryEvent* QInputMethodQueryEventWrap::getInternalInstance() {
  return this->instance;
}

QInputMethodQueryEventWrap::QInputMethodQueryEventWrap(
    const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QInputMethodQueryEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QInputMethodQueryEvent> eventObject =
        info[0].As<Napi::External<QInputMethodQueryEvent>>();
    this->instance = static_cast<QInputMethodQueryEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QInputMethodQueryEventWrap::~QInputMethodQueryEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QInputMethodQueryEventWrap::queries(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int queries = this->instance->queries();
  return Napi::Number::From(env, queries);
}

Napi::Value QInputMethodQueryEventWrap::setValue(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::InputMethodQuery query = static_cast<Qt::InputMethodQuery>(
      info[0].As<Napi::Number>().Int32Value());
  Napi::Value value = info[1];
  QVariant* valueVariant = extrautils::convertToQVariant(env, value);
  this->instance->setValue(query, *valueVariant);
  delete valueVariant;
  return env.Null();
}

Napi::Value QInputMethodQueryEventWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  Qt::InputMethodQuery query = static_cast<Qt::InputMethodQuery>(
      info[0].As<Napi::Number>().Int32Value());
  QVariant value = this->instance->value(query);

  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(value))});
  return instance;
}
