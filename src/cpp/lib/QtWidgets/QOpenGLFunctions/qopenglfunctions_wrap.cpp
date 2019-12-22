#include "QtWidgets/QOpenGLFunctions/qopenglfunctions_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QOpenGLContext/qopenglcontext_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QOpenGLFunctionsWrap::constructor;

Napi::Object QOpenGLFunctionsWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QOpenGLFunctions";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {// InstanceMethod("setText", &QOpenGLFunctionsWrap::setText),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QOpenGLFunctions *QOpenGLFunctionsWrap::getInternalInstance() {
  return this->instance;
}

QOpenGLFunctionsWrap::~QOpenGLFunctionsWrap() { delete this->instance; }
QOpenGLFunctionsWrap::QOpenGLFunctionsWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QOpenGLFunctionsWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object deviceObject = info[0].As<Napi::Object>();
    QOpenGLContextWrap *deviceWrap =
        Napi::ObjectWrap<QOpenGLContextWrap>::Unwrap(deviceObject);
    this->instance = new QOpenGLFunctions(deviceWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new QOpenGLFunctions();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
