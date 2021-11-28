#include "QtWidgets/QColorDialog/qcolordialog_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QColorDialogWrap::constructor;

Napi::Object QColorDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QColorDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("selectedColor", &QColorDialogWrap::selectedColor),
       InstanceMethod("setOption", &QColorDialogWrap::setOption),
       InstanceMethod("testOption", &QColorDialogWrap::testOption),
       StaticMethod("customColor", &StaticQColorDialogWrapMethods::customColor),
       StaticMethod("customCount", &StaticQColorDialogWrapMethods::customCount),
       StaticMethod("setCustomColor",
                    &StaticQColorDialogWrapMethods::setCustomColor),
       StaticMethod("setStandardColor",
                    &StaticQColorDialogWrapMethods::setStandardColor),
       StaticMethod("standardColor",
                    &StaticQColorDialogWrapMethods::standardColor),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QColorDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NColorDialog* QColorDialogWrap::getInternalInstance() { return this->instance; }

QColorDialogWrap::~QColorDialogWrap() {
  extrautils::safeDelete(this->instance);
}

QColorDialogWrap::QColorDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QColorDialogWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    QWidget* parent = parentWidgetWrap->getInternalInstance();
    this->instance = new NColorDialog(parent);
  } else if (info.Length() == 0) {
    this->instance = new NColorDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QColorDialogWrap::selectedColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QColor color = this->instance->selectedColor();
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QColorDialogWrap::setOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = info[1].As<Napi::Boolean>().Value();
  this->instance->setOption(
      static_cast<QColorDialog::ColorDialogOption>(option), on);
  return env.Null();
}

Napi::Value QColorDialogWrap::testOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = this->instance->testOption(
      static_cast<QColorDialog::ColorDialogOption>(option));
  return Napi::Boolean::New(env, on);
}

Napi::Value StaticQColorDialogWrapMethods::customColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QColor color = QColorDialog::customColor(index);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value StaticQColorDialogWrapMethods::customCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = QColorDialog::customCount();
  return Napi::Number::New(env, count);
}

Napi::Value StaticQColorDialogWrapMethods::setCustomColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[1].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColorDialog::setCustomColor(index, *colorWrap->getInternalInstance());
  return env.Null();
}

Napi::Value StaticQColorDialogWrapMethods::setStandardColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[1].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColorDialog::setStandardColor(index, *colorWrap->getInternalInstance());
  return env.Null();
}

Napi::Value StaticQColorDialogWrapMethods::standardColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QColor color = QColorDialog::standardColor(index);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}
