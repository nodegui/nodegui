#include "QtWidgets/QPushButton/qpushbutton_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QPushButtonWrap::constructor;

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setText", &QPushButtonWrap::setText),
                   InstanceMethod("setFlat", &QPushButtonWrap::setFlat),
                   InstanceMethod("setIcon", &QPushButtonWrap::setIcon),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QPushButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NPushButton* QPushButtonWrap::getInternalInstance() { return this->instance; }

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NPushButton(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NPushButton();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QPushButtonWrap::~QPushButtonWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QPushButtonWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(text.c_str());
  return env.Null();
}

Napi::Value QPushButtonWrap::setFlat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Boolean isFlat = info[0].As<Napi::Boolean>();
  this->instance->setFlat(isFlat.Value());
  return env.Null();
}

Napi::Value QPushButtonWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object iconObject = info[0].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setIcon(*iconWrap->getInternalInstance());
  return env.Null();
}
