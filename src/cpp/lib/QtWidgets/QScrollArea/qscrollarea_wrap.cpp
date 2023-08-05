#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QScrollArea/qscrollarea_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollAreaWrap::constructor;

Napi::Object QScrollAreaWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollArea";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QScrollAreaWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QScrollArea, QScrollAreaWrap);
  return exports;
}

QScrollArea* QScrollAreaWrap::getInternalInstance() { return this->instance; }

QScrollAreaWrap::~QScrollAreaWrap() { extrautils::safeDelete(this->instance); }

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollAreaWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NScrollArea();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QScrollArea>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NScrollArea(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QScrollAreaWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }

  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}
