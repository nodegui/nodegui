#include "QtWidgets/QOpenGLWidget/qopenglwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QOpenGLWidgetWrap::constructor;

Napi::Object QOpenGLWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QOpenGLWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {       
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QOpenGLWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NOpenGLWidget* QOpenGLWidgetWrap::getInternalInstance() { return this->instance; }

QOpenGLWidgetWrap::QOpenGLWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QOpenGLWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NOpenGLWidget(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NOpenGLWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QOpenGLWidgetWrap::~QOpenGLWidgetWrap() { extrautils::safeDelete(this->instance); }

