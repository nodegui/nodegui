#include "QtWidgets/QDateTimeEdit/qdatetimeedit_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDateTimeEditWrap::constructor;

Napi::Object QDateTimeEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDateTimeEdit";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE(QDateTimeEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QDateTimeEdit, QDateTimeEditWrap);
  return exports;
}

QDateTimeEdit* QDateTimeEditWrap::getInternalInstance() {
  return this->instance;
}

QDateTimeEditWrap::QDateTimeEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDateTimeEditWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NDateTimeEdit();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QDateTimeEdit>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NDateTimeEdit(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QDateTimeEditWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QDateTimeEditWrap::~QDateTimeEditWrap() {
  extrautils::safeDelete(this->instance);
}
