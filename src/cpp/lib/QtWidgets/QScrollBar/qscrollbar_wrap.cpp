#include "QtWidgets/QScrollBar/qscrollbar_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollBarWrap::constructor;

Napi::Object QScrollBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(QScrollBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QScrollBar, QScrollBarWrap);
  return exports;
}

QScrollBar* QScrollBarWrap::getInternalInstance() { return this->instance; }

QScrollBarWrap::QScrollBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollBarWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NScrollBar();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QScrollBar>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NScrollBar(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QScrollBarWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QScrollBarWrap::~QScrollBarWrap() { extrautils::safeDelete(this->instance); }
