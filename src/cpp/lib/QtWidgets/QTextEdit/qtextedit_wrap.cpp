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
  return exports;
}

NTextEdit* QTextEditWrap::getInternalInstance() { return this->instance; }

QTextEditWrap::QTextEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTextEditWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTextEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NTextEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QTextEditWrap::~QTextEditWrap() { extrautils::safeDelete(this->instance); }
