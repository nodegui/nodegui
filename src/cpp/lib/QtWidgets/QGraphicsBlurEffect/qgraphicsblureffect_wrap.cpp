#include "QtWidgets/QGraphicsBlurEffect/qgraphicsblureffect_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"

Napi::FunctionReference QGraphicsBlurEffectWrap::constructor;

Napi::Object QGraphicsBlurEffectWrap::init(Napi::Env env,
                                           Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGraphicsBlurEffect";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QGRAPHICSEFFECT_WRAPPED_METHODS_EXPORT_DEFINE(QGraphicsBlurEffectWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NGraphicsBlurEffect* QGraphicsBlurEffectWrap::getInternalInstance() {
  return this->instance;
}

QGraphicsBlurEffectWrap::~QGraphicsBlurEffectWrap() {
  extrautils::safeDelete(this->instance);
}

QGraphicsBlurEffectWrap::QGraphicsBlurEffectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGraphicsBlurEffectWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QObjectWrap* parentObjectWrap =
        Napi::ObjectWrap<QObjectWrap>::Unwrap(parentObject);
    this->instance =
        new NGraphicsBlurEffect(parentObjectWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NGraphicsBlurEffect();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
