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
  QOBJECT_REGISTER_WRAPPER(QSlider, QSliderWrap);
  return exports;
}

QSlider* QSliderWrap::getInternalInstance() { return this->instance; }

QSliderWrap::QSliderWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSliderWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NSlider();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QSlider>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NSlider(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QSliderWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QSliderWrap::~QSliderWrap() { extrautils::safeDelete(this->instance); }
