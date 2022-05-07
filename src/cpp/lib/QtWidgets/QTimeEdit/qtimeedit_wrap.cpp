#include "QtWidgets/QTimeEdit/qtimeedit_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QTimeEditWrap::constructor;

Napi::Object QTimeEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTimeEdit";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE(QTimeEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QTimeEdit, QTimeEditWrap);
  return exports;
}

QTimeEdit* QTimeEditWrap::getInternalInstance() { return this->instance; }

QTimeEditWrap::QTimeEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTimeEditWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NTimeEdit();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QTimeEdit>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTimeEdit(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QTimeEditWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QTimeEditWrap::~QTimeEditWrap() { extrautils::safeDelete(this->instance); }
