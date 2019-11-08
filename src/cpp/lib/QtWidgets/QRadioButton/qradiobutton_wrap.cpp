
#include "QtWidgets/QRadioButton/qradiobutton_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QRadioButtonWrap::constructor;

Napi::Object QRadioButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRadioButton";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setText", &QRadioButtonWrap::setText),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QRadioButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NRadioButton* QRadioButtonWrap::getInternalInstance() { return this->instance; }

QRadioButtonWrap::QRadioButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRadioButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NRadioButton(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NRadioButton();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its own size.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QRadioButtonWrap::~QRadioButtonWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QRadioButtonWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(text.c_str());
  return env.Null();
}
