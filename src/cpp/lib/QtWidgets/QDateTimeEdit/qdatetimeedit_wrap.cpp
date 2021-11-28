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
  return exports;
}

NDateTimeEdit* QDateTimeEditWrap::getInternalInstance() {
  return this->instance;
}

QDateTimeEditWrap::QDateTimeEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDateTimeEditWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NDateTimeEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NDateTimeEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QDateTimeEditWrap::~QDateTimeEditWrap() {
  extrautils::safeDelete(this->instance);
}
