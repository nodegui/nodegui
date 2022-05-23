#include "QtWidgets/QGraphicsBlurEffect/qgraphicsblureffect_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

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
  QOBJECT_REGISTER_WRAPPER(QGraphicsBlurEffect, QGraphicsBlurEffectWrap);
  return exports;
}

QGraphicsBlurEffect* QGraphicsBlurEffectWrap::getInternalInstance() {
  return this->instance;
}

QGraphicsBlurEffectWrap::~QGraphicsBlurEffectWrap() {
  extrautils::safeDelete(this->instance);
}

QGraphicsBlurEffectWrap::QGraphicsBlurEffectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGraphicsBlurEffectWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NGraphicsBlurEffect();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QGraphicsBlurEffect>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NGraphicsBlurEffect(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(env,
                         "NodeGui: QGraphicsBlurEffectWrap: Wrong number of "
                         "arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
