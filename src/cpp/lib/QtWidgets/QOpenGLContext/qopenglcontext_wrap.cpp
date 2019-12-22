#include "QtWidgets/QOpenGLContext/qopenglcontext_wrap.h"
#include "QtWidgets/QOpenGLFunctions/qopenglfunctions_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QOpenGLContextWrap::constructor;

Napi::Object QOpenGLContextWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env); 
  char CLASSNAME[] = "QOpenGLContext";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {       
       InstanceMethod("functions", &QOpenGLContextWrap::functions),
       StaticMethod("currentContext", &StaticQOpenGLContextWrapMethods::currentContext),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QOpenGLContextWrap::QOpenGLContextWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QOpenGLContextWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance = std::make_unique<QOpenGLContext>();
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QOpenGLContext* QOpenGLContextWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QOpenGLContextWrap::functions(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QOpenGLFunctions *item = this->instance->functions();
  Napi::Object val = QOpenGLFunctionsWrap::constructor.New({Napi::External<QOpenGLFunctions>::New(env, item)});
  return val;
}

Napi::Value StaticQOpenGLContextWrapMethods::currentContext(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QOpenGLContext *item = QOpenGLContext::currentContext();
  Napi::Object val = QOpenGLContextWrap::constructor.New({Napi::External<QOpenGLContext>::New(env, item)});
  return val;
}
