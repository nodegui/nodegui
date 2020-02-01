
#include "QtWidgets/QDial/qdial_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QDialWrap::constructor;

Napi::Object QDialWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDial";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(QDialWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDial* QDialWrap::getInternalInstance() { return this->instance; }

QDialWrap::QDialWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDialWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NDial(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NDial();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QDialWrap::~QDialWrap() { extrautils::safeDelete(this->instance); }
