#include "QtWidgets/QDesktopWidget/qdesktopwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QDesktopWidgetWrap::constructor;

Napi::Object QDesktopWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDesktopWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("screenGeometry", &QDesktopWidgetWrap::screenGeometry),
       InstanceMethod("availableGeometry",
                      &QDesktopWidgetWrap::availableGeometry),
       InstanceMethod("screenNumber", &QDesktopWidgetWrap::screenNumber),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QDesktopWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NQDesktopWidget *QDesktopWidgetWrap::getInternalInstance() {
  return this->instance;
}

QDesktopWidgetWrap::QDesktopWidgetWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QDesktopWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = new NQDesktopWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QDesktopWidgetWrap::~QDesktopWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QDesktopWidgetWrap::screenGeometry(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number screen = info[0].As<Napi::Number>();
  QRect rect = this->instance->screenGeometry(screen);
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QDesktopWidgetWrap::availableGeometry(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number screen = info[0].As<Napi::Number>();
  QRect rect = this->instance->availableGeometry(screen);
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QDesktopWidgetWrap::screenNumber(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->screenNumber();
  return Napi::Value::From(env, value);
}
