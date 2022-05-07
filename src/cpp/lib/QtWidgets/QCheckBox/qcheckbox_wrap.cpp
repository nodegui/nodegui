#include "QtWidgets/QCheckBox/qcheckbox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QCheckBoxWrap::constructor;

Napi::Object QCheckBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCheckBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("checkState", &QCheckBoxWrap::checkState),
       InstanceMethod("setCheckState", &QCheckBoxWrap::setCheckState),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QCheckBox, QCheckBoxWrap);
  return exports;
}

QCheckBox* QCheckBoxWrap::getInternalInstance() { return this->instance; }

QCheckBoxWrap::QCheckBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QCheckBoxWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NCheckBox();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QCheckBox>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NCheckBox(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QCheckBoxWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QCheckBoxWrap::~QCheckBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QCheckBoxWrap::checkState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::CheckState state = this->instance->checkState();
  return Napi::Value::From(env, static_cast<int>(state));
}

Napi::Value QCheckBoxWrap::setCheckState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int state = info[0].As<Napi::Number>().Int32Value();
  this->instance->setCheckState(static_cast<Qt::CheckState>(state));
  return env.Null();
}
