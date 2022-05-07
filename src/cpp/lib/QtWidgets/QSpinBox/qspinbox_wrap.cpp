#include "QtWidgets/QSpinBox/qspinbox_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSpinBoxWrap::constructor;

Napi::Object QSpinBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSpinBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setRange", &QSpinBoxWrap::setRange),
       QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE(QSpinBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QSpinBox, QSpinBoxWrap);
  return exports;
}

QSpinBox* QSpinBoxWrap::getInternalInstance() { return this->instance; }

QSpinBoxWrap::QSpinBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSpinBoxWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NSpinBox();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QSpinBox>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NSpinBox(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QSpinBoxWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QSpinBoxWrap::~QSpinBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QSpinBoxWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number minimum = info[0].As<Napi::Number>();
  Napi::Number maximum = info[1].As<Napi::Number>();
  this->instance->setRange(minimum.Int32Value(), maximum.Int32Value());
  return env.Null();
}
