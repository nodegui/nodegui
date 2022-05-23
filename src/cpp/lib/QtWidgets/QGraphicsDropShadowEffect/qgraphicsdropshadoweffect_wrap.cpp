#include "QtWidgets/QGraphicsDropShadowEffect/qgraphicsdropshadoweffect_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

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
  QOBJECT_REGISTER_WRAPPER(QGraphicsDropShadowEffect,
                           QGraphicsDropShadowEffectWrap);
  return exports;
}

QGraphicsDropShadowEffect*
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
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NGraphicsDropShadowEffect();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance =
          info[0].As<Napi::External<QGraphicsDropShadowEffect>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NGraphicsDropShadowEffect(
          parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QGraphicsDropShadowEffectWrap: Wrong number of "
        "arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
