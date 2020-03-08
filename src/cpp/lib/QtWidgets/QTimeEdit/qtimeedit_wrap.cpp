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
  return exports;
}

NTimeEdit* QTimeEditWrap::getInternalInstance() { return this->instance; }

QTimeEditWrap::QTimeEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTimeEditWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTimeEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NTimeEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QTimeEditWrap::~QTimeEditWrap() { extrautils::safeDelete(this->instance); }
