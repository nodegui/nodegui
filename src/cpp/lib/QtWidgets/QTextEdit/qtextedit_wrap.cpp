#include "QtWidgets/QTextEdit/qtextedit_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTextEditWrap::constructor;

Napi::Object QTextEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTextEdit";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QTEXTEDIT_WRAPPED_METHODS_EXPORT_DEFINE(QTextEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QTextEdit, QTextEditWrap);
  return exports;
}

QTextEdit* QTextEditWrap::getInternalInstance() { return this->instance; }

QTextEditWrap::QTextEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTextEditWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NTextEdit();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QTextEdit>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTextEdit(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QTextEditWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QTextEditWrap::~QTextEditWrap() { extrautils::safeDelete(this->instance); }
