#include "QtWidgets/QLabel/qlabel_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QMovie/qmovie_wrap.h"
#include "QtGui/QPicture/qpicture_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QLabelWrap::constructor;

Napi::Object QLabelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLabel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setSelection", &QLabelWrap::setSelection),
       InstanceMethod("selectionStart", &QLabelWrap::selectionStart),
       InstanceMethod("setBuddy", &QLabelWrap::setBuddy),
       InstanceMethod("clear", &QLabelWrap::clear),
       InstanceMethod("setMovie", &QLabelWrap::setMovie),
       InstanceMethod("setNumDouble", &QLabelWrap::setNumDouble),
       InstanceMethod("setNumInt", &QLabelWrap::setNumInt),
       InstanceMethod("setPicture", &QLabelWrap::setPicture),
       InstanceMethod("setPixmap", &QLabelWrap::setPixmap),
       QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(QLabelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QLabel, QLabelWrap);
  return exports;
}

QLabel* QLabelWrap::getInternalInstance() { return this->instance; }

QLabelWrap::~QLabelWrap() { extrautils::safeDelete(this->instance); }

QLabelWrap::QLabelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLabelWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NLabel();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QLabel>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NLabel(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QLabelWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }

  YogaWidget* yogaWidget =
      dynamic_cast<YogaWidget*>(this->getInternalInstance());
  if (yogaWidget) {
    auto flexNode = yogaWidget->getFlexNode();
    YGNodeSetNodeType(flexNode, YGNodeType::YGNodeTypeText);
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QLabelWrap::setSelection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int start = info[0].As<Napi::Number>().Int32Value();
  int length = info[1].As<Napi::Number>().Int32Value();
  this->instance->setSelection(start, length);
  return env.Null();
}

Napi::Value QLabelWrap::selectionStart(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->selectionStart());
}

Napi::Value QLabelWrap::setBuddy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buddyObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* buddyWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(buddyObject);
  this->instance->setBuddy(buddyWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QLabelWrap::setMovie(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object movieObject = info[0].As<Napi::Object>();
  QMovieWrap* movieWrap = Napi::ObjectWrap<QMovieWrap>::Unwrap(movieObject);
  this->instance->setMovie(movieWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::setNumDouble(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  double num = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setNum(num);
  return env.Null();
}

Napi::Value QLabelWrap::setNumInt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int num = info[0].As<Napi::Number>().Int32Value();
  this->instance->setNum(num);
  return env.Null();
}

Napi::Value QLabelWrap::setPicture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pictureObject = info[0].As<Napi::Object>();
  QPictureWrap* pictureWrap =
      Napi::ObjectWrap<QPictureWrap>::Unwrap(pictureObject);
  this->instance->setPicture(*pictureWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::setPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pixmapObject = info[0].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  this->instance->setPixmap(*pixmapWrap->getInternalInstance());
  return env.Null();
}
