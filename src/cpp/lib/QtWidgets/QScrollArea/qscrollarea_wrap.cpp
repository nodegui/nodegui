#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollAreaWrap::constructor;

Napi::Object QScrollAreaWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollArea";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("ensureVisible", &QScrollAreaWrap::ensureVisible),
       InstanceMethod("ensureWidgetVisible",
                      &QScrollAreaWrap::ensureWidgetVisible),
       InstanceMethod("setWidget", &QScrollAreaWrap::setWidget),
       InstanceMethod("widget", &QScrollAreaWrap::widget),
       InstanceMethod("takeWidget", &QScrollAreaWrap::takeWidget),
       InstanceMethod("setViewportMargins",
                      &QScrollAreaWrap::setViewportMargins),
       InstanceMethod("viewportMargins", &QScrollAreaWrap::viewportMargins),
       QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QScrollAreaWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QScrollArea, QScrollAreaWrap);
  return exports;
}

QScrollArea* QScrollAreaWrap::getInternalInstance() { return this->instance; }

QScrollAreaWrap::~QScrollAreaWrap() { extrautils::safeDelete(this->instance); }

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollAreaWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NScrollArea();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QScrollArea>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NScrollArea(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QScrollAreaWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }

  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QScrollAreaWrap::ensureVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int xmargin = info[2].As<Napi::Number>().Int32Value();
  int ymargin = info[3].As<Napi::Number>().Int32Value();
  this->instance->ensureVisible(x, y, xmargin, ymargin);
  return env.Null();
}

Napi::Value QScrollAreaWrap::ensureWidgetVisible(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object childWidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* childWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(childWidgetObject);
  int xmargin = info[1].As<Napi::Number>().Int32Value();
  int ymargin = info[2].As<Napi::Number>().Int32Value();
  this->instance->ensureWidgetVisible(childWidgetWrap->getInternalInstance(),
                                      xmargin, ymargin);
  return env.Null();
}

Napi::Value QScrollAreaWrap::setWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object contentWidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* contentWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(contentWidgetObject);
  this->instance->setWidget(contentWidgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QScrollAreaWrap::widget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QObject* widget = this->instance->widget();
  if (widget) {
    return WrapperCache::instance.getWrapper(env, widget);
  } else {
    return env.Null();
  }
}

Napi::Value QScrollAreaWrap::takeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QObject* widget = this->instance->takeWidget();
  if (widget) {
    return WrapperCache::instance.getWrapper(env, widget);
  } else {
    return env.Null();
  }
}

Napi::Value QScrollAreaWrap::setViewportMargins(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  NScrollArea* nScrollArea = dynamic_cast<NScrollArea*>(this->instance.data());
  if (nScrollArea) {
    int left = info[0].As<Napi::Number>().Int32Value();
    int top = info[1].As<Napi::Number>().Int32Value();
    int right = info[2].As<Napi::Number>().Int32Value();
    int bottom = info[3].As<Napi::Number>().Int32Value();
    nScrollArea->setViewportMargins(left, top, right, bottom);
  }
  return env.Null();
}

Napi::Value QScrollAreaWrap::viewportMargins(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  NScrollArea* nScrollArea = dynamic_cast<NScrollArea*>(this->instance.data());
  if (nScrollArea) {
    QMargins margins = nScrollArea->viewportMargins();
    Napi::Array resultNapi = Napi::Array::New(env, 4);
    resultNapi[uint32_t(0)] = Napi::Number::From(env, margins.left());
    resultNapi[1] = Napi::Value::From(env, margins.top());
    resultNapi[2] = Napi::Value::From(env, margins.right());
    resultNapi[3] = Napi::Value::From(env, margins.bottom());
    return resultNapi;
  } else {
    return env.Null();
  }
}
