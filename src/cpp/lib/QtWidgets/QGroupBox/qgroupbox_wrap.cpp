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
  QOBJECT_REGISTER_WRAPPER(QGroupBox, QGroupBoxWrap);
  exports.Set(CLASSNAME, func);
  return exports;
}

QGroupBox* QGroupBoxWrap::getInternalInstance() { return this->instance; }

QGroupBoxWrap::QGroupBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGroupBoxWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NGroupBox();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QGroupBox>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NGroupBox(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QGroupBoxWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

QGroupBoxWrap::~QGroupBoxWrap() { extrautils::safeDelete(this->instance); }
