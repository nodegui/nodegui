
#include "QtWidgets/QRadioButton/qradiobutton_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QRadioButtonWrap::constructor;

Napi::Object QRadioButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRadioButton";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QRadioButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QRadioButton, QRadioButtonWrap);
  return exports;
}

QRadioButton* QRadioButtonWrap::getInternalInstance() { return this->instance; }

QRadioButtonWrap::QRadioButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRadioButtonWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NRadioButton();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QRadioButton>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NRadioButton(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QRadioButtonWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QRadioButtonWrap::~QRadioButtonWrap() {
  extrautils::safeDelete(this->instance);
}
