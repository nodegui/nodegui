#include "QtWidgets/QAbstractItemDelegate/qabstractitemdelegate_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QAbstractItemDelegateWrap::constructor;

Napi::Object QAbstractItemDelegateWrap::init(Napi::Env env,
                                             Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QAbstractItemDelegate";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QABSTRACTITEMDELEGATE_WRAPPED_METHODS_EXPORT_DEFINE(
                      QAbstractItemDelegateWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QAbstractItemDelegate, QAbstractItemDelegateWrap);
  return exports;
}

QAbstractItemDelegate* QAbstractItemDelegateWrap::getInternalInstance() {
  return this->instance;
}

QAbstractItemDelegateWrap::~QAbstractItemDelegateWrap() {
  extrautils::safeDelete(this->instance);
}

QAbstractItemDelegateWrap::QAbstractItemDelegateWrap(
    const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QAbstractItemDelegateWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 1 && info[0].IsExternal()) {
    // --- Wrap a given C++ instance
    this->instance = info[0].As<Napi::External<QAbstractItemDelegate>>().Data();
  } else {
    Napi::TypeError::New(env,
                         "NodeGui: QAbstractItemDelegateWrap: Wrong number of "
                         "arguments to constructor")
        .ThrowAsJavaScriptException();
  }
}
