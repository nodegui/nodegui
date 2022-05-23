#include "QtWidgets/QLayout/qlayout_wrap.h"

#include "Extras/Utils/nutils.h"
Napi::FunctionReference QLayoutWrap::constructor;

void QLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  char CLASSNAME[] = "QLayout";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(QLayoutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QLayout, QLayoutWrap);
}

QLayout* QLayoutWrap::getInternalInstance() { return this->instance; }

QLayoutWrap::QLayoutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLayoutWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 1 && info[0].IsExternal()) {
    // --- Wrap a given C++ instance
    this->instance = info[0].As<Napi::External<QLayout>>().Data();
  } else {
    Napi::TypeError::New(env, "NodeGui: QLayoutWrap: Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QLayoutWrap::~QLayoutWrap() { extrautils::safeDelete(this->instance); }
