#include "QtWidgets/QOpenGLContext/qopenglcontext_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QOpenGLFunctions/qopenglfunctions_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QOpenGLContextWrap::constructor;

Napi::Object QOpenGLContextWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QOpenGLContext";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("functions", &QOpenGLContextWrap::functions),
       StaticMethod("currentContext",
                    &StaticQOpenGLContextWrapMethods::currentContext),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QOpenGLContextWrap::QOpenGLContextWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QOpenGLContextWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance = std::make_unique<QOpenGLContext>();
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QOpenGLContext* QOpenGLContextWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QOpenGLContextWrap::functions(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  QOpenGLFunctions* functions = this->instance->functions();
  auto instance = QOpenGLFunctionsWrap::constructor.New({Napi::External<QOpenGLFunctions>::New(env, functions)});
  return instance;
}

Napi::Value StaticQOpenGLContextWrapMethods::currentContext(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QOpenGLContext* item = QOpenGLContext::currentContext();
  auto context = QOpenGLContextWrap::constructor.New({Napi::External<QOpenGLContext>::New(env, item)});
  return context;
}
