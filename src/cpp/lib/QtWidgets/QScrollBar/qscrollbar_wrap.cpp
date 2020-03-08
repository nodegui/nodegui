#include "QtWidgets/QScrollBar/qscrollbar_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollBarWrap::constructor;

Napi::Object QScrollBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(QScrollBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NScrollBar* QScrollBarWrap::getInternalInstance() { return this->instance; }

QScrollBarWrap::QScrollBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollBarWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NScrollBar(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NScrollBar();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QScrollBarWrap::~QScrollBarWrap() { extrautils::safeDelete(this->instance); }
