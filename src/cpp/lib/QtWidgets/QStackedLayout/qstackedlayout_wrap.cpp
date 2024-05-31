#include "QtWidgets/QStackedLayout/qstackedlayout_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QStackedLayoutWrap::constructor;

Napi::Object QStackedLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStackedLayout";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addWidget", &QStackedLayoutWrap::addWidget),
       InstanceMethod("removeWidget", &QStackedLayoutWrap::removeWidget),
       InstanceMethod("setCurrentIndex", &QStackedLayoutWrap::setCurrentIndex),
       InstanceMethod("insertWidget", &QStackedLayoutWrap::insertWidget),
       InstanceMethod("setCurrentWidget",
                      &QStackedLayoutWrap::setCurrentWidget),
       InstanceMethod("currentIndex", &QStackedLayoutWrap::currentIndex),
       InstanceMethod("currentWidget", &QStackedLayoutWrap::currentWidget),
       InstanceMethod("widget", &QStackedLayoutWrap::widget),
       InstanceMethod("count", &QStackedLayoutWrap::count),
       InstanceMethod("indexOf", &QStackedLayoutWrap::indexOf),
       InstanceMethod("setStackingMode", &QStackedLayoutWrap::setStackingMode),
       InstanceMethod("stackingMode", &QStackedLayoutWrap::stackingMode),
       QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(QStackedLayoutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QStackedLayout, QStackedLayoutWrap);
  return exports;
}

QStackedLayout* QStackedLayoutWrap::getInternalInstance() {
  return this->instance;
}

QStackedLayoutWrap::~QStackedLayoutWrap() {
  extrautils::safeDelete(this->instance);
}

QStackedLayoutWrap::QStackedLayoutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStackedLayoutWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NStackedLayout();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QStackedLayout>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NStackedLayout(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QStackedLayoutWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QStackedLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance());

  return env.Null();
}

Napi::Value QStackedLayoutWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->removeWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QStackedLayoutWrap::setCurrentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  this->instance->setCurrentIndex(index);
  return env.Null();
}

Napi::Value QStackedLayoutWrap::insertWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object qwidgetObject = info[1].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->insertWidget(index, widget->getInternalInstance());
  return env.Null();
}

Napi::Value QStackedLayoutWrap::setCurrentWidget(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->setCurrentWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QStackedLayoutWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env,
                           static_cast<int>(this->instance->currentIndex()));
}

Napi::Value QStackedLayoutWrap::currentWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QWidget* widget = this->instance->currentWidget();
  auto instance = WrapperCache::instance.getWrapper(env, widget);
  return instance;
}

Napi::Value QStackedLayoutWrap::widget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QWidget* widget = this->instance->widget(index);
  auto instance = WrapperCache::instance.getWrapper(env, widget);
  return instance;
}

Napi::Value QStackedLayoutWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, static_cast<int>(this->instance->count()));
}

Napi::Value QStackedLayoutWrap::indexOf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);

  return Napi::Number::New(
      env,
      static_cast<int>(this->instance->indexOf(widget->getInternalInstance())));
}

Napi::Value QStackedLayoutWrap::setStackingMode(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int stackingModeInt = info[0].As<Napi::Number>().Int32Value();
  QStackedLayout::StackingMode stackingMode =
      static_cast<QStackedLayout::StackingMode>(stackingModeInt);
  this->instance->setStackingMode(stackingMode);
  return env.Null();
}

Napi::Value QStackedLayoutWrap::stackingMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QStackedLayout::StackingMode mode = this->instance->stackingMode();

  return Napi::Number::New(env, static_cast<int>(mode));
}
