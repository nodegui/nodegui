#include "QtWidgets/QWidget/qwidget_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"

Napi::FunctionReference QWidgetWrap::constructor;

Napi::Object QWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NWidget* QWidgetWrap::getInternalInstance() { return this->instance; }

QWidgetWrap::~QWidgetWrap() { extrautils::safeDelete(this->instance); }

QWidgetWrap::QWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          new NWidget(info[0].As<Napi::External<NWidget>>().Data());
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NWidget(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}
