#include "QtWidgets/QSplitter/qsplitter_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QSplitterWrap::constructor;

Napi::Object QSplitterWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSplitter";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addWidget", &QSplitterWrap::addWidget),
       InstanceMethod("childrenCollapsible",
                      &QSplitterWrap::childrenCollapsible),
       InstanceMethod("count", &QSplitterWrap::count),
       InstanceMethod("indexOf", &QSplitterWrap::indexOf),
       InstanceMethod("insertWidget", &QSplitterWrap::insertWidget),
       InstanceMethod("isCollapsible", &QSplitterWrap::isCollapsible),
       InstanceMethod("orientation", &QSplitterWrap::orientation),
       InstanceMethod("setCollapsible", &QSplitterWrap::setCollapsible),
       InstanceMethod("setOrientation", &QSplitterWrap::setOrientation),
       QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(QSplitterWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QSplitter, QSplitterWrap);
  return exports;
}

QSplitter* QSplitterWrap::getInternalInstance() { return this->instance; }

QSplitterWrap::~QSplitterWrap() { extrautils::safeDelete(this->instance); }

QSplitterWrap::QSplitterWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSplitterWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NSplitter();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QSplitter>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NSplitter(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QSplitterWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QSplitterWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object widgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);

  this->instance->addWidget(widgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QSplitterWrap::childrenCollapsible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->childrenCollapsible());
}

Napi::Value QSplitterWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->count());
}

Napi::Value QSplitterWrap::indexOf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object widgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);

  return Napi::Number::New(
      env, this->instance->indexOf(widgetWrap->getInternalInstance()));
}

Napi::Value QSplitterWrap::insertWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object widgetObject = info[1].As<Napi::Object>();
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);

  this->instance->insertWidget(index, widgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QSplitterWrap::isCollapsible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  return Napi::Boolean::New(env, this->instance->isCollapsible(index));
}

Napi::Value QSplitterWrap::orientation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env,
                           static_cast<int>(this->instance->orientation()));
}

Napi::Value QSplitterWrap::setCollapsible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  bool collapse = info[1].As<Napi::Boolean>().Value();
  this->instance->setCollapsible(index, collapse);
  return env.Null();
}

Napi::Value QSplitterWrap::setOrientation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int orientation = info[0].As<Napi::Number>().Int32Value();
  this->instance->setOrientation(static_cast<Qt::Orientation>(orientation));

  return env.Null();
}