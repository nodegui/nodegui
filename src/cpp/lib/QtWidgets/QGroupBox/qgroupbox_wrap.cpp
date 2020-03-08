#include "QtWidgets/QGroupBox/qgroupbox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QGroupBoxWrap::constructor;

Napi::Object QGroupBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGroupBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QGroupBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NGroupBox* QGroupBoxWrap::getInternalInstance() { return this->instance; }

QGroupBoxWrap::QGroupBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGroupBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NGroupBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NGroupBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

QGroupBoxWrap::~QGroupBoxWrap() { extrautils::safeDelete(this->instance); }
