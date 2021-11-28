
#include "QtWidgets/QRadioButton/qradiobutton_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QRadioButtonWrap::constructor;

Napi::Object QRadioButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRadioButton";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QRadioButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NRadioButton* QRadioButtonWrap::getInternalInstance() { return this->instance; }

QRadioButtonWrap::QRadioButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRadioButtonWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NRadioButton>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NRadioButton(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NRadioButton();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QRadioButtonWrap::~QRadioButtonWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}
