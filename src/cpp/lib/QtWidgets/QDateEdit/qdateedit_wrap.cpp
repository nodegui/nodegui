#include "QtWidgets/QDateEdit/qdateedit_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDateEditWrap::constructor;

Napi::Object QDateEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDateEdit";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE(QDateEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDateEdit* QDateEditWrap::getInternalInstance() { return this->instance; }

QDateEditWrap::QDateEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDateEditWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NDateEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NDateEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QDateEditWrap::~QDateEditWrap() { extrautils::safeDelete(this->instance); }
