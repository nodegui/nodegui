#include "QtWidgets/QSlider/qslider_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSliderWrap::constructor;

Napi::Object QSliderWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSlider";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(QSliderWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NSlider* QSliderWrap::getInternalInstance() { return this->instance; }

QSliderWrap::QSliderWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSliderWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NSlider(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NSlider();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QSliderWrap::~QSliderWrap() { extrautils::safeDelete(this->instance); }
