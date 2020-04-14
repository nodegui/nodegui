#include "QtWidgets/QGraphicsDropShadowEffect/qgraphicsdropshadoweffect_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"

Napi::FunctionReference QGraphicsDropShadowEffectWrap::constructor;

Napi::Object QGraphicsDropShadowEffectWrap::init(Napi::Env env,
                                                 Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGraphicsDropShadowEffect";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QGRAPHICSEFFECT_WRAPPED_METHODS_EXPORT_DEFINE(
                      QGraphicsDropShadowEffectWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NGraphicsDropShadowEffect*
QGraphicsDropShadowEffectWrap::getInternalInstance() {
  return this->instance;
}

QGraphicsDropShadowEffectWrap::~QGraphicsDropShadowEffectWrap() {
  extrautils::safeDelete(this->instance);
}

QGraphicsDropShadowEffectWrap::QGraphicsDropShadowEffectWrap(
    const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGraphicsDropShadowEffectWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QObjectWrap* parentObjectWrap =
        Napi::ObjectWrap<QObjectWrap>::Unwrap(parentObject);
    this->instance =
        new NGraphicsDropShadowEffect(parentObjectWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NGraphicsDropShadowEffect();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
