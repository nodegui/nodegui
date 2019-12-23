#include "QtWidgets/QOpenGLContext/qopenglcontext_wrap.h"

#include <QDebug>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QOpenGLFunctions/qopenglfunctions_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/Component/component_wrap.h"

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

QOpenGLContext* QOpenGLContextWrap::getInternalInstance() {
  return this->instance;
}

QOpenGLContextWrap::~QOpenGLContextWrap() { delete this->instance; }
QOpenGLContextWrap::QOpenGLContextWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QOpenGLContextWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1 && info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QOpenGLContext>>().Data();
  } else if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance =
        new QOpenGLContext(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new QOpenGLContext();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  this->rawData = extrautils::configureComponent(this->getInternalInstance());
};

Napi::Value QOpenGLContextWrap::functions(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QOpenGLFunctions* functions = this->instance->functions();
  auto instance = QOpenGLFunctionsWrap::constructor.New(
      {Napi::External<QOpenGLFunctions>::New(env, functions)});
  return instance;
}

Napi::Value StaticQOpenGLContextWrapMethods::currentContext(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QOpenGLContext* item = QOpenGLContext::currentContext();
  auto context = QOpenGLContextWrap::constructor.New(
      {Napi::External<QOpenGLContext>::New(env, item)});
  return context;
}
