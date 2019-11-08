#include "QtWidgets/QLabel/qlabel_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
Napi::FunctionReference QLabelWrap::constructor;

Napi::Object QLabelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLabel";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setWordWrap", &QLabelWrap::setWordWrap),
                   InstanceMethod("wordWrap", &QLabelWrap::wordWrap),
                   InstanceMethod("setText", &QLabelWrap::setText),
                   InstanceMethod("text", &QLabelWrap::text),
                   InstanceMethod("setPixmap", &QLabelWrap::setPixmap),
                   InstanceMethod("setOpenExternalLinks",
                                  &QLabelWrap::setOpenExternalLinks),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLabelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLabel* QLabelWrap::getInternalInstance() { return this->instance; }

QLabelWrap::~QLabelWrap() { extrautils::safeDelete(this->instance); }

QLabelWrap::QLabelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLabelWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NLabel(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NLabel();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

Napi::Value QLabelWrap::setWordWrap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Boolean On = info[0].As<Napi::Boolean>();
  this->instance->setWordWrap(On);

  return env.Null();
}

Napi::Value QLabelWrap::wordWrap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool isWordWrap = this->instance->wordWrap();
  return Napi::Value::From(env, isWordWrap);
}

Napi::Value QLabelWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String text = info[0].As<Napi::String>();
  std::string label = text.Utf8Value();
  this->instance->setText(label.c_str());

  return env.Null();
}

Napi::Value QLabelWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string labelText = this->instance->text().toStdString();
  return Napi::String::New(env, labelText);
}

Napi::Value QLabelWrap::setPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object pixmapObject = info[0].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  this->instance->setPixmap(*pixmapWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::setOpenExternalLinks(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean open = info[0].As<Napi::Boolean>();
  this->instance->setOpenExternalLinks(open.Value());
  return env.Null();
}